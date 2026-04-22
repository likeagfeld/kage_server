from __future__ import annotations

import ipaddress
import json
import mimetypes
import os
import socket
import subprocess
import threading
import time
from dataclasses import dataclass, field
from http import HTTPStatus
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from typing import Any
from urllib.parse import parse_qs, urlparse


ROOT_DIR = Path(__file__).resolve().parent.parent
TOOLS_DIR = ROOT_DIR / "tools"
WEB_DIR = TOOLS_DIR / "web"
STATE_DIR = TOOLS_DIR / "state"
STATE_PATH = STATE_DIR / "server.json"
LOG_DIR = ROOT_DIR / "logs"
DATA_DIR = ROOT_DIR / "data"
CONFIG_PATH = ROOT_DIR / "kage.cfg"
BUILD_SCRIPT = TOOLS_DIR / "build-ucrt64.bat"
FIREWALL_SCRIPT = TOOLS_DIR / "Add-Kage-Firewall-Rules.bat"
SERVER_EXE = ROOT_DIR / "kageserver.exe"
SERVER_LOG = LOG_DIR / "kageserver.log"
BUILD_LOG = LOG_DIR / "build-ucrt64.log"
BOMBERMAN_ADMIN_PATH = STATE_DIR / "bomberman_bots.ini"
BOMBERMAN_RUNTIME_PATH = STATE_DIR / "bomberman_runtime.ini"
HOST = "127.0.0.1"
PORT = 8765

PORTS = {
    "udp": ["9090", "9091", "9092", "9093"],
    "tcp": ["10100", "20200"],
}


def ensure_runtime_dirs() -> None:
    for path in (STATE_DIR, LOG_DIR, DATA_DIR):
        path.mkdir(parents=True, exist_ok=True)


def default_config() -> dict[str, str]:
    return {"SERVER_IP": "", "DATADIR": "data"}


def read_config() -> dict[str, str]:
    config = default_config()
    if not CONFIG_PATH.exists():
        return config

    for raw_line in CONFIG_PATH.read_text(encoding="utf-8").splitlines():
        line = raw_line.strip()
        if not line or line.startswith("#"):
            continue
        if "=" not in line:
            continue
        key, value = line.split("=", 1)
        config[key.strip()] = value.strip()

    if not config.get("DATADIR"):
        config["DATADIR"] = "data"
    return config


def validate_config(config: dict[str, Any]) -> tuple[bool, str | None, bool]:
    server_ip = str(config.get("SERVER_IP", "")).strip()
    if not server_ip:
        return False, "SERVER_IP is required.", False
    try:
        parsed = ipaddress.ip_address(server_ip)
    except ValueError:
        return False, "SERVER_IP must be a valid IPv4 address.", False
    if parsed.version != 4:
        return False, "SERVER_IP must be an IPv4 address for kage_server.", False
    return True, None, parsed.is_private


def write_config(config: dict[str, str]) -> None:
    server_ip = config["SERVER_IP"].strip()
    data_dir = config.get("DATADIR", "data").strip() or "data"
    contents = (
        "# SERVER_IP is mandatory. Should be the public IP of the server.\n"
        f"SERVER_IP={server_ip}\n"
        "# Keep server data local to this checkout.\n"
        f"DATADIR={data_dir}\n"
        "#DUMP_NET_DATA=0\n"
    )
    CONFIG_PATH.write_text(contents, encoding="utf-8")


def tail_text(path: Path, limit: int = 12000) -> str:
    if not path.exists():
        return ""
    data = path.read_bytes()
    snippet = data[-limit:]
    return snippet.decode("utf-8", errors="replace")


def process_alive(process: subprocess.Popen[str] | None) -> bool:
    return process is not None and process.poll() is None


def hidden_process_flags() -> int:
    flags = 0
    if hasattr(subprocess, "CREATE_NO_WINDOW"):
        flags |= subprocess.CREATE_NO_WINDOW
    if hasattr(subprocess, "CREATE_NEW_PROCESS_GROUP"):
        flags |= subprocess.CREATE_NEW_PROCESS_GROUP
    return flags


def find_kage_process_pid() -> int | None:
    try:
        output = subprocess.check_output(
            ["tasklist", "/FI", "IMAGENAME eq kageserver.exe", "/FO", "CSV", "/NH"],
            text=True,
            encoding="utf-8",
            errors="replace",
            creationflags=hidden_process_flags(),
        )
    except (subprocess.CalledProcessError, FileNotFoundError):
        return None

    for raw_line in output.splitlines():
        line = raw_line.strip()
        if not line or line.startswith("INFO:"):
            continue
        columns = [part.strip().strip('"') for part in line.split('","')]
        if not columns or columns[0].lower() != "kageserver.exe":
            continue
        try:
            return int(columns[1])
        except (IndexError, ValueError):
            return None
    return None


def read_key_value_file(path: Path) -> dict[str, str]:
    values: dict[str, str] = {}
    if not path.exists():
        return values

    for raw_line in path.read_text(encoding="utf-8").splitlines():
        line = raw_line.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        key, value = line.split("=", 1)
        values[key.strip()] = value.strip()
    return values


def write_key_value_file(path: Path, values: dict[str, str]) -> None:
    ensure_runtime_dirs()
    body = "".join(f"{key}={value}\n" for key, value in values.items())
    path.write_text(body, encoding="utf-8")


def read_bomberman_state() -> dict[str, Any]:
    admin = read_key_value_file(BOMBERMAN_ADMIN_PATH)
    runtime = read_key_value_file(BOMBERMAN_RUNTIME_PATH)

    def to_int(values: dict[str, str], key: str, default: int = 0) -> int:
        try:
            return int(values.get(key, default))
        except (TypeError, ValueError):
            return default

    bot_count = max(0, to_int(runtime, "bot_count"))
    bot_names = [runtime.get(f"bot_name_{index}", "") for index in range(1, bot_count + 1)]
    bot_names = [name for name in bot_names if name]

    return {
        "desired_bot_count": max(0, to_int(admin, "desired_bot_count")),
        "bot_name_prefix": admin.get("bot_name_prefix", runtime.get("bot_name_prefix", "CPU")) or "CPU",
        "room_id": max(0, to_int(admin, "room_id")),
        "bomb_probe_counter": max(0, to_int(admin, "bomb_probe_counter")),
        "bomb_probe_player_index": max(0, to_int(admin, "bomb_probe_player_index")),
        "active_room_present": runtime.get("active_room_present", "0") == "1",
        "active_room_id": max(0, to_int(runtime, "active_room_id")),
        "active_room_name": runtime.get("active_room_name", ""),
        "active_room_owner": runtime.get("active_room_owner", ""),
        "human_hosts": max(0, to_int(runtime, "human_hosts")),
        "human_slots": max(0, to_int(runtime, "human_slots")),
        "bot_count": bot_count,
        "player_slots": max(0, to_int(runtime, "player_slots")),
        "max_players": max(0, to_int(runtime, "max_players")),
        "sync_state": runtime.get("sync_state", ""),
        "bomb_probe_active": runtime.get("bomb_probe_active", "0") == "1",
        "bomb_probe_ticks": max(0, to_int(runtime, "bomb_probe_ticks")),
        "bot_names": bot_names,
    }


@dataclass
class RuntimeState:
    lock: threading.Lock = field(default_factory=threading.Lock)
    build_process: subprocess.Popen[str] | None = None
    server_process: subprocess.Popen[str] | None = None
    build_started_at: float | None = None
    build_finished_at: float | None = None
    build_exit_code: int | None = None
    server_started_at: float | None = None
    server_exit_code: int | None = None
    last_message: str = ""

    def write_state(self) -> None:
        config = read_config()
        valid, validation_error, private_ip = validate_config(config)
        tracked_server_running = process_alive(self.server_process)
        external_server_pid = None if tracked_server_running else find_kage_process_pid()
        state = {
            "timestamp": time.time(),
            "config": config,
            "config_valid": valid,
            "config_error": validation_error,
            "server_ip_private": private_ip if valid else False,
            "binary_exists": SERVER_EXE.exists(),
            "build": {
                "running": process_alive(self.build_process),
                "pid": self.build_process.pid if process_alive(self.build_process) else None,
                "started_at": self.build_started_at,
                "finished_at": self.build_finished_at,
                "exit_code": self.build_exit_code,
            },
            "server": {
                "running": tracked_server_running or external_server_pid is not None,
                "pid": self.server_process.pid if tracked_server_running else external_server_pid,
                "started_at": self.server_started_at,
                "exit_code": self.server_exit_code,
                "externally_managed": not tracked_server_running and external_server_pid is not None,
            },
            "paths": {
                "root": str(ROOT_DIR),
                "config": str(CONFIG_PATH),
                "data": str(ROOT_DIR / config.get("DATADIR", "data")),
                "logs": str(LOG_DIR),
                "server_log": str(SERVER_LOG),
                "build_log": str(BUILD_LOG),
                "firewall_script": str(FIREWALL_SCRIPT),
            },
            "ports": PORTS,
            "message": self.last_message,
        }
        STATE_PATH.write_text(json.dumps(state, indent=2), encoding="utf-8")


STATE = RuntimeState()


def open_path(path: Path) -> None:
    os.startfile(str(path))


def launch_build() -> tuple[bool, str]:
    with STATE.lock:
        if process_alive(STATE.build_process):
            return False, "A build is already running."
        if process_alive(STATE.server_process):
            return False, "Stop the server before rebuilding."

        ensure_runtime_dirs()
        BUILD_LOG.write_text("", encoding="utf-8")
        log_handle = BUILD_LOG.open("a", encoding="utf-8")
        process = subprocess.Popen(
            ["cmd.exe", "/c", str(BUILD_SCRIPT)],
            cwd=str(ROOT_DIR),
            stdout=log_handle,
            stderr=subprocess.STDOUT,
            text=True,
            creationflags=hidden_process_flags(),
        )
        STATE.build_process = process
        STATE.build_started_at = time.time()
        STATE.build_finished_at = None
        STATE.build_exit_code = None
        STATE.last_message = "Build started."
        STATE.write_state()

    def wait_for_build() -> None:
        exit_code = process.wait()
        log_handle.close()
        with STATE.lock:
            STATE.build_exit_code = exit_code
            STATE.build_finished_at = time.time()
            STATE.build_process = None
            if exit_code == 0:
                STATE.last_message = "Build finished successfully."
            else:
                STATE.last_message = f"Build failed with exit code {exit_code}."
            STATE.write_state()

    threading.Thread(target=wait_for_build, daemon=True).start()
    return True, "Build started."


def launch_server() -> tuple[bool, str]:
    config = read_config()
    valid, error, _private = validate_config(config)
    if not valid:
        return False, error or "Invalid configuration."
    if not SERVER_EXE.exists():
        return False, "kageserver.exe does not exist yet. Run Build/Repair first."

    with STATE.lock:
        if process_alive(STATE.build_process):
            return False, "Wait for the current build to finish first."
        if process_alive(STATE.server_process):
            return False, "The server is already running."

        ensure_runtime_dirs()
        runtime_data_dir = ROOT_DIR / config.get("DATADIR", "data")
        runtime_data_dir.mkdir(parents=True, exist_ok=True)
        SERVER_LOG.parent.mkdir(parents=True, exist_ok=True)

        env = os.environ.copy()
        env["PATH"] = (
            f"{ROOT_DIR / 'local' / 'ucrt64' / 'bin'};"
            f"C:\\msys64\\ucrt64\\bin;"
            + env.get("PATH", "")
        )

        log_handle = SERVER_LOG.open("a", encoding="utf-8")
        process = subprocess.Popen(
            [str(SERVER_EXE), CONFIG_PATH.name],
            cwd=str(ROOT_DIR),
            env=env,
            stdout=log_handle,
            stderr=subprocess.STDOUT,
            text=True,
            creationflags=hidden_process_flags(),
        )

        STATE.server_process = process
        STATE.server_started_at = time.time()
        STATE.server_exit_code = None
        STATE.last_message = "Kage server started."
        STATE.write_state()

    def wait_for_server() -> None:
        exit_code = process.wait()
        log_handle.close()
        with STATE.lock:
            STATE.server_exit_code = exit_code
            STATE.server_process = None
            if STATE.last_message == "Stop requested.":
                STATE.last_message = "Kage server stopped."
            elif exit_code == 0:
                STATE.last_message = "Kage server exited cleanly."
            else:
                STATE.last_message = f"Kage server exited with code {exit_code}."
            STATE.write_state()

    threading.Thread(target=wait_for_server, daemon=True).start()
    return True, "Kage server started."


def stop_server() -> tuple[bool, str]:
    with STATE.lock:
        process = STATE.server_process
        if not process_alive(process):
            external_pid = find_kage_process_pid()
            if external_pid is None:
                STATE.server_process = None
                STATE.last_message = "The server is not running."
                STATE.write_state()
                return True, "The server is not running."
            subprocess.run(
                ["taskkill", "/PID", str(external_pid), "/T", "/F"],
                check=False,
                creationflags=hidden_process_flags(),
            )
            STATE.server_process = None
            STATE.server_exit_code = 0
            STATE.last_message = "Kage server stopped."
            STATE.write_state()
            return True, "Kage server stopped."
        STATE.last_message = "Stop requested."
        STATE.write_state()

    assert process is not None
    try:
        process.terminate()
        process.wait(timeout=8)
    except subprocess.TimeoutExpired:
        process.kill()
        process.wait(timeout=4)

    with STATE.lock:
        STATE.server_exit_code = process.returncode
        STATE.server_process = None
        STATE.last_message = "Kage server stopped."
        STATE.write_state()
    return True, "Kage server stopped."


def current_status() -> dict[str, Any]:
    ensure_runtime_dirs()
    with STATE.lock:
        STATE.write_state()
        payload = json.loads(STATE_PATH.read_text(encoding="utf-8"))
    payload["bomberman"] = read_bomberman_state()
    payload["logs"] = {
        "server_tail": tail_text(SERVER_LOG),
        "build_tail": tail_text(BUILD_LOG),
    }
    return payload


class Handler(BaseHTTPRequestHandler):
    server_version = "KageLauncher/1.0"

    def do_GET(self) -> None:
        parsed = urlparse(self.path)
        if parsed.path == "/api/status":
            self.send_json(current_status())
            return
        if parsed.path == "/api/logs":
            kind = parse_qs(parsed.query).get("kind", ["both"])[0]
            payload = {
                "server_log": tail_text(SERVER_LOG),
                "build_log": tail_text(BUILD_LOG),
                "kind": kind,
            }
            self.send_json(payload)
            return
        self.serve_static(parsed.path)

    def do_POST(self) -> None:
        parsed = urlparse(self.path)
        payload = self.read_json()

        if parsed.path == "/api/config/save":
            config = {
                "SERVER_IP": str(payload.get("SERVER_IP", "")).strip(),
                "DATADIR": str(payload.get("DATADIR", "data")).strip() or "data",
            }
            valid, error, private_ip = validate_config(config)
            if not valid:
                self.send_json({"ok": False, "message": error}, status=HTTPStatus.BAD_REQUEST)
                return
            write_config(config)
            with STATE.lock:
                STATE.last_message = (
                    "Configuration saved. That IP is private, so players outside your network may still need router or NAT setup."
                    if private_ip
                    else "Configuration saved."
                )
                STATE.write_state()
            self.send_json({"ok": True, "message": STATE.last_message})
            return

        if parsed.path == "/api/build":
            ok, message = launch_build()
            self.send_json({"ok": ok, "message": message}, status=HTTPStatus.OK if ok else HTTPStatus.CONFLICT)
            return

        if parsed.path == "/api/start":
            ok, message = launch_server()
            self.send_json({"ok": ok, "message": message}, status=HTTPStatus.OK if ok else HTTPStatus.CONFLICT)
            return

        if parsed.path == "/api/stop":
            ok, message = stop_server()
            self.send_json({"ok": ok, "message": message})
            return

        if parsed.path == "/api/bomberman/bots":
            desired_bot_count = max(0, min(7, int(payload.get("desired_bot_count", 0) or 0)))
            bot_name_prefix = str(payload.get("bot_name_prefix", "CPU")).strip() or "CPU"
            room_id = max(0, int(payload.get("room_id", 0) or 0))
            admin = read_key_value_file(BOMBERMAN_ADMIN_PATH)
            write_key_value_file(
                BOMBERMAN_ADMIN_PATH,
                {
                    "desired_bot_count": str(desired_bot_count),
                    "bot_name_prefix": bot_name_prefix,
                    "room_id": str(room_id),
                    "bomb_probe_counter": admin.get("bomb_probe_counter", "0"),
                    "bomb_probe_player_index": admin.get("bomb_probe_player_index", "0"),
                },
            )
            with STATE.lock:
                STATE.last_message = (
                    f"Bomberman test seats updated to {desired_bot_count}. "
                    "They are seat fillers for room/start testing, not gameplay AI."
                )
                STATE.write_state()
            self.send_json({"ok": True, "message": STATE.last_message})
            return

        if parsed.path == "/api/bomberman/bomb-probe":
            player_index = max(0, min(7, int(payload.get("player_index", 0) or 0)))
            room_id = max(0, int(payload.get("room_id", 0) or 0))
            admin = read_key_value_file(BOMBERMAN_ADMIN_PATH)
            try:
                counter = int(admin.get("bomb_probe_counter", "0")) + 1
            except ValueError:
                counter = 1
            write_key_value_file(
                BOMBERMAN_ADMIN_PATH,
                {
                    "desired_bot_count": admin.get("desired_bot_count", "0"),
                    "bot_name_prefix": admin.get("bot_name_prefix", "CPU") or "CPU",
                    "room_id": str(room_id),
                    "bomb_probe_counter": str(counter),
                    "bomb_probe_player_index": str(player_index),
                },
            )
            with STATE.lock:
                STATE.last_message = (
                    f"Bomberman bomb object probe armed for player slot {player_index + 1}. "
                    "Use this only after both clients are on the game board."
                )
                STATE.write_state()
            self.send_json({"ok": True, "message": STATE.last_message})
            return

        if parsed.path == "/api/open/logs":
            open_path(LOG_DIR)
            self.send_json({"ok": True, "message": "Opened the logs folder."})
            return

        if parsed.path == "/api/open/config":
            open_path(ROOT_DIR)
            self.send_json({"ok": True, "message": "Opened the config folder."})
            return

        if parsed.path == "/api/open/firewall":
            open_path(FIREWALL_SCRIPT)
            self.send_json({"ok": True, "message": "Opened the firewall helper script."})
            return

        self.send_json({"ok": False, "message": "Not found."}, status=HTTPStatus.NOT_FOUND)

    def serve_static(self, path: str) -> None:
        relative = path.lstrip("/") or "index.html"
        target = (WEB_DIR / relative).resolve()
        if WEB_DIR not in target.parents and target != WEB_DIR:
            self.send_error(HTTPStatus.FORBIDDEN)
            return
        if target.is_dir():
            target = target / "index.html"
        if not target.exists():
            self.send_error(HTTPStatus.NOT_FOUND)
            return

        mime, _ = mimetypes.guess_type(str(target))
        body = target.read_bytes()
        self.send_response(HTTPStatus.OK)
        self.send_header("Content-Type", mime or "application/octet-stream")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def read_json(self) -> dict[str, Any]:
        length = int(self.headers.get("Content-Length", "0"))
        if length <= 0:
            return {}
        body = self.rfile.read(length)
        if not body:
            return {}
        return json.loads(body.decode("utf-8"))

    def send_json(self, payload: dict[str, Any], status: HTTPStatus = HTTPStatus.OK) -> None:
        body = json.dumps(payload).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def log_message(self, fmt: str, *args: Any) -> None:
        return


def already_running() -> bool:
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
        sock.settimeout(0.5)
        return sock.connect_ex((HOST, PORT)) == 0


def main() -> None:
    ensure_runtime_dirs()
    with STATE.lock:
        STATE.build_process = None
        STATE.server_process = None
        STATE.write_state()

    if already_running():
        raise SystemExit("The Kage dashboard is already running at http://127.0.0.1:8765/")

    server = ThreadingHTTPServer((HOST, PORT), Handler)
    print(f"Kage dashboard running at http://{HOST}:{PORT}/")
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == "__main__":
    main()

#!/usr/bin/env python
"""
Reproducible static analysis helper for Bomberman Online's 1ST_READ.BIN.

This script is intentionally lightweight:
- extracts printable strings with file offsets
- groups networking / lobby / room / rules / result strings
- resolves key string anchors to virtual addresses with the inferred load base
- searches for simple xrefs via SH-4 literal pool values
- emits small disassembly windows for the most useful client code regions

It is not a full decompiler, but it gives us a repeatable evidence bundle that
we can compare against Kage's implementation while reviving the server.
"""

from __future__ import annotations

import argparse
import json
import re
import struct
from dataclasses import dataclass, asdict
from pathlib import Path
from typing import Dict, Iterable, List, Sequence, Tuple

DEFAULT_BINARY = Path(
    r"D:\bomberman online gdi\[GDI] Bomberman Online (US)\extracted\1ST_READ.BIN"
)
DEFAULT_OUTDIR = Path(r"D:\kageserver\docs\generated")
DEFAULT_BASE = 0x8C010000
MIN_STRING_LEN = 8

try:
    import capstone
except Exception:  # pragma: no cover - best-effort tool use
    capstone = None


@dataclass
class StringEntry:
    offset: int
    text: str


@dataclass
class RegionWindow:
    name: str
    file_offset: int
    size: int
    note: str


KEY_ANCHORS = [
    "Now Connecting to Server....",
    "Use DNS and Connect to Bootstrap Server",
    "User IP-Add Connect to Bootstrap Server",
    "Could not found Server Address.",
    "A game was not able to be started.",
    "The room master has set new rules.",
    "Failed to Logon to game server.",
    "Specified server domain name is",
    "Can't get Kage Server IP Addres from DNS.",
    "REQUEST:: QueryLobbyRequest in  CKageApp::Status_RequestLobbyList ()",
    "Complete QueryLobbyRequest (). I get Lobbies Lists",
    "ERROR:: Can't Find Any GameRooms on CKageApp::QueryRoomRequest ()",
    "Request QueryUserInRoomRequest()",
    "ROOM CREATE_REQUESTED",
    "ROOM CREATE_COMPLETED",
    "ROOM QUERYROOMS_REQUESTED",
    "ROOM QUERYATTRIBUTE_REQUESTED",
    "ROOM QUERYUSERIN_REQUESTED",
    "Completed CGameRoom::QueryUserInRoomCallBack()",
    "---- Start Game a Sync Time! ----",
    "---- Abort Game Play ----",
    "---- End Game Play ----",
    "All Battle End. Send Signal CLI_SET_SETTLED.",
    "Returned to the game room due to lack of players.",
    "Kicked out by Room and Disconnected.",
    "Disconnected by Server Request.",
    "Connection timed out.",
    "master.bomberman-hudson.games.sega.net",
    "CKageApp",
    "CGameRoom",
    "CLobby",
    "CNetworkServer",
    "CServerConfig",
    "Connection timed out.",
    "Kicked out by Room and Disconnected.",
    "Disconnected by Server Request.",
    "Returned to the game room due to lack of players.",
    "ID:%d NAME:%s",
    "UserID:%d NAME:%s",
    "UserID:%d Leaved.",
    "GameRoom Name:%s User:%d Max:%d",
    "Lobby Name:%s User:%d",
    "%s has become the new room master.",
]

FLOW_BUCKETS: Dict[str, Sequence[str]] = {
    "bootstrap_dns_login": (
        "Connect",
        "Bootstrap",
        "DNS",
        "ADNS",
        "Server Address",
        "Logon",
        "Login",
        "subscription",
        "domain name",
        "transport",
    ),
    "transport_and_ppp": (
        "DHCP",
        "PPPoE",
        "PPP",
        "dial",
        "Dial",
        "LAN",
        "modem",
        "telephone",
        "Probing",
        "connection",
    ),
    "lobby_matchmaking": (
        "LOBBY",
        "Lobby",
        "QueryLobbyRequest",
        "Join %d [%s] lobby",
        "Leave From Lobby",
        "Change Attribute Lobby",
        "Query User In Lobby",
    ),
    "room_matchmaking": (
        "ROOM ",
        "GameRoom",
        "QueryUserInRoom",
        "Join To GameRoom",
        "Leave From GameRoom",
        "RoomName",
        "Room Attribute",
        "number of players in this room",
        "new room master",
    ),
    "rules_and_game_start": (
        "rule",
        "Rule",
        "PlayGame",
        "SERVER_START",
        "Start Game",
        "Sync Time",
        "new rules",
        "settled",
        "Dead Bits",
    ),
    "results_disconnects": (
        "Victory",
        "YouLose",
        "won",
        "lost",
        "End Game",
        "Battle End",
        "Disconnected",
        "timed out",
        "Kicked",
        "lack of players",
    ),
}

DISASM_WINDOWS = [
    RegionWindow(
        name="ckageapp_dns_failure_cleanup",
        file_offset=0x0E13D2,
        size=0x180,
        note="ADNS / login failure cleanup and error presentation path",
    ),
    RegionWindow(
        name="ckageapp_lobby_state_callback_table",
        file_offset=0x0E096A,
        size=0xC0,
        note="Callback-table style dispatch used by CKageApp around lobby entry",
    ),
    RegionWindow(
        name="ckageapp_lobby_joined_dispatch",
        file_offset=0x0E1950,
        size=0x200,
        note="Post-login lobby setup path that appears to request lists, attrs, and user data",
    ),
    RegionWindow(
        name="cgameroom_state_label_lookup",
        file_offset=0x0E795A,
        size=0x40,
        note="Small helper that resolves CGameRoom state labels from a shared table",
    ),
    RegionWindow(
        name="cgameroom_query_user_in_callback",
        file_offset=0x0E80B8,
        size=0x80,
        note="QueryUserIn callback and object accessor region for game rooms",
    ),
    RegionWindow(
        name="room_list_and_query_callback_cluster",
        file_offset=0x0E67E0,
        size=0x1A0,
        note="Room list, room attribute, and room user callback cluster",
    ),
    RegionWindow(
        name="online_rules_and_start_path",
        file_offset=0x0A8D80,
        size=0x120,
        note="Online battle object update path near rules/start logging strings",
    ),
    RegionWindow(
        name="disconnect_reason_dispatch",
        file_offset=0x0D3CE0,
        size=0x90,
        note="Disconnect / timeout reason dispatch and string selection",
    ),
    RegionWindow(
        name="room_master_change_notice",
        file_offset=0x099960,
        size=0x60,
        note="Notice path used when the room master changes",
    ),
    RegionWindow(
        name="server_hostname_config_region",
        file_offset=0x0239F0,
        size=0x120,
        note="Configuration region that references the hard-coded Bomberman master hostname",
    ),
]

POINTER_TABLES = [
    {
        "name": "room_state_labels",
        "file_offset": 0x0D7868,
        "count": 11,
        "note": "Primary ROOM state string table used by CGameRoom label lookup helpers",
    },
    {
        "name": "room_query_labels",
        "file_offset": 0x0D7990,
        "count": 13,
        "note": "Secondary ROOM query/attribute/user state label table",
    },
    {
        "name": "disconnect_reason_labels",
        "file_offset": 0x0D3D44,
        "count": 4,
        "note": "Disconnect reason strings selected by the client after connection loss",
    },
]


def extract_ascii_strings(data: bytes, min_len: int = MIN_STRING_LEN) -> List[StringEntry]:
    result: List[StringEntry] = []
    start = None
    for idx, value in enumerate(data):
        if 32 <= value < 127:
            if start is None:
                start = idx
            continue
        if start is not None and idx - start >= min_len:
            result.append(StringEntry(start, data[start:idx].decode("ascii", "ignore")))
        start = None
    if start is not None and len(data) - start >= min_len:
        result.append(StringEntry(start, data[start:].decode("ascii", "ignore")))
    return result


def bucket_strings(strings: Iterable[StringEntry]) -> Dict[str, List[StringEntry]]:
    buckets: Dict[str, List[StringEntry]] = {name: [] for name in FLOW_BUCKETS}
    for entry in strings:
        for bucket_name, terms in FLOW_BUCKETS.items():
            if any(term in entry.text for term in terms):
                buckets[bucket_name].append(entry)
    return buckets


def find_anchor(strings: Sequence[StringEntry], text: str) -> StringEntry | None:
    for entry in strings:
        if entry.text == text:
            return entry
    return None


def find_xrefs(data: bytes, virtual_address: int) -> List[int]:
    pattern = struct.pack("<I", virtual_address)
    hits: List[int] = []
    pos = 0
    while True:
        idx = data.find(pattern, pos)
        if idx < 0:
            return hits
        hits.append(idx)
        pos = idx + 1


def decode_c_string(data: bytes, file_offset: int) -> str:
    chars: List[str] = []
    idx = file_offset
    while idx < len(data) and 32 <= data[idx] < 127:
        chars.append(chr(data[idx]))
        idx += 1
    return "".join(chars)


def extract_pointer_tables(data: bytes, base: int) -> List[dict]:
    tables: List[dict] = []
    for spec in POINTER_TABLES:
        entries = []
        offset = spec["file_offset"]
        for index in range(spec["count"]):
            raw = struct.unpack_from("<I", data, offset + index * 4)[0]
            entry = {"index": index, "value": raw}
            if base <= raw < base + len(data):
                file_offset = raw - base
                entry["target_file_offset"] = file_offset
                entry["text"] = decode_c_string(data, file_offset)
            entries.append(entry)
        tables.append(
            {
                "name": spec["name"],
                "file_offset": offset,
                "virtual_address": base + offset,
                "note": spec["note"],
                "entries": entries,
            }
        )
    return tables


def format_disassembly(data: bytes, base: int, windows: Sequence[RegionWindow]) -> str:
    if capstone is None:
        return "capstone not available; disassembly skipped\n"

    md = capstone.Cs(
        capstone.CS_ARCH_SH,
        capstone.CS_MODE_SH4 | capstone.CS_MODE_LITTLE_ENDIAN,
    )
    md.detail = False

    blocks: List[str] = []
    for window in windows:
        start = window.file_offset
        end = min(len(data), start + window.size)
        blocks.append(
            f"[{window.name}] file_offset=0x{start:08x} "
            f"virt=0x{base + start:08x} size=0x{end - start:x}\n"
            f"note: {window.note}"
        )
        for insn in md.disasm(data[start:end], base + start):
            blocks.append(f"{insn.address:08x}: {insn.mnemonic:8} {insn.op_str}")
        blocks.append("")
    return "\n".join(blocks).rstrip() + "\n"


def write_tsv(path: Path, rows: Iterable[Tuple[int | None, str]]) -> None:
    lines = ["offset_hex\toffset_dec\ttext"]
    for offset, text in rows:
        clean = text.replace("\t", " ").replace("\r", "\\r").replace("\n", "\\n")
        if offset is None:
            lines.append(f"-\t-\t{clean}")
        else:
            lines.append(f"0x{offset:08x}\t{offset}\t{clean}")
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--input", type=Path, default=DEFAULT_BINARY)
    parser.add_argument("--outdir", type=Path, default=DEFAULT_OUTDIR)
    parser.add_argument("--base", type=lambda x: int(x, 0), default=DEFAULT_BASE)
    args = parser.parse_args()

    binary_path: Path = args.input
    outdir: Path = args.outdir
    base: int = args.base

    data = binary_path.read_bytes()
    strings = extract_ascii_strings(data)
    buckets = bucket_strings(strings)
    outdir.mkdir(parents=True, exist_ok=True)

    anchors = []
    for text in KEY_ANCHORS:
        entry = find_anchor(strings, text)
        if entry is None:
            anchors.append(
                {
                    "text": text,
                    "found": False,
                }
            )
            continue
        virtual_address = base + entry.offset
        anchors.append(
            {
                "text": text,
                "found": True,
                "file_offset": entry.offset,
                "virtual_address": virtual_address,
                "xrefs": find_xrefs(data, virtual_address),
            }
        )

    summary = {
        "input": str(binary_path),
        "binary_size": len(data),
        "assumed_load_base": hex(base),
        "string_count": len(strings),
        "bucket_counts": {name: len(entries) for name, entries in buckets.items()},
        "key_anchors": anchors,
        "pointer_tables": extract_pointer_tables(data, base),
        "disasm_windows": [asdict(window) for window in DISASM_WINDOWS],
        "notes": [
            "The 0x8C010000 load base is inferred from string xref hits and SH-4 disassembly.",
            "Simple xref detection only catches literal-pool style 32-bit address references.",
            "This output is intended for Kage server revival work, not as a replacement for Ghidra.",
        ],
    }

    summary_path = outdir / "bomberman_client_summary.json"
    strings_path = outdir / "bomberman_client_strings.tsv"
    disasm_path = outdir / "bomberman_key_disasm.txt"

    summary_path.write_text(json.dumps(summary, indent=2), encoding="utf-8")
    write_tsv(strings_path, ((entry.offset, entry.text) for entry in strings))
    disasm_path.write_text(format_disassembly(data, base, DISASM_WINDOWS), encoding="utf-8")

    important_rows: List[Tuple[int | None, str]] = []
    for bucket_name, entries in buckets.items():
        important_rows.append((None, f"[{bucket_name}]"))
        for entry in entries[:80]:
            important_rows.append((entry.offset, entry.text))
    write_tsv(outdir / "bomberman_flow_strings.tsv", important_rows)

    print(f"Wrote {summary_path}")
    print(f"Wrote {strings_path}")
    print(f"Wrote {outdir / 'bomberman_flow_strings.tsv'}")
    print(f"Wrote {disasm_path}")


if __name__ == "__main__":
    main()

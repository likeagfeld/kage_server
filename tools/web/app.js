const elements = {
  banner: document.getElementById("banner"),
  configBadge: document.getElementById("configBadge"),
  serverBadge: document.getElementById("serverBadge"),
  binaryStatus: document.getElementById("binaryStatus"),
  buildStatus: document.getElementById("buildStatus"),
  serverStatus: document.getElementById("serverStatus"),
  logPath: document.getElementById("logPath"),
  serverIp: document.getElementById("serverIp"),
  dataDir: document.getElementById("dataDir"),
  ipHint: document.getElementById("ipHint"),
  serverLog: document.getElementById("serverLog"),
  buildLog: document.getElementById("buildLog"),
  buildButton: document.getElementById("buildButton"),
  startButton: document.getElementById("startButton"),
  stopButton: document.getElementById("stopButton"),
  saveConfigButton: document.getElementById("saveConfigButton"),
  openLogsButton: document.getElementById("openLogsButton"),
  openConfigButton: document.getElementById("openConfigButton"),
  openFirewallButton: document.getElementById("openFirewallButton"),
  bombermanBadge: document.getElementById("bombermanBadge"),
  bmRoomName: document.getElementById("bmRoomName"),
  bmOwner: document.getElementById("bmOwner"),
  bmHumans: document.getElementById("bmHumans"),
  bmBots: document.getElementById("bmBots"),
  bmBotCount: document.getElementById("bmBotCount"),
  bmBotPrefix: document.getElementById("bmBotPrefix"),
  bmRoster: document.getElementById("bmRoster"),
  bmApplyButton: document.getElementById("bmApplyButton"),
  bmAddButton: document.getElementById("bmAddButton"),
  bmRemoveButton: document.getElementById("bmRemoveButton"),
  bmClearButton: document.getElementById("bmClearButton"),
  bmBombProbe: document.getElementById("bmBombProbe"),
  bmBombPlayer: document.getElementById("bmBombPlayer"),
  bmBombProbeButton: document.getElementById("bmBombProbeButton"),
};

let currentStatus = null;

async function api(path, options = {}) {
  const response = await fetch(path, {
    headers: { "Content-Type": "application/json" },
    ...options,
  });

  let payload = {};
  try {
    payload = await response.json();
  } catch (_error) {
    payload = { ok: false, message: "The dashboard returned an unreadable response." };
  }

  if (!response.ok && payload.message) {
    throw new Error(payload.message);
  }

  return payload;
}

function setBanner(message, tone = "neutral") {
  elements.banner.textContent = message;
  elements.banner.dataset.tone = tone;
}

function setBadge(element, text, tone) {
  element.textContent = text;
  element.dataset.tone = tone;
}

function formatBuild(status) {
  if (status.running) {
    return `Running (PID ${status.pid})`;
  }
  if (status.exit_code === 0) {
    return "Last build succeeded";
  }
  if (status.exit_code !== null) {
    return `Last build failed (${status.exit_code})`;
  }
  return "Not started yet";
}

function formatServer(status) {
  if (status.running) {
    return `Running (PID ${status.pid})`;
  }
  if (status.exit_code === 0) {
    return "Stopped cleanly";
  }
  if (status.exit_code !== null) {
    return `Stopped (${status.exit_code})`;
  }
  return "Not running";
}

function renderStatus(payload) {
  currentStatus = payload;
  const bomberman = payload.bomberman || {};

  elements.serverIp.value = payload.config.SERVER_IP || "";
  elements.dataDir.value = payload.config.DATADIR || "data";
  elements.binaryStatus.textContent = payload.binary_exists ? "kageserver.exe is ready" : "Missing";
  elements.buildStatus.textContent = formatBuild(payload.build);
  elements.serverStatus.textContent = formatServer(payload.server);
  elements.logPath.textContent = payload.paths.server_log;
  elements.serverLog.textContent = payload.logs.server_tail || "No server log output yet.";
  elements.buildLog.textContent = payload.logs.build_tail || "No build log output yet.";

  setBadge(
    elements.configBadge,
    payload.config_valid ? "Valid" : "Needs attention",
    payload.config_valid ? "good" : "warn"
  );

  setBadge(
    elements.serverBadge,
    payload.server.running ? "Running" : "Stopped",
    payload.server.running ? "good" : "neutral"
  );

  if (payload.server_ip_private) {
    elements.ipHint.textContent = "That IP is private. Players outside your network may still need router or NAT forwarding.";
  } else {
    elements.ipHint.textContent = "Use the public IPv4 address players should reach.";
  }

  const startDisabled = !payload.config_valid || !payload.binary_exists || payload.build.running || payload.server.running;
  const buildDisabled = payload.build.running || payload.server.running;
  const stopDisabled = !payload.server.running;

  elements.startButton.disabled = startDisabled;
  elements.buildButton.disabled = buildDisabled;
  elements.stopButton.disabled = stopDisabled;

  elements.bmBotCount.value = bomberman.desired_bot_count ?? 0;
  elements.bmBotPrefix.value = bomberman.bot_name_prefix || "CPU";
  elements.bmRoomName.textContent = bomberman.active_room_present
    ? `${bomberman.active_room_name || "Unnamed"} (#${bomberman.active_room_id || 0})`
    : "No Bomberman room yet";
  elements.bmOwner.textContent = bomberman.active_room_owner || "-";
  elements.bmHumans.textContent = `${bomberman.human_slots || 0} slots across ${bomberman.human_hosts || 0} host(s)`;
  elements.bmBots.textContent = `${bomberman.bot_count || 0} of ${bomberman.max_players || 0} max`;
  elements.bmBombProbe.textContent = bomberman.bomb_probe_active
    ? `Active (${bomberman.bomb_probe_ticks || 0} ticks left)`
    : `Idle (#${bomberman.bomb_probe_counter || 0})`;
  elements.bmBombPlayer.value = String(bomberman.bomb_probe_player_index || 0);
  elements.bmBombProbeButton.disabled = !bomberman.active_room_present;
  elements.bmRoster.textContent = bomberman.bot_names && bomberman.bot_names.length
    ? bomberman.bot_names.join("\n")
    : "No bot seats applied.";

  setBadge(
    elements.bombermanBadge,
    bomberman.active_room_present ? "Room Active" : "Idle",
    bomberman.active_room_present ? "good" : "neutral"
  );

  if (payload.message) {
    setBanner(
      payload.message,
      payload.config_valid ? (payload.server.running ? "good" : "neutral") : "warn"
    );
  }
}

async function refresh() {
  try {
    const payload = await api("/api/status");
    renderStatus(payload);
  } catch (error) {
    setBanner(error.message, "warn");
  }
}

async function post(path, body = {}) {
  const payload = await api(path, {
    method: "POST",
    body: JSON.stringify(body),
  });
  if (payload.message) {
    setBanner(payload.message, payload.ok === false ? "warn" : "good");
  }
  await refresh();
}

async function applyBombermanBots(desiredBotCount) {
  const safeCount = Math.max(0, Math.min(7, Number(desiredBotCount) || 0));
  try {
    await post("/api/bomberman/bots", {
      desired_bot_count: safeCount,
      bot_name_prefix: elements.bmBotPrefix.value || "CPU",
      room_id: currentStatus?.bomberman?.active_room_id || 0,
    });
  } catch (error) {
    setBanner(error.message, "warn");
  }
}

async function armBombermanBombProbe() {
  try {
    await post("/api/bomberman/bomb-probe", {
      player_index: Number(elements.bmBombPlayer.value) || 0,
      room_id: currentStatus?.bomberman?.active_room_id || 0,
    });
  } catch (error) {
    setBanner(error.message, "warn");
  }
}

elements.saveConfigButton.addEventListener("click", async () => {
  try {
    await post("/api/config/save", {
      SERVER_IP: elements.serverIp.value,
      DATADIR: elements.dataDir.value || "data",
    });
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.buildButton.addEventListener("click", async () => {
  try {
    await post("/api/build");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.startButton.addEventListener("click", async () => {
  try {
    await post("/api/start");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.stopButton.addEventListener("click", async () => {
  try {
    await post("/api/stop");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.openLogsButton.addEventListener("click", async () => {
  try {
    await post("/api/open/logs");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.openConfigButton.addEventListener("click", async () => {
  try {
    await post("/api/open/config");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.openFirewallButton.addEventListener("click", async () => {
  try {
    await post("/api/open/firewall");
  } catch (error) {
    setBanner(error.message, "warn");
  }
});

elements.bmApplyButton.addEventListener("click", async () => {
  await applyBombermanBots(elements.bmBotCount.value);
});

elements.bmAddButton.addEventListener("click", async () => {
  await applyBombermanBots((Number(elements.bmBotCount.value) || 0) + 1);
});

elements.bmRemoveButton.addEventListener("click", async () => {
  await applyBombermanBots((Number(elements.bmBotCount.value) || 0) - 1);
});

elements.bmClearButton.addEventListener("click", async () => {
  await applyBombermanBots(0);
});

elements.bmBombProbeButton.addEventListener("click", async () => {
  await armBombermanBombProbe();
});

refresh();
setInterval(refresh, 2500);

/*
	Kage game server.
	Copyright 2019 Shuouma <dreamcast-talk.com>
    Copyright 2025 Flyinghead <flyinghead.github@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "bomberman.h"
#include "log.h"
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <numeric>
#include <sstream>

using namespace std::chrono_literals;

namespace {
constexpr uint32_t BombermanBotIdBase = 0x0B000000;
constexpr uint32_t BombermanStatusPending = 0;
constexpr uint32_t BombermanStatusAccepted = 3;
constexpr auto AdminPollInterval = 500ms;
constexpr auto BombermanInGameLivenessInterval = 1s;
constexpr uint32_t BombermanInGameLivenessValue = 0x10000000u;
constexpr uint32_t BombermanGameFramesPerSecond = 60;
constexpr uint32_t BombermanBombProbeMaterializeTicks = 4;
constexpr uint32_t BombermanBombProbeUpdateTicks = 8;
constexpr uint32_t BombermanBombProbeTicks = BombermanBombProbeMaterializeTicks + BombermanBombProbeUpdateTicks;
constexpr const char *BombermanBotAdminPath = "tools/state/bomberman_bots.ini";
constexpr const char *BombermanBotRuntimePath = "tools/state/bomberman_runtime.ini";

struct BombermanBotConfig
{
	uint32_t desiredCount = 0;
	std::string prefix = "CPU";
	uint32_t roomId = 0;
	uint32_t bombProbeCounter = 0;
	uint32_t bombProbePlayerIndex = 0;
};

std::string trimCopy(const std::string& value)
{
	const size_t begin = value.find_first_not_of(" \t\r\n");
	if (begin == std::string::npos)
		return "";
	const size_t end = value.find_last_not_of(" \t\r\n");
	return value.substr(begin, end - begin + 1);
}

BombermanBotConfig loadBotConfig()
{
	BombermanBotConfig config;
	std::ifstream in(BombermanBotAdminPath);
	if (!in.is_open())
		return config;

	std::string line;
	while (std::getline(in, line))
	{
		line = trimCopy(line);
		if (line.empty() || line[0] == '#')
			continue;
		const size_t sep = line.find('=');
		if (sep == std::string::npos)
			continue;
		const std::string key = trimCopy(line.substr(0, sep));
		const std::string value = trimCopy(line.substr(sep + 1));
		if (key == "desired_bot_count")
			config.desiredCount = (uint32_t)std::max(0, atoi(value.c_str()));
		else if (key == "bot_name_prefix" && !value.empty())
			config.prefix = value;
		else if (key == "room_id")
			config.roomId = (uint32_t)std::max(0, atoi(value.c_str()));
		else if (key == "bomb_probe_counter")
			config.bombProbeCounter = (uint32_t)std::max(0, atoi(value.c_str()));
		else if (key == "bomb_probe_player_index")
			config.bombProbePlayerIndex = (uint32_t)std::max(0, atoi(value.c_str()));
	}
	return config;
}

bool isDefaultBombermanObjectTable(const uint8_t *payload, size_t payloadSize)
{
	constexpr size_t objectTableOffset = 36; // cmd+word + 8 compact player records
	constexpr size_t objectRecordCount = 28;
	constexpr size_t objectRecordSize = 4;
	if (payload == nullptr || payloadSize < objectTableOffset + objectRecordCount * objectRecordSize)
		return false;

	for (size_t i = 0; i < objectRecordCount; i++)
	{
		const uint8_t *record = payload + objectTableOffset + i * objectRecordSize;
		const bool emptyRecord = record[0] == 0 && record[1] == 0 && record[2] == 0 && record[3] == 0;
		const bool defaultRecord = record[0] == 0 && record[1] == 0 && record[2] == 0x10 && record[3] == 0;
		if (!emptyRecord && !defaultRecord)
			return false;
	}
	return true;
}

bool findActiveBombermanCmd01Record(const uint8_t *payload, size_t payloadSize, size_t& recordIndex,
	const uint8_t *&record)
{
	constexpr size_t checkPadOffset = 40; // cmd+word + 8 compact players + 4-byte lane counter
	constexpr size_t checkPadRecordCount = 24;
	constexpr size_t checkPadRecordSize = 6;
	if (payload == nullptr || payloadSize < checkPadOffset + checkPadRecordCount * checkPadRecordSize)
		return false;

	for (size_t i = 0; i < checkPadRecordCount; i++)
	{
		const uint8_t *candidate = payload + checkPadOffset + i * checkPadRecordSize;
		bool emptyRecord = true;
		for (size_t j = 0; j < checkPadRecordSize; j++)
		{
			if (candidate[j] != 0)
			{
				emptyRecord = false;
				break;
			}
		}
		if (!emptyRecord)
		{
			recordIndex = i;
			record = candidate;
			return true;
		}
	}

	return false;
}

}

BMRoom::BMRoom(Lobby& lobby, uint32_t id, const std::string& name, uint32_t attributes, Player *owner, asio::io_context& io_context)
	: Room(lobby, id, name, attributes, owner, io_context), timer(io_context), matchTimer(io_context)
{
	// needed after the owner is added in the parent constructor
	updateSlots();
	resetMatchSync();
}

void BMRoom::addPlayer(Player *player) {
	Room::addPlayer(player);
	updateSlots();
	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	state.roomJoined = players.size() == 1;
	state.roomJoinPendingAck = false;
	resetMatchSync();
}
bool BMRoom::removePlayer(Player *player)
{
	Player *previousOwner = owner;
	bool b = Room::removePlayer(player);
	updateSlots();
	if (!b && previousOwner != owner && owner != nullptr)
		broadcastOwnerChange();
	resetMatchSync();
	return b;
}
uint32_t BMRoom::getPlayerCount() const {
	return getHumanSlotCount() + (uint32_t)bots.size();
}

uint32_t BMRoom::getHumanSlotCount() const
{
	return std::accumulate(slots.begin(), slots.end(), 0);
}

void BMRoom::sendUdpPacketA(Packet& packet)
{
	UdpCommand cmd {};
	cmd.command = 0xA;		// player joined?
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);			// flag?

	packet.writeData(getHostCount());
	for (const Player *pl : players)
	{
		packet.writeData(pl->getId());		// player kage id
		uint32_t slots = (uint32_t)getSlotCount(pl);
		packet.writeData(slots);				// guest+1 count
		uint32_t pos = (uint32_t)getPlayerPosition(pl);
		for (unsigned i = 0; i < slots; i++)
			// playerId [0-7]
			packet.writeData(pos + i);		// FIXME different from udp_8 but looks better.
	}
	for (size_t i = 0; i < bots.size(); i++)
	{
		packet.writeData(bots[i].id);
		packet.writeData(1u);
		packet.writeData((uint32_t)getBotPosition(i));
	}
}

// owner: needs pkt8 only at creation
//        pktA when player joins seems to work fine
// joiner: pkt8 fills joining player slots
//         but pktA doesn't work -> player occupies all slots
void BMRoom::createJoinRoomReply(Packet& reply, Packet& relay, Player *player)
{
	(void)relay;
	UdpCommand cmd{};
	cmd.command = 8;	// player list?
	reply.init(Packet::REQ_CHAT);
	reply.flags |= Packet::FLAG_RUDP;
	reply.writeData(cmd.full);
	reply.writeData((uint16_t)0);			// flag?
	reply.writeData(player->getId());		// player kage id
	reply.writeData((uint32_t)getPlayerIndex(player));		// FIXME p[915] [0-F]? client id?
	uint32_t pos = (uint32_t)getPlayerPosition(player);
	reply.writeData(pos); 					// player pos
	uint32_t slots = getSlotCount(player);
	reply.writeData(slots - 1);				// [911] guest count
	reply.writeData(owner->getId());		// room owner kage id
	reply.writeData((uint32_t)getPlayerPosition(owner)); // room owner player pos
	// for each player: -1 or player pos (1 - 8)
	reply.writeData(++pos);
	for (unsigned i = 1; i < slots; i++)
		reply.writeData(++pos);
}

void BMRoom::writeRoomAttr(Packet& packet, const char attr[4]) const
{
	packet.init(Packet::REQ_CHG_ROOM_ATTR);
	packet.writeData(getId());
	packet.writeData(attr, 4);
	if (!memcmp(attr, "STAT", 4))
		packet.writeData(getAttributes());
	else if (!memcmp(attr, "NAME", 4))
		packet.writeData(getName().c_str(), 0x10);
	else if (!memcmp(attr, "MAXI", 4))
		packet.writeData(getMaxPlayers());
	else if (!memcmp(attr, "USER", 4))
		packet.writeData(getPlayerCount());
}

void BMRoom::sendRoomAttrSyncTo(Player *player) const
{
	Packet packet;
	writeRoomAttr(packet, "STAT");
	writeRoomAttr(packet, "NAME");
	writeRoomAttr(packet, "MAXI");
	writeRoomAttr(packet, "USER");
	INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] attrs STAT,NAME,MAXI,USER",
		name.c_str(), player->getName().c_str(), player->getId());
	player->send(packet);
}

void BMRoom::sendLobbyJoinEventTo(Player *recipient, const Player *subject) const
{
	Packet packet;
	packet.init(Packet::REQ_JOIN_LOBBY_ROOM);
	packet.flags |= Packet::FLAG_LOBBY;
	packet.writeData(subject->getName().c_str(), 0x10);
	packet.writeData(subject->getId());
	const auto& extra = subject->getExtraData();
	packet.writeData((uint32_t)extra.size());
	packet.writeData(extra.data(), (int)extra.size());
	INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] seeds lobby occupant %s [%x]",
		name.c_str(), recipient->getName().c_str(), recipient->getId(),
		subject->getName().c_str(), subject->getId());
	recipient->send(packet);
}

void BMRoom::sendRoomJoinEventTo(Player *recipient, const Player *subject) const
{
	Packet packet;
	packet.init(Packet::REQ_JOIN_LOBBY_ROOM);
	packet.writeData(subject->getName().c_str(), 0x10);
	packet.writeData(subject->getId());
	const auto& extra = subject->getExtraData();
	packet.writeData((uint32_t)extra.size());
	packet.writeData(extra.data(), (int)extra.size());
	INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] sees occupant %s [%x]",
		name.c_str(), recipient->getName().c_str(), recipient->getId(),
		subject->getName().c_str(), subject->getId());
	recipient->send(packet);
}

void BMRoom::sendLobbyUserSnapshotTo(Player *player) const
{
	Packet packet;
	packet.init(Packet::REQ_QRY_USERS);
	packet.flags |= Packet::FLAG_LOBBY;
	packet.writeData(0u);
	packet.writeData(0u);
	packet.writeData((uint32_t)lobby.getPlayers().size());
	for (const Player *lobbyPlayer : lobby.getPlayers())
	{
		packet.writeData(lobbyPlayer->getName().c_str(), 0x10);
		packet.writeData(lobbyPlayer->getId());
		const auto& extra = lobbyPlayer->getExtraData();
		packet.writeData((uint32_t)extra.size());
		packet.writeData(extra.data(), (int)extra.size());
	}
	INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] lobby user snapshot count=%zu",
		name.c_str(), player->getName().c_str(), player->getId(), lobby.getPlayers().size());
	player->send(packet);
}

void BMRoom::sendUserPropTo(Player *recipient, const Player *subject, bool lobbyScoped) const
{
	const auto& extra = subject->getExtraData();
	if (extra.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_CHG_USER_PROP);
	packet.flags |= Packet::FLAG_RUDP | Packet::FLAG_RELAY;
	if (lobbyScoped)
		packet.flags |= Packet::FLAG_LOBBY;
	write32(packet.data, packet.startOffset + 4, subject->getId());
	packet.writeData(extra.data(), (int)extra.size());
	INFO_LOG(Game::Bomberman, "%s: %s prop -> %s [%x] from %s [%x] extra=%u",
		name.c_str(), lobbyScoped ? "lobby" : "room", recipient->getName().c_str(), recipient->getId(),
		subject->getName().c_str(), subject->getId(), (uint32_t)extra.size());
	recipient->send(packet);
}

void BMRoom::sendUserStatusTo(Player *recipient, const Player *subject, bool lobbyScoped) const
{
	Packet packet;
	packet.init(Packet::REQ_CHG_USER_STATUS);
	packet.flags |= Packet::FLAG_RUDP | Packet::FLAG_RELAY;
	if (lobbyScoped)
		packet.flags |= Packet::FLAG_LOBBY;
	write32(packet.data, packet.startOffset + 4, subject->getId());
	packet.writeData(subject->getStatus());
	INFO_LOG(Game::Bomberman, "%s: %s status -> %s [%x] from %s [%x] status=%08x",
		name.c_str(), lobbyScoped ? "lobby" : "room", recipient->getName().c_str(), recipient->getId(),
		subject->getName().c_str(), subject->getId(), subject->getStatus());
	recipient->send(packet);
}

void BMRoom::sendExistingOccupantsToJoiner(Player *player) const
{
	for (const Player *occupant : players)
	{
		if (occupant == player)
			continue;
		sendLobbyJoinEventTo(player, occupant);
		sendUserPropTo(player, occupant, true);
		sendUserStatusTo(player, occupant, true);
		sendRoomJoinEventTo(player, occupant);
		sendUserPropTo(player, occupant, false);
		sendUserStatusTo(player, occupant, false);
	}
}

void BMRoom::sendUserSnapshotTo(Player *player) const
{
	Packet packet;
	packet.init(Packet::REQ_QRY_USERS);
	packet.writeData(0u);
	packet.writeData(0u);
	packet.writeData(getQueryableUserCount(player));
	appendQueryableUsers(packet, player);
	INFO_LOG(Game::Bomberman, "%s: room user snapshot -> %s [%x] count=%u",
		name.c_str(), player->getName().c_str(), player->getId(), getQueryableUserCount(player));
	player->send(packet);
}

void BMRoom::sendJoinInitTo(Player *player)
{
	Packet packet;
	Packet ignored;
	createJoinRoomReply(packet, ignored, player);
	if (packet.empty())
		return;

	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	if (players.size() == 1 && player == owner)
	{
		state.roomJoined = true;
		state.roomJoinPendingAck = false;
	}
	else
	{
		state.roomJoined = false;
		state.roomJoinPendingAck = true;
		player->notifyRoomOnAck();
	}

	INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] udp8 owner=%x pos=%d slots=%d",
		name.c_str(), player->getName().c_str(), player->getId(), owner->getId(),
		getPlayerPosition(player), getSlotCount(player));
	player->send(packet);
}

void BMRoom::sendJoinSequenceTo(Player *player)
{
	sendRoomAttrSyncTo(player);
	sendJoinInitTo(player);
	sendLobbyUserSnapshotTo(player);
	sendExistingOccupantsToJoiner(player);
	sendUserSnapshotTo(player);
	if (players.size() > 1)
	{
		Packet rosterPacket;
		sendUdpPacketA(rosterPacket);
		INFO_LOG(Game::Bomberman, "%s: joiner seq -> %s [%x] udpA host_count=%u",
			name.c_str(), player->getName().c_str(), player->getId(), getHostCount());
		player->send(rosterPacket);
	}
}

void BMRoom::broadcastHumanJoin(Player *player)
{
	if (players.size() <= 1)
		return;

	Packet updatePacket;
	updatePacket.init(Packet::REQ_JOIN_LOBBY_ROOM);
	updatePacket.writeData(player->getName().c_str(), 0x10);
	updatePacket.writeData(player->getId());
	const auto& extra = player->getExtraData();
	updatePacket.writeData((uint32_t)extra.size());
	updatePacket.writeData(extra.data(), (int)extra.size());
	writeRoomAttr(updatePacket, "USER");
	INFO_LOG(Game::Bomberman, "%s: broadcast join seq -> existing occupants new player %s [%x], recipients=%zu",
		name.c_str(), player->getName().c_str(), player->getId(), players.size() - 1);
	Player::sendToAll(updatePacket, players, player);

	for (Player *occupant : players)
	{
		if (occupant != player)
		{
			sendUserPropTo(occupant, player, false);
			sendUserStatusTo(occupant, player, false);
			sendUserSnapshotTo(occupant);
		}
	}

	Packet rosterPacket;
	sendUdpPacketA(rosterPacket);
	INFO_LOG(Game::Bomberman, "%s: broadcast join seq -> existing occupants udpA for %s [%x]",
		name.c_str(), player->getName().c_str(), player->getId());
	Player::sendToAll(rosterPacket, players, player);
}

int BMRoom::getSlotCount(const Player *player) const
{
	int idx = getPlayerIndex(player);
	if (idx < 0)
		return 0;
	return slots[idx];
}

int BMRoom::getPlayerPosition(const Player *player) const
{
	int idx = getPlayerIndex(player);
	if (idx < 0)
		return idx;
	return std::accumulate(slots.begin(), slots.begin() + idx, 0);
}

int BMRoom::getBotPosition(size_t index) const
{
	return (int)getHumanSlotCount() + (int)index;
}

uint8_t BMRoom::getOccupiedSlotMask() const
{
	uint8_t mask = 0;
	for (const Player *player : players)
	{
		const int pos = getPlayerPosition(player);
		const int count = getSlotCount(player);
		for (int i = 0; i < count; i++)
		{
			const int slot = pos + i;
			if (slot >= 0 && slot < 8)
				mask |= (uint8_t)(1u << slot);
		}
	}
	for (size_t i = 0; i < bots.size(); i++)
	{
		const int slot = getBotPosition(i);
		if (slot >= 0 && slot < 8)
			mask |= (uint8_t)(1u << slot);
	}
	return mask;
}

std::string BMRoom::buildBotName(const std::string& prefix, size_t index) const
{
	std::string clean = trimCopy(prefix);
	if (clean.empty())
		clean = "CPU";
	std::ostringstream stream;
	stream << clean << ' ' << (index + 1);
	std::string name = stream.str();
	if (name.size() > 16)
		name.resize(16);
	return name;
}

std::vector<uint8_t> BMRoom::buildBotExtraData() const
{
	const Player *templatePlayer = owner;
	if (templatePlayer == nullptr && !players.empty())
		templatePlayer = players.front();

	std::vector<uint8_t> extra;
	if (templatePlayer != nullptr)
		extra = templatePlayer->getExtraData();

	if (extra.size() < sizeof(uint32_t))
		extra.resize(sizeof(uint32_t), 0);

	// Bots act like single-slot passive players for now.
	write32(extra.data(), 0, 0u);
	return extra;
}

bool BMRoom::syncAdminBots(uint32_t desiredCount, const std::string& prefix)
{
	const std::vector<BotPlayer> previousBots = bots;
	const uint32_t maxRoomSlots = getMaxPlayers() == 0 ? 8u : getMaxPlayers();
	const uint32_t availableSlots = maxRoomSlots > getHumanSlotCount() ? maxRoomSlots - getHumanSlotCount() : 0u;
	const uint32_t clampedCount = std::min(desiredCount, availableSlots);
	bool changed = false;

	if (bots.size() != clampedCount)
	{
		bots.resize(clampedCount);
		changed = true;
	}
	for (size_t i = 0; i < bots.size(); i++)
	{
		BotPlayer updated;
		updated.id = BombermanBotIdBase | ((getId() & 0xfff) << 8) | (uint32_t)i;
		updated.name = buildBotName(prefix, i);
		updated.extraData = buildBotExtraData();
		if (bots[i].id != updated.id || bots[i].name != updated.name || bots[i].extraData != updated.extraData)
		{
			bots[i] = updated;
			changed = true;
		}
	}
	if (changed)
	{
		for (const BotPlayer& bot : previousBots)
		{
			const auto current = std::find_if(bots.begin(), bots.end(),
				[&bot](const BotPlayer& candidate) { return candidate.id == bot.id; });
			if (current == bots.end())
				broadcastBotLeave(bot);
		}
		for (const BotPlayer& bot : bots)
		{
			const auto previous = std::find_if(previousBots.begin(), previousBots.end(),
				[&bot](const BotPlayer& candidate) { return candidate.id == bot.id; });
			if (previous == previousBots.end())
				broadcastBotJoin(bot);
		}
		broadcastLobbyUserSnapshot();
		broadcastUserCountChange();
		broadcastUserSnapshot();
		sendRosterUpdate();
		resetMatchSync();
	}
	return changed;
}

void BMRoom::sendRosterUpdate(const char *reason)
{
	if (players.empty())
		return;
	Packet packet;
	sendUdpPacketA(packet);
	INFO_LOG(Game::Bomberman, "%s: slot roster sync (%s) host_count=%u occupied_mask=%02x",
		name.c_str(), reason != nullptr ? reason : "roster_update", getHostCount(), getOccupiedSlotMask());
	Player::sendToAll(packet, players);
}

void BMRoom::broadcastUserCountChange()
{
	if (players.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_CHG_ROOM_ATTR);
	packet.writeData(getId());
	const uint8_t attr[] = { 'U', 'S', 'E', 'R' };
	packet.writeData(attr, sizeof(attr));
	packet.writeData(getPlayerCount());
	Player::sendToAll(packet, players);
	INFO_LOG(Game::Bomberman, "%s: broadcast user count change USER=%u", name.c_str(), getPlayerCount());
}

void BMRoom::broadcastUserSnapshot()
{
	if (players.empty())
		return;

	for (Player *player : players)
		sendUserSnapshotTo(player);
	INFO_LOG(Game::Bomberman, "%s: broadcast user snapshot count=%u", name.c_str(), getQueryableUserCount(nullptr));
}

void BMRoom::broadcastLobbyBotJoin(const BotPlayer& bot)
{
	if (players.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_JOIN_LOBBY_ROOM);
	packet.flags |= Packet::FLAG_LOBBY;
	packet.writeData(bot.name.c_str(), 0x10);
	packet.writeData(bot.id);
	packet.writeData((uint32_t)bot.extraData.size());
	packet.writeData(bot.extraData.data(), (int)bot.extraData.size());
	Player::sendToAll(packet, players);
	INFO_LOG(Game::Bomberman, "%s: seed lobby bot join %s [%x]", name.c_str(), bot.name.c_str(), bot.id);
}

void BMRoom::broadcastLobbyBotLeave(const BotPlayer& bot)
{
	if (players.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_LEAVE_LOBBY_ROOM);
	packet.flags |= Packet::FLAG_LOBBY;
	packet.writeData(bot.id);
	Player::sendToAll(packet, players);
	INFO_LOG(Game::Bomberman, "%s: seed lobby bot leave %s [%x]", name.c_str(), bot.name.c_str(), bot.id);
}

void BMRoom::broadcastLobbyBotProp(const BotPlayer& bot)
{
	if (players.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_CHG_USER_PROP);
	packet.flags |= Packet::FLAG_RUDP | Packet::FLAG_RELAY | Packet::FLAG_LOBBY;
	write32(packet.data, packet.startOffset + 4, bot.id);
	packet.writeData(bot.extraData.data(), (int)bot.extraData.size());
	Player::sendToAll(packet, players);
	INFO_LOG(Game::Bomberman, "%s: seed lobby bot prop %s [%x] extra=%u", name.c_str(),
		bot.name.c_str(), bot.id, (uint32_t)bot.extraData.size());
}

void BMRoom::broadcastLobbyUserSnapshot()
{
	if (players.empty())
		return;

	const auto& lobbyPlayers = lobby.getPlayers();
	const uint32_t count = (uint32_t)lobbyPlayers.size() + (uint32_t)bots.size();
	for (Player *player : players)
	{
		Packet packet;
		packet.init(Packet::REQ_QRY_USERS);
		packet.flags |= Packet::FLAG_LOBBY;
		packet.writeData(0u);
		packet.writeData(0u);
		packet.writeData(count);
		for (const Player *lobbyPlayer : lobbyPlayers)
		{
			packet.writeData(lobbyPlayer->getName().c_str(), 0x10);
			packet.writeData(lobbyPlayer->getId());
			const auto& extra = lobbyPlayer->getExtraData();
			packet.writeData((uint32_t)extra.size());
			packet.writeData(extra.data(), (int)extra.size());
		}
		for (const BotPlayer& bot : bots)
		{
			packet.writeData(bot.name.c_str(), 0x10);
			packet.writeData(bot.id);
			packet.writeData((uint32_t)bot.extraData.size());
			packet.writeData(bot.extraData.data(), (int)bot.extraData.size());
		}
		player->send(packet);
	}
	INFO_LOG(Game::Bomberman, "%s: broadcast lobby user snapshot count=%u", name.c_str(), count);
}

void BMRoom::broadcastBotJoin(const BotPlayer& bot)
{
	if (players.empty())
		return;

	broadcastLobbyBotJoin(bot);
	broadcastLobbyBotProp(bot);

	Packet packet;
	packet.init(Packet::REQ_JOIN_LOBBY_ROOM);
	packet.writeData(bot.name.c_str(), 0x10);
	packet.writeData(bot.id);
	packet.writeData((uint32_t)bot.extraData.size());
	packet.writeData(bot.extraData.data(), (int)bot.extraData.size());
	sendUdpPacketA(packet);
	Player::sendToAll(packet, players);

	INFO_LOG(Game::Bomberman, "%s: broadcast bot join %s [%x] extra=%u", name.c_str(), bot.name.c_str(), bot.id, (uint32_t)bot.extraData.size());
}

void BMRoom::broadcastBotLeave(const BotPlayer& bot)
{
	if (players.empty())
		return;

	Packet packet;
	packet.init(Packet::REQ_LEAVE_LOBBY_ROOM);
	packet.writeData(bot.id);
	sendUdpPacketA(packet);
	Player::sendToAll(packet, players);
	broadcastLobbyBotLeave(bot);
	INFO_LOG(Game::Bomberman, "%s: broadcast bot leave %s [%x]", name.c_str(), bot.name.c_str(), bot.id);
}

uint32_t BMRoom::getQueryableUserCount(const Player *requester) const
{
	return Room::getQueryableUserCount(requester) + (uint32_t)bots.size();
}

void BMRoom::appendQueryableUsers(Packet& reply, const Player *requester) const
{
	Room::appendQueryableUsers(reply, requester);
	for (const BotPlayer& bot : bots)
	{
		reply.writeData(bot.name.c_str(), 0x10);
		reply.writeData(bot.id);
		reply.writeData((uint32_t)bot.extraData.size());
		reply.writeData(bot.extraData.data(), (int)bot.extraData.size());
	}
}

void BMRoom::updateSlots()
{
	slots.clear();
	for (const Player *player : players)
	{
		const auto& extra = player->getExtraData();
		int slotCount = extra.size() >= sizeof(uint32_t) ? (int)read32(extra.data(), 0) + 1 : 1;
		slots.push_back(slotCount);
	}
}

void BMRoom::refreshSyncPlayers()
{
	for (auto it = syncPlayers.begin(); it != syncPlayers.end(); )
	{
		const auto current = std::find_if(players.begin(), players.end(),
			[it](const Player *player) { return player->getId() == it->first; });
		if (current == players.end())
			it = syncPlayers.erase(it);
		else
			++it;
	}
	for (const Player *player : players)
		syncPlayers.try_emplace(player->getId());
}

void BMRoom::resetMatchSync()
{
	stopInGameLiveness();
	stopMatchEndTimer();
	refreshSyncPlayers();
	for (auto& [id, state] : syncPlayers)
	{
		state.rulesAccepted = false;
		state.startAcked = false;
		state.postMapMarkerSeen = false;
		state.battleEndPhase = BattleEndPhase::None;
	}
	syncState = SyncState::Idle;
	gameTimeInfoSent = false;
	battleEndSent = false;
	liveSlotRefreshSent = false;
	awaitingPostEndMapMarker = false;
	livePlayerStates.clear();
	bombProbe = {};
}

bool BMRoom::allHumanPlayersJoined() const
{
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it == syncPlayers.end() || !it->second.roomJoined)
			return false;
	}
	return !players.empty();
}

bool BMRoom::allHumanPlayersAccepted() const
{
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it == syncPlayers.end() || !it->second.rulesAccepted)
			return false;
	}
	return !players.empty();
}

bool BMRoom::allPendingStartAcked() const
{
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it == syncPlayers.end() || !it->second.startAcked)
			return false;
	}
	return !players.empty();
}

bool BMRoom::allPostMapMarkersSeen() const
{
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it == syncPlayers.end() || !it->second.postMapMarkerSeen)
			return false;
	}
	return !players.empty();
}

bool BMRoom::allHumanPlayersHaveLiveState() const
{
	for (const Player *player : players)
	{
		const auto it = livePlayerStates.find(player->getId());
		if (it == livePlayerStates.end() || !it->second.valid)
			return false;
	}
	return players.size() > 1;
}

uint32_t BMRoom::getPostMapMarkerCount() const
{
	uint32_t count = 0;
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it != syncPlayers.end() && it->second.postMapMarkerSeen)
			count++;
	}
	return count;
}

void BMRoom::noteLiveGameData(Player *player, uint8_t command, const uint8_t *payload, size_t payloadSize)
{
	if (player == nullptr || payload == nullptr || command < 1 || command > 3)
		return;

	const int playerPosition = getPlayerPosition(player);
	if (playerPosition < 0 || playerPosition >= 8)
		return;

	const size_t playerRecordOffset = 4 + (size_t)playerPosition * 4;
	if (payloadSize < playerRecordOffset + 4)
		return;

	LivePlayerState& state = livePlayerStates[player->getId()];
	state.valid = true;
	memcpy(state.playerRecord.data(), payload + playerRecordOffset, state.playerRecord.size());

	const uint16_t packedPosition = read16(payload, (int)playerRecordOffset);
	state.x = (uint8_t)((packedPosition >> 10) & 0x1f);
	state.y = (uint8_t)((packedPosition >> 5) & 0x1f);
	state.lowNibble = (uint8_t)(packedPosition & 0x0f);

	if (command == 2 && payloadSize >= state.cmd02Payload.size())
	{
		state.word = payloadSize >= 4 ? read16(payload, 2) : 0;
		memcpy(state.cmd02Payload.data(), payload, state.cmd02Payload.size());
		state.hasCmd02Payload = true;
	}

	if (syncState == SyncState::InGame && !liveSlotRefreshSent && allHumanPlayersHaveLiveState())
	{
		liveSlotRefreshSent = true;
		INFO_LOG(Game::Bomberman,
			"%s: live slot refresh armed by %s [%x] cmd=%02x after all players sent live state",
			name.c_str(), player->getName().c_str(), player->getId(), command);
		sendRosterUpdate("live_slot_refresh");
	}
}

bool BMRoom::buildAggregatedLivePayload(uint8_t command, const uint8_t *payload, size_t payloadSize,
	std::vector<uint8_t>& output, uint8_t& slotMask) const
{
	output.clear();
	slotMask = 0;
	if (payload == nullptr || command < 1 || command > 3)
		return false;

	// Commands 0x01/0x02/0x03 all begin with command+word followed by 8 compact
	// player records. The current hardware dumps show raw client packets only
	// populate the sender's slot, while the binary receive paths parse all 8.
	constexpr size_t livePlayerRecordsOffset = 4;
	constexpr size_t livePlayerRecordSize = 4;
	constexpr size_t livePlayerRecordCount = 8;
	constexpr size_t minimumPayloadSize =
		livePlayerRecordsOffset + livePlayerRecordCount * livePlayerRecordSize;
	if (payloadSize < minimumPayloadSize)
		return false;

	output.assign(payload, payload + payloadSize);
	uint32_t writtenSlots = 0;
	for (Player *subject : players)
	{
		if (subject == nullptr)
			continue;
		const int playerPosition = getPlayerPosition(subject);
		if (playerPosition < 0 || playerPosition >= (int)livePlayerRecordCount)
			continue;
		const auto stateIt = livePlayerStates.find(subject->getId());
		if (stateIt == livePlayerStates.end() || !stateIt->second.valid)
			continue;
		const size_t playerRecordOffset = livePlayerRecordsOffset
			+ (size_t)playerPosition * livePlayerRecordSize;
		if (output.size() < playerRecordOffset + livePlayerRecordSize)
			continue;
		memcpy(output.data() + playerRecordOffset, stateIt->second.playerRecord.data(),
			livePlayerRecordSize);
		slotMask |= (uint8_t)(1u << playerPosition);
		writtenSlots++;
	}

	return writtenSlots > 1;
}

void BMRoom::requestBombProbe(size_t playerIndex, const char *reason)
{
	if (playerIndex >= players.size())
	{
		WARN_LOG(Game::Bomberman, "%s: bomb object probe (%s) ignored, player index %zu is not present",
			name.c_str(), reason, playerIndex);
		return;
	}

	Player *subject = players[playerIndex];
	const auto stateIt = livePlayerStates.find(subject->getId());
	if (stateIt == livePlayerStates.end() || !stateIt->second.valid)
	{
		WARN_LOG(Game::Bomberman,
			"%s: bomb object probe (%s) for %s [%x] ignored, no live player position has been observed yet",
			name.c_str(), reason, subject->getName().c_str(), subject->getId());
		return;
	}

	const int playerPosition = getPlayerPosition(subject);
	bombProbe.active = true;
	bombProbe.sourcePlayerId = subject->getId();
	bombProbe.x = stateIt->second.x;
	bombProbe.y = stateIt->second.y;
	bombProbe.lowNibble = stateIt->second.lowNibble;
	bombProbe.recordIndex = (uint8_t)std::max(0, std::min(playerPosition, 27));
	bombProbe.ticksRemaining = BombermanBombProbeTicks;

	INFO_LOG(Game::Bomberman,
		"%s: armed staged bomb object probe (%s) from %s [%x] cell=(%u,%u) record=%u ticks=%u",
		name.c_str(), reason, subject->getName().c_str(), subject->getId(), bombProbe.x, bombProbe.y,
		bombProbe.recordIndex, bombProbe.ticksRemaining);
}

void BMRoom::tickBombProbe()
{
	if (!bombProbe.active)
		return;
	if (bombProbe.ticksRemaining == 0)
	{
		bombProbe.active = false;
		return;
	}

	sendBombProbePacket("admin_probe_tick");
	bombProbe.ticksRemaining--;
	if (bombProbe.ticksRemaining == 0)
	{
		INFO_LOG(Game::Bomberman, "%s: bomb object probe completed", name.c_str());
		bombProbe.active = false;
	}
}

bool BMRoom::isBombProbeActive() const
{
	return bombProbe.active;
}

uint32_t BMRoom::getBombProbeTicksRemaining() const
{
	return bombProbe.ticksRemaining;
}

void BMRoom::sendBombProbePacket(const char *reason)
{
	if (!bombProbe.active)
		return;

	const auto stateIt = livePlayerStates.find(bombProbe.sourcePlayerId);
	if (stateIt == livePlayerStates.end() || !stateIt->second.valid)
	{
		WARN_LOG(Game::Bomberman, "%s: bomb object probe (%s) has no source live state", name.c_str(), reason);
		bombProbe.active = false;
		return;
	}

	std::array<uint8_t, 164> payload {};
	if (stateIt->second.hasCmd02Payload)
	{
		payload = stateIt->second.cmd02Payload;
	}
	else
	{
		write16(payload.data(), 0, (uint16_t)((2u << 9) | payload.size()));
		write16(payload.data(), 2, stateIt->second.word);
		int playerPosition = -1;
		for (Player *candidate : players)
		{
			if (candidate != nullptr && candidate->getId() == bombProbe.sourcePlayerId)
			{
				playerPosition = getPlayerPosition(candidate);
				break;
			}
		}
		if (playerPosition >= 0 && playerPosition < 8)
			memcpy(payload.data() + 4 + (size_t)playerPosition * 4, stateIt->second.playerRecord.data(),
				stateIt->second.playerRecord.size());
		for (size_t i = 0; i < 28; i++)
			payload[36 + i * 4 + 2] = 0x10;
	}

	write16(payload.data(), 0, (uint16_t)((2u << 9) | payload.size()));
	write16(payload.data(), 2, stateIt->second.word);
	const size_t objectOffset = 36 + (size_t)bombProbe.recordIndex * 4;
	const uint16_t objectPosition = (uint16_t)(((uint16_t)bombProbe.x << 10)
		| ((uint16_t)(bombProbe.y & 0x1f) << 5) | 0x10 | (bombProbe.lowNibble & 0x0f));
	const bool materializeStage = bombProbe.ticksRemaining > BombermanBombProbeUpdateTicks;
	const uint16_t objectState = materializeStage ? 0xf000 : 0x2000;
	const char *stageName = materializeStage ? "materialize_state_f" : "update_state_2";
	write16(payload.data(), (int)objectOffset, objectPosition);
	write16(payload.data(), (int)objectOffset + 2, objectState);

	for (Player *recipient : players)
	{
		Packet packet;
		packet.init(Packet::REQ_GAME_DATA);
		packet.flags |= Packet::FLAG_RELAY;
		write32(packet.data, packet.startOffset + 4, bombProbe.sourcePlayerId);
		packet.writeData(payload.data(), (int)payload.size());
		recipient->send(packet);
	}

	INFO_LOG(Game::Bomberman,
		"%s: bomb object probe (%s/%s) sent source=%x cell=(%u,%u) record=%u object=%04x:%04x recipients=%zu ticks_left=%u",
		name.c_str(), reason, stageName, bombProbe.sourcePlayerId, bombProbe.x, bombProbe.y,
		bombProbe.recordIndex, objectPosition, objectState, players.size(), bombProbe.ticksRemaining);
}

void BMRoom::onRulesConfigured(Player *player, const uint8_t *p)
{
	setRules(p);
	refreshSyncPlayers();
	for (Player *pl : players)
		pl->setStatus(BombermanStatusPending);
	for (auto& [id, state] : syncPlayers)
	{
		state.rulesAccepted = false;
		state.startAcked = false;
		state.postMapMarkerSeen = false;
		state.battleEndPhase = BattleEndPhase::None;
	}
	gameTimeInfoSent = false;
	syncPlayers[player->getId()].rulesAccepted = true;
	player->setStatus(BombermanStatusAccepted);
	syncState = players.size() <= 1 ? SyncState::ReadyToStart : SyncState::RulesPending;

	for (Player *recipient : players)
	{
		for (Player *subject : players)
		{
			if (recipient != subject)
				sendUserStatusTo(recipient, subject, false);
		}
	}
	broadcastOccupiedSlotMask("rules_configured");
}

bool BMRoom::acceptRules(Player *player)
{
	refreshSyncPlayers();
	syncPlayers[player->getId()].rulesAccepted = true;
	player->setStatus(BombermanStatusAccepted);
	for (Player *recipient : players)
	{
		if (recipient != player)
			sendUserStatusTo(recipient, player, false);
	}
	broadcastOccupiedSlotMask("rules_accepted");
	if (allHumanPlayersAccepted())
	{
		syncState = SyncState::ReadyToStart;
		return true;
	}
	return false;
}

bool BMRoom::updateRuleAcceptance(Player *player, bool accepted)
{
	refreshSyncPlayers();
	syncPlayers[player->getId()].rulesAccepted = accepted;
	if (allHumanPlayersAccepted())
	{
		syncState = SyncState::ReadyToStart;
		return true;
	}
	syncState = players.size() <= 1 ? SyncState::ReadyToStart : SyncState::RulesPending;
	return false;
}

bool BMRoom::canStartBattle() const
{
	return syncState == SyncState::ReadyToStart && getPlayerCount() >= 2 && allHumanPlayersJoined();
}

bool BMRoom::beginStartBattle(Player *player)
{
	if (player != owner)
		return false;

	refreshSyncPlayers();
	for (auto& [id, state] : syncPlayers)
	{
		state.startAcked = false;
		state.postMapMarkerSeen = false;
		state.battleEndPhase = BattleEndPhase::None;
	}
	gameTimeInfoSent = false;
	battleEndSent = false;
	liveSlotRefreshSent = false;
	awaitingPostEndMapMarker = false;
	syncPlayers[player->getId()].startAcked = true;

	if (players.size() <= 1)
	{
		syncState = SyncState::InGame;
		return true;
	}

	for (Player *pl : players)
	{
		if (pl != player)
			pl->notifyRoomOnAck();
	}
	syncState = SyncState::StartPending;
	return true;
}

void BMRoom::rudpAcked(Player *player)
{
	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	if (state.roomJoinPendingAck)
	{
		state.roomJoinPendingAck = false;
		state.roomJoined = true;
		INFO_LOG(Game::Bomberman, "%s: room join init acked by %s [%x] (%u/%zu joined)",
			name.c_str(), player->getName().c_str(), player->getId(), getJoinedPlayerCount(), players.size());
		if (players.size() > 1 && allHumanPlayersJoined())
		{
			broadcastOwnerKeyholderSync("room_join_complete");
			broadcastOccupiedSlotMask("room_join_complete");
		}
	}

	if (syncState == SyncState::InGame && battleEndSent
		&& state.battleEndPhase != BattleEndPhase::None
		&& state.battleEndPhase != BattleEndPhase::Done)
	{
		advanceBattleEndSequence(player, state, "acked");
		return;
	}

	if (syncState != SyncState::StartPending)
		return;

	state.startAcked = true;
	INFO_LOG(Game::Bomberman, "%s: start relay acked by %s (%u/%zu)", name.c_str(),
		player->getName().c_str(), getStartAckCount(), players.size());
	if (allPendingStartAcked())
	{
		syncState = SyncState::InGame;
		INFO_LOG(Game::Bomberman, "%s: all human players acked start relay", name.c_str());
	}
}

void BMRoom::notePostMapMarker(Player *player)
{
	notePostMapMarker(player, "cmd0e");
}

void BMRoom::notePostMapMarker(Player *player, const char *reason)
{
	if (player == nullptr)
		return;

	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	if (!state.postMapMarkerSeen)
	{
		state.postMapMarkerSeen = true;
		INFO_LOG(Game::Bomberman, "%s: post-map marker (%s) from %s [%x] (%u/%zu)",
			name.c_str(), reason != nullptr ? reason : "post_map", player->getName().c_str(), player->getId(),
			getPostMapMarkerCount(), players.size());
	}

	if (syncState == SyncState::InGame && !gameTimeInfoSent && allPostMapMarkersSeen())
	{
		gameTimeInfoSent = true;
		awaitingPostEndMapMarker = false;
		liveSlotRefreshSent = false;
		// The live player receivers only apply full remote position records for
		// slots marked state 3. Refresh the 0x0a slot table after PlayGame setup
		// and before the deferred game-time gate so the battle slot table cannot
		// be left in the room-only local/guest state.
		sendRosterUpdate("post_map_slot_refresh");
		// Live dumps showed that sending 0x14 immediately after 0x13 stops the
		// map-block phase. Gate it behind both clients' post-map 0x0e markers.
		broadcastGameTimeInfo("post_map_exchange", 0, 60 * 180, 0);
		broadcastInGameLiveness("post_map_exchange");
		startInGameLiveness();
		startMatchEndTimer(60 * 180);
	}
}

void BMRoom::prepareNextRoundFromPostEndFlow(Player *player, uint8_t command)
{
	if (player == nullptr || syncState != SyncState::InGame || !battleEndSent)
		return;
	if (command != 0x4 && command != 0x5 && command != 0x1a && command != 0x1b)
		return;

	refreshSyncPlayers();
	for (auto& [id, state] : syncPlayers)
	{
		state.postMapMarkerSeen = false;
		state.battleEndPhase = BattleEndPhase::None;
	}
	stopInGameLiveness();
	stopMatchEndTimer();
	gameTimeInfoSent = false;
	battleEndSent = false;
	liveSlotRefreshSent = false;
	awaitingPostEndMapMarker = true;
	livePlayerStates.clear();
	bombProbe = {};

	INFO_LOG(Game::Bomberman,
		"%s: post-end round reset from %s [%x] cmd=%02x; waiting for next map-complete marker",
		name.c_str(), player->getName().c_str(), player->getId(), command);
}

bool BMRoom::isAwaitingPostEndMapMarker() const
{
	return syncState == SyncState::InGame && awaitingPostEndMapMarker && !gameTimeInfoSent;
}

uint32_t BMRoom::getAcceptedRuleCount() const
{
	uint32_t count = 0;
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it != syncPlayers.end() && it->second.rulesAccepted)
			count++;
	}
	return count;
}

uint32_t BMRoom::getStartAckCount() const
{
	uint32_t count = 0;
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it != syncPlayers.end() && it->second.startAcked)
			count++;
	}
	return count;
}

uint32_t BMRoom::getJoinedPlayerCount() const
{
	uint32_t count = 0;
	for (const Player *player : players)
	{
		const auto it = syncPlayers.find(player->getId());
		if (it != syncPlayers.end() && it->second.roomJoined)
			count++;
	}
	return count;
}

const char *BMRoom::getSyncStateName() const
{
	switch (syncState)
	{
	case SyncState::Idle:
		return "idle";
	case SyncState::RulesPending:
		return "rules_pending";
	case SyncState::ReadyToStart:
		return "ready_to_start";
	case SyncState::StartPending:
		return "start_pending";
	case SyncState::InGame:
		return "in_game";
	default:
		return "unknown";
	}
}

void BMRoom::sendOwnerKeyholderSyncTo(Player *player, const char *reason) const
{
	if (owner == nullptr || player == nullptr)
		return;
	const int ownerPos = getPlayerPosition(owner);
	if (ownerPos < 0)
		return;

	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0xE;
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);
	packet.writeData(owner->getId());
	packet.writeData((uint32_t)ownerPos);
	INFO_LOG(Game::Bomberman, "%s: keyholder sync (%s) -> %s [%x] owner=%s [%x] pos=%d",
		name.c_str(), reason != nullptr ? reason : "sync", player->getName().c_str(), player->getId(),
		owner->getName().c_str(), owner->getId(), ownerPos);
	player->send(packet);
}

void BMRoom::sendRuleBlobTo(Player *player, const char *reason, uint16_t ruleWord) const
{
	if (player == nullptr)
		return;

	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0xB;
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData(ruleWord);
	packet.writeData(rules.data(), (int)rules.size());
	INFO_LOG(Game::Bomberman, "%s: rule blob sync (%s) -> %s [%x] word=%04x rules=%02x%02x%02x%02x%02x%02x%02x%02x%02x",
		name.c_str(), reason != nullptr ? reason : "sync", player->getName().c_str(), player->getId(), ruleWord,
		rules[0], rules[1], rules[2], rules[3], rules[4], rules[5], rules[6], rules[7], rules[8]);
	player->send(packet);
}

void BMRoom::broadcastRuleBlob(const char *reason, uint16_t ruleWord) const
{
	for (Player *player : players)
		sendRuleBlobTo(player, reason, ruleWord);
}

void BMRoom::sendOccupiedSlotMaskTo(Player *player, const char *reason) const
{
	if (player == nullptr)
		return;

	const uint32_t mask = getOccupiedSlotMask();
	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0x11;
	cmd.size = 4;
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);
	packet.writeData(mask);
	INFO_LOG(Game::Bomberman, "%s: occupied slot mask sync (%s) -> %s [%x] mask=%02x",
		name.c_str(), reason != nullptr ? reason : "sync", player->getName().c_str(), player->getId(), mask);
	player->send(packet);
}

void BMRoom::broadcastOccupiedSlotMask(const char *reason) const
{
	for (Player *player : players)
		sendOccupiedSlotMaskTo(player, reason);
}

void BMRoom::sendStartTransitionTo(Player *player, const char *reason, uint16_t startWord) const
{
	if (player == nullptr)
		return;

	// Server-to-client command 0x13 is the room-to-game transition path.
	// Do not use command 0x0a here: on receive, 0x0a rebuilds the room slot table.
	const uint32_t startToken = id;
	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0x13;
	cmd.size = 4;
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData(startWord);
	packet.writeData(startToken);
	INFO_LOG(Game::Bomberman, "%s: server start transition (%s) -> %s [%x] word=%04x token=%08x",
		name.c_str(), reason != nullptr ? reason : "start", player->getName().c_str(), player->getId(),
		startWord, startToken);
	player->send(packet);
}

void BMRoom::broadcastStartTransition(const char *reason, uint16_t startWord) const
{
	for (Player *player : players)
		sendStartTransitionTo(player, reason, startWord);
}

void BMRoom::sendGameTimeInfoTo(Player *player, const char *reason, uint32_t startFrame, uint32_t endFrame,
	uint32_t commonFrame) const
{
	if (player == nullptr)
		return;

	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0x14;
	cmd.size = 12;
	packet.init(Packet::REQ_CHAT);
	packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);
	packet.writeData(startFrame);
	packet.writeData(endFrame);
	packet.writeData(commonFrame);
	INFO_LOG(Game::Bomberman,
		"%s: game time sync (%s) -> %s [%x] start=%u end=%u common=%u",
		name.c_str(), reason != nullptr ? reason : "sync", player->getName().c_str(), player->getId(),
		startFrame, endFrame, commonFrame);
	player->send(packet);
}

void BMRoom::broadcastGameTimeInfo(const char *reason, uint32_t startFrame, uint32_t endFrame,
	uint32_t commonFrame) const
{
	for (Player *player : players)
		sendGameTimeInfoTo(player, reason, startFrame, endFrame, commonFrame);
}

void BMRoom::sendInGameLivenessTo(Player *player, const char *reason) const
{
	if (player == nullptr)
		return;

	Packet packet;
	UdpCommand cmd {};
	cmd.command = 0x1c;
	cmd.size = 4;
	const uint8_t mask = getOccupiedSlotMask();
	packet.init(Packet::REQ_CHAT);
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);
	packet.writeData(BombermanInGameLivenessValue);
	packet.writeData(mask);
	INFO_LOG(Game::Bomberman, "%s: in-game liveness sync (%s) -> %s [%x] value=%08x mask=%02x",
		name.c_str(), reason != nullptr ? reason : "sync", player->getName().c_str(), player->getId(),
		BombermanInGameLivenessValue, mask);
	player->send(packet);
}

void BMRoom::broadcastInGameLiveness(const char *reason) const
{
	for (Player *player : players)
		sendInGameLivenessTo(player, reason);
}

void BMRoom::startInGameLiveness()
{
	if (syncState != SyncState::InGame || players.empty())
		return;

	timer.expires_after(BombermanInGameLivenessInterval);
	timer.async_wait(std::bind(&BMRoom::handleInGameLivenessTimer, this, asio::placeholders::error));
}

void BMRoom::stopInGameLiveness()
{
	timer.cancel();
}

void BMRoom::handleInGameLivenessTimer(const std::error_code& ec)
{
	if (ec || syncState != SyncState::InGame || players.empty())
		return;

	broadcastInGameLiveness("heartbeat");
	startInGameLiveness();
}

void BMRoom::startMatchEndTimer(uint32_t endFrame)
{
	stopMatchEndTimer();
	battleEndSent = false;
	refreshSyncPlayers();
	for (auto& [id, state] : syncPlayers)
		state.battleEndPhase = BattleEndPhase::None;
	if (syncState != SyncState::InGame || players.empty() || endFrame == 0)
		return;

	const uint64_t milliseconds = ((uint64_t)endFrame * 1000u) / BombermanGameFramesPerSecond;
	matchTimer.expires_after(std::chrono::milliseconds(milliseconds));
	matchTimer.async_wait(std::bind(&BMRoom::handleMatchEndTimer, this, asio::placeholders::error));
	INFO_LOG(Game::Bomberman, "%s: match-end timer armed frame=%u ms=%llu",
		name.c_str(), endFrame, (unsigned long long)milliseconds);
}

void BMRoom::stopMatchEndTimer()
{
	matchTimer.cancel();
}

void BMRoom::handleMatchEndTimer(const std::error_code& ec)
{
	if (ec || syncState != SyncState::InGame || players.empty() || battleEndSent)
		return;

	broadcastBattleEndSequence("match_timer_expired");
}

void BMRoom::sendBattleStateCommandTo(Player *player, uint8_t command, uint32_t value, const char *reason) const
{
	if (player == nullptr)
		return;

	UdpCommand cmd {};
	cmd.command = command;
	cmd.size = command == 0x15 ? 0 : 4;
	Packet packet;
	packet.init(Packet::REQ_CHAT);
	// Hardware logs show 0x16 and 0x19 are ACKed, but the no-payload 0x15 final
	// marker is not. Sending 0x15 reliably only creates retry/time-out fallout.
	if (command != 0x15)
		packet.flags |= Packet::FLAG_RUDP;
	packet.writeData(cmd.full);
	packet.writeData((uint16_t)0);
	if (cmd.size != 0)
		packet.writeData(value);
	INFO_LOG(Game::Bomberman, "%s: battle state sync (%s) -> %s [%x] cmd=%02x value=%08x reliable=%u",
		name.c_str(), reason != nullptr ? reason : "battle", player->getName().c_str(), player->getId(),
		command, value, command != 0x15 ? 1 : 0);
	player->send(packet);
}

void BMRoom::advanceBattleEndSequence(Player *player, SyncPlayerState& state, const char *reason)
{
	if (player == nullptr)
		return;

	switch (state.battleEndPhase)
	{
	case BattleEndPhase::SettledDeadBits:
		INFO_LOG(Game::Bomberman, "%s: battle end ack (%s) from %s [%x] cmd=16 -> cmd=19",
			name.c_str(), reason != nullptr ? reason : "acked", player->getName().c_str(), player->getId());
		state.battleEndPhase = BattleEndPhase::CompletedDeadBits;
		player->notifyRoomOnAck();
		sendBattleStateCommandTo(player, 0x19, 0, "completed_dead_bits");
		break;

	case BattleEndPhase::CompletedDeadBits:
		INFO_LOG(Game::Bomberman, "%s: battle end ack (%s) from %s [%x] cmd=19 -> cmd=15",
			name.c_str(), reason != nullptr ? reason : "acked", player->getName().c_str(), player->getId());
		state.battleEndPhase = BattleEndPhase::Done;
		sendBattleStateCommandTo(player, 0x15, 0, "final_state");
		break;

	case BattleEndPhase::FinalState:
		state.battleEndPhase = BattleEndPhase::Done;
		INFO_LOG(Game::Bomberman, "%s: battle end final ack (%s) from %s [%x]",
			name.c_str(), reason != nullptr ? reason : "acked", player->getName().c_str(), player->getId());
		break;

	default:
		break;
	}
}

void BMRoom::sendBattleEndSequenceTo(Player *player, const char *reason)
{
	if (player == nullptr)
		return;

	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	state.battleEndPhase = BattleEndPhase::SettledDeadBits;
	// The binary dispatches 0x16, 0x19, and 0x15 as separate result-state
	// handlers. Keep each one reliable and standalone so every step gets an ACK.
	INFO_LOG(Game::Bomberman, "%s: battle end transition (%s) -> %s [%x] cmd=16",
		name.c_str(), reason != nullptr ? reason : "end", player->getName().c_str(), player->getId());
	player->notifyRoomOnAck();
	sendBattleStateCommandTo(player, 0x16, 0, "settled_dead_bits");
}

void BMRoom::broadcastBattleEndSequence(const char *reason)
{
	if (battleEndSent)
		return;
	battleEndSent = true;
	stopInGameLiveness();
	stopMatchEndTimer();
	for (Player *player : players)
		sendBattleEndSequenceTo(player, reason);
}

void BMRoom::broadcastOwnerKeyholderSync(const char *reason) const
{
	for (Player *player : players)
		sendOwnerKeyholderSyncTo(player, reason);
}

void BMRoom::broadcastOwnerChange() const
{
	broadcastOwnerKeyholderSync("owner_change");
}


BombermanServer::BombermanServer(uint16_t port, asio::io_context& io_context)
	: LobbyServer(Game::Bomberman, port, io_context), adminTimer(io_context)
{
	pollAdminState({});
}

void BombermanServer::pollAdminState(const std::error_code& ec)
{
	if (ec)
		return;
	syncAdminState();
	adminTimer.expires_after(AdminPollInterval);
	adminTimer.async_wait(std::bind(&BombermanServer::pollAdminState, this, asio::placeholders::error));
}

void BombermanServer::syncAdminState()
{
	const BombermanBotConfig config = loadBotConfig();
	desiredBotCount = config.desiredCount;
	desiredBotPrefix = config.prefix;
	targetRoomId = config.roomId;
	bombProbeCounter = config.bombProbeCounter;
	bombProbePlayerIndex = config.bombProbePlayerIndex;
	bool bombProbeRequested = false;
	if (!bombProbeCounterInitialized)
	{
		lastBombProbeCounter = bombProbeCounter;
		bombProbeCounterInitialized = true;
	}
	else if (bombProbeCounter != lastBombProbeCounter)
	{
		bombProbeRequested = true;
		lastBombProbeCounter = bombProbeCounter;
	}

	BMRoom *displayRoom = nullptr;
	BMRoom *targetRoom = nullptr;
	for (Lobby& lobby : lobbies)
	{
		for (Room *room : lobby.getRooms())
		{
			BMRoom *bmRoom = dynamic_cast<BMRoom *>(room);
			if (bmRoom == nullptr)
				continue;
			if (displayRoom == nullptr)
				displayRoom = bmRoom;
			if (targetRoomId != 0 && bmRoom->getId() == targetRoomId)
				targetRoom = bmRoom;
		}
	}

	for (Lobby& lobby : lobbies)
	{
		for (Room *room : lobby.getRooms())
		{
			BMRoom *bmRoom = dynamic_cast<BMRoom *>(room);
			if (bmRoom == nullptr)
				continue;
			const uint32_t roomDesiredBots = (bmRoom == targetRoom ? desiredBotCount : 0u);
			if (bmRoom->syncAdminBots(roomDesiredBots, desiredBotPrefix))
			{
				INFO_LOG(Game::Bomberman, "Applied %u admin bot seat(s) to room %s", bmRoom->getBotCount(), bmRoom->getName().c_str());
			}
			if (bombProbeRequested && bmRoom == targetRoom)
				bmRoom->requestBombProbe((size_t)bombProbePlayerIndex, "admin_console");
			bmRoom->tickBombProbe();
		}
	}
	if (bombProbeRequested && targetRoom == nullptr)
	{
		WARN_LOG(Game::Bomberman, "Bomb object probe requested but target room %u was not found", targetRoomId);
	}

	writeAdminRuntimeState(displayRoom);
}

void BombermanServer::writeAdminRuntimeState(const BMRoom *activeRoom) const
{
	std::filesystem::create_directories("tools/state");
	std::ofstream out(BombermanBotRuntimePath, std::ios::trunc);
	if (!out.is_open())
		return;

	out << "desired_bot_count=" << desiredBotCount << "\n";
	out << "bot_name_prefix=" << desiredBotPrefix << "\n";
	out << "room_id=" << targetRoomId << "\n";
	out << "bomb_probe_counter=" << bombProbeCounter << "\n";
	out << "bomb_probe_player_index=" << bombProbePlayerIndex << "\n";
	if (activeRoom == nullptr)
	{
		out << "active_room_present=0\n";
		out << "bomb_probe_active=0\n";
		return;
	}

	out << "active_room_present=1\n";
	out << "active_room_id=" << activeRoom->getId() << "\n";
	out << "active_room_name=" << activeRoom->getName() << "\n";
	out << "active_room_owner=" << activeRoom->getOwner()->getName() << "\n";
	out << "human_hosts=" << activeRoom->getPlayers().size() << "\n";
	out << "human_slots=" << activeRoom->getHumanSlotCount() << "\n";
	out << "bot_count=" << activeRoom->getBotCount() << "\n";
	out << "player_slots=" << activeRoom->getPlayerCount() << "\n";
	out << "max_players=" << activeRoom->getMaxPlayers() << "\n";
	out << "sync_state=" << activeRoom->getSyncStateName() << "\n";
	out << "accepted_rules=" << activeRoom->getAcceptedRuleCount() << "\n";
	out << "start_ack_count=" << activeRoom->getStartAckCount() << "\n";
	out << "can_start=" << (activeRoom->canStartBattle() ? 1 : 0) << "\n";
	out << "bomb_probe_active=" << (activeRoom->isBombProbeActive() ? 1 : 0) << "\n";
	out << "bomb_probe_ticks=" << activeRoom->getBombProbeTicksRemaining() << "\n";
	for (size_t i = 0; i < activeRoom->getBots().size(); i++)
		out << "bot_name_" << (i + 1) << "=" << activeRoom->getBots()[i].name << "\n";
}

bool BombermanServer::handlePacket(Player *player, const uint8_t *data, size_t len)
{
	// TODO Should go to lobby server?
	uint16_t flags = read16(data, 0);
	if (flags & Packet::FLAG_ACK)
		player->ackRUdp(read32(data, 0xc));

	BMRoom *room = (BMRoom *)player->getRoom();
	if (room != nullptr)
	{
		if (joinRoomTime == time_point{}) {
			joinRoomTime = Clock::now();
		}
		else if (Clock::now() >= joinRoomTime + 6s)
		{
			// seems to help display the user list but name is "$"...
			// message 1400:user list?
			// 14: player count
			// (for each)
			// 18: kage id
			// 1c: pos? (> 0) player count for this slot? (1 + guests?)
			// (for each count)
			// 20: index? [0-7]
			/*
			replyPacket.init(Packet::REQ_CHAT);
			replyPacket.flags |= Packet::FLAG_RUDP;
			replyPacket.writeData((uint16_t)0x1400);	// user list?
			replyPacket.writeData((uint16_t)0);			// flag?
			replyPacket.writeData(1u);					// player count
			replyPacket.writeData(player->getId());		// P1 id
			replyPacket.writeData(1u);					// P1 1 + guests
			replyPacket.writeData(0u);					// P1 pos
			*/
			// unlocks the room UI after creation.
			// doesn't know its own user-id? now says self=ff000000
			// pos: now says self=0
/*
			replyPacket.init(Packet::REQ_CHAT);
			replyPacket.flags |= Packet::FLAG_RUDP;
			replyPacket.writeData((uint16_t)0x1c00);	// new key holder
			replyPacket.writeData((uint16_t)0);			// flag?
			replyPacket.writeData(player->getId());
			replyPacket.writeData(0u);					// pos. in room
*/
			joinRoomTime = time_point{};

		}
		else if (Clock::now() >= joinRoomTime + 3s)
		{
			// work: calling kickoutFromRoom_maybe()
			/*
			printf("Kicking player out\n");
			replyPacket.init(Packet::REQ_CHAT);
			replyPacket.flags |= Packet::FLAG_RUDP;
			replyPacket.writeData((uint16_t)0x0E00);	// kick player
			replyPacket.writeData((uint16_t)0x0080);	// flag
			uint32_t id = player->getRoom()->getId();
			replyPacket.writeData((uint8_t *)&id, 4);	// LE or BE??
			*/
			// unlocks the room UI after creation.
			// doesn't know its own user-id? (says self=0)
			// still waiting for own pos. in room? (says self=-1)
			/*
			replyPacket.init(Packet::REQ_CHAT);
			replyPacket.flags |= Packet::FLAG_RUDP;
			replyPacket.writeData((uint16_t)0x1c00);	// new key holder
			replyPacket.writeData((uint16_t)0);			// flag?
			replyPacket.writeData(player->getId());
			replyPacket.writeData(0u);					// pos. in room
			*/

			// message: returned to game room due to lack of players
			// still doesn't show player names
			// crashes if player/guest count==0 and no extra data at 2c
/* FIXME wrong
			Room *room = player->getRoom();
			replyPacket.init(Packet::REQ_CHAT);
			replyPacket.flags |= Packet::FLAG_RUDP;
			replyPacket.writeData((uint16_t)0x1000);	// player info?
			replyPacket.writeData((uint16_t)0);			// flag?
			replyPacket.writeData(player->getId());		// player kage id
			replyPacket.writeData(0u);					// p[915] ? client id?
			replyPacket.writeData(0u);					// player pos
			replyPacket.writeData(0u); 					// [911] guest count
			replyPacket.writeData(player->getId());		// room owner kage id
			replyPacket.writeData(0u);					// room owner player pos
			// for each player: -1 or player pos(?)
			replyPacket.writeData(0u);
//			for (unsigned i = 1; i < room->getMaxPlayers(); i++)
//				replyPacket.writeData(0xffffffffu);
 */
		}
	}

	uint16_t subtype = read16(data, 0x10);
	UdpCommand cmd;
	cmd.full = subtype;
	if (data[3] == Packet::REQ_GAME_DATA)
	{
		switch (cmd.command)
		{
		case 7:		// Set game rules
			INFO_LOG(Game::Bomberman, "%s: set game rules", player->getName().c_str());
			replyPacket.init(Packet::REQ_NOP);
			player->ackPacket(replyPacket, data);
			player->send(replyPacket);
			replyPacket.reset();

			if (room != nullptr)
			{
				const uint16_t ruleWord = len >= 0x14 ? read16(data, 0x12) : 0;
				room->onRulesConfigured(player, &data[0x14]);
				INFO_LOG(Game::Bomberman, "%s: rule sync state -> %s (%u/%zu accepted)",
					room->getName().c_str(), room->getSyncStateName(), room->getAcceptedRuleCount(),
					room->getPlayers().size());
				// Client receive command 0x0b copies the 9-byte rule blob into +0x245c
				// and sets the +0x00e0 Start Battle gate. Client transmit command
				// 0x07 is not the matching server-to-client rule-sync opcode.
				room->broadcastRuleBlob("rules_configured", ruleWord);
			}
			break;

		case 4:		// Pre-match sync timer / start-side state
			INFO_LOG(Game::Bomberman, "%s: pre-match sync cmd4 size=%zu", player->getName().c_str(),
				len > 0x14 ? len - 0x14 : 0);
			replyPacket.init(Packet::REQ_NOP);
			player->ackPacket(replyPacket, data);

			if (room != nullptr)
			{
				room->prepareNextRoundFromPostEndFlow(player, (uint8_t)cmd.command);
				relayPacket.init(Packet::REQ_CHAT);
				relayPacket.flags |= Packet::FLAG_RUDP;
				relayPacket.writeData(&data[0x10], (int)(len - 0x10));
			}
			break;

		case 9:		// Additional pre-match state blob
			INFO_LOG(Game::Bomberman, "%s: pre-match sync cmd9 size=%zu", player->getName().c_str(),
				len > 0x14 ? len - 0x14 : 0);
			replyPacket.init(Packet::REQ_NOP);
			player->ackPacket(replyPacket, data);

			if (room != nullptr)
			{
				relayPacket.init(Packet::REQ_CHAT);
				relayPacket.flags |= Packet::FLAG_RUDP;
				relayPacket.writeData(&data[0x10], (int)(len - 0x10));
			}
			break;

		case 0xa:	// Start battle
			{
			const uint16_t startWord = len >= 0x14 ? read16(data, 0x12) : 0;
			const uint32_t startPayload = len >= 0x18 ? read32(data, 0x14) : 0;
			INFO_LOG(Game::Bomberman, "%s: START BATTLE! word=%04x payload=%08x size=%u",
				player->getName().c_str(), startWord, startPayload, cmd.size);
			replyPacket.respOK(Packet::REQ_CHAT);
			player->ackPacket(replyPacket, data);

			if (room != nullptr)
			{
				if (!room->canStartBattle())
				{
					WARN_LOG(Game::Bomberman, "%s: start rejected in state %s (%u/%zu accepted, slots %u)",
						room->getName().c_str(), room->getSyncStateName(), room->getAcceptedRuleCount(),
						room->getPlayers().size(), room->getPlayerCount());
					break;
				}
				if (!room->beginStartBattle(player))
				{
					WARN_LOG(Game::Bomberman, "%s: start requested by non-owner %s", room->getName().c_str(),
						player->getName().c_str());
					break;
				}
				INFO_LOG(Game::Bomberman, "%s: start sync armed (%u/%zu local acked)", room->getName().c_str(),
					room->getStartAckCount(), room->getPlayers().size());
				player->send(replyPacket);
				replyPacket.reset();
				room->broadcastStartTransition("start_battle", startWord);
			}
			break;
			}

		case 0xb:	// Agree new rules
			{
				const uint8_t flag = len > 0x11 ? data[0x11] : 0;
				const uint16_t counter = len >= 0x14 ? read16(data, 0x12) : 0;
				INFO_LOG(Game::Bomberman, "%s: agree new rules flag=%u counter=%u", player->getName().c_str(),
					flag, counter);
				if (room != nullptr)
				{
					replyPacket.init(Packet::REQ_NOP);
					player->ackPacket(replyPacket, data);
					room->acceptRules(player);
					INFO_LOG(Game::Bomberman, "%s: rule sync state -> %s (%u/%zu accepted)", room->getName().c_str(),
						room->getSyncStateName(), room->getAcceptedRuleCount(), room->getPlayers().size());
				}
				break;
			}

		case 0xc:	// Compact pre-match rule/ready sync
			{
				const uint8_t flag = len > 0x11 ? data[0x11] : 0;
				const uint16_t counter = len >= 0x14 ? read16(data, 0x12) : 0;
				INFO_LOG(Game::Bomberman, "%s: rule sync flag=%u counter=%u", player->getName().c_str(),
					flag, counter);
				if (room != nullptr)
				{
					replyPacket.init(Packet::REQ_NOP);
					player->ackPacket(replyPacket, data);
					INFO_LOG(Game::Bomberman, "%s: rule sync state -> %s (%u/%zu accepted)", room->getName().c_str(),
						room->getSyncStateName(), room->getAcceptedRuleCount(), room->getPlayers().size());
				}
				break;
			}

		case 0xf:	// ??? response to udpF 17
			replyPacket.init(Packet::REQ_NOP);
			player->ackPacket(replyPacket, data);

			relayPacket.init(Packet::REQ_CHAT);
			relayPacket.flags |= Packet::FLAG_RUDP;
			relayPacket.writeData(cmd.full);
			relayPacket.writeData(read16(data, 0x12));
			if (room != nullptr && room->isAwaitingPostEndMapMarker())
			{
				if (!replyPacket.empty())
				{
					player->send(replyPacket);
					replyPacket.reset();
				}
				Player::sendToAll(relayPacket, room->getPlayers(), player);
				relayPacket.reset();
				room->notePostMapMarker(player, "cmd0f_post_end");
			}
			break;

		case 0x10:	// Client battle-end/settle signal observed after server cmd 0x19
			{
				const uint16_t word = len >= 0x14 ? read16(data, 0x12) : 0;
				const uint32_t tail = len >= 0x18 ? read32(data, 0x14) : 0;
				INFO_LOG(Game::Bomberman, "%s: battle end client signal cmd=10 word=%04x tail=%08x",
					player->getName().c_str(), word, tail);
				replyPacket.init(Packet::REQ_NOP);
				player->ackPacket(replyPacket, data);
				break;
			}

		case 0x1:	// In-game live state block observed after sprites spawn
		case 0x2:	// In-game live state block observed after sprites spawn
		case 0x3:	// In-game live state block observed after sprites spawn
		case 0x5:	// In-game state/tick packet observed after PlayGame transition
		case 0xd:	// Game-phase marker before map block exchange
		case 0xe:	// Game-phase marker after map block exchange
		case 0x1a:	// SendGameMapBlock / map info
		case 0x1b:	// SendGameMapBlock / map info
			{
				const size_t payloadSize = len > 0x10 ? len - 0x10 : 0;
				const uint16_t word = len >= 0x14 ? read16(data, 0x12) : 0;
				const uint32_t payload0 = len >= 0x18 ? read32(data, 0x14) : 0;
				size_t activeCmd01RecordIndex = 0;
				const uint8_t *activeCmd01Record = nullptr;
				const bool activeCmd01Lane = cmd.command == 0x1
					&& findActiveBombermanCmd01Record(&data[0x10], payloadSize, activeCmd01RecordIndex, activeCmd01Record);
				if (room != nullptr)
					room->prepareNextRoundFromPostEndFlow(player, (uint8_t)cmd.command);
				if (room != nullptr)
					room->noteLiveGameData(player, (uint8_t)cmd.command, &data[0x10], payloadSize);
				static std::map<uint64_t, uint32_t> loggedGameDataRelays;
				const uint64_t logKey = ((uint64_t)player->getId() << 32)
					| ((uint64_t)cmd.command << 16) | cmd.size;
				uint32_t& logCount = loggedGameDataRelays[logKey];
				if (logCount < 4)
				{
					INFO_LOG(Game::Bomberman,
						"%s: game data relay cmd=%02x full=%04x word=%04x payload=%08x size=%zu",
						player->getName().c_str(), cmd.command, cmd.full, word, payload0, payloadSize);
					logCount++;
				}

				replyPacket.init(Packet::REQ_NOP);
				player->ackPacket(replyPacket, data);

				if (room != nullptr && room->getPlayers().size() > 1)
				{
					if (cmd.command == 0xe)
					{
						if (!replyPacket.empty())
						{
							player->send(replyPacket);
							replyPacket.reset();
						}

						for (Player *recipient : room->getPlayers())
						{
							if (recipient == player)
								continue;
							Packet relay;
							relay.init(Packet::REQ_GAME_DATA);
							relay.flags |= Packet::FLAG_RELAY;
							if (flags & Packet::FLAG_RUDP)
								relay.flags |= Packet::FLAG_RUDP;
							write32(relay.data, relay.startOffset + 4, player->getId());
							relay.writeData(&data[0x10], (int)payloadSize);
							recipient->send(relay);
						}
						room->notePostMapMarker(player, "cmd0e");
					}
					else
					{
						if (cmd.command == 0x2)
						{
							const bool defaultObjectTable = isDefaultBombermanObjectTable(&data[0x10], payloadSize);
							static std::map<uint32_t, uint32_t> loggedDefaultObjectTables;
							static std::map<uint32_t, uint32_t> loggedNonDefaultObjectTables;
							uint32_t& logCount = defaultObjectTable
								? loggedDefaultObjectTables[player->getId()]
								: loggedNonDefaultObjectTables[player->getId()];
							if (logCount < 4)
							{
								INFO_LOG(Game::Bomberman,
									"%s: relaying cmd=02 %s object table word=%04x size=%zu",
									player->getName().c_str(),
									defaultObjectTable ? "default" : "non-default", word, payloadSize);
								logCount++;
							}

						}
						std::vector<uint8_t> aggregatePayload;
						uint8_t aggregateSlotMask = 0;
						const bool aggregateLivePayload = cmd.command >= 0x1 && cmd.command <= 0x3
							&& room->buildAggregatedLivePayload((uint8_t)cmd.command, &data[0x10], payloadSize,
								aggregatePayload, aggregateSlotMask);
						const uint8_t *relayPayload = aggregateLivePayload ? aggregatePayload.data() : &data[0x10];
						const size_t relayPayloadSize = aggregateLivePayload ? aggregatePayload.size() : payloadSize;
						if (cmd.command >= 0x1 && cmd.command <= 0x3)
						{
							// Binary receive path 0x8C093FDC applies live cmd 01/02/03 as
							// server-command traffic, not as peer REQ_GAME_DATA relays.
							relayPacket.init(Packet::REQ_CHAT);
						}
						else
						{
							relayPacket.init(Packet::REQ_GAME_DATA);
							relayPacket.flags |= Packet::FLAG_RELAY;
							if (flags & Packet::FLAG_RUDP)
								relayPacket.flags |= Packet::FLAG_RUDP;
							write32(relayPacket.data, relayPacket.startOffset + 4, player->getId());
						}
						if (aggregateLivePayload)
						{
							static std::map<uint64_t, uint32_t> loggedLiveAggregates;
							const uint64_t aggregateLogKey = ((uint64_t)player->getId() << 32)
								| ((uint64_t)cmd.command << 16) | aggregateSlotMask;
							uint32_t& aggregateLogCount = loggedLiveAggregates[aggregateLogKey];
							if (aggregateLogCount < 6)
							{
								INFO_LOG(Game::Bomberman,
									"%s: live aggregate relay cmd=%02x source=%x slots=%02x size=%zu",
									player->getName().c_str(), cmd.command, player->getId(), aggregateSlotMask,
									aggregatePayload.size());
								aggregateLogCount++;
							}
						}
						relayPacket.writeData(relayPayload, (int)relayPayloadSize);
						if (activeCmd01Lane)
						{
							static std::map<uint32_t, uint32_t> loggedCmd01ActiveRecords;
							uint32_t& activeLogCount = loggedCmd01ActiveRecords[player->getId()];
							if (activeLogCount < 6)
							{
								INFO_LOG(Game::Bomberman,
									"%s: cmd=01 active check-pad record observed idx=%zu record=%02x%02x%02x%02x%02x%02x word=%04x size=%zu",
									player->getName().c_str(), activeCmd01RecordIndex,
									activeCmd01Record[0], activeCmd01Record[1], activeCmd01Record[2],
									activeCmd01Record[3], activeCmd01Record[4], activeCmd01Record[5],
									word, payloadSize);
								activeLogCount++;
							}
						}
					}
				}
				break;
			}

		default:
			ERROR_LOG(game, "Unhandled udp 11 command: %x (%04x)", cmd.command, cmd.full);
			dumpData(data, len);
			return false;
		}
		return true;
	}
	if (data[3] != Packet::REQ_CHAT || (flags & Packet::FLAG_RELAY))
		return false;

	switch (cmd.command)
	{
	//case 4:		// Start_SyncTimer

	case 7:		// kick player
		replyPacket.init(Packet::REQ_NOP);
		player->ackPacket(replyPacket, data);
		if (room != nullptr)
		{
			if (len <= 0x14)
				break;
			if (cmd.size == 4)
				INFO_LOG(Game::Bomberman, "%s: room chat cmd7 size4 target_byte=%u payload32=%08x",
					player->getName().c_str(), len > 0x14 ? data[0x14] : 0,
					len >= 0x18 ? read32(data, 0x14) : 0);
			uint32_t playerPos = data[0x14];
			for (Player *player : room->getPlayers())
			{
				if (room->getPlayerPosition(player) == (int)playerPos)
				{
					Packet pkt;
					pkt.init(Packet::REQ_CHAT);
					pkt.flags |= Packet::FLAG_RUDP;
					pkt.writeData(&data[0x10], 4);
					pkt.writeData((const uint8_t *)&playerPos, sizeof(playerPos));
					player->send(pkt);
					break;
				}
			}
		}
		break;

	case 0x1C: // PING
		{
		DEBUG_LOG(Game::Bomberman, "%s: ping", player->getName().c_str());
		// this is correctly received as a ping
		replyPacket.init(Packet::REQ_CHAT);
		replyPacket.writeData(cmd.full);
		replyPacket.writeData((uint16_t)0);
		replyPacket.writeData(0x10000000u);	// LE int. ping value? only lsbyte used. 1,4,10,80,c8 is red
		const uint8_t incomingMask = len > 0x18 ? data[0x18] : 0;
		uint8_t replyMask = incomingMask;
		if (room != nullptr)
			replyMask = room->getOccupiedSlotMask();
		static std::map<uint32_t, uint8_t> lastLoggedPingMask;
		const uint8_t logValue = (uint8_t)((incomingMask << 4) | (replyMask & 0x0f));
		if (lastLoggedPingMask[player->getId()] != logValue)
		{
			lastLoggedPingMask[player->getId()] = logValue;
			INFO_LOG(Game::Bomberman, "%s: ping slot mask in=%02x out=%02x", player->getName().c_str(),
				incomingMask, replyMask);
		}
		replyPacket.writeData(replyMask); // bitfield (8 flags), aggregated for the whole room
		break;
		}

	default:
		ERROR_LOG(game, "Unhandled udp F command: %x (%04x)", cmd.command, cmd.full);
		dumpData(data, len);
		return false;
	}

	return true;
}

Room *BombermanServer::addRoom(const std::string& name, uint32_t attributes, Player *owner)
{
	uint32_t id = nextRoomId++;
	BMRoom *room = new BMRoom(*owner->getLobby(), id, name, attributes, owner, io_context);
	owner->getLobby()->addRoom(room);

	return room;
}

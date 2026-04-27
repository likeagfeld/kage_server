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
constexpr uint32_t BombermanGameFramesPerSecond = 60;
constexpr uint32_t BombermanBombProbeMaterializeTicks = 4;
constexpr uint32_t BombermanBombProbeUpdateTicks = 8;
constexpr uint32_t BombermanBombProbeTicks = BombermanBombProbeMaterializeTicks + BombermanBombProbeUpdateTicks;
constexpr bool BombermanSyntheticObjectInjectionEnabled = false;
constexpr uint16_t BombermanSyntheticBombMaterializePackets = 6;
constexpr uint16_t BombermanSyntheticBombPlacedPackets = 360;
constexpr uint8_t BombermanObjectSubtypeBomb = 0x0e;
constexpr uint8_t BombermanObjectSubtypeBombUpItem = 0x02;
constexpr uint16_t BombermanSyntheticBombCompactLow = 0x0018;
constexpr uint8_t BombermanCmd01BombPromotionSelector = 0x5;
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

bool buildPromotedBombermanCmd01Payload(const uint8_t *payload, size_t payloadSize, size_t recordIndex,
	const uint8_t *record, std::vector<uint8_t>& output, uint8_t& previousSelector, uint8_t& promotedSelector)
{
	constexpr size_t checkPadOffset = 40;
	constexpr size_t checkPadRecordSize = 6;
	constexpr size_t checkPadRecordCount = 24;

	output.clear();
	previousSelector = 0;
	promotedSelector = 0;
	if (payload == nullptr || record == nullptr || recordIndex >= checkPadRecordCount)
		return false;
	if (payloadSize < checkPadOffset + checkPadRecordCount * checkPadRecordSize)
		return false;

	output.assign(payload, payload + payloadSize);
	const size_t recordOffset = checkPadOffset + recordIndex * checkPadRecordSize;
	uint8_t *candidate = output.data() + recordOffset;
	const uint8_t actionSubtype = (uint8_t)(candidate[3] & 0x0f);
	if (actionSubtype != BombermanObjectSubtypeBombUpItem)
		return false;

	previousSelector = (uint8_t)((candidate[2] >> 4) & 0x0f);
	if (previousSelector == BombermanCmd01BombPromotionSelector)
		return false;

	candidate[2] = (uint8_t)((candidate[2] & 0x0f) | (BombermanCmd01BombPromotionSelector << 4));
	promotedSelector = BombermanCmd01BombPromotionSelector;
	return true;
}

bool getBombermanCmd01RecordAt(const uint8_t *payload, size_t payloadSize, size_t recordIndex,
	const uint8_t *&record)
{
	constexpr size_t checkPadOffset = 40;
	constexpr size_t checkPadRecordSize = 6;
	constexpr size_t checkPadRecordCount = 24;

	record = nullptr;
	if (payload == nullptr || recordIndex >= checkPadRecordCount)
		return false;
	if (payloadSize < checkPadOffset + checkPadRecordCount * checkPadRecordSize)
		return false;

	record = payload + checkPadOffset + recordIndex * checkPadRecordSize;
	return true;
}

std::array<uint8_t, 6> makeBombermanCmd01PromotionKey(const uint8_t *record)
{
	std::array<uint8_t, 6> key {};
	if (record == nullptr)
		return key;
	memcpy(key.data(), record, key.size());
	// The same logical in-game action can walk selector variants 4 -> 1 -> 0
	// while keeping the rest of the compact action record stable. For promotion
	// gating, treat those selector-only changes as one action.
	key[2] = (uint8_t)(key[2] & 0x0f);
	return key;
}

uint8_t getBombermanLiveSlotMask(const uint8_t *payload, size_t payloadSize)
{
	constexpr size_t livePlayerRecordsOffset = 4;
	constexpr size_t livePlayerRecordSize = 4;
	constexpr size_t livePlayerRecordCount = 8;
	if (payload == nullptr || payloadSize < livePlayerRecordsOffset + livePlayerRecordCount * livePlayerRecordSize)
		return 0;

	uint8_t mask = 0;
	for (size_t i = 0; i < livePlayerRecordCount; i++)
	{
		const uint8_t *record = payload + livePlayerRecordsOffset + i * livePlayerRecordSize;
		if (record[0] != 0 || record[1] != 0 || record[2] != 0 || record[3] != 0)
			mask |= (uint8_t)(1u << i);
	}
	return mask;
}

}

BMRoom::BMRoom(Lobby& lobby, uint32_t id, const std::string& name, uint32_t attributes, Player *owner, asio::io_context& io_context)
	: Room(lobby, id, name, attributes, owner, io_context), timer(io_context), matchTimer(io_context), postMatchSafetyTimer(io_context)
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
	cancelPostMatchSafetyTimer();
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
	lastObjectTablePerPlayer.clear();
	actionLaneStates.clear();
	syntheticBombObjects = {};
	bombProbe = {};
	deadManBitmap = 0;
	battleEndDecidedByDeath = false;
	liveTickCounter = 0;
	winCounts = {};
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
	const bool wasValid = state.valid;
	const std::array<uint8_t, 4> previousRecord = state.playerRecord;
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

	// Tick + record-shape probe. Bumping liveTickCounter every observation lets us
	// flag players whose record stops updating while others continue. The probe
	// captures byte-2 / byte-3 evolution of the 4-byte compact record so the
	// next gameplay capture reveals the alive/dead byte empirically.
	liveTickCounter++;
	const bool recordChanged = !wasValid || previousRecord != state.playerRecord;
	if (recordChanged)
	{
		state.lastUpdateTick = liveTickCounter;
		if (state.deadByStaleness)
		{
			state.deadByStaleness = false;
			deadManBitmap &= (uint8_t)~(1u << playerPosition);
		}
		// Log first 24 record observations per player so we see the in-game
		// baseline shape; then log every transition where byte-2 or byte-3
		// changes (these are the candidate alive/dead encoding bytes the
		// existing wire docs do not cover). Player position byte-0 / byte-1
		// movement is already proven, so we don't duplicate that.
		static std::map<uint32_t, uint32_t> loggedRecordShape;
		uint32_t& shapeLogCount = loggedRecordShape[player->getId()];
		const bool highByteChanged = wasValid
			&& (previousRecord[2] != state.playerRecord[2]
				|| previousRecord[3] != state.playerRecord[3]);
		if (shapeLogCount < 24 || highByteChanged)
		{
			INFO_LOG(Game::Bomberman,
				"%s: live record probe pos=%d cmd=%02x rec=%02x%02x%02x%02x prev=%02x%02x%02x%02x x=%u y=%u low=%x word=%04x",
				name.c_str(), playerPosition, command,
				state.playerRecord[0], state.playerRecord[1], state.playerRecord[2], state.playerRecord[3],
				wasValid ? previousRecord[0] : 0, wasValid ? previousRecord[1] : 0,
				wasValid ? previousRecord[2] : 0, wasValid ? previousRecord[3] : 0,
				state.x, state.y, state.lowNibble, state.word);
			shapeLogCount++;
		}
	}

	// cmd=02 object-table diff probe. Bomb-up items render as compact records
	// with the f00X family; powerup pickup events should show as a non-default
	// record reverting to default at the same tick the player walks across the
	// cell. Bombs explode similarly. Logging every per-slot transition gives
	// us the kill-event AND the pickup-event signal in one capture.
	if (command == 2)
	{
		constexpr size_t objectTableOffset = 36; // cmd+word + 8 compact players
		constexpr size_t objectRecordSize = 4;
		constexpr size_t objectRecordCount = 28;
		auto& prevTable = lastObjectTablePerPlayer[player->getId()];
		const bool tableInitialized = prevTable.size() == objectRecordCount * objectRecordSize;
		if (payloadSize >= objectTableOffset + objectRecordCount * objectRecordSize)
		{
			std::vector<uint8_t> currentTable(payload + objectTableOffset,
				payload + objectTableOffset + objectRecordCount * objectRecordSize);
			if (tableInitialized)
			{
				for (size_t i = 0; i < objectRecordCount; i++)
				{
					const size_t base = i * objectRecordSize;
					if (memcmp(currentTable.data() + base, prevTable.data() + base, objectRecordSize) != 0)
					{
						const uint16_t prevWord0 = (uint16_t)(prevTable[base] | (prevTable[base + 1] << 8));
						const uint16_t prevWord1 = (uint16_t)(prevTable[base + 2] | (prevTable[base + 3] << 8));
						const uint16_t curWord0 = (uint16_t)(currentTable[base] | (currentTable[base + 1] << 8));
						const uint16_t curWord1 = (uint16_t)(currentTable[base + 2] | (currentTable[base + 3] << 8));
						INFO_LOG(Game::Bomberman,
							"%s: cmd02 obj diff src=%s [%x] slot=%zu prev=%04x:%04x cur=%04x:%04x",
							name.c_str(), player->getName().c_str(), player->getId(),
							i, prevWord0, prevWord1, curWord0, curWord1);
					}
				}
			}
			prevTable = std::move(currentTable);
		}
	}

	// Aggressive payload trace: log the FULL cmd=01/02/03 payload the first 4
	// times we see each (player, cmd) AND any time the bytes outside the
	// player+object tables change (those trailing bytes are where items may
	// live since cmd=02 obj diff captures none). The "outside" region for
	// cmd=02 is bytes 148..163 (16 bytes after the 28-record object table);
	// for cmd=01 it is bytes 36..199 (the action lane); cmd=03 has no object
	// table so the whole post-player region matters.
	static std::map<uint64_t, uint32_t> loggedFullPayload;
	static std::map<uint64_t, std::vector<uint8_t>> lastTailPerKey;
	const uint64_t fullKey = ((uint64_t)player->getId() << 8) | command;
	uint32_t& fullCount = loggedFullPayload[fullKey];
	const size_t tailStart = (command == 2) ? 148 : 36;
	const bool haveTail = payloadSize > tailStart;
	auto& prevTail = lastTailPerKey[fullKey];
	std::vector<uint8_t> currentTail;
	if (haveTail)
		currentTail.assign(payload + tailStart, payload + payloadSize);
	const bool tailChanged = haveTail && currentTail != prevTail;
	if (fullCount < 4 || tailChanged)
	{
		const size_t cap = std::min<size_t>(payloadSize, 256);
		char hex[3 * 256 + 1] {};
		for (size_t i = 0; i < cap; i++)
			snprintf(hex + i * 3, 4, "%02x ", payload[i]);
		INFO_LOG(Game::Bomberman,
			"%s: full cmd=%02x src=%s [%x] size=%zu reason=%s bytes=%s",
			name.c_str(), command, player->getName().c_str(), player->getId(), payloadSize,
			tailChanged ? "tail_changed" : "initial", hex);
		if (fullCount < 4) fullCount++;
		prevTail = std::move(currentTail);
	}

	// Death detection by player-record byte 2.
	//
	// Empirically proven on 2026-04-27 across two captures: during all active
	// play the dying player's compact record byte 2 is 0x00; at the exact
	// moment a bomb kills them the record transitions to byte 2 = 0x04 (e.g.
	// 35780000 -> 35780400) and they immediately stop emitting live records.
	// Position bytes 0..1 keep their dying-cell value. Byte 3 carries the
	// per-frame movement/animation nibble during play (cycles 00,01,02,04,06,
	// 08) so byte 3 alone cannot encode death. Byte 2 != 0 is therefore the
	// alive/dead signal.
	//
	// We mark the SENDING player dead based on their own record (each client
	// only authors records for its own slot at offset 4 + position*4) so we
	// never falsely flag a peer due to network silence.
	if (syncState == SyncState::InGame && !battleEndSent && players.size() > 1)
	{
		const bool nowDead = state.playerRecord[2] != 0;
		const bool wasDead = (deadManBitmap & (uint8_t)(1u << playerPosition)) != 0;
		if (nowDead && !wasDead)
		{
			deadManBitmap |= (uint8_t)(1u << playerPosition);
			INFO_LOG(Game::Bomberman,
				"%s: player %s [%x] pos=%d entered dead state (rec byte2=%02x); deadMap=%02x",
				name.c_str(), player->getName().c_str(), player->getId(), playerPosition,
				state.playerRecord[2], deadManBitmap);

			// Compute alive count: all room players minus those whose bit is
			// set in deadManBitmap. Players who never sent a live record yet
			// are treated as alive so a slow joiner cannot end the match.
			uint8_t aliveBitmap = 0;
			for (Player *peer : players)
			{
				const int peerPos = getPlayerPosition(peer);
				if (peerPos < 0 || peerPos >= 8)
					continue;
				if ((deadManBitmap & (uint8_t)(1u << peerPos)) == 0)
					aliveBitmap |= (uint8_t)(1u << peerPos);
			}
			const int aliveCount = __builtin_popcount(aliveBitmap);
			if (aliveCount <= 1)
			{
				INFO_LOG(Game::Bomberman,
					"%s: alive count %d after death (alive=%02x dead=%02x); ending battle",
					name.c_str(), aliveCount, aliveBitmap, deadManBitmap);
				battleEndDecidedByDeath = true;
				noteRoundWinByDeath(deadManBitmap);
				broadcastBattleEndSequence("last_player_standing");
			}
		}
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

void BMRoom::noteActionLane(Player *player, bool active, size_t recordIndex, const uint8_t *record)
{
	if (player == nullptr)
		return;

	ActionLaneState& state = actionLaneStates[player->getId()];
	if (!active || record == nullptr)
	{
		return;
	}

	std::array<uint8_t, 6> current {};
	memcpy(current.data(), record, current.size());
	const std::array<uint8_t, 6> promotionKey = makeBombermanCmd01PromotionKey(record);
	if (state.active && state.record == current)
		return;
	if (state.hasLastPromotedRecord && state.lastPromotedRecord != promotionKey)
		state.hasLastPromotedRecord = false;

	state.active = true;
	const uint8_t currentSelector = (uint8_t)((current[2] >> 4) & 0x0f);
	state.pendingBombPromotion = ((current[3] & 0x0f) == BombermanObjectSubtypeBombUpItem)
		&& currentSelector != BombermanCmd01BombPromotionSelector;
	state.recordIndex = recordIndex;
	state.record = current;
	armSyntheticBombObject(player, recordIndex, record);
}

bool BMRoom::consumePendingBombPromotion(Player *player, size_t recordIndex, const uint8_t *record)
{
	if (player == nullptr || record == nullptr)
		return false;

	auto it = actionLaneStates.find(player->getId());
	if (it == actionLaneStates.end())
		return false;

	ActionLaneState& state = it->second;
	if (!state.active || !state.pendingBombPromotion || state.recordIndex != recordIndex)
		return false;

	std::array<uint8_t, 6> current {};
	memcpy(current.data(), record, current.size());
	const uint8_t currentSelector = (uint8_t)((current[2] >> 4) & 0x0f);
	const std::array<uint8_t, 6> promotionKey = makeBombermanCmd01PromotionKey(record);
	if (state.record != current)
		return false;
	// Fresh logs show the first real bomb-arm edge arrives as selector 4 -> 5,
	// while later lingering selector-0 forms of the same action can be
	// re-observed for seconds afterward. Keep the initial edge and stop
	// re-promoting the stale selector-0 form.
	if (currentSelector != 4)
		return false;
	if (state.hasLastPromotedRecord && state.lastPromotedRecord == promotionKey)
		return false;

	state.pendingBombPromotion = false;
	state.hasLastPromotedRecord = true;
	state.lastPromotedRecord = promotionKey;
	return true;
}

bool BMRoom::buildAggregatedLivePayload(uint8_t command, const uint8_t *payload, size_t payloadSize,
	std::vector<uint8_t>& output, uint8_t& slotMask, uint8_t& actionMask) const
{
	output.clear();
	slotMask = 0;
	actionMask = 0;
	if (payload == nullptr || command < 1 || command > 3)
		return false;

	// Commands 0x01/0x02/0x03 all begin with command+word followed by 8 compact
	// player records. The current hardware dumps show raw client packets only
	// populate the sender's slot, while the binary receive paths parse all 8.
	constexpr size_t livePlayerRecordsOffset = 4;
	constexpr size_t livePlayerRecordSize = 4;
	constexpr size_t livePlayerRecordCount = 8;
	constexpr size_t actionRecordsOffset = 40;
	constexpr size_t actionRecordSize = 6;
	constexpr size_t actionRecordCount = 24;
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

		if (command == 1 && payloadSize >= actionRecordsOffset + actionRecordCount * actionRecordSize)
		{
			const auto actionIt = actionLaneStates.find(subject->getId());
			if (actionIt != actionLaneStates.end() && actionIt->second.active
				&& actionIt->second.recordIndex < actionRecordCount)
			{
				const size_t actionOffset = actionRecordsOffset
					+ actionIt->second.recordIndex * actionRecordSize;
				memcpy(output.data() + actionOffset, actionIt->second.record.data(), actionRecordSize);
				actionMask |= (uint8_t)(1u << playerPosition);
			}
		}
	}

	return writtenSlots > 1;
}

bool BMRoom::shouldSelfDispatchAggregatedCmd01(Player *player, const uint8_t *payload, size_t payloadSize,
	const uint8_t *aggregatePayload, size_t aggregatePayloadSize)
{
	constexpr size_t actionRecordsOffset = 40;
	constexpr size_t actionRecordSize = 6;
	constexpr size_t actionRecordCount = 24;
	constexpr size_t actionTableSize = actionRecordCount * actionRecordSize;

	if (player == nullptr || payload == nullptr || aggregatePayload == nullptr)
		return false;
	if (payloadSize < actionRecordsOffset + actionTableSize
		|| aggregatePayloadSize < actionRecordsOffset + actionTableSize)
	{
		return false;
	}

	const uint8_t *sourceActionTable = payload + actionRecordsOffset;
	const uint8_t *aggregateActionTable = aggregatePayload + actionRecordsOffset;
	return memcmp(sourceActionTable, aggregateActionTable, actionTableSize) != 0;
}

bool BMRoom::hasSyntheticBombObjects() const
{
	if (!BombermanSyntheticObjectInjectionEnabled)
		return false;
	return std::any_of(syntheticBombObjects.begin(), syntheticBombObjects.end(),
		[](const SyntheticBombObject& object) { return object.active; });
}

bool BMRoom::applySyntheticBombObjectsToPayload(uint8_t *payload, size_t payloadSize)
{
	constexpr size_t objectTableOffset = 36;
	constexpr size_t objectRecordSize = 4;
	if (payload == nullptr || payloadSize < objectTableOffset + syntheticBombObjects.size() * objectRecordSize)
		return false;

	bool wrote = false;
	for (size_t i = 0; i < syntheticBombObjects.size(); i++)
	{
		SyntheticBombObject& object = syntheticBombObjects[i];
		if (!object.active)
			continue;

		const uint16_t state = (uint16_t)((object.materializePacketsRemaining > 0 ? 0xf000 : 0x2000)
			| object.compactStateLow);
		const size_t offset = objectTableOffset + i * objectRecordSize;
		write16(payload, (unsigned)offset, object.objectPosition);
		write16(payload, (unsigned)offset + 2, state);
		wrote = true;

		if (object.materializePacketsRemaining > 0)
		{
			object.materializePacketsRemaining--;
		}
		else if (object.placedPacketsRemaining > 0)
		{
			object.placedPacketsRemaining--;
		}
		else
		{
			INFO_LOG(Game::Bomberman,
				"%s: synthetic bomb object expired source=%x record=%zu position=%04x compact_low=%04x",
				name.c_str(), object.sourcePlayerId, i, object.objectPosition, object.compactStateLow);
			object.active = false;
		}
	}
	return wrote;
}

void BMRoom::armSyntheticBombObject(Player *player, size_t recordIndex, const uint8_t *record)
{
	if (player == nullptr || record == nullptr || recordIndex >= syntheticBombObjects.size())
		return;

	const uint16_t objectPosition = read16(record, 0);
	const uint8_t actionSubtype = (uint8_t)(record[3] & 0x0f);
	if (!BombermanSyntheticObjectInjectionEnabled)
	{
		INFO_LOG(Game::Bomberman,
			"%s: observed cmd=01 action source=%s [%x] record=%zu action=%02x%02x%02x%02x%02x%02x action_subtype=%x object=%04x; synthetic object injection disabled after f002/f00e item-card falsification",
			name.c_str(), player->getName().c_str(), player->getId(), recordIndex,
			record[0], record[1], record[2], record[3], record[4], record[5],
			actionSubtype, objectPosition);
		return;
	}
	SyntheticBombObject& object = syntheticBombObjects[recordIndex];
	if (object.active && object.sourcePlayerId == player->getId()
		&& object.objectPosition == objectPosition && object.compactStateLow == BombermanSyntheticBombCompactLow)
	{
		return;
	}

	object.active = true;
	object.sourcePlayerId = player->getId();
	object.objectPosition = objectPosition;
	object.compactStateLow = BombermanSyntheticBombCompactLow;
	object.materializePacketsRemaining = BombermanSyntheticBombMaterializePackets;
	object.placedPacketsRemaining = BombermanSyntheticBombPlacedPackets;

	INFO_LOG(Game::Bomberman,
		"%s: armed synthetic bomb from cmd=01 action source=%s [%x] record=%zu action=%02x%02x%02x%02x%02x%02x action_subtype=%x%s object=%04x low=%04x",
		name.c_str(), player->getName().c_str(), player->getId(), recordIndex,
		record[0], record[1], record[2], record[3], record[4], record[5],
		actionSubtype, actionSubtype == BombermanObjectSubtypeBombUpItem ? " (bomb-up item in 22_15-57-44)" : "",
		objectPosition, object.compactStateLow);
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
	const uint16_t objectState = (uint16_t)((materializeStage ? 0xf000 : 0x2000) | BombermanSyntheticBombCompactLow);
	const char *stageName = materializeStage ? "materialize_state_f" : "update_state_2";
	write16(payload.data(), (int)objectOffset, objectPosition);
	write16(payload.data(), (int)objectOffset + 2, objectState);

	for (Player *recipient : players)
	{
		Packet packet;
		packet.init(Packet::REQ_CHAT);
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

	// 2026-04-27 (evening): hardware test 09:51:53 showed FARKUS2 ACKed
	// cmd=16 -> server sent cmd=19, but FARKUS2 never emitted the cmd=10
	// client signal. The prior version only advanced from
	// SettledDeadBits, so cmd=15 was never sent to FARKUS2 -> 60 sec
	// later both clients timed out (the user-visible "line disconnected").
	// Advance from CompletedDeadBits on the cmd=19 ACK as well so the
	// protocol does not depend on the cmd=10 client-signal arriving
	// reliably from every client.
	if (syncState == SyncState::InGame && battleEndSent
		&& (state.battleEndPhase == BattleEndPhase::SettledDeadBits
			|| state.battleEndPhase == BattleEndPhase::CompletedDeadBits))
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
		// Use the duration derived from the 9-byte rule blob so the client's
		// local timer and the server's match-end timer fire together.
		const uint32_t matchSeconds = matchDurationSeconds();
		const uint32_t endFrame = matchSeconds * BombermanGameFramesPerSecond;
		INFO_LOG(Game::Bomberman, "%s: match duration derived from rules[0]=%02x -> %u sec (%u frames)",
			name.c_str(), rules[0], matchSeconds, endFrame);
		broadcastGameTimeInfo("post_map_exchange", 0, endFrame, 0);
		startMatchEndTimer(endFrame);
	}
}

void BMRoom::prepareNextRoundFromPostEndFlow(Player *player, uint8_t command)
{
	if (player == nullptr || syncState != SyncState::InGame || !battleEndSent)
		return;
	if (command != 0x4 && command != 0x5 && command != 0x1a && command != 0x1b)
		return;

	// Multi-round battle handling. If the just-ended round was death-decided
	// AND the winner has reached pointsToWinSet() round wins, the BATTLE SET
	// is over — we expect the winner's cmd=0xc rule-sync to drop both
	// clients back to the rules screen via resetForPostMatchRoom. If the
	// round was death-decided but we're still mid-battle-set (the winner
	// has not hit the target win count), let the regular next-round recycle
	// run; both clients will go through their per-round results screen and
	// then load the next map.
	if (battleEndDecidedByDeath && isBattleSetComplete())
	{
		INFO_LOG(Game::Bomberman,
			"%s: ignoring next-round prep cmd=%02x from %s [%x]; battle set complete, awaiting post-match rule sync",
			name.c_str(), command, player->getName().c_str(), player->getId());
		return;
	}

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
	lastObjectTablePerPlayer.clear();
	actionLaneStates.clear();
	syntheticBombObjects = {};
	bombProbe = {};
	deadManBitmap = 0;
	battleEndDecidedByDeath = false;

	INFO_LOG(Game::Bomberman,
		"%s: post-end round reset from %s [%x] cmd=%02x; waiting for next map-complete marker; wins=[%u %u %u %u %u %u %u %u]/%u",
		name.c_str(), player->getName().c_str(), player->getId(), command,
		winCounts[0], winCounts[1], winCounts[2], winCounts[3],
		winCounts[4], winCounts[5], winCounts[6], winCounts[7],
		pointsToWinSet());
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
	(void)player;
	(void)reason;
}

void BMRoom::broadcastInGameLiveness(const char *reason) const
{
	(void)reason;
}

void BMRoom::startInGameLiveness()
{
}

void BMRoom::stopInGameLiveness()
{
	timer.cancel();
}

void BMRoom::handleInGameLivenessTimer(const std::error_code& ec)
{
	(void)ec;
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
		INFO_LOG(Game::Bomberman, "%s: battle end ack (%s) from %s [%x] cmd=16 -> cmd=19 deadMap=%02x",
			name.c_str(), reason != nullptr ? reason : "acked", player->getName().c_str(),
			player->getId(), deadManBitmap);
		state.battleEndPhase = BattleEndPhase::CompletedDeadBits;
		player->notifyRoomOnAck();
		// 2026-04-27: revert to value=0 alongside cmd=16 revert; deadManBitmap is
		// always 0 with detection disabled, so this line currently produces the
		// same wire result as the prior literal-0 form, but keeps the symbolic
		// link in place for the eventual proven-byte fix.
		sendBattleStateCommandTo(player, 0x19, deadManBitmap, "completed_dead_bits");
		break;

	case BattleEndPhase::CompletedDeadBits:
		INFO_LOG(Game::Bomberman, "%s: battle end completion (%s) from %s [%x] cmd=19 -> cmd=15+17",
			name.c_str(), reason != nullptr ? reason : "acked", player->getName().c_str(), player->getId());
		state.battleEndPhase = BattleEndPhase::FinalState;
		sendBattleStateCommandTo(player, 0x15, 0, "final_state");
		// 2026-04-27: cmd=0x17 is paired with cmd=0x15 in the post-end recap
		// path. The client receiver `FUN_8c093a64 -> FUN_8c098656` constructs a
		// 4-byte client-to-server packet (cmd 0x10 or 0x0f depending on
		// context) when it receives 0x17, so this is the "advance the recap
		// state machine" nudge that the original Hudson server presumably
		// sent. Without it, the client's recap UI ("1 point match" / "3 point
		// match" overlay) appears to stall indefinitely between rounds in a
		// multi-round battle and at the end of a match. cmd=0x17 carries one
		// 32-bit value; the receiver passes it through as-is.
		sendBattleStateCommandTo(player, 0x17, deadManBitmap, "recap_advance");
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

void BMRoom::handleBattleEndClientSignal(Player *player, uint16_t word, uint32_t tail)
{
	if (player == nullptr || syncState != SyncState::InGame || !battleEndSent)
		return;

	refreshSyncPlayers();
	SyncPlayerState& state = syncPlayers[player->getId()];
	if (state.battleEndPhase != BattleEndPhase::CompletedDeadBits)
		return;

	INFO_LOG(Game::Bomberman, "%s: battle end client progression from %s [%x] word=%04x tail=%08x",
		name.c_str(), player->getName().c_str(), player->getId(), word, tail);
	advanceBattleEndSequence(player, state, "client_signal");
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
	// 2026-04-27: deadManBitmap is currently always 0 because the staleness-based
	// detection was reverted (false-positive on idle clients and animation
	// pauses). Restore value=0 to match the prior stable shape until the real
	// dead-state byte is proven. The deadManBitmap field stays in place so the
	// next iteration can wire the proven byte without further plumbing.
	INFO_LOG(Game::Bomberman, "%s: battle end transition (%s) -> %s [%x] cmd=16 deadMap=%02x",
		name.c_str(), reason != nullptr ? reason : "end", player->getName().c_str(), player->getId(),
		deadManBitmap);
	player->notifyRoomOnAck();
	sendBattleStateCommandTo(player, 0x16, deadManBitmap, "settled_dead_bits");
}

uint32_t BMRoom::pointsToWinSet() const
{
	// rules[2] is the "points to win the battle set" value (user-confirmed
	// 2026-04-27: rules[2]=0x01 -> 1-point match). Treat 0 as "no rule
	// configured" and fall back to 1 so a sensible default still applies.
	const uint32_t value = rules[2];
	return value == 0 ? 1u : value;
}

bool BMRoom::isBattleSetComplete() const
{
	const uint32_t target = pointsToWinSet();
	for (uint32_t wins : winCounts)
	{
		if (wins >= target)
			return true;
	}
	return false;
}

void BMRoom::noteRoundWinByDeath(uint8_t deadBitmap)
{
	// Identify the surviving slot(s). With 2-player matches there is
	// exactly one survivor; with 4-player Battle Royale style matches the
	// last-standing slot is the winner of the round.
	int winnerPos = -1;
	for (Player *peer : players)
	{
		const int peerPos = getPlayerPosition(peer);
		if (peerPos < 0 || peerPos >= 8)
			continue;
		if ((deadBitmap & (uint8_t)(1u << peerPos)) == 0)
		{
			if (winnerPos == -1)
				winnerPos = peerPos;
			else
			{
				// More than one survivor — likely a draw, do not award a
				// round win. (Fall through and just log.)
				INFO_LOG(Game::Bomberman,
					"%s: round end with multiple survivors (deadMap=%02x); no win awarded",
					name.c_str(), deadBitmap);
				return;
			}
		}
	}
	if (winnerPos < 0)
		return;
	winCounts[winnerPos]++;
	INFO_LOG(Game::Bomberman,
		"%s: round won by pos=%d wins=%u/%u deadMap=%02x",
		name.c_str(), winnerPos, winCounts[winnerPos], pointsToWinSet(), deadBitmap);
	if (isBattleSetComplete())
	{
		INFO_LOG(Game::Bomberman,
			"%s: battle set complete (pos=%d hit %u points); awaiting cmd=0xc rule sync from clients",
			name.c_str(), winnerPos, pointsToWinSet());
	}
}

uint32_t BMRoom::matchDurationSeconds() const
{
	// Empirical mapping derived from the 2026-04-27 hardware test. The user
	// reported a ~60 sec gap between the client showing 0:00 and the server
	// firing the match-end timer while the server was hardcoded to 180 sec
	// (3 min). The captured rule blob byte 0 was 0x00. Conventional
	// Bomberman Online time options are 2 / 3 / 5 minutes; the natural
	// mapping (0 -> 2 min, 1 -> 3 min, 2 -> 5 min) reconciles the 60 sec
	// discrepancy precisely. UNVERIFIED for rules[0] values other than 0;
	// will be confirmed on the next test by comparing client 0:00 timing to
	// server `match_timer_expired` log entry.
	switch (rules[0]) {
	case 0: return 2u * 60u;
	case 1: return 3u * 60u;
	case 2: return 5u * 60u;
	default: return 3u * 60u;
	}
}

void BMRoom::resetForPostMatchRoom(const char *reason)
{
	// Triggered when the match ended by a kill and one of the clients is
	// already back at the rules screen (cmd=0xc rule sync arrived while
	// battleEndSent). Bring both clients onto the same rules-screen path so
	// they don't desync into "loading new map" vs "waiting in room".
	INFO_LOG(Game::Bomberman,
		"%s: post-match room reset (%s); battleEndSent=%d battleEndDecidedByDeath=%d deadMap=%02x",
		name.c_str(), reason != nullptr ? reason : "post_match", battleEndSent ? 1 : 0,
		battleEndDecidedByDeath ? 1 : 0, deadManBitmap);

	cancelPostMatchSafetyTimer();
	stopInGameLiveness();
	stopMatchEndTimer();
	refreshSyncPlayers();
	for (auto& [id, state] : syncPlayers)
	{
		state.startAcked = false;
		state.postMapMarkerSeen = false;
		state.battleEndPhase = BattleEndPhase::None;
		// Keep rulesAccepted as the players were just in-game with rules set;
		// the upcoming rule blob broadcast will let them re-confirm.
	}
	syncState = SyncState::ReadyToStart;
	gameTimeInfoSent = false;
	battleEndSent = false;
	liveSlotRefreshSent = false;
	awaitingPostEndMapMarker = false;
	livePlayerStates.clear();
	lastObjectTablePerPlayer.clear();
	actionLaneStates.clear();
	syntheticBombObjects = {};
	bombProbe = {};
	deadManBitmap = 0;
	battleEndDecidedByDeath = false;
	liveTickCounter = 0;
	winCounts = {};

	// Re-broadcast room/rule state so the loser (who may have been moving
	// down the next-round path with cmd=04/0f) sees the room is back to
	// the rules screen instead.
	broadcastOccupiedSlotMask("post_match_room");
	broadcastRuleBlob("post_match_room", 0x8000);
	broadcastOwnerKeyholderSync("post_match_room");
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

	// Safety net for the battle-set-complete -> back-to-room transition.
	// Normal flow: surviving client emits cmd=0xc rule sync after watching
	// its results screen (~19 sec in 09:21 capture); the cmd=0xc handler
	// then drives resetForPostMatchRoom. If for any reason cmd=0xc never
	// arrives (e.g. client gets stuck), this safety timer drives the
	// reset 30 sec after the cmd=15 send so both clients still converge
	// on the rules screen instead of timing out into "line disconnect".
	// Cancelled by resetForPostMatchRoom on the natural path.
	if (battleEndDecidedByDeath && isBattleSetComplete())
		armPostMatchSafetyTimer(30, reason);
}

void BMRoom::armPostMatchSafetyTimer(uint32_t seconds, const char *reason)
{
	cancelPostMatchSafetyTimer();
	postMatchSafetyTimer.expires_after(std::chrono::seconds(seconds));
	postMatchSafetyTimer.async_wait(
		std::bind(&BMRoom::handlePostMatchSafetyTimer, this, asio::placeholders::error));
	INFO_LOG(Game::Bomberman, "%s: post-match safety timer armed (%s) for %u sec",
		name.c_str(), reason != nullptr ? reason : "battle_set_complete", seconds);
}

void BMRoom::cancelPostMatchSafetyTimer()
{
	postMatchSafetyTimer.cancel();
}

void BMRoom::handlePostMatchSafetyTimer(const std::error_code& ec)
{
	if (ec)
		return; // cancelled or destroyed
	if (!battleEndSent || !battleEndDecidedByDeath || !isBattleSetComplete())
	{
		// State changed under us; the natural cmd=0xc path already handled it.
		return;
	}
	INFO_LOG(Game::Bomberman,
		"%s: post-match safety timer fired - cmd=0xc rule sync did not arrive within 30 sec; driving room reset",
		name.c_str());
	resetForPostMatchRoom("safety_timer");
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
					// Surviving player sends cmd=0xc rule sync after a death-
					// decided round end. In a 1-point match this means the
					// battle set is over and we should reset to the rules
					// screen. In a multi-round battle (e.g. 3-of-5) the
					// cmd=0xc on non-final rounds is just a recap-screen
					// handshake — the round still needs to recycle. Only
					// reset to rules screen when the battle set is actually
					// complete (some slot has reached pointsToWinSet).
					if (room->isBattleEndSent() && room->isBattleSetComplete())
						room->resetForPostMatchRoom("post_battle_rule_sync");
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
				if (room != nullptr)
					room->handleBattleEndClientSignal(player, word, tail);
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
				// Map-block + tick probe: items appear visually but never show
				// up in cmd=02 obj diffs. The map block (cmd=1a/1b/0xd/0xe/5)
				// is the most likely carrier for soft-block / item updates.
				// Log full payload on first observation per (player, cmd) and
				// on any mid-game payload change so we capture the byte-level
				// difference at the moment a brick is destroyed and an item
				// appears.
				if (cmd.command == 0x05 || cmd.command == 0x0d || cmd.command == 0x0e
					|| cmd.command == 0x1a || cmd.command == 0x1b)
				{
					static std::map<uint64_t, uint32_t> mapProbeCount;
					static std::map<uint64_t, std::vector<uint8_t>> lastMapPayload;
					const uint64_t mapKey = ((uint64_t)player->getId() << 8) | cmd.command;
					uint32_t& cnt = mapProbeCount[mapKey];
					auto& prev = lastMapPayload[mapKey];
					std::vector<uint8_t> cur(data + 0x10, data + 0x10 + payloadSize);
					const bool changed = prev != cur;
					if (cnt < 6 || changed)
					{
						const size_t cap = std::min<size_t>(payloadSize, 256);
						char hex[3 * 256 + 1] {};
						for (size_t i = 0; i < cap; i++)
							snprintf(hex + i * 3, 4, "%02x ", data[0x10 + i]);
						INFO_LOG(Game::Bomberman,
							"%s: map probe cmd=%02x src=%s [%x] size=%zu reason=%s bytes=%s",
							player->getName().c_str(), cmd.command, player->getName().c_str(),
							player->getId(), payloadSize, changed ? "changed" : "initial", hex);
						if (cnt < 6) cnt++;
						prev = std::move(cur);
					}
				}
				const uint16_t word = len >= 0x14 ? read16(data, 0x12) : 0;
				const uint32_t payload0 = len >= 0x18 ? read32(data, 0x14) : 0;
				size_t activeCmd01RecordIndex = 0;
				const uint8_t *activeCmd01Record = nullptr;
				const bool activeCmd01Lane = cmd.command == 0x1
					&& findActiveBombermanCmd01Record(&data[0x10], payloadSize, activeCmd01RecordIndex, activeCmd01Record);
				if (room != nullptr)
					room->prepareNextRoundFromPostEndFlow(player, (uint8_t)cmd.command);
				if (room != nullptr)
					room->noteActionLane(player, activeCmd01Lane, activeCmd01RecordIndex, activeCmd01Record);
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
						const bool liveCmd = cmd.command >= 0x1 && cmd.command <= 0x3;
						const uint8_t rawLiveSlotMask = liveCmd
							? getBombermanLiveSlotMask(&data[0x10], payloadSize)
							: 0;
						const uint8_t *relayPayload = &data[0x10];
						size_t relayPayloadSize = payloadSize;
						std::vector<uint8_t> promotedCmd01Payload;
						const uint8_t *promotedCmd01Record = nullptr;
						uint8_t previousCmd01Selector = 0;
						uint8_t promotedCmd01Selector = 0;
						std::vector<uint8_t> objectMergedPayload;
						static std::map<uint32_t, uint32_t> bombPromotionTraceBudget;
						if (cmd.command == 0x1 && activeCmd01Lane)
						{
							if (room != nullptr
								&& room->consumePendingBombPromotion(player, activeCmd01RecordIndex, activeCmd01Record)
								&& buildPromotedBombermanCmd01Payload(&data[0x10], payloadSize,
								activeCmd01RecordIndex, activeCmd01Record, promotedCmd01Payload,
								previousCmd01Selector, promotedCmd01Selector))
							{
								relayPayload = promotedCmd01Payload.data();
								relayPayloadSize = promotedCmd01Payload.size();
								getBombermanCmd01RecordAt(relayPayload, relayPayloadSize,
									activeCmd01RecordIndex, promotedCmd01Record);
								bombPromotionTraceBudget[player->getId()] = 18;
								INFO_LOG(Game::Bomberman,
									"%s: promoting cmd=01 action idx=%zu selector=%x->%x record=%02x%02x%02x%02x%02x%02x",
									player->getName().c_str(), activeCmd01RecordIndex,
									previousCmd01Selector, promotedCmd01Selector,
									activeCmd01Record[0], activeCmd01Record[1], activeCmd01Record[2],
									activeCmd01Record[3], activeCmd01Record[4], activeCmd01Record[5]);
								if (promotedCmd01Record != nullptr)
								{
									INFO_LOG(Game::Bomberman,
										"%s: promoted cmd=01 outbound idx=%zu record=%02x%02x%02x%02x%02x%02x",
										player->getName().c_str(), activeCmd01RecordIndex,
										promotedCmd01Record[0], promotedCmd01Record[1], promotedCmd01Record[2],
										promotedCmd01Record[3], promotedCmd01Record[4], promotedCmd01Record[5]);
								}
							}
						}
						if (cmd.command == 0x2 && room->hasSyntheticBombObjects())
						{
							objectMergedPayload.assign(&data[0x10], &data[0x10] + payloadSize);
							if (room->applySyntheticBombObjectsToPayload(objectMergedPayload.data(),
								objectMergedPayload.size()))
							{
								relayPayload = objectMergedPayload.data();
								relayPayloadSize = objectMergedPayload.size();
							}
						}
						if (liveCmd)
						{
							// Binary receive path 0x8C093FDC applies live cmd 01/02/03 as
							// server-command traffic, not as peer REQ_GAME_DATA relays.
							relayPacket.init(Packet::REQ_CHAT);
							// Preserve the original sender id for live-state traffic instead
							// of rewriting it to the recipient-local player id.
							write32(relayPacket.data, relayPacket.startOffset + 4, player->getId());
						}
						else
						{
							relayPacket.init(Packet::REQ_GAME_DATA);
							relayPacket.flags |= Packet::FLAG_RELAY;
							if (flags & Packet::FLAG_RUDP)
								relayPacket.flags |= Packet::FLAG_RUDP;
							write32(relayPacket.data, relayPacket.startOffset + 4, player->getId());
						}
						if (liveCmd)
						{
							static std::map<uint64_t, uint32_t> loggedRawLiveRelays;
							const uint64_t rawLogKey = ((uint64_t)player->getId() << 32)
								| ((uint64_t)cmd.command << 16) | rawLiveSlotMask;
							uint32_t& rawLogCount = loggedRawLiveRelays[rawLogKey];
							if (rawLogCount < 6)
							{
								INFO_LOG(Game::Bomberman,
									"%s: live raw relay cmd=%02x source=%x slots=%02x size=%zu",
									player->getName().c_str(), cmd.command, player->getId(), rawLiveSlotMask,
									relayPayloadSize);
								rawLogCount++;
							}
							uint32_t& traceBudget = bombPromotionTraceBudget[player->getId()];
							if (traceBudget > 0)
							{
								if (cmd.command == 0x1)
								{
									const uint8_t *traceRecord = nullptr;
									const bool haveTraceRecord = activeCmd01Lane
										? getBombermanCmd01RecordAt(relayPayload, relayPayloadSize,
											activeCmd01RecordIndex, traceRecord)
										: false;
									INFO_LOG(Game::Bomberman,
										"%s: trace cmd=01 budget=%u slots=%02x active=%s idx=%zu inbound=%02x%02x%02x%02x%02x%02x outbound=%02x%02x%02x%02x%02x%02x",
										player->getName().c_str(), traceBudget, rawLiveSlotMask,
										activeCmd01Lane ? "yes" : "no", activeCmd01RecordIndex,
										activeCmd01Lane ? activeCmd01Record[0] : 0,
										activeCmd01Lane ? activeCmd01Record[1] : 0,
										activeCmd01Lane ? activeCmd01Record[2] : 0,
										activeCmd01Lane ? activeCmd01Record[3] : 0,
										activeCmd01Lane ? activeCmd01Record[4] : 0,
										activeCmd01Lane ? activeCmd01Record[5] : 0,
										haveTraceRecord ? traceRecord[0] : 0,
										haveTraceRecord ? traceRecord[1] : 0,
										haveTraceRecord ? traceRecord[2] : 0,
										haveTraceRecord ? traceRecord[3] : 0,
										haveTraceRecord ? traceRecord[4] : 0,
										haveTraceRecord ? traceRecord[5] : 0);
								}
								else
								{
									const uint16_t traceWord = relayPayloadSize >= 2 ? read16(relayPayload, 0) : 0;
									const uint32_t traceHead = relayPayloadSize >= 4 ? read32(relayPayload, 0) : 0;
									INFO_LOG(Game::Bomberman,
										"%s: trace cmd=%02x budget=%u slots=%02x word=%04x head=%08x size=%zu",
										player->getName().c_str(), cmd.command, traceBudget,
										rawLiveSlotMask, traceWord, traceHead, relayPayloadSize);
								}
								traceBudget--;
							}
						}
						const bool relayPayloadChanged = relayPayloadSize != payloadSize
							|| relayPayload != &data[0x10]
							|| memcmp(relayPayload, &data[0x10], relayPayloadSize) != 0;
						relayPacket.writeData(relayPayload, (int)relayPayloadSize);
						const bool selfDispatchCmd01 = room != nullptr
							&& cmd.command == 0x1
							&& activeCmd01Lane
							&& relayPayloadChanged;
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
						if (selfDispatchCmd01)
						{
							Packet selfPacket;
							selfPacket.init(Packet::REQ_CHAT);
							write32(selfPacket.data, selfPacket.startOffset + 4, player->getId());
							selfPacket.writeData(relayPayload, (int)relayPayloadSize);
							player->send(selfPacket);
							const uint8_t *selfEchoRecord = nullptr;
							const bool haveSelfEchoRecord = getBombermanCmd01RecordAt(relayPayload,
								relayPayloadSize, activeCmd01RecordIndex, selfEchoRecord);
							if (haveSelfEchoRecord)
							{
								INFO_LOG(Game::Bomberman,
									"%s: cmd=01 self-echo size=%zu slots=%02x idx=%zu record=%02x%02x%02x%02x%02x%02x",
									player->getName().c_str(), relayPayloadSize, rawLiveSlotMask,
									activeCmd01RecordIndex,
									selfEchoRecord[0], selfEchoRecord[1], selfEchoRecord[2],
									selfEchoRecord[3], selfEchoRecord[4], selfEchoRecord[5]);
							}
							else
							{
								INFO_LOG(Game::Bomberman,
									"%s: cmd=01 self-echo size=%zu slots=%02x idx=%zu record=unavailable",
									player->getName().c_str(), relayPayloadSize, rawLiveSlotMask,
									activeCmd01RecordIndex);
							}
						}
						else if (cmd.command == 0x1 && activeCmd01Lane && !relayPayloadChanged)
						{
							static std::map<uint32_t, uint32_t> loggedSkippedCmd01SelfEcho;
							uint32_t& skippedLogCount = loggedSkippedCmd01SelfEcho[player->getId()];
							if (skippedLogCount < 6)
							{
								INFO_LOG(Game::Bomberman,
									"%s: suppressing unchanged cmd=01 self-echo idx=%zu record=%02x%02x%02x%02x%02x%02x",
									player->getName().c_str(), activeCmd01RecordIndex,
									activeCmd01Record[0], activeCmd01Record[1], activeCmd01Record[2],
									activeCmd01Record[3], activeCmd01Record[4], activeCmd01Record[5]);
								skippedLogCount++;
							}
						}
					}
				}
				break;
			}

		default:
		{
			const size_t cap = std::min<size_t>(len, 64);
			char hex[3 * 64 + 1] {};
			for (size_t i = 0; i < cap; i++)
				snprintf(hex + i * 3, 4, "%02x ", data[i]);
			INFO_LOG(Game::Bomberman,
				"unhandled udp 11 cmd=%02x full=%04x len=%zu first64=%s",
				cmd.command, cmd.full, len, hex);
			ERROR_LOG(game, "Unhandled udp 11 command: %x (%04x)", cmd.command, cmd.full);
			dumpData(data, len);
			return false;
		}
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
		const uint32_t incomingValue = len >= 0x18 ? read32(data, 0x14) : 0;
		replyPacket.writeData(incomingValue);
		const uint8_t incomingMask = len > 0x18 ? data[0x18] : 0;
		uint8_t replyMask = incomingMask;
		if (room != nullptr)
			replyMask = room->getOccupiedSlotMask();
		static std::map<uint32_t, uint8_t> lastLoggedPingMask;
		const uint8_t incomingLowByte = (uint8_t)(incomingValue & 0xff);
		const uint8_t logValue = (uint8_t)((incomingMask << 4) | (replyMask & 0x0f));
		if (lastLoggedPingMask[player->getId()] != logValue)
		{
			lastLoggedPingMask[player->getId()] = logValue;
			INFO_LOG(Game::Bomberman, "%s: ping slot mask in=%02x out=%02x low=%02x", player->getName().c_str(),
				incomingMask, replyMask, incomingLowByte);
		}
		replyPacket.writeData(replyMask); // bitfield (8 flags), aggregated for the whole room
		break;
		}

	default:
	{
		const size_t cap = std::min<size_t>(len, 64);
		char hex[3 * 64 + 1] {};
		for (size_t i = 0; i < cap; i++)
			snprintf(hex + i * 3, 4, "%02x ", data[i]);
		INFO_LOG(Game::Bomberman,
			"unhandled udp F cmd=%02x full=%04x len=%zu first64=%s",
			cmd.command, cmd.full, len, hex);
		ERROR_LOG(game, "Unhandled udp F command: %x (%04x)", cmd.command, cmd.full);
		dumpData(data, len);
		return false;
	}
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

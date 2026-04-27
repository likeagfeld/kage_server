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
#pragma once
#include "model.h"
#include <array>
#include <filesystem>
#include <map>
#include <vector>

union UdpCommand
{
	uint16_t full;
	struct {
		uint16_t size:9;
		uint16_t command:7;
	};
};

class BMRoom : public Room
{
public:
	struct BotPlayer
	{
		uint32_t id = 0;
		std::string name;
		std::vector<uint8_t> extraData;
	};

	BMRoom(Lobby& lobby, uint32_t id, const std::string& name, uint32_t attributes, Player *owner, asio::io_context& io_context);

	void addPlayer(Player *player) override;
	bool removePlayer(Player *player) override;
	uint32_t getPlayerCount() const override;
	void createJoinRoomReply(Packet& reply, Packet& relay, Player *player) override;
	uint32_t getQueryableUserCount(const Player *requester) const override;
	void appendQueryableUsers(Packet& reply, const Player *requester) const override;
	void rudpAcked(Player *player) override;
	void sendJoinSequenceTo(Player *player);
	void broadcastHumanJoin(Player *player);

	uint32_t getHostCount() const {
		return (uint32_t)players.size();
	}
	uint32_t getBotCount() const {
		return (uint32_t)bots.size();
	}
	uint32_t getHumanSlotCount() const;
	const std::vector<BotPlayer>& getBots() const {
		return bots;
	}
	int getSlotCount(const Player *player) const;
	int getPlayerPosition(const Player *player) const;
	int getBotPosition(size_t index) const;
	uint8_t getOccupiedSlotMask() const;
	bool syncAdminBots(uint32_t desiredCount, const std::string& prefix);
	void sendRosterUpdate(const char *reason = "roster_update");

	const std::array<uint8_t, 9>& getRules() const {
		return rules;
	}
	void setRules(const uint8_t *p) {
		memcpy(rules.data(), p, rules.size());
	}
	void onRulesConfigured(Player *player, const uint8_t *p);
	void broadcastRuleBlob(const char *reason, uint16_t ruleWord) const;
	bool acceptRules(Player *player);
	bool updateRuleAcceptance(Player *player, bool accepted);
	bool beginStartBattle(Player *player);
	void notePostMapMarker(Player *player);
	void notePostMapMarker(Player *player, const char *reason);
	void prepareNextRoundFromPostEndFlow(Player *player, uint8_t command);
	bool isAwaitingPostEndMapMarker() const;
	void broadcastStartTransition(const char *reason, uint16_t startWord) const;
	bool canStartBattle() const;
	uint32_t getAcceptedRuleCount() const;
	uint32_t getStartAckCount() const;
	uint32_t getJoinedPlayerCount() const;
	const char *getSyncStateName() const;
	bool isBattleEndSent() const { return battleEndSent; }
	void resetForPostMatchRoom(const char *reason);
	uint32_t matchDurationSeconds() const;
	// rules[2] is the points-to-win count for the battle set. After a
	// player accumulates this many round wins, the battle set is over and
	// both clients return to the rules screen.
	uint32_t pointsToWinSet() const;
	void noteRoundWinByDeath(uint8_t deadBitmap);
	bool isBattleSetComplete() const;
	void armPostMatchSafetyTimer(uint32_t seconds, const char *reason);
	void cancelPostMatchSafetyTimer();
	void handlePostMatchSafetyTimer(const std::error_code& ec);
	void noteLiveGameData(Player *player, uint8_t command, const uint8_t *payload, size_t payloadSize);
	void handleBattleEndClientSignal(Player *player, uint16_t word, uint32_t tail);
	void noteActionLane(Player *player, bool active, size_t recordIndex, const uint8_t *record);
	bool consumePendingBombPromotion(Player *player, size_t recordIndex, const uint8_t *record);
	bool buildAggregatedLivePayload(uint8_t command, const uint8_t *payload, size_t payloadSize,
		std::vector<uint8_t>& output, uint8_t& slotMask, uint8_t& actionMask) const;
	bool shouldSelfDispatchAggregatedCmd01(Player *player, const uint8_t *payload, size_t payloadSize,
		const uint8_t *aggregatePayload, size_t aggregatePayloadSize);
	bool hasSyntheticBombObjects() const;
	bool applySyntheticBombObjectsToPayload(uint8_t *payload, size_t payloadSize);
	void requestBombProbe(size_t playerIndex, const char *reason);
	void tickBombProbe();
	bool isBombProbeActive() const;
	uint32_t getBombProbeTicksRemaining() const;
	void resetMatchSync();

private:
	enum class SyncState
	{
		Idle,
		RulesPending,
		ReadyToStart,
		StartPending,
		InGame,
	};

	enum class BattleEndPhase
	{
		None,
		SettledDeadBits,
		CompletedDeadBits,
		FinalState,
		Done,
	};

	struct SyncPlayerState
	{
		bool roomJoined = false;
		bool roomJoinPendingAck = false;
		bool rulesAccepted = false;
		bool startAcked = false;
		bool postMapMarkerSeen = false;
		BattleEndPhase battleEndPhase = BattleEndPhase::None;
	};

	struct LivePlayerState
	{
		bool valid = false;
		bool hasCmd02Payload = false;
		uint16_t word = 0;
		uint8_t x = 0;
		uint8_t y = 0;
		uint8_t lowNibble = 0;
		std::array<uint8_t, 4> playerRecord {};
		std::array<uint8_t, 164> cmd02Payload {};
		// Tick counter at last record observation; used to flag stale (likely
		// dead) players when other players continue updating.
		uint64_t lastUpdateTick = 0;
		bool deadByStaleness = false;
	};

	struct BombProbeState
	{
		bool active = false;
		uint32_t sourcePlayerId = 0;
		uint8_t x = 0;
		uint8_t y = 0;
		uint8_t lowNibble = 0;
		uint8_t recordIndex = 0;
		uint32_t ticksRemaining = 0;
	};

	struct ActionLaneState
	{
		bool active = false;
		bool pendingBombPromotion = false;
		bool hasLastPromotedRecord = false;
		size_t recordIndex = 0;
		std::array<uint8_t, 6> record {};
		std::array<uint8_t, 6> lastPromotedRecord {};
	};

	struct SyntheticBombObject
	{
		bool active = false;
		uint32_t sourcePlayerId = 0;
		uint16_t objectPosition = 0;
		uint16_t compactStateLow = 0;
		uint16_t materializePacketsRemaining = 0;
		uint16_t placedPacketsRemaining = 0;
	};

	void updateSlots();
	void sendUdpPacketA(Packet& packet);
	void writeRoomAttr(Packet& packet, const char attr[4]) const;
	void sendRoomAttrSyncTo(Player *player) const;
	void sendLobbyJoinEventTo(Player *recipient, const Player *subject) const;
	void sendRoomJoinEventTo(Player *recipient, const Player *subject) const;
	void sendLobbyUserSnapshotTo(Player *player) const;
	void sendUserPropTo(Player *recipient, const Player *subject, bool lobbyScoped) const;
	void sendUserStatusTo(Player *recipient, const Player *subject, bool lobbyScoped) const;
	void sendExistingOccupantsToJoiner(Player *player) const;
	void sendUserSnapshotTo(Player *player) const;
	void sendJoinInitTo(Player *player);
	void broadcastLobbyBotJoin(const BotPlayer& bot);
	void broadcastLobbyBotLeave(const BotPlayer& bot);
	void broadcastLobbyBotProp(const BotPlayer& bot);
	void broadcastLobbyUserSnapshot();
	void broadcastUserCountChange();
	void broadcastUserSnapshot();
	void broadcastBotJoin(const BotPlayer& bot);
	void broadcastBotLeave(const BotPlayer& bot);
	std::string buildBotName(const std::string& prefix, size_t index) const;
	std::vector<uint8_t> buildBotExtraData() const;
	void refreshSyncPlayers();
	bool allHumanPlayersJoined() const;
	bool allHumanPlayersAccepted() const;
	bool allPendingStartAcked() const;
	bool allPostMapMarkersSeen() const;
	bool allHumanPlayersHaveLiveState() const;
	uint32_t getPostMapMarkerCount() const;
	void armSyntheticBombObject(Player *player, size_t recordIndex, const uint8_t *record);
	void sendOwnerKeyholderSyncTo(Player *player, const char *reason) const;
	void broadcastOwnerKeyholderSync(const char *reason) const;
	void broadcastOwnerChange() const;
	void sendRuleBlobTo(Player *player, const char *reason, uint16_t ruleWord) const;
	void sendOccupiedSlotMaskTo(Player *player, const char *reason) const;
	void broadcastOccupiedSlotMask(const char *reason) const;
	void sendStartTransitionTo(Player *player, const char *reason, uint16_t startWord) const;
	void sendGameTimeInfoTo(Player *player, const char *reason, uint32_t startFrame, uint32_t endFrame, uint32_t commonFrame) const;
	void broadcastGameTimeInfo(const char *reason, uint32_t startFrame, uint32_t endFrame, uint32_t commonFrame) const;
	void sendInGameLivenessTo(Player *player, const char *reason) const;
	void broadcastInGameLiveness(const char *reason) const;
	void startInGameLiveness();
	void stopInGameLiveness();
	void handleInGameLivenessTimer(const std::error_code& ec);
	void startMatchEndTimer(uint32_t endFrame);
	void stopMatchEndTimer();
	void handleMatchEndTimer(const std::error_code& ec);
	void sendBattleStateCommandTo(Player *player, uint8_t command, uint32_t value, const char *reason) const;
	void sendBattleEndSequenceTo(Player *player, const char *reason);
	void advanceBattleEndSequence(Player *player, SyncPlayerState& state, const char *reason);
	void broadcastBattleEndSequence(const char *reason);
	void sendBombProbePacket(const char *reason);

	std::vector<int> slots;	// slots used by each player
	std::vector<BotPlayer> bots;
	asio::steady_timer timer;
	asio::steady_timer matchTimer;
	asio::steady_timer postMatchSafetyTimer;
	std::array<uint8_t, 9> rules {};
	std::map<uint32_t, SyncPlayerState> syncPlayers;
	std::map<uint32_t, LivePlayerState> livePlayerStates;
	// Last seen 28-record cmd=02 object table per source player. Used by the
	// hardware-test diff probe so item appear / disappear / bomb explode events
	// show up as logged record transitions instead of having to re-decode the
	// full table from raw dumps.
	std::map<uint32_t, std::vector<uint8_t>> lastObjectTablePerPlayer;
	std::map<uint32_t, ActionLaneState> actionLaneStates;
	std::array<SyntheticBombObject, 28> syntheticBombObjects {};
	BombProbeState bombProbe;
	SyncState syncState = SyncState::Idle;
	bool gameTimeInfoSent = false;
	bool battleEndSent = false;
	bool liveSlotRefreshSent = false;
	bool awaitingPostEndMapMarker = false;
	// Bitmap of dead players by position 0..7. Built from observed live
	// game-data records: a player whose live record stops updating while
	// other players continue updating is treated as dead. Sent as the
	// payload of cmd=0x16 on battle end so the client can pick a winner
	// instead of treating it as no-winner draw.
	uint8_t deadManBitmap = 0;
	// Monotonic counter of live-game-data observations across the room.
	// Compared against per-player lastUpdateTick to detect staleness.
	uint64_t liveTickCounter = 0;
	// Reason that caused the most recent broadcastBattleEndSequence call.
	// Used by prepareNextRoundFromPostEndFlow to suppress recycling when
	// the round was decided by deaths (so the client's results screen can
	// run rather than the server flipping back to "next round" state).
	bool battleEndDecidedByDeath = false;
	// Per-slot round wins accumulated within the current battle set.
	// Cleared on resetMatchSync (room exit) and on resetForPostMatchRoom
	// (battle set complete -> back to rules screen). NOT cleared on a
	// per-round recycle because the wins persist across rounds.
	std::array<uint32_t, 8> winCounts {};
};

class BombermanServer : public LobbyServer
{
public:
	BombermanServer(uint16_t port, asio::io_context& io_context);

	Room *addRoom(const std::string& name, uint32_t attributes, Player *owner) override;

protected:
	bool handlePacket(Player *player, const uint8_t *data, size_t len) override;

private:
	void pollAdminState(const std::error_code& ec);
	void syncAdminState();
	void writeAdminRuntimeState(const BMRoom *activeRoom) const;

	time_point joinRoomTime {};
	asio::steady_timer adminTimer;
	uint32_t desiredBotCount = 0;
	std::string desiredBotPrefix = "CPU";
	uint32_t targetRoomId = 0;
	uint32_t bombProbeCounter = 0;
	uint32_t bombProbePlayerIndex = 0;
	uint32_t lastBombProbeCounter = 0;
	bool bombProbeCounterInitialized = false;
};

# flyinghead/kage_server master vs our branch — Validation Report

**Date:** 2026-04-27
**Sources:** flyinghead's commit `8d9757f` ("bomberman improvements") + friend's notes
**Our state:** branch `Kage_serverCLAUDE`, last commit `54d1a9f`

## Summary

Flyinghead pushed a major architectural rewrite of bomberman.cpp (+803/-247 lines)
that **fundamentally changes the server design** from packet-relay to
server-side state aggregation. The friend's notes explain the WHY (28.8 kbps
modem bandwidth ceiling) and the new packet formats (CompactUser, PowerUp,
Bomb, brick map).

Our branch's work is **complementary, not redundant** — flyinghead's commit
covers: packet aggregation, mapinfo parsing, powerup state, bomb state,
brick map, room/rules state machine. Our branch's work covers: battle-end
sequence (cmd=14/15/16/17/18/19), death detection, win-count tracking,
post-match flow, match duration from rules[0], pointsToWinSet from rules[2].

Neither branch alone is complete. The right path forward is a **merge**:
adopt flyinghead's architecture as the base, then re-apply our battle-end
and post-match work on top.

---

## Per-note validation (each friend note vs binary + flyinghead's code)

### Note 1: cmd=2 — 28-item powerup list, param=0x1000 hidden, 0x2000 visible

**Status: NEW INFO, validated by flyinghead's `PowerUp` struct + `savePowerUps`.**

flyinghead has `std::array<PowerUp, 28> powerUps` and the comment in
`savePowerUps` checks `pup.param != 0x1000` to filter. Friend's "0000 1000
hidden, 0000 2000 visible" is consistent with the byte order
(`Position` is little-endian 2 bytes, `param` is read big-endian via `read16`).

We did NOT have this decoded. Add to memory.

### Note 2: 16-byte brick map at trailing end (1 bit per brick cell)

**Status: PARTIALLY KNOWN — we had `project_cmd01_board_bitmap.md` calling it
"per-cell destruct/pickup bitmap"; flyinghead clarifies it's specifically
the BRICK WALL state, not generic cell state.**

flyinghead's `saveBrickMap` aggregates via AND (`brickMap[i] &= data[i]`),
so once any client reports a brick destroyed (bit cleared), it stays
cleared. Used for both cmd=1 and cmd=2.

Update existing memory `project_cmd01_board_bitmap.md` to reflect the
narrower interpretation (brick walls, not all destruct/pickup events).

### Note 3: 5 packets/sec, 28.8 kbps modem cap, must aggregate

**Status: NEW INFO and CRITICAL.** This is the fundamental architecture
constraint we missed entirely.

Math check: 522 bytes × 8 bits × 5 Hz = 20,880 bps ≤ 28,800 baud line.
For 2 players relaying to each other, each receives 1 stream of 5 Hz × 522
bytes = 20,880 bps — fits.
For N players relaying to all others, each receives (N-1) × 20,880 bps —
breaks at N=2 already if you also need ACK headroom; clearly broken for
N≥3.

Friend's confirmation: "I tested using a timer firing at 5 Hz but the result
isn't good. it looks like it's better to reply to each packet individually
with an aggregated version".

flyinghead's implementation in `BombermanServer::handlePacket` cmd=1/2/3
cases: reads incoming, calls saveX(), then builds an aggregated `replyPacket`
via `makeCmd1Packet/makeCmd2Packet/makeCmd3Packet` and sends it back as the
reply. No relay — server is now authoritative.

This explains why our pure-relay branch may fail at N=2 with stale-ish data
and definitely fails at N≥3.

### Note 4: cmd=1 bomb array is 8 players × 3 bombs (=24 entries)

**Status: NEW INFO, validated by flyinghead's `std::array<Bomb, 24> bombs`.**

flyinghead's `saveBombState` indexes via `(pos + slot) * bombsPerPlayer + i`
where `bombsPerPlayer` is read from cmd=1A header.

### Note 5: bombs-per-player count comes from cmd=1A header at offset 0xc

**Status: NEW INFO, validated by flyinghead's `saveMapInfo`:**
```c
bombsPerPlayer = read32(data, 0xc);
```

### Note 6: cmd=1A/1B mapinfo cell list (4 bytes each: column, row, type, unknown)

**Status: NEW INFO, NOT YET IMPLEMENTED in flyinghead's code (he only
parses bombs-per-player from header).** Confirmed by reading saveMapInfo —
it reads the header and stops.

This is a future work item. Cell types per friend: 2=wall, 3=brick, 4=power-up.

### Note 7: powerups in cmd=2 ordered by row left-to-right then down

**Status: NEW INFO, NOT explicitly validated.** flyinghead just stores
them in array order from the wire and assumes the indexing matches.

### Note 8: cmd=1 timestamp at offset 0x34

**Status: NEW INFO, validated by flyinghead's `saveTimestamp`:**
```c
const int pos = getPlayerPosition(player);
if (pos >= 0)
    states[pos].cmd1Timestamp = *(const uint32_t *)data;  // data = +0x34
```

Our handler did NOT extract this; we relayed cmd=01 raw. This may
contribute to time-sync drift between players.

### Note 9: CompactUser layout — bitfield 6:5:1:4 (X:Y:axis:frac), unk, dir

**Status: NEW INFO, validated EXACTLY in flyinghead's structs:**
```c
union Position {
    struct {
        uint16_t frac:4;
        uint16_t vaxis:1;
        uint16_t y:5;
        uint16_t x:6;
    };
};
struct CompactUser {
    Position pos;
    uint8_t unk;     // 4=dead?
    uint8_t dir;     // 1=left, 2=right, 4=up, 8=down
};
```

The `unk = 4 → dead?` annotation matches our existing memory's "byte 2 = 0x04
death state" finding — but here byte 2 is the UNKNOWN byte (offset 2 of
CompactUser), which is byte index 2 of the 4-byte player record. So our
death detection via record[2] == 0x04 is consistent.

### Note 10: Server arbitration for powerup pickup

**Status: NEW INFO, NOT IMPLEMENTED.** flyinghead's `savePowerUps` has
the comment `// FIXME how to know which record is authoritative` — he hasn't
solved it either.

This is the EXACT bug we've been chasing. Server-side arbitration is the
correct fix path.

---

## Architecture comparison

| Concern                       | Our branch              | flyinghead/master        |
| ----------------------------- | ----------------------- | ------------------------ |
| cmd=1/2/3 packet model        | Relay with mutation     | Aggregate & reply        |
| Powerup state ownership       | Client-only             | Server-authoritative     |
| Brick map ownership           | Relay                   | Server-authoritative     |
| Bomb state ownership          | Relay (with promotion)  | Server-authoritative     |
| Player position tracking      | Server logs only        | Server stores per-slot   |
| cmd=14 (TIME_INFO)            | Sent at game start      | Sent when all mapInfoSent (hardcoded 3 min) |
| cmd=15/16/17/18/19 battle end | Full pipeline implemented | NOT implemented        |
| Death detection               | byte 2 == 0x04          | NOT implemented          |
| Win-count tracking            | Yes (rules[2] points)   | NOT implemented          |
| Post-match cmd=0xc reset      | Yes                     | NOT implemented          |
| Match duration from rules[0]  | Yes (2/3/5 min)         | Hardcoded `60*180` (3min) |
| cmd=01 bomb promotion         | At-relay mutation       | At-aggregate (`type==4 → 5`) |
| Roster sync (cmd=8/0xA)       | sendUdpPacketA          | sendRosterList           |
| RUdp dedup                    | Older                   | New (model.cpp)          |

### What flyinghead implemented that we'd benefit from
1. CompactUser/Position/PowerUp/Bomb structs with proper bitfields
2. Server-side aggregation for cmd=1/2/3 (the bandwidth fix)
3. Per-slot state struct (joining/rulesAccepted/mapInfoSent/cmd1Timestamp)
4. mapInfo parsing (bombs-per-player extraction)
5. broadcastReadySlotMask + broadcastKeyholder helpers
6. setRules with ruleSetter tracking
7. mapInfoSent → TIME_INFO trigger
8. RUdp dedup + ack-anywhere model.cpp change

### What we have that flyinghead doesn't
1. Battle-end pipeline: cmd=14/15/16/17/18/19 dispatcher logic
2. Death detection, win-count tracking, isBattleSetComplete
3. Post-match flow with cmd=0xc reset and 30s safety timer
4. Match duration derived from rules[0]
5. pointsToWinSet derived from rules[2]
6. cmd=0x13 client→server post-match handshake
7. cmd=01 bomb promotion at relay time (his is at aggregate time — different mechanism, same effect)

---

## Recommended path forward

**Option A: Full rebase onto flyinghead/master.**
Adopt his architecture. Re-apply our cmd=14/15/16/17/18/19 + post-match
work as new commits on top. Risk: large merge effort, our changes may
not cleanly slot into his new aggregation flow because he removed the
relay code we modified. But this is the correct long-term direction.

**Option B: Cherry-pick the structs and aggregation only.**
Pull in BMCmd, CompactUser, Position, PowerUp, Bomb, and the
make/save aggregator functions. Keep our existing battle-end pipeline.
Risk: dual-code-path complexity. Easier short-term but creates
maintenance burden.

**Option C: Stay on our branch, manually port the bandwidth-aggregation
insight only.**
Keep relay model but reduce relay frequency to 5 Hz / aggregate
on-the-fly. Risk: doesn't solve N≥3 bandwidth, doesn't give server
authority over powerups, doesn't fix item pickup.

**Recommendation: Option A**, executed in stages:
1. First, validate flyinghead's branch alone works for 2-player Battle mode
   item pickup (his test environment may have shown this). If yes, we have
   a clear "his branch works for X, our branch works for Y" picture and
   merging is the obvious move.
2. Then rebase our branch onto his master, resolving conflicts.
3. Re-apply battle-end fixes as new commits.

---

## What to do BEFORE another hardware test

1. Don't run the diagnostic test we built against our current branch yet —
   the pickup bug may simply not be present on flyinghead's branch (he has
   server-authoritative powerups).
2. Build flyinghead's branch and test it in your environment first. If
   pickup works there, the merge plan is validated and we can drop the
   diagnostic logging.
3. If pickup STILL doesn't work on flyinghead's branch, then the FIXME in
   his `savePowerUps` is real and we need to design the arbitration logic
   together.

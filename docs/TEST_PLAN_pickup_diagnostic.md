# Test Plan: Item Pickup Diagnostic (PICKUP_DIAG)

## Goal

Determine — from a single hardware test — whether `cmd=8` and `cmd=0xA`
are correctly seeding the binary's `playerStruct[+4]` field that
gates `PanelHasReached` (the item pickup gate at `0x8c089b1e`).

The test does NOT attempt a fix; it produces the data needed to build
a confident fix on the next iteration.

## Confidence

- That the test produces a definitive diagnostic: **75%**
- That the no-op behavioral changes won't introduce regressions: **99%**
- That the output uniquely identifies the broken cmd: **65%**
- That a 2nd-iteration fix gets to 90%+ confidence after this data: **70%**

## What Changed in the Code

Only **logging additions**, no behavioral changes:

1. `BMRoom::sendUdpPacketA` (cmd=0xA): logs full per-player slot table
   contents at every transmit. New log line: `PICKUP_DIAG cmd=0xA contents`.

2. `BMRoom::createJoinRoomReply` (cmd=8): logs the per-player INDEX field
   (the FIXME `p[915] [0-F]?` field) along with position, slot count,
   and owner position. New log line: `PICKUP_DIAG cmd=0x08 reply`.

No behavioral changes to packet contents. Both packets transmit
exactly what they did before.

## Pre-Test Checklist

1. Stop kageserver.exe in the GUI (per
   `C:\Users\gary\.claude\projects\D--bombermanrevivalCLAUDE\memory\feedback_restart_kageserver_after_rebuild.md`).
2. Confirm no stale kageserver process: check Task Manager.
3. Start kageserver from the GUI (already pointing at the new build).
4. Truncate the log: `> D:/bombermanrevivalCLAUDE/kage_server/logs/kageserver.log`
   to make filtering easier.

## Test Steps

1. Both Dreamcasts boot and login.
2. Both join the same room (default Normal Battle, no rules changed).
3. **Room owner** waits for joiner to appear in player list.
4. Owner starts the battle.
5. Both players place 1-2 bombs to break bricks until at least one
   item appears.
6. Each player walks over an item once (don't repeat-walk).
7. Wait until "Judge!!" overlay appears or 30 seconds pass with no
   pickup.
8. End game (let timer expire).

## What to Capture

Send back the kageserver.log lines matching:
```
grep -E "PICKUP_DIAG|cmd=01 action|cmd=02|FARKUS|FARKUS2|live record probe|tail_changed" kageserver.log
```

Specifically the analysis needs:
- All `PICKUP_DIAG cmd=0x08 reply` lines (1 per join)
- All `PICKUP_DIAG cmd=0xA contents` lines (multiple over the test)
- All `full cmd=02` dumps from when items appeared
- All `cmd=01 action source` lines (player actions)

## What the Output Will Tell Us

### Case A: cmd=0x08 sends `index=0` for player 0 and `index=1` for player 1

That's the expected slot encoding. Means cmd=8 is correctly priming
playerStruct[+4]. The bug is downstream.
**Next step**: investigate why state-9 cells aren't being reached for
walkover, or why the history slot at +0x1040 is non-zero.

### Case B: cmd=0x08 sends `index=2` or higher, or some other value

The FIXME comment was right — we're sending the wrong field. The
binary expects 0/1 but we send something else. Pickup gate fails
because top_nibble(cell[9]) (always 0 initially) != playerStruct[+4]
(some non-zero index).
**Next step**: change `getPlayerIndex(player)` to `getPlayerPosition(player)`
in the cmd=8 transmit. High-confidence fix.

### Case C: cmd=0xA `slot_indices` show wrong values

The slot index in cmd=0xA is what the binary uses to populate the
full slot table. If we're sending wrong slot indices, the binary's
slot table is wrong, and pickup gate compares wrong values.
**Next step**: investigate `getPlayerPosition` correctness.

### Case D: cmd=0x08 reply shows `slots=8` instead of `slots=1`

That's the "player occupies all slots" bug noted in the existing
FIXME comment at line 297. Each player would be assigned to all 8
slots, breaking per-player identification.
**Next step**: investigate slot allocation logic.

### Case E: Diagnostic shows cmd=8 is NEVER sent during the test session

Means cmd=8 only fires at room creation, and during the actual
battle phase, no cmd seeds playerStruct[+4]. The binary might
expect cmd=8 to be re-sent at every battle start.
**Next step**: send cmd=8 to all players at battleStart.

## Stopping Conditions

- If the log shows pickup actually working (any indication that
  inventory updated client-side): the bug is intermittent and
  NOT the playerStruct[+4] gate. Pivot to other hypothesis.
- If the test session produces no PICKUP_DIAG lines: the build
  didn't deploy correctly. Stop and restart kageserver.

## Build Verification

Build completed:
- `mingw32-make.exe -f Makefile.win` succeeded
- Linker produced `kageserver.exe`
- No new warnings introduced

## Rollback

Revert the diff with: `git revert <commit>` — diagnostic is purely
additive logging, has no functional changes.

# Test Plan: Pickup Ground-Truth Diagnostic

## Goal

In one hardware test session, capture the EXACT byte semantics of cmd=2
powerup records (28 × 4 bytes) by logging every transition with both
candidate decode interpretations side-by-side.

## Why this and not the previous "fix"

The previous commit (`2afd0b6`) implemented server-side pickup arbitration
based on flyinghead's `PowerUp` struct (bytes[0..1]=pos, bytes[2..3]=param,
0x1000=hidden, 0x2000=visible). Validation against our captured cmd=2
payloads showed:
- All non-default records have `bytes[2..3] == 00 00`, so `param` is
  always zero — the "0x1000 hidden / 0x2000 visible" claim does not match.
- The state must therefore live in `bytes[0..1]` (the "pos" word) where we
  observe varying high nibbles like `0x10..`, `0x30..`, `0x40..`.

Ghidra trace of the cmd=2 receiver `FUN_8c0ddbe4` confirms:
- bytes[0..1] are processed by `FUN_8c0dd070` as a position bitfield
  `x:6 y:5 vaxis:1 frac:4` (matches our existing live-record decoder).
- bytes[2..3] are read big-endian, then decomposed into 6 bitfields
  via `__bfswu` calls (bits [12-15], [8-11], [4-7], [3], [1-2], [0]).

But the binary's decode path doesn't tell us which field encodes
"hidden vs visible vs picked-up". Hence: ground-truth logger.

## Confidence

- That the test produces the data we need to fix pickup definitively: **85%**
- That the diagnostic doesn't break the build or behavior: **99%** (compiles
  clean, no payload mutation, only logging additions).
- That after this test we can write a confident pickup fix: **80%**.

## What changed in code (commit on top of `2afd0b6`)

`bomberman.cpp`:
- Replaced the server-side pickup arbitration in `resolvePickupsFromCmd2`
  with a **read-only diagnostic logger**. It still absorbs player positions
  to `serverPlayerCells[]` for tracking, but no longer mutates anything.
- For each cmd=2 powerup-record TRANSITION (when bytes change between
  consecutive cmd=2 packets), logs:
  - raw 4 bytes
  - prev vs curr u16 pair
  - Interp A decode (flyinghead's: pos + param)
  - Wire bits [12-15], [8-11], [4-7], [3], [1-2], [0] of bytes[2..3]
- For each cmd=1 player-position TRANSITION, logs raw bytes + decoded
  `(x, y, vaxis, frac, dir)`.
- The relay path NO LONGER mutates the cmd=2 payload — it relays the
  original bytes unchanged. So the diagnostic is risk-free.

## Pre-test checklist

1. Stop kageserver in the GUI (per
   `feedback_restart_kageserver_after_rebuild.md`).
2. Truncate the log:
   `> D:/bombermanrevivalCLAUDE/kage_server/logs/kageserver.log`
3. Restart kageserver in the GUI.

## Test steps (just one battle, ~3 min)

1. Both Dreamcasts boot and login.
2. Both join the same room (default Normal Battle, no rules changed).
3. Owner starts the battle.
4. **Both players** place 2-3 bombs each, breaking bricks until at least
   3-5 powerups appear visually on the board.
5. **Both players** walk over at least 2 powerups each (try with both
   players walking on different items).
6. End game — let timer expire.

The whole test can be ~3 minutes.

## What to capture

Send back this filtered slice of the log:

```
grep "PICKUP_DIAG" D:/bombermanrevivalCLAUDE/kage_server/logs/kageserver.log > pickup_diag.txt
```

Plus context lines from the existing `live record probe` and `full cmd=02`
entries:

```
grep -E "PICKUP_DIAG|live record probe|full cmd=02|map probe" D:/bombermanrevivalCLAUDE/kage_server/logs/kageserver.log | head -300 > pickup_full_context.txt
```

## What the output reveals

Each PICKUP_DIAG line for a cmd=2 powerup transition shows BOTH decode
interpretations, so we can identify which field changed when:

- A brick was destroyed (visual brick → empty cell + powerup possibly appearing)
- A player walked onto a powerup cell (visual powerup → consumed)

Concretely we'll look for:

- **Brick-break event**: which powerup record changes? Which field changes?
  The transition from "hidden" to "visible" is one of the 6 bitfields in
  bytes[2..3] OR the high nibble of bytes[0..1]. Whichever bit transitions
  at the moment a brick visibly breaks is the visibility flag.

- **Walkover event**: which powerup record transitions to "picked up"
  (presumably field becomes 0)? Cross-reference the powerup's decoded
  position against the player's last position (from the cmd=1 PICKUP_DIAG
  lines).

- **Fast iteration**: with both interpretations side by side, the
  "wireBits[2..3]=A=N B=N C=N..." gives us a mini truth table — only one
  of 6 bitfields will toggle on brick-break, so the answer is in 1-of-6.

## After the test

Once we know which bit encodes visibility:

1. Replace the BMPowerUp struct's `param` u16 with named bitfields matching
   the binary layout (the 6 fields).
2. Rewrite `resolvePickupsFromCmd2` to (a) flip `current.visible_field` to
   "picked up" when a player's cell matches the powerup's cell, and
   (b) actually mutate the relayed payload (unlike the diagnostic which
   discards its mutable copy).
3. Re-test with confidence ≥90% that pickup works.

## Build verification

`mingw32-make -f Makefile.win` — succeeds, links `kageserver.exe`. No
new warnings.

## Rollback

Revert this commit; the previous commit `2afd0b6` (broken arbitration)
is unchanged behind it. Easy revert path either direction.

# Pickup arbitration — binary trace findings (Option A)

## Confidence achieved: 80% (up from 70%)

Full state machine decode would require deeper tracing (estimated 3-5 more hours).
Below is what's confirmed.

## Confirmed via Ghidra (passes 314, 315, 316, 317, 318, 319, 320, 321, 322)

### cmd=2 receiver chain
- `FUN_8c0ddbe4` is the cmd=2 receiver (validated via PTR_FUN_8c094130 resolution)
- It calls `FUN_8c0dd698` once per record (28 iterations) at output offset
  `param_2 + 0x24 + N*4` for N in 0..27
- `FUN_8c0dd698` per-record processor:
  - Copies bytes[0..1] verbatim to output[+0..1] (the pos u16)
  - Reads bytes[2..3] big-endian as `uVar3` (the param u16)
  - Decomposes via 6 `__bfswu` calls into bitfields stored in output[+2..3]:
    - wire bits 12-15 → stored bits 0-3
    - wire bits 8-11  → stored bits 4-7
    - wire bits 4-7   → stored bits 8-11
    - wire bit 3      → stored bit 12
    - wire bits 1-2   → stored bits 13-14
    - wire bit 0      → stored bit 15

### Output struct location
- From cmd dispatcher `FUN_8c093fdc` SH-4 asm at 0x8c0940c8:
  ```
  mov.l @(0x4,r15),r6      ; r6 = stored param_1 (game ctx)
  mov.w 0x8c09410a,r0      ; r0 = 0x008c
  mov.l @(r0,r6),r5        ; r5 = *(ctx + 0x8c) — output struct ptr
  ```
- So `output_struct = *(game_ctx + 0x8c)`. Same pattern for cmd=1 (offset 0x88)
  and cmd=3 (offset 0x9c) — separate struct per cmd.

### State machine phases (observed in real gameplay)
From PICKUP_DIAG captures (19:44 + 20:07 tests):

| Wire param | Phase | Stored param | Meaning                              |
|------------|-------|--------------|--------------------------------------|
| `0x0000`   | 0     | `0x0000`     | uninit (before any cmd=2)            |
| `0x1000`   | 1     | `0x0001`     | HIDDEN (under brick)                 |
| `0x2000`   | 2     | `0x0002`     | APPEARING (brick destroyed)          |
| `0x3000`   | 3     | `0x0003`     | VISIBLE (ready to pick up)           |
| `0xb000`   | b     | `0x000b`     | PICKED UP (transient claim, bit 0x8) |
| `0x4000`   | 4     | `0x0004`     | CONSUMED (final, item gone)          |

**The wire-to-stored mapping is: top nibble of byte[2] → low nibble of stored u16.**
So phase = `stored_param & 0xf`.

### Unknown phases
Phases 5, 6, 7, 8, 9, a, c, d, e, f have NOT been observed in any test. These
might encode different item types (kick = 0xb? per item-type mapping in
FUN_8c085170), OR sub-states between the known phases.

## What was NOT fully traced (would push 80% → 95%)

The READER function — i.e., the binary's main game-loop function that consumes
the powerup table at `ctx[0x8c] + 0x24 + N*4` and decides "render/play
sound/skip" based on phase. Found candidates (passes 320, 321, 322):

- `FUN_8c0818c0` (3614 bytes, 6 hits at offset 0x24) — this IS a phase
  processor: line 63 `if (cVar1 == '\x02')` does compare against phase 2
  (APPEARING). Other phase comparisons exist in the function.
- `FUN_8c0812e4`, `FUN_8c080790`, `FUN_8c082cee` — also access offset 0x24

These functions are large and complex (rendering math). To fully decode the
state machine, would need to trace each `cVar1 == 'X'` comparison and what
action it triggers, then build the complete state-transition table.

## Current arbitration v3 (commit 415d0d9) confidence assessment

### Cases handled correctly
- All observed phase transitions (1→2→3→b→4)
- b → 3 regression blocked (FARKUS2 reverting picker's view)
- Phase 4 terminal (no override possible)

### Risk cases (unknown phases)
The priority table:
```c
case 0: priority 0;   case 1: priority 1;   case 2: priority 2;
case 3: priority 3;   case 0xb: priority 4; case 4: priority 5;
default: return phase;  // numeric fallback
```

Default-numeric fallback gives priorities 5, 6, 7, 8, 9, 10, 12, 13, 14, 15
to phases 5, 6, 7, 8, 9, a, c, d, e, f. If the binary's state machine has
e.g. phase 5 between phase 3 and phase b semantically, our priority of 5
(higher than known phase 4 = 5) would be incorrect.

### Empirical validation path
Run the v3 build with PICKUP_DIAG enabled. If the test produces NO unknown
phase values, we're at 95%. If unknown phases appear, log them and adjust
the priority table.

## Recommendation

**Test the v3 build (commit 415d0d9) on hardware**. The data we have is
sufficient for ALL observed cases. The risk is unknown phases that may not
exist in normal gameplay. One test will reveal whether the priority table
is complete.

If pickup STILL doesn't visually apply with v3:
- The bug is downstream of our arbitration (e.g., relay isn't reaching
  client correctly, or client expects something specific the rewrite
  drops)
- Next step: log the relay payload bytes BEFORE and AFTER our rewrite
  to verify the mutation lands correctly

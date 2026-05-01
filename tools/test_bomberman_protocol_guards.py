#!/usr/bin/env python3
"""Focused Bomberman protocol guard checks.

These are not Dreamcast emulation tests. They pin the two high-risk invariants
that caused the latest hardware symptoms:

* premature Start Battle must ACK and refresh room/rule state instead of
  silently dropping the command
* powerup pickup claim phase 0xb must become server grant phase 0xe, not direct
  board-consumed phase 0x4
"""

from __future__ import annotations

import re
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
BOMBERMAN_CPP = ROOT / "bomberman.cpp"


def require(pattern: str, source: str, label: str) -> None:
    if not re.search(pattern, source, re.DOTALL):
        raise AssertionError(f"missing guard: {label}")


def phase_priority(phase: int) -> int:
    return {
        0x0: 0,
        0x1: 1,
        0x9: 2,
        0x2: 3,
        0xA: 4,
        0x3: 5,
        0xB: 6,
        0xD: 6,
        0xE: 7,
        0x5: 8,
        0x4: 9,
        0xC: 9,
        0xF: 4,
    }.get(phase, 0)


def main() -> None:
    source = BOMBERMAN_CPP.read_text(encoding="utf-8")

    require(
        r"if \(!room->canStartBattle\(\)\).*?player->send\(replyPacket\);"
        r".*?replyPacket\.reset\(\);.*?sendPreStartGateStateTo\(player, \"start_rejected\"\)",
        source,
        "early Start Battle rejection is ACKed and room state is refreshed",
    )
    require(
        r"if \(incomingPhase == 0xb\).*?current\.param = "
        r"\(uint16_t\)\(\(current\.param & 0x0fff\) \| 0xe000\)",
        source,
        "pickup claim phase 0xb becomes server grant phase 0xe",
    )
    require(
        r"if \(cmd\.command == 0x2 && relayPayloadChanged\).*?"
        r"cmd=02 self-authoritative pickup/object echo",
        source,
        "modified cmd02 pickup payload is self-dispatched to the picker",
    )

    assert phase_priority(0x3) < phase_priority(0xB) < phase_priority(0xE) < phase_priority(0x5)
    assert phase_priority(0x4) > phase_priority(0x5)
    print("Bomberman protocol guards passed")


if __name__ == "__main__":
    main()

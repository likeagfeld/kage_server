#!/usr/bin/env python3
"""Decode captured cmd=2 payload bytes from kageserver.log to validate
flyinghead's struct interpretation against real game data.

Two competing interpretations to test:
  A. flyinghead/master:  bytes[0..1]=pos (BE), bytes[2..3]=param (BE)
  B. friend's note:      bytes[0..1]=param (BE), bytes[2..3]=pos (BE)
                         where 0x1000=hidden, 0x2000=visible
"""
import sys, re

# Dump captured from log
SAMPLE = (
    "04 a4 80 00 04 53 00 08 35 78 00 00 00 00 00 00 "
    "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 "
    "00 00 00 00 00 00 00 00 40 01 00 00 10 00 00 00 "
    "10 00 00 00 10 00 00 00 30 01 00 00 40 01 00 00 "
    "10 00 00 00 10 00 00 00 10 00 00 00 10 00 00 00 "
    "40 00 00 00 10 00 00 00 10 00 00 00 10 00 00 00 "
    "10 00 00 00 10 00 00 00 10 00 00 00 10 00 00 00 "
    "10 00 00 00 10 00 00 00 10 00 00 00 10 00 00 00 "
    "40 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 "
    "00 00 00 00 00 00 00 00 d8 73 da 39 df d4 3e ff "
    "ff ff ff ff ff ff ff ff "
)

def decode_pos_be(u16):
    """Bitfield: x:6 y:5 vaxis:1 frac:4 (LSB-first packing as gcc x86)."""
    frac = u16 & 0xf
    vaxis = (u16 >> 4) & 1
    y = (u16 >> 5) & 0x1f
    x = (u16 >> 10) & 0x3f
    return x, y, vaxis, frac

def main():
    payload = bytes.fromhex(SAMPLE.replace(" ", ""))
    print(f"Total payload size: {len(payload)} bytes (expect 0xA4 = 164)")
    print(f"Header: {payload[0:4].hex(' ')}")

    print("\n=== Player slots (offset 0x04, 8 × 4 bytes) ===")
    for slot in range(8):
        rec = payload[4 + slot * 4 : 4 + slot * 4 + 4]
        # Treat first 2 bytes as pos via BE
        u16 = (rec[0] << 8) | rec[1]
        x, y, vaxis, frac = decode_pos_be(u16)
        print(f"  slot {slot}: bytes={rec.hex(' ')}  pos_BE=0x{u16:04x}  -> x={x:2d} y={y:2d} vaxis={vaxis} frac={frac:2d}  unk=0x{rec[2]:02x} dir=0x{rec[3]:02x}")

    print("\n=== Powerup slots (offset 0x24, 28 × 4 bytes) — INTERP A: pos first ===")
    for i in range(28):
        rec = payload[0x24 + i * 4 : 0x24 + i * 4 + 4]
        if rec == b"\x00\x00\x00\x00":
            continue
        pos_u16 = (rec[0] << 8) | rec[1]
        param = (rec[2] << 8) | rec[3]
        x, y, vaxis, frac = decode_pos_be(pos_u16)
        print(f"  pup {i:2d}: bytes={rec.hex(' ')}  posU16=0x{pos_u16:04x} -> ({x},{y}) vaxis={vaxis} frac={frac}  param=0x{param:04x}")

    print("\n=== Powerup slots — INTERP B: param first (friend's note) ===")
    for i in range(28):
        rec = payload[0x24 + i * 4 : 0x24 + i * 4 + 4]
        if rec == b"\x00\x00\x00\x00":
            continue
        param = (rec[0] << 8) | rec[1]
        pos_u16 = (rec[2] << 8) | rec[3]
        x, y, vaxis, frac = decode_pos_be(pos_u16)
        label = ""
        if param == 0x1000: label = " (HIDDEN)"
        elif param == 0x2000: label = " (VISIBLE)"
        elif param == 0: label = " (PICKED UP / EMPTY)"
        print(f"  pup {i:2d}: bytes={rec.hex(' ')}  param=0x{param:04x}{label}  posU16=0x{pos_u16:04x} -> ({x},{y}) vaxis={vaxis} frac={frac}")

    print("\n=== Brick map (last 16 bytes) ===")
    bm = payload[0x94 : 0xa4]
    print(f"  raw: {bm.hex(' ')}")
    print("  bit-by-bit:")
    for i, b in enumerate(bm):
        bits = "".join(f"{(b >> bit) & 1}" for bit in range(8))
        print(f"    byte {i:2d} = 0x{b:02x} = {bits}")

if __name__ == "__main__":
    main()

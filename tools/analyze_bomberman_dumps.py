#!/usr/bin/env python3
"""Summarize Bomberman Kage netdump files.

The dump record header is:
  u64 timestamp, u8[4] endpoint IPv4, u16 endpoint port, u32 packet length.

The UDP payload is a normal Kage packet, followed by the 4-byte Kage token.
Bomberman REQ_GAME_DATA payloads start with the packed UdpCommand word:
  command = word >> 9, size = word & 0x1ff.
"""

from __future__ import annotations

import argparse
import struct
from collections import Counter, defaultdict
from pathlib import Path

REQ_CHAT = 0x0F
REQ_GAME_DATA = 0x11
FLAG_CONTINUE = 0x0800


def iter_records(path: Path):
    data = path.read_bytes()
    offset = 0
    index = 0
    while offset + 18 <= len(data):
        timestamp = struct.unpack_from("<Q", data, offset)[0]
        ip = ".".join(str(part) for part in data[offset + 8 : offset + 12])
        port = struct.unpack_from("<H", data, offset + 12)[0]
        length = struct.unpack_from("<I", data, offset + 14)[0]
        offset += 18
        payload = data[offset : offset + length]
        offset += length
        yield index, timestamp, ip, port, payload
        index += 1


def iter_chunks(packet: bytes):
    offset = 0
    while offset + 16 <= len(packet):
        flags_and_size = struct.unpack_from(">H", packet, offset)[0]
        size = flags_and_size & 0x03FF
        flags = flags_and_size & ~0x03FF
        if size < 16 or offset + size > len(packet):
            return
        msg_type = packet[offset + 3]
        source_id = struct.unpack_from(">I", packet, offset + 4)[0]
        body = packet[offset + 16 : offset + size]
        yield flags, msg_type, source_id, body
        if not (flags & FLAG_CONTINUE):
            return
        offset += size + 4


def udp_command(body: bytes):
    if len(body) < 2:
        return None
    word = struct.unpack_from(">H", body, 0)[0]
    return word >> 9, word & 0x01FF, word


def live_slot_records(body: bytes):
    if len(body) < 36:
        return []
    return [body[4 + index * 4 : 8 + index * 4] for index in range(8)]


def is_default_object_record(record: bytes) -> bool:
    return record in (b"\x00\x00\x00\x00", b"\x00\x00\x10\x00")


def summarize(path: Path):
    command_counts = Counter()
    outbound_live_by_endpoint = Counter()
    live_masks = Counter()
    live_slot_uniques = defaultdict(Counter)
    active_cmd01_records = defaultdict(Counter)
    cmd02_tables = 0
    cmd02_nondefault = 0
    cmd02_samples = []

    for index, timestamp, ip, port, packet in iter_records(path):
        for _flags, msg_type, source_id, body in iter_chunks(packet):
            parsed = udp_command(body)
            if parsed is None:
                continue
            command, size, word = parsed
            if msg_type == REQ_GAME_DATA:
                command_counts[command] += 1
                if command in (1, 2, 3):
                    slot_mask = 0
                    for slot, record in enumerate(live_slot_records(body)):
                        if any(record):
                            slot_mask |= 1 << slot
                            live_slot_uniques[(command, source_id, slot)][record.hex()] += 1
                    live_masks[(command, source_id, slot_mask)] += 1
                    outbound_live_by_endpoint[(ip, source_id, command)] += 1
                    if command == 1 and len(body) >= 40 + 24 * 6:
                        for record_index in range(24):
                            record = body[40 + record_index * 6 : 46 + record_index * 6]
                            if any(record):
                                active_cmd01_records[(source_id, record_index)][record.hex()] += 1
                    if command == 2 and len(body) >= 36 + 28 * 4:
                        cmd02_tables += 1
                        nondefault = []
                        for record_index in range(28):
                            record = body[36 + record_index * 4 : 40 + record_index * 4]
                            if not is_default_object_record(record):
                                nondefault.append((record_index, record.hex()))
                        if nondefault:
                            cmd02_nondefault += 1
                            if len(cmd02_samples) < 8:
                                cmd02_samples.append((index, timestamp, source_id, nondefault[:8]))

    print(path)
    print("REQ_GAME_DATA command counts:")
    for command, count in sorted(command_counts.items()):
        print(f"  cmd={command:02x}: {count}")

    print("Live relay endpoint/source counts:")
    for key, count in sorted(outbound_live_by_endpoint.items()):
        endpoint, source_id, command = key
        print(f"  dst={endpoint} source={source_id:08x} cmd={command:02x}: {count}")

    print("Live slot masks:")
    for (command, source_id, mask), count in live_masks.most_common(16):
        print(f"  cmd={command:02x} source={source_id:08x} mask={mask:02x}: {count}")

    print(f"cmd=02 non-default object tables: {cmd02_nondefault}/{cmd02_tables}")
    for index, timestamp, source_id, records in cmd02_samples:
        print(f"  sample record={index} t={timestamp} source={source_id:08x}: {records}")

    print("Most common live slot records:")
    rows = []
    for key, counter in live_slot_uniques.items():
        rows.append((len(counter), key, counter.most_common(6)))
    for unique_count, (command, source_id, slot), top in sorted(rows, reverse=True)[:24]:
        print(
            f"  cmd={command:02x} source={source_id:08x} slot={slot} "
            f"unique={unique_count}: {top}"
        )

    print("Active cmd=01 records:")
    rows = sorted(
        active_cmd01_records.items(),
        key=lambda item: (-sum(item[1].values()), item[0]),
    )
    for (source_id, record_index), counter in rows[:24]:
        print(
            f"  source={source_id:08x} index={record_index} "
            f"total={sum(counter.values())} unique={len(counter)}: "
            f"{counter.most_common(8)}"
        )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("dump", nargs="+", type=Path)
    args = parser.parse_args()
    for dump in args.dump:
        summarize(dump)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

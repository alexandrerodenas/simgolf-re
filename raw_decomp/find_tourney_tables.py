#!/usr/bin/env python3
"""Find pointer tables for tournament strings"""
import struct

with open('/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

tourney_str_addrs = [0x4d0c88, 0x4d0ca0, 0x4d0cb0, 0x4d0cc8, 0x4d0ce4, 0x4d0cfc, 0x4d0d14, 0x4d0d28, 0x4d0d40, 0x4d0d50, 0x4d0d6c]

# rdata section: VA 0x4bee00-0x4e4b15
rdata_start = 0x4bee00 - 0x400000
rdata_end = 0x4e4b15 - 0x400000

# Search for pointer tables in .rdata section
print("=== Searching for tournament string pointer tables ===")
for i in range(rdata_start, rdata_end - 4, 4):
    val = struct.unpack_from('<I', data, i)[0]
    if val in tourney_str_addrs:
        va = i + 0x400000
        # Read surrounding DWORDs
        neighbors = []
        for j in range(1, 10):
            nv = struct.unpack_from('<I', data, i + j*4)[0]
            ns_off = nv - 0x400000
            if 0 <= ns_off < len(data):
                chunk = data[ns_off:ns_off+40]
                null_idx = chunk.index(0) if 0 in chunk else 40
                if all(32 <= b < 127 for b in chunk[:null_idx]) and null_idx >= 4:
                    neighbors.append(f"0x{nv:08x} '{chunk[:null_idx].decode('ascii', errors='replace')}'")
                else:
                    neighbors.append(f"0x{nv:08x}")
            else:
                neighbors.append(f"0x{nv:08x}")
        s_off = val - 0x400000
        chunk = data[s_off:s_off+50]
        null_idx = chunk.index(0) if 0 in chunk else 50
        s = chunk[:null_idx].decode('ascii', errors='replace')
        print(f"\n  Pointer table at 0x{va:08x}: '{s}'")
        print(f"    +0x00: 0x{val:08x} '{s}'")
        for j, n in enumerate(neighbors[:8], 1):
            print(f"    +0x{j*4:02x}: {n}")
        break

# Broader search - sequential data that looks like tournament definitions
print("\n\n=== Looking for tournament definition arrays ===")
# Tournament definitions are likely arrays of structs with:
# { char* name; int prizePool; int entryFee; int minHoles; ... }
# Let's search for consecutive pointers to 0x4d... strings

# Find all pointers to tournament strings
str_refs = {}  # pointer_address -> string_addr
for i in range(rdata_start, rdata_end - 4, 4):
    val = struct.unpack_from('<I', data, i)[0]
    for ts in tourney_str_addrs:
        if val == ts:
            str_refs[i + 0x400000] = ts
            break

print(f"Found {len(str_refs)} direct references to tournament strings")

# Group by alignment/table (look for sequences with stride)
if str_refs:
    addrs = sorted(str_refs.keys())
    # Find consecutive references (potential table)
    for i in range(len(addrs)):
        va = addrs[i]
        s_addr = str_refs[va]
        s_off = s_addr - 0x400000
        chunk = data[s_off:s_off+50]
        null_idx = chunk.index(0) if 0 in chunk else 50
        s = chunk[:null_idx].decode('ascii', errors='replace')
        # Show neighbors (raw)
        print(f"\n  0x{va:08x}: -> 0x{s_addr:08x} '{s}'")
        for j in range(1, 12):
            nv = struct.unpack_from('<I', data, (va - 0x400000) + j*4)[0]
            print(f"    +{j*4:02x}: 0x{nv:08x}", end="")
            # Check if it's a string pointer
            ns_off = nv - 0x400000
            if 0 <= ns_off < len(data):
                chunk2 = data[ns_off:ns_off+40]
                null_idx2 = chunk2.index(0) if 0 in chunk2 else 40
                if all(32 <= b < 127 for b in chunk2[:null_idx2]) and null_idx2 >= 4:
                    print(f" '{chunk2[:null_idx2].decode('ascii', errors='replace')}'", end="")
                else:
                    print(f" [{nv:#010x}]", end="")
            print()
        print()
        if i > 2:  # Show only first few
            break

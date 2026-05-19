#!/usr/bin/env python3
"""Analyze function 0x4650ee and 0x471b72 for tournament logic"""
import struct

with open('../game_data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

# Check function at 0x4650ee - tournament-related (references 0x80d840)
print("=== Data references in 0x4650ee function ===")
# Find the function start
addr = 0x4650ee
search_start = addr - 0x2000
search_end = addr - 0x400000
func_start = addr
for i in range(addr - 0x400000, max(0x401000, addr - 0x2000) - 0x400000, -1):
    if data[i] == 0x55 and data[i+1] == 0x8B and data[i+2] == 0xEC:
        func_start = i + 0x400000
        break
    if data[i] == 0x51 and data[i+1] == 0x53 and data[i+2] == 0x56 and data[i+3] == 0x89 and data[i+4] == 0xCE:
        func_start = i + 0x400000
        break

print(f"Function starts at 0x{func_start:08x}")
print(f"Reference at 0x{addr:08x}")

# Check function at 0x471b72
print("\n=== Data references in 0x471b72 function ===")
addr = 0x471b72
for i in range(addr - 0x400000, max(0x401000, addr - 0x2000) - 0x400000, -1):
    if data[i] == 0x55 and data[i+1] == 0x8B and data[i+2] == 0xEC:
        func_start = i + 0x400000
        break
    if data[i] == 0x51 and data[i+1] == 0x53 and data[i+2] == 0x56 and data[i+3] == 0x89 and data[i+4] == 0xCE:
        func_start = i + 0x400000
        break

print(f"Function starts at 0x{func_start:08x}")

# Check the data around 0x4d1550-0x4d1620 (Leader Board, Results, Prize, Ranking, tournament names)
print("\n=== Tournament UI data (0x4d1540-0x4d1650) ===")
for off in range(0x4d1540 - 0x400000, 0x4d1650 - 0x400000, 4):
    va = off + 0x400000
    val = struct.unpack_from('<I', data, off)[0]
    # Check if bytes look like text
    chunk = data[off:off+40]
    null_idx = chunk.index(0) if 0 in chunk else 40
    if all(32 <= b < 127 for b in chunk[:null_idx]) and null_idx >= 4:
        print(f"  0x{va:08x}: \"{chunk[:null_idx].decode('ascii', errors='replace')}\"")

# Now look for Prize money and other numeric config data
# The tournament names at 0x4d0c88-0x4d0d80 are followed by what?
print("\n=== Data after tournament names (0x4d0d80-0x4d0e00) ===")
for off in range(0x4d0d80 - 0x400000, 0x4d0e00 - 0x400000, 4):
    va = off + 0x400000
    val = struct.unpack_from('<I', data, off)[0]
    chunk = data[off:off+40]
    null_idx = chunk.index(0) if 0 in chunk else 40
    if all(32 <= b < 127 for b in chunk[:null_idx]) and null_idx >= 3:
        print(f"  0x{va:08x}: \"{chunk[:null_idx].decode('ascii', errors='replace')}\"")
    elif val != 0:
        print(f"  0x{va:08x}: {val} (0x{val:x})")

# Check what 'Prize', 'Ranking' etc. are near
print("\n=== Tournament results UI data (0x4d1560-0x4d1610) ===")
for off in range(0x4d1560 - 0x400000, 0x4d1610 - 0x400000, 4):
    va = off + 0x400000
    val = struct.unpack_from('<I', data, off)[0]
    chunk = data[off:off+40]
    null_idx = chunk.index(0) if 0 in chunk else 40
    if all(32 <= b < 127 for b in chunk[:null_idx]) and null_idx >= 3:
        print(f"  0x{va:08x}: \"{chunk[:null_idx].decode('ascii', errors='replace')}\"")
    elif val != 0:
        print(f"  0x{va:08x}: {val} (0x{val:x})")

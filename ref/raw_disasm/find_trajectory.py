#!/usr/bin/env python3
"""Find the real ball trajectory simulation function"""
import struct

with open('/home/roden/simgolf-re/data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

# Search the full disassembly for functions with multiple advanced FPU ops
# and loop structures - these would be the trajectory simulation

text_start = 0x401000 - 0x400000
text_end = text_start + 754731

# Search for 'fld' (load float) near addresses where trajectory calc happens
# The ball data structure is at 0x81ca10 (88 bytes per ball)
# Let's search for references to 0x81ca10

packed = struct.pack('<I', 0x81ca10)
pos = text_start
print("References to ball data structure (0x81ca10):")
while pos < text_end:
    pos = data.find(packed, pos, text_end)
    if pos == -1:
        break
    va = pos + 0x400000
    # Find function start
    for i in range(pos - 4, pos - 0x4000, -1):
        if data[i] == 0x55 and data[i+1] == 0x8B and data[i+2] == 0xEC:
            print(f"  ref at 0x{va:08x} → func 0x{i+0x400000:08x}")
            break
        if i >= text_start and data[i] == 0x51 and data[i+1] == 0x53:
            print(f"  ref at 0x{va:08x} → thiscall func 0x{i+0x400000:08x}")
            break
    else:
        print(f"  ref at 0x{va:08x}")
    pos += 4

# Also search for sub_474440 which initializes ball data
print("\nReferences to sub_474440 (ball data init):")
packed = struct.pack('<I', 0x474440)
pos = text_start
while pos < text_end:
    pos = data.find(packed, pos, text_end)
    if pos == -1:
        break
    va = pos + 0x400000
    # Check the instruction before - it should be a call
    if pos >= 5 and data[pos-5] == 0xE8:  # call rel32
        pass  # already a call
    print(f"  call 0x474440 at 0x{va:08x}")
    pos += 4

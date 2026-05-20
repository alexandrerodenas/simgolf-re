#!/usr/bin/env python3
"""Analyze vtable at 0x4b92f4 and other top candidates from the unpacked binary."""
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
import struct

EXE_PATH = "data/exe_unpacked/golf.exe"
pe = pefile.PE(EXE_PATH)

base = pe.OPTIONAL_HEADER.ImageBase

# Find .rdata section to read vtables
for s in pe.sections:
    name = s.Name.decode("utf-8", errors="replace").strip("\x00").strip()
    if ".rdata" in name.lower():
        rdata_sec = s
        print(f".rdata: VA=0x{rdata_sec.VirtualAddress:x} Raw=0x{rdata_sec.PointerToRawData:x} Size=0x{rdata_sec.SizeOfRawData:x}")
        break

rdata_data = rdata_sec.get_data()
rdata_base = base + rdata_sec.VirtualAddress
rdata_raw = rdata_sec.PointerToRawData

# Read vtable at 0x4b92f4
vtable_addr = 0x4b92f4
offset = vtable_addr - rdata_base
print(f"\n=== VTable at 0x{vtable_addr:08x} (file offset 0x{rdata_raw + offset:x}) ===")

# Read 100 entries (400 bytes)
entries = []
for i in range(0, 0x100, 4):
    if offset + i + 4 <= len(rdata_data):
        ptr = struct.unpack_from("<I", rdata_data, offset + i)[0]
        entries.append(ptr)

print(f"First 32 entries:")
for i in range(0, min(32, len(entries))):
    ptr = entries[i]
    # Check if ptr points to .text
    in_text = 0x401000 <= ptr < 0x4b9000
    marker = "<-.text" if in_text else "<-other"
    print(f"  [{i*4:3d}] = 0x{ptr:08x} {marker}")

# Also read the vtable at 0x4b9f80
vtable2 = 0x4b9f80
offset2 = vtable2 - rdata_base
print(f"\n=== VTable at 0x{vtable2:08x} (entry[0x68] = 0x4a0000) ===")

entries2 = []
for i in range(0, 0x100, 4):
    if offset2 + i + 4 <= len(rdata_data):
        ptr = struct.unpack_from("<I", rdata_data, offset2 + i)[0]
        entries2.append(ptr)

for i in range(0, min(32, len(entries2))):
    ptr = entries2[i]
    in_text = 0x401000 <= ptr < 0x4b9000
    marker = "<-.text" if in_text else "<-other"
    print(f"  [{i*4:3d}] = 0x{ptr:08x} {marker}")

# Now let's look at the ENTIRE rdata for the most interesting vtable
# The GameState vtable should have many entries pointing to functions
# in the 0x4a0000-0x4b0000 range (our game logic area)
print(f"\n=== Searching for vtables with entries in 0x4a0000-0x4b0000 range ===")
text_start = 0x401000
text_end = 0x4b9000
game_range_start = 0x4a5000
game_range_end = 0x4b0000

candidates = []
for off in range(0, len(rdata_data) - 0x100, 4):
    vtable_rva = rdata_base + off
    
    # Check entry[0x68]
    entry68 = struct.unpack_from("<I", rdata_data, off + 0x68)[0]
    if game_range_start <= entry68 < game_range_end:
        # Check entry[0x10] and entry[0x54] are also valid
        entry10 = struct.unpack_from("<I", rdata_data, off + 0x10)[0]
        entry54 = struct.unpack_from("<I", rdata_data, off + 0x54)[0]
        if text_start <= entry10 < text_end and text_start <= entry54 < text_end:
            candidates.append((vtable_rva, entry68, entry10, entry54))

print(f"Found {len(candidates)} vtables with entry[0x68] in 0x4a5000-0x4b0000")
for vaddr, e68, e10, e54 in candidates[:10]:
    print(f"  VTable 0x{vaddr:08x} -> [0x68]=0x{e68:08x} [0x10]=0x{e10:08x} [0x54]=0x{e54:08x}")

# Also check for vtables with very many entries (likely GameState)
print(f"\n=== Large vtables (40+ consecutive valid entries) ===")
for off in range(0, len(rdata_data) - 0x200, 4):
    # Check if we have 40+ consecutive valid .text pointers
    count = 0
    for i in range(40):
        ptr = struct.unpack_from("<I", rdata_data, off + i*4)[0]
        if text_start <= ptr < text_end:
            count += 1
        else:
            break
    if count >= 35:
        vtable_addr = rdata_base + off
        # Check entry[0x68]
        if off + 0x68 + 4 <= len(rdata_data):
            e68 = struct.unpack_from("<I", rdata_data, off + 0x68)[0]
            # Check entry[0x54] 
            e54 = struct.unpack_from("<I", rdata_data, off + 0x54)[0]
            # Check entry[0x10]
            e10 = struct.unpack_from("<I", rdata_data, off + 0x10)[0]
            can68 = text_start <= e68 < text_end
            can54 = text_start <= e54 < text_end
            can10 = text_start <= e10 < text_end
            markers = []
            if can68: markers.append(f"0x68=0x{e68:08x}")
            if can54: markers.append(f"0x54=0x{e54:08x}")
            if can10: markers.append(f"0x10=0x{e10:08x}")
            print(f"  0x{vtable_addr:08x} ({count} entries) {' | '.join(markers)}")

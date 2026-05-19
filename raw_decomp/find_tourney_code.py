#!/usr/bin/env python3
"""
Find tournament-related functions in golf.exe by scanning for
code that references tournament string addresses.
"""
import pefile
import struct
from capstone import *

PE_PATH = "/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe"

pe = pefile.PE(PE_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase

# Find .text section
text_sec = None
for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name == '.text':
        text_sec = sec
        break

text_data = text_sec.get_data()
text_addr = imagebase + text_sec.VirtualAddress
text_size = len(text_data)

print(f".text: {text_size} bytes @ 0x{text_addr:08x}")

# Tournament string addresses
tourney_addrs = [
    0x4d0c88, 0x4d0ca0, 0x4d0cb0, 0x4d0cc8, 0x4d0ce4, 0x4d0cfc,
    0x4d0d14, 0x4d0d28, 0x4d0d40, 0x4d0d50, 0x4d0d6c, 0x4d15d8,
    0x4d15f0, 0x4d1608,
    0x4c6144, 0x4c616c, 0x4c5a80, 0x4c5b00, 0x4c3cf0,
    0x4c455c, 0x4c457c,
    0x4cff90, 0x4cffa8, 0x4c3128, 0x4c643c, 0x4d0aac,
    0x4cff98, 0x4cfef0, 0x4c3f5c, 0x4c5d42,
]

# Also find SGA evaluation strings (tournament related)
sga_addrs = []
for off in range(0x4bee00 - 0x400000, min(0x4e4b15 - 0x400000, len(text_data)), 1):
    # Find "SGA" strings
    if text_data[off:off+3] == b'SGA':
        s_off = off
        chunk = text_data[off-4:off+60]
        null_idx = chunk.index(0) if 0 in chunk[4:] else 60
        s = chunk[4:4+null_idx].decode('ascii', errors='replace')
        print(f"  SGA string at 0x{off+0x400000:08x}: '{s}'")

# Use Capstone to disassemble and find references
print("\nScanning .text for tournament string references...")
md = Cs(CS_ARCH_X86, CS_MODE_32)

# Count total instructions for progress
total_insns = text_size // 3  # rough estimate

# Scan in chunks
chunk_size = 0x10000
results = []

for chunk_start in range(0, text_size, chunk_size):
    chunk_end = min(chunk_start + chunk_size, text_size)
    chunk_data = text_data[chunk_start:chunk_end]
    chunk_va = text_addr + chunk_start
    
    for insn in md.disasm(chunk_data, chunk_va):
        # Look for references to our addresses
        for addr in tourney_addrs:
            addr_str = f"0x{addr:x}"
            addr_str2 = f"0x{addr:08x}"
            if addr_str in insn.op_str or addr_str2 in insn.op_str:
                results.append((insn.address, addr, insn.mnemonic, insn.op_str))
                break

print(f"\nFound {len(results)} references:")
for va, addr, mnem, ops in results:
    print(f"  0x{va:08x}: {mnem:8s} {ops}")

# Group by function (find function boundaries)
if results:
    print("\n=== Grouped by function ===")
    # Sort by address
    results.sort(key=lambda x: x[0])
    last_func = 0
    for va, addr, mnem, ops in results:
        # Find nearest function start
        func_start = va
        search_start = max(va - 0x2000, text_addr)
        search_off = search_start - text_addr
        search_data = text_data[search_off:va - text_addr]
        # Look backwards for push ebp or __thiscall
        func_va = va
        for j in range(len(search_data) - 3, max(0, len(search_data) - 0x2000), -1):
            if (search_data[j] == 0x55 and search_data[j+1] == 0x8B and search_data[j+2] == 0xEC):
                func_va = search_start + j
                break
        if func_va != last_func:
            print(f"\n  Function at 0x{func_va:08x}:")
            last_func = func_va
        # Resolve string name
        name = ""
        for a in tourney_addrs:
            if a == addr:
                s_off = a - 0x400000
                chunk = text_data[s_off:s_off+50]
                null_idx = chunk.index(0) if 0 in chunk else 50
                name = chunk[:null_idx].decode('ascii', errors='replace')
                break
        print(f"    0x{va:08x}: ref 0x{addr:08x} '{name}' [{mnem} {ops}]")

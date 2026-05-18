#!/usr/bin/env python3
"""
Smart disassembler: detect functions by push ebp; mov ebp, esp,
disassemble each function separately, skip data regions.
"""
import pefile
from capstone import *
import os

PE_PATH = os.path.expanduser("~/simgolf-re/game_data/exe/Terrain.dll")
OUT_PATH = os.path.expanduser("~/simgolf-re/raw_decomp/Terrain_dll_complete.txt")

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
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Build export map
exports = {}
if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
    for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
        if exp.name:
            va = imagebase + exp.address
            exports[va] = exp.name.decode()

# Find all function prologues (push ebp; mov ebp, esp = 55 89 E5)
func_starts = []
i = 0
while i < len(text_data) - 3:
    if text_data[i] == 0x55 and text_data[i+1] == 0x89 and text_data[i+2] == 0xE5:
        va = text_addr + i
        func_starts.append(va)
        i += 1
    else:
        i += 1

print(f"Found {len(func_starts)} function prologues (push ebp; mov ebp, esp)")

# Find thunk targets (jmp dword ptr or jmp addr at start of .text)
thunk_targets = set()
import struct
# In a 64KB window from start, check for jmp instructions
for i in range(0, min(0x4000, len(text_data))):
    # jmp rel32 = 0xE9 + 4 bytes
    if text_data[i] == 0xE9 and (text_addr + i) < text_addr + 0x4000:
        if i + 4 < len(text_data):
            rel = struct.unpack_from('<i', text_data, i+1)[0]
            target = (text_addr + i + 5 + rel) & 0xFFFFFFFF
            if text_addr <= target < text_addr + len(text_data):
                thunk_targets.add(target)

print(f"Found {len(thunk_targets)} thunk jump targets")

# Merge: all valid function addresses = exports + func_starts + thunk targets in range
all_funcs = set()
for va in func_starts:
    all_funcs.add(va)
for va in thunk_targets:
    all_funcs.add(va)

all_funcs = sorted(all_funcs)
print(f"Total function candidates: {len(all_funcs)}")

# Now disassemble in blocks between known function starts + padding detection
lines = []
lines.append(f";; Terrain.dll - Complete Function-Level Disassembly")
lines.append(f";; .text: {len(text_data)} bytes @ 0x{text_addr:08x}")
lines.append(f";; ImageBase: 0x{imagebase:08x}")
lines.append(f";; Functions found: {len(all_funcs)}")
lines.append(f"")

# Add function boundaries at known starts, then disassemble each block
# Actually simpler: just disassemble linearly but skip ahead when we hit data
# by jumping to the next known function start

MAX_BYTES_PER_SEGMENT = 51200  # 50KB chunks

i = 0
while i < len(text_data):
    addr = text_addr + i
    
    # Label this address if it's a function start
    if addr in all_funcs:
        name = exports.get(addr, f"")
        if name:
            lines.append(f"\n;; === EXPORT: {name} ===")
        elif addr in func_starts:
            # Check if next instruction is also in all_funcs (avoid redundant labels)
            lines.append(f"\n;; --- func_0x{addr:08x} ---")
    
    # Disassemble up to MAX_BYTES chunk
    chunk = text_data[i:i+MAX_BYTES_PER_SEGMENT]
    chunk_addr = addr
    
    try:
        for insn in md.disasm(chunk, chunk_addr):
            addr = insn.address
            lines.append(f"  0x{addr:08x}:  {insn.mnemonic:8s} {insn.op_str}")
        
        # Move past this chunk
        i += len(chunk)
        actual_last = addr if 'addr' in dir() else text_addr
        print(f"  Disassembled chunk at 0x{chunk_addr:08x}, last addr: 0x{actual_last:08x}")
        
    except Exception as e:
        print(f"  Error at 0x{chunk_addr:08x}: {e}")
        # Skip 1 byte and try again
        lines.append(f"  ; [SKIP at 0x{chunk_addr:08x}: {e}]")
        i += 1
    
    if len(lines) > 500000:
        print("  WARNING: too many lines, truncating")
        break

with open(OUT_PATH, "w") as f:
    f.write("\n".join(lines))
print(f"Written {len(lines)} lines to {OUT_PATH}")

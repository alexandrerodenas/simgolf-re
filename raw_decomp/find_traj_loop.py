#!/usr/bin/env python3
"""Search for the trajectory simulation loop using capstone"""
import pefile, struct
from capstone import *

PE_PATH = "/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe"
pe = pefile.PE(PE_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase

text_sec = None
for sec in pe.sections:
    if sec.Name.decode('utf-8','ignore').strip().rstrip('\x00') == '.text':
        text_sec = sec
        break

text_data = text_sec.get_data()
text_addr = imagebase + text_sec.VirtualAddress
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Search for functions that contain ALL of:
# 1. A backward jump (loop)
# 2. FPU instructions
# 3. References to ball data (0x81ca10)

ball_data_addr = 0x81ca10
ball_data_bytes = struct.pack('<I', ball_data_addr)

# Scan the .text section in chunks
chunk_size = 0x4000
candidates = []

for chunk_start in range(0, len(text_data), chunk_size):
    chunk_end = min(chunk_start + chunk_size, len(text_data))
    chunk = text_data[chunk_start:chunk_end]
    chunk_va = text_addr + chunk_start
    
    # Check if this chunk references ball data
    if ball_data_bytes not in chunk:
        continue
    
    print(f"Scanning chunk at 0x{chunk_va:08x}...")
    
    # Disassemble and look for patterns
    has_fpu = False
    has_loop = False
    has_ball_ref = False
    fpu_count = 0
    
    for insn in md.disasm(chunk, chunk_va):
        if insn.mnemonic.startswith('f') and insn.mnemonic != 'far':
            has_fpu = True
            fpu_count += 1
        if insn.mnemonic in ('jmp', 'je', 'jne', 'jl', 'jle', 'jg', 'jge'):
            # Check if it's a backward jump (loop)
            try:
                target = int(insn.op_str, 16)
                if target < insn.address:
                    has_loop = True
            except:
                pass
    
    if fpu_count >= 5 or has_ball_ref:
        candidates.append((chunk_va, fpu_count))

print(f"\nCandidates with FPU and ball data refs:")
for va, count in candidates:
    print(f"  0x{va:08x}: {count} FPU instrs")

#!/usr/bin/env python3
"""Disassemble the FPU trajectory functions (fsqrt, fsin)"""
import pefile
from capstone import *

PE_PATH = "/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe"

pe = pefile.PE(PE_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase

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

# Function containing fsqrt at 0x417333
# Function containing fsin at 0x491c29

targets = [0x417333, 0x491c29]

for target in targets:
    # Find function start (search backward for prologue)
    func_start = target
    off = target - text_addr
    for i in range(off, max(0, off - 0x800), -1):
        if text_data[i] == 0x55 and text_data[i+1] == 0x8B and text_data[i+2] == 0xEC:
            func_start = i + text_addr
            break
    
    # Find function end (search forward for ret with int3 padding)
    func_end = min(target + 0x400, text_addr + len(text_data))
    off = target - text_addr
    # Search at least 0x400 bytes past the target
    for i in range(off, min(off + 0x800, len(text_data))):
        if text_data[i] == 0xC3:  # ret
            j = i + 1
            pad_count = 0
            while j < len(text_data) and text_data[j] == 0xCC:
                pad_count += 1
                j += 1
            if pad_count >= 3:
                func_end = i + 1 + text_addr
                break
    
    print(f"\n;; === FPU function containing 0x{target:08x} ===")
    print(f";; Function: 0x{func_start:08x} - 0x{func_end:08x}")
    print(f";; Size: {func_end - func_start} bytes")
    print()
    
    # Disassemble
    start_off = func_start - text_addr
    end_off = min(func_end - text_addr, len(text_data))
    chunk = text_data[start_off:end_off]
    
    for insn in md.disasm(chunk, func_start):
        op_str = insn.op_str
        
        # Highlight FPU instructions
        marker = ""
        if insn.mnemonic.startswith('f') and insn.mnemonic != 'far':
            marker = " <<< FPU"
            if insn.mnemonic in ('fsqrt', 'fsin', 'fcos', 'fpatan'):
                marker = " <<< *** ADVANCED FPU ***"
        
        # Check for float constants being loaded
        if insn.mnemonic == 'fld' and 'dword' in op_str:
            # Extract address
            import re
            m = re.search(r'0x[0-9a-fA-F]+', op_str)
            if m:
                data_addr = int(m.group(0), 16)
                data_off = data_addr - 0x400000
                if 0 <= data_off < len(text_data):
                    float_val = struct.unpack_from('<f', text_data, data_off)[0]
                    if abs(float_val) > 0.001 and abs(float_val) < 100000:
                        op_str += f"  ; = {float_val}"
        
        print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}{marker}")
    
    print()

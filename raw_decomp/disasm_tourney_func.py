#!/usr/bin/env python3
"""
Disassemble the tournament-related function area in golf.exe
"""
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

# Tournament references found around 0x448xxx
# Let's disassemble a wide range around 0x447000 to 0x449000
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Known tournament string addresses and their names
tourney_names = {
    0x4d0c88: "SGA Qualifying School",
    0x4d0ca0: "Jr. Tour Event",
    0x4d0cb0: "Jr. Tour Championship!",
    0x4d0cc8: "SGA Amateur Championship",
    0x4d0ce4: "Senior SGA Tour Event",
    0x4d0cfc: "Senior SGA Championship",
    0x4d0d14: "SGA Tour Event",
    0x4d0d28: "SGA Players Championship",
    0x4d0d40: "SGA Championship!",
    0x4d0d50: "Mini Slam Championship!",
    0x4d0d6c: "Grand Slam Championship!",
    0x4d15d8: "SGA Open Championship",
    0x4d15f0: "SGA Tour Championship",
    0x4d1608: "SGA Jr. Championship",
}

start_va = 0x00447000
end_va = 0x00449000
start_off = start_va - text_addr
end_off = min(end_va - text_addr, len(text_data))

chunk = text_data[start_off:end_off]

print(f";; Tournament function area 0x{start_va:08x}-0x{end_va:08x}")
print(f";; (references found at 0x447e1d, 0x4482f6, 0x448318, 0x44834b)")
print()

func_start = None
func_addr = None

for insn in md.disasm(chunk, start_va):
    # Detect function prologue
    is_prologue = False
    if insn.mnemonic == 'push' and insn.op_str == 'ebp':
        next_off = insn.address + 1 - start_va
        if next_off < len(chunk) and chunk[next_off] == 0x8B:  # mov ebp, esp
            is_prologue = True
    if insn.mnemonic == 'push' and insn.op_str == 'ecx':
        next_off = insn.address + 1 - start_va
        if next_off + 1 < len(chunk) and chunk[next_off] == 0x53:  # push ebx
            is_prologue = True
    
    if is_prologue:
        func_addr = insn.address
        func_start = True
        print(f"\n;; === Function at 0x{func_addr:08x} ===")
    
    # Format the output
    op_str = insn.op_str
    # Check for tournament string references
    for addr, name in tourney_names.items():
        addr_str = f"0x{addr:08x}"
        if addr_str in op_str:
            op_str = op_str.replace(addr_str, f"{addr_str} ;; '{name}'")
    
    print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}")
    
    # Check for ret (end of function)
    if insn.mnemonic == 'ret' and func_addr:
        print(f"  ;; END function at 0x{func_addr:08x}")
        func_addr = None

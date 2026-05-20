#!/usr/bin/env python3
"""Disassemble the tournament name reference area (0x448100-0x448500)"""
import pefile
from capstone import *

PE_PATH = "/home/roden/simgolf-re/data/exe_unpacked/golf.exe"

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

# Tournament definitions - what we know from strings
# Ordered as they appear in the binary at 0x4d0c88-0x4d0d80:
tourney_order = [
    "SGA Qualifying School",          # 0x4d0c88
    "",  # padding
    "Jr. Tour Event",                 # 0x4d0ca0
    "Jr. Tour Championship!",         # 0x4d0cb0
    "SGA Amateur Championship",       # 0x4d0cc8
    "",  # padding
    "Senior SGA Tour Event",          # 0x4d0ce4
    "Senior SGA Championship",        # 0x4d0cfc
    "SGA Tour Event",                 # 0x4d0d14
    "SGA Players Championship",       # 0x4d0d28
    "SGA Championship!",              # 0x4d0d40
    "Mini Slam Championship!",        # 0x4d0d50
    "Grand Slam Championship!",       # 0x4d0d6c
]

# Addresses referenced at 0x4482e5-0x44834b
# 0x4482e5: 0x4d0d60 (Mini Slam - 0x10 bytes before the string)
# 0x4482f6: 0x4d0d40 (SGA Championship)
# 0x448307: 0x4d0d20 (SGA Players - 8 bytes before the string)
# 0x448318: 0x4d0cfc (Senior SGA Championship)
# 0x448329: 0x4d0ce0 (Senior SGA Tour Event - 4 bytes before string)
# 0x44833a: 0x4d0cc0 (SGA Amateur - 8 bytes before string)
# 0x44834b: 0x4d0ca0 (Jr. Tour Event)

# Start at 0x448100 to find the function with these references
start_va = 0x00448100
end_va = 0x00448600
start_off = start_va - text_addr
end_off = min(end_va - text_addr, len(text_data))

chunk = text_data[start_off:end_off]

print(f";; Tournament def area 0x{start_va:08x}-0x{end_va:08x}")
print(f";; (string refs at 0x4482e5-0x44834b)")
print()

func_start = None

for insn in md.disasm(chunk, start_va):
    # Detect function prologue
    is_prologue = False
    if insn.mnemonic == 'push' and insn.op_str == 'ebp':
        off = insn.address - start_va
        if off + 2 < len(chunk) and chunk[off+1] == 0x8B and chunk[off+2] == 0xEC:
            is_prologue = True
    elif insn.mnemonic == 'push' and insn.op_str == 'ecx':
        off = insn.address - start_va
        if off + 1 < len(chunk) and chunk[off+1] == 0x53:
            is_prologue = True
    
    if is_prologue:
        func_addr = insn.address
        print(f"\n;; === Function at 0x{func_addr:08x} ===")
    
    op_str = insn.op_str
    
    # Check for tournament string references
    if '0x4d0' in op_str or '0x4d1' in op_str:
        for tok in op_str.split():
            if tok.startswith('0x4d0') or tok.startswith('0x4d1'):
                try:
                    addr = int(tok, 16)
                    off = addr - 0x400000
                    if off < len(text_data):
                        chunk2 = text_data[off:off+60]
                        idx = chunk2.index(0) if 0 in chunk2 else 60
                        if all(32 <= b < 127 for b in chunk2[:idx]) and idx >= 4:
                            s = chunk2[:idx].decode('ascii', errors='replace')
                            op_str = op_str.replace(tok, f"{tok} ;; '{s}'")
                except:
                    pass
    
    print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}")
    
    if insn.mnemonic == 'ret':
        print(f"  ;; END")

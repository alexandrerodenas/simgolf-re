#!/usr/bin/env python3
"""Disassemble the tournament definition area (0x448000-0x448500)"""
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

# Tournament string addresses and their names
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

# Also check for the button label strings
other_tourney = {
    0x4c6144: "Begin Tournament",
    0x4c616c: "Practice Round",
    0x4c5b00: "SGA Evaluation",
    0x4cff90: "TOURNAMENT RESULTS",
    0x4cffa8: "TOURNAMENT SCORES",
}

# Disassemble from 0x448000 to 0x448500
start_va = 0x00448000
end_va = 0x00448500
start_off = start_va - text_addr
end_off = min(end_va - text_addr, len(text_data))

chunk = text_data[start_off:end_off]

print(f";; Tournament def area 0x{start_va:08x}-0x{end_va:08x}")
print(f";; String references found at: 0x447e1d, 0x447e2e, 0x4482e5-0x44834b")
print()

# Track function boundaries
func_start = None
func_addr = None
func_names = {
    0x448000: "Tournament_UICreate (panel setup, continues from 0x447000)",
}

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
        name = func_names.get(func_addr, f"func_0x{func_addr:08x}")
        print(f"\n;; === {name} ===")
    
    # Format the output
    op_str = insn.op_str
    
    # Check for tournament string references in op_str
    all_refs = {**tourney_names, **other_tourney}
    for addr, name in all_refs.items():
        addr_str = f"0x{addr:08x}"
        if addr_str in op_str:
            op_str = op_str.replace(addr_str, f"{addr_str} ;; '{name}'")
    
    # Also check for data references (0x4cc... for button panels)
    if '0x4cc' in op_str or '0x4cd' in op_str:
        for tok in op_str.split():
            if tok.startswith('0x4cc') or tok.startswith('0x4cd'):
                try:
                    addr = int(tok, 16)
                    if 0x4cc000 <= addr <= 0x4d2000:
                        off = addr - 0x400000
                        if off < len(text_data):
                            chunk2 = text_data[off:off+40]
                            idx = chunk2.index(0) if 0 in chunk2 else 40
                            if all(32 <= b < 127 for b in chunk2[:idx]) and idx >= 4:
                                s = chunk2[:idx].decode('ascii', errors='replace')
                                op_str = op_str.replace(tok, f"{tok} ;; \"{s}\"")
                except:
                    pass
    
    # Interpret interesting constants
    if 'mov' in insn.mnemonic and '0x' in op_str and ',' in op_str:
        parts = op_str.split(',')
        if len(parts) == 2:
            try:
                val = int(parts[1].strip(), 16)
                if val > 100000 and val < 2000000:
                    op_str += f"  ; ${val:,}"
                elif 10 <= val <= 10000 and 'esp' not in op_str:
                    pass  # small values are common
            except:
                pass
    
    print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}")
    
    if insn.mnemonic == 'ret' and func_addr:
        print(f"  ;; END 0x{func_addr:08x}")
        func_addr = None

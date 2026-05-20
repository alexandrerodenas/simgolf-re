#!/usr/bin/env python3
"""
Re-disassemble Terrain.dll with better data/code separation
and complete coverage of the .text section.
"""
import pefile
from capstone import *
import os

PE_PATH = os.path.expanduser("~/simgolf-re/data/exe/Terrain.dll")
OUT = os.path.expanduser("~/simgolf-re/raw_decomp/Terrain_dll_disasm_v2.txt")

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

print(f".text section: {len(text_data)} bytes @ VA 0x{text_addr:08x}")

# Build export label map + thunk target map
exports = {}
thunks = {}
if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
    for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
        if exp.name:
            va = imagebase + exp.address
            exports[va] = exp.name.decode()

# Find all jmp thunks in first 6KB (thunk table area)
thunk_start = text_addr
thunk_end = text_addr + 0x4000  # First 16KB is thunk table
first_pass_data = text_data[:0x4000]
for insn in md.disasm(first_pass_data, thunk_start):
    if insn.mnemonic == 'jmp' and insn.address < thunk_end:
        # Parse target: dword ptr [addr] or direct address
        op = insn.op_str
        if op.startswith('0x'):
            target = int(op, 16)
            thunks[insn.address] = target

print(f"Found {len(exports)} exports, {len(thunks)} thunks in first 16KB")

# Disassemble the entire .text section
# Strategy: when we see long sequences of invalid-looking instructions
# (data tables), skip forward in 16-byte increments until we find
# a valid function prologue (push ebp)

lines = []
lines.append(f";; Terrain.dll - Complete Disassembly (v2)")
lines.append(f";; .text: {len(text_data)} bytes @ VA 0x{text_addr:08x}")
lines.append(f";; ImageBase: 0x{imagebase:08x}")
lines.append(f"")
lines.append(f";; === EXPORTED FUNCTIONS ===")
for va in sorted(exports.keys()):
    lines.append(f";;   {exports[va]:50s} 0x{va:08x}")
lines.append(f"")
lines.append(f";; === DISASSEMBLY ===")
lines.append(f"")

# Track address to detect gaps
prev_addr = None
gap_threshold = 16
consecutive_strange = 0
in_data_section = False

# We'll use a sliding window approach
# Process the data with the full disassembler but handle gaps
all_insns = list(md.disasm(text_data, text_addr))
print(f"Total instructions from capstone: {len(all_insns)}")
print(f"Last instruction address: 0x{all_insns[-1].address:08x}" if all_insns else "No instructions")

for insn in all_insns:
    addr = insn.address
    
    # Label exports
    if addr in exports:
        lines.append(f"\n;; --- {exports[addr]} ---")
    
    # Detect function prologues
    if (insn.mnemonic == 'push' and insn.op_str == 'ebp' and 
        (prev_addr is None or addr - prev_addr > 4)):
        if addr not in exports:
            lines.append(f"\n;; --- sub_0x{addr:08x} ---")
    
    # Check for thunk labels
    if addr in thunks:
        lines.append(f"\n;; --- thunk_0x{addr:08x} --> 0x{thunks[addr]:08x}")
    
    # Detect gap (potential data section)
    if prev_addr is not None:
        gap = addr - prev_addr
        if gap > 4 and gap < 40:
            lines.append(f";; [gap: {gap} bytes]")
        elif gap >= 40:
            lines.append(f"\n;; === {gap} bytes of data ===")
    
    # Detect strange instructions (likely data misinterpreted as code)
    mnem = insn.mnemonic
    is_strange = mnem in ['int', 'into', 'pusha', 'popa', 'bound', 'daa', 'das', 'aaa', 'aas']
    
    if is_strange:
        consecutive_strange += 1
    else:
        consecutive_strange = 0
    
    if consecutive_strange >= 3 and not in_data_section:
        lines.append(f";; === DATA TABLE START ===")
        in_data_section = True
    elif not is_strange and in_data_section:
        lines.append(f";; === CODE CONTINUES ===")
        in_data_section = False
    
    lines.append(f"  0x{addr:08x}:  {insn.mnemonic:8s} {insn.op_str}")
    prev_addr = addr

with open(OUT, "w") as f:
    f.write("\n".join(lines))

print(f"Written {len(lines)} lines to {OUT}")
print(f"Last code address: 0x{prev_addr:08x}" if prev_addr else "N/A")

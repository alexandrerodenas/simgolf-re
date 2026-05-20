#!/usr/bin/env python3
"""
Disassemble Terrain.dll + sound.dll → raw assembly files
"""
import pefile
from capstone import *
import math, os

OUT = os.path.expanduser("~/simgolf-re/raw_decomp")

def entropy(data):
    if len(data) == 0: return 0
    freq = {}
    for b in data:
        freq[b] = freq.get(b, 0) + 1
    return -sum((c/len(data)) * math.log2(c/len(data)) for c in freq.values())

def disassemble_dll(dll_path, label):
    pe = pefile.PE(dll_path)
    imagebase = pe.OPTIONAL_HEADER.ImageBase
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    
    safe_name = label.replace('.', '_')
    
    print(f"\n=== {label} ===")
    
    # Build export map
    exports = {}
    if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
        for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
            if exp.name:
                addr = imagebase + exp.address
                exports[addr] = exp.name.decode()
    
    # Find .text section
    text_sec = None
    for sec in pe.sections:
        name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
        if name == '.text':
            text_sec = sec
            break
    
    if not text_sec:
        print(f"  No .text section found!")
        return
    
    text_data = text_sec.get_data()
    text_addr = imagebase + text_sec.VirtualAddress
    e = entropy(text_data)
    print(f"  .text: {len(text_data)} bytes, entropy={e:.3f}")
    
    if e > 6.5:
        print(f"  SKIP: section is packed")
        return
    
    # Also look at .rdata for string data
    rdata_data = b""
    for sec in pe.sections:
        name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
        if name == '.rdata':
            rdata_data = sec.get_data()
            break
    
    # Extract readable strings from .rdata for context
    strings = []
    if rdata_data:
        current = b""
        for b in rdata_data:
            if 32 <= b < 127:
                current += bytes([b])
            else:
                if len(current) >= 4:
                    strings.append(current.decode('ascii'))
                current = b""
    
    # Disassemble
    output = []
    output.append(f";; {label} - Full Disassembly")
    output.append(f";; ImageBase: 0x{imagebase:08x}")
    output.append(f";; .text: {len(text_data)} bytes @ 0x{text_addr:08x}")
    output.append(f";; Exports: {len(exports)}")
    output.append("")
    
    # Write string table for reference
    output.append(";; === STRINGS FOUND IN .rdata ===")
    for s in sorted(set(strings), key=len, reverse=True)[:50]:
        if any(c.isalpha() for c in s) and not s.startswith('__'):
            output.append(f";;   \"{s}\"")
    output.append("")
    
    output.append(";; === EXPORTED FUNCTIONS ===")
    for addr in sorted(exports.keys()):
        output.append(f";;   {exports[addr]:50s} 0x{addr:08x}")
    output.append("")
    
    output.append(";; === DISASSEMBLY ===")
    output.append(f";; Entry point: 0x{imagebase + pe.OPTIONAL_HEADER.AddressOfEntryPoint:08x}")
    output.append("")
    
    # Track which lines are exports
    prev_addr = 0
    for insn in md.disasm(text_data, text_addr):
        addr = insn.address
        
        # Label exports
        if addr in exports:
            output.append(f"\n;; --- {exports[addr]} ---")
        
        # Detect function prologues (push ebp; mov ebp, esp)
        if insn.mnemonic == 'push' and insn.op_str == 'ebp' and addr not in exports:
            # Check if previous instruction was a ret (function boundary)
            if prev_addr == 0 or (addr - prev_addr > 4):
                output.append(f"\n;; --- sub_0x{addr:08x} ---")
        
        output.append(f"  0x{addr:08x}:  {insn.mnemonic:8s} {insn.op_str}")
        prev_addr = addr
    
    out_path = os.path.join(OUT, f"{safe_name}_disasm.txt")
    with open(out_path, "w") as f:
        f.write("\n".join(output))
    
    total_instr = len(output)
    print(f"  ✓ {total_instr} lines written to {os.path.basename(out_path)}")
    return exports

# Disassemble all readable DLLs
disassemble_dll(os.path.expanduser("~/simgolf-re/data/exe/Terrain.dll"), "Terrain.dll")
disassemble_dll(os.path.expanduser("~/simgolf-re/data/exe/sound.dll"), "sound.dll")
disassemble_dll(os.path.expanduser("~/simgolf-re/data/exe/jgld.dll"), "jgld.dll")

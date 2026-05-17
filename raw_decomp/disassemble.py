#!/usr/bin/env python3
"""
Extract and disassemble golf.exe PE32 sections.
Output: raw_decomp/golf_exe_full_disasm.txt (with labels)
"""

import pefile
from capstone import *
import struct
import os

PE_PATH = os.path.expanduser("~/simgolf-re/game_data/exe/golf.exe")
OUTPUT = os.path.expanduser("~/simgolf-re/raw_decomp/golf_exe_full_disasm.txt")
SUMMARY = os.path.expanduser("~/simgolf-re/raw_decomp/pe_analysis.txt")

pe = pefile.PE(PE_PATH)

# === PE ANALYSIS ===
with open(SUMMARY, "w") as f:
    f.write("=== PE ANALYSIS: golf.exe ===\n\n")
    f.write(f"Image Base: 0x{pe.OPTIONAL_HEADER.ImageBase:08x}\n")
    f.write(f"Entry Point: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint:08x}\n")
    f.write(f"Subsystem: {pe.OPTIONAL_HEADER.Subsystem}\n")
    f.write(f"Linker: {pe.OPTIONAL_HEADER.MajorLinkerVersion}.{pe.OPTIONAL_HEADER.MinorLinkerVersion}\n")
    f.write(f"Sections: {pe.FILE_HEADER.NumberOfSections}\n\n")

    f.write("--- SECTIONS ---\n")
    for sec in pe.sections:
        f.write(f"  {sec.Name.decode('utf-8','ignore').strip():10s} "
                f"VA=0x{sec.VirtualAddress:08x} "
                f"VS={sec.SizeOfRawData:7d} "
                f"RAW=0x{sec.PointerToRawData:08x} "
                f"CHAR={hex(sec.Characteristics)}\n")

    # Exports (C++ mangled names)
    if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
        f.write("\n--- EXPORTS ---\n")
        for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
            if exp.name:
                f.write(f"  [{exp.ordinal:3d}] 0x{exp.address:08x}  {exp.name.decode()}\n")

    # Imports
    if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
        f.write("\n--- IMPORTS ---\n")
        for dll in pe.DIRECTORY_ENTRY_IMPORT:
            f.write(f"\n  {dll.dll.decode()}\n")
            for imp in dll.imports:
                name = imp.name.decode() if imp.name else f"ord({imp.ordinal})"
                f.write(f"    0x{imp.address:08x}  {name}\n")

    # Extract resources info
    if hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        f.write("\n--- RESOURCES ---\n")
        for res_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if res_type.name is not None:
                f.write(f"  Type: {res_type.name.decode()}\n")
            else:
                f.write(f"  Type ID: {res_type.struct.Id}\n")
            for res_id in res_type.directory.entries:
                if res_id.name is not None:
                    f.write(f"    ID: {res_id.name.decode()}\n")
                else:
                    f.write(f"    ID: {res_id.struct.Id}\n")

print(f"✓ PE analysis saved to {SUMMARY}")

# === DISASSEMBLY ===
cs = Cs(CS_ARCH_X86, CS_MODE_32)
cs.detail = True

text_section = pe.sections[0]  # .text
text_addr = pe.OPTIONAL_HEADER.ImageBase + text_section.VirtualAddress
text_data = text_section.get_data()

print(f".text section: VA=0x{text_addr:08x}, size={len(text_data)} bytes")

# Build label map from exports
exports_addr = {}
if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
    for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
        if exp.name:
            exports_addr[pe.OPTIONAL_HEADER.ImageBase + exp.address] = exp.name.decode()

# Also add entry point
ep_addr = pe.OPTIONAL_HEADER.ImageBase + pe.OPTIONAL_HEADER.AddressOfEntryPoint
exports_addr[ep_addr] = "entry_point"

# Disassemble
output_lines = []
output_lines.append("=" * 80)
output_lines.append(f"FULL DISASSEMBLY: golf.exe .text section (0x{len(text_data):X} bytes)")
output_lines.append(f"ImageBase: 0x{pe.OPTIONAL_HEADER.ImageBase:08x}")
output_lines.append(f"EntryPoint: 0x{ep_addr:08x}")
output_lines.append("=" * 80)

prev_addr = None
for i, (addr, size, mnemonic, op_str) in enumerate(cs.disasm_lite(text_data, text_addr)):
    # Print labels
    if addr in exports_addr:
        output_lines.append(f"\n; --- {exports_addr[addr]} ---")
    elif prev_addr is not None and (addr - prev_addr > 8 or (mnemonic in ['ret', 'retf'])):
        output_lines.append("")

    # Detect function prologues
    if mnemonic in ['push', 'mov', 'sub', 'call', 'jmp'] and prev_addr is not None:
        if mnemonic == 'push' and op_str.startswith('ebp'):
            output_lines.append(f"\n; --- function_0x{addr:08x} ---")

    output_lines.append(f"  0x{addr:08x}:  {mnemonic:8s} {op_str}")
    prev_addr = addr

with open(OUTPUT, "w") as f:
    f.write("\n".join(output_lines))

print(f"✓ Full disassembly ({len(output_lines)} lines) saved to {OUTPUT}")
print(f"  Total instructions: {i+1}")

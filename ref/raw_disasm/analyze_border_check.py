#!/usr/bin/env python3
"""Analyse de la fonction de comparaison voisins @ 0x10001113 dans Terrain.dll"""
import pefile, os
from capstone import *

DLL_PATH = os.path.expanduser("~/simgolf-re/data/raw/Terrain.dll")
pe = pefile.PE(DLL_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase

text_sec = None
for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name == '.text':
        text_sec = sec
        break

text_data = text_sec.get_data()
text_addr = imagebase + text_sec.VirtualAddress

# La fonction appelée pour chaque paire (tuile, voisin, côté)
FUNC_VA = 0x10001113
FUNC_OFF = FUNC_VA - text_addr

# Trouve la vraie fonction (le thunk peut être un jump)
real_va = FUNC_VA
for attempt in range(3):
    off = real_va - text_addr
    if off + 5 <= len(text_data) and text_data[off] == 0xe9:  # jmp rel32
        import struct
        rel = struct.unpack_from('<i', text_data, off+1)[0]
        real_va = real_va + 5 + rel
        print(f"Thunk → redirect to 0x{real_va:08x}")
    else:
        break

func_off = real_va - text_addr
func_end = real_va + 0x200
for i in range(func_off + 0x10, min(func_off + 0x400, len(text_data))):
    if text_data[i] == 0xC3:
        j = i + 1
        pad = 0
        while j < len(text_data) and text_data[j] == 0xCC:
            pad += 1; j += 1
        if pad >= 3:
            func_end = text_addr + i + 1
            break

chunk = text_data[func_off:func_end - text_addr]
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True
instructions = list(md.disasm(chunk, real_va))

print(f"Fonction @ 0x{real_va:08x}, {len(chunk)} bytes, {len(instructions)} insn\n")

# Trouve le type de comparaison
print("=== COMPARAISONS DE TYPES ===")
for insn in instructions:
    if insn.mnemonic in ('cmp', 'je', 'jne'):
        print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}")

# Accès à tile->type
print("\n=== ACCÈS À tile->type (offset 0x24) ===")
for insn in instructions:
    op = insn.op_str
    if '0x24' in op and ('eax' in op or 'ecx' in op or 'edx' in op or 'ebx' in op or 'esi' in op or 'edi' in op):
        print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {op}")

# Voir la structure complète
print(f"\n=== DÉSASSEMBLAGE COMPLET ({len(instructions)} insn) ===")
for insn in instructions:
    print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}")

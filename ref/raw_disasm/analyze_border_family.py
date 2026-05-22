#!/usr/bin/env python3
"""Analyse de compareType @ 0x10002060 et initAutoTile @ 0x1000c560"""
import pefile, os, struct
from capstone import *

DLL_PATH = os.path.expanduser("~/simgolf-re/data/raw/Terrain.dll")
pe = pefile.PE(DLL_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase

for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name == '.text':
        text_data = sec.get_data()
        text_addr = imagebase + sec.VirtualAddress
        break

# 1. Analyser compareType @ 0x10002060
def analyze_func(va, name):
    off = va - text_addr
    end = off + 0x2000
    for i in range(off + 0x10, min(off + 0x2000, len(text_data))):
        if text_data[i] == 0xC3:
            j = i + 1
            pad = 0
            while j < len(text_data) and text_data[j] == 0xCC:
                pad += 1; j += 1
            if pad >= 3:
                end = i + 1
                break
    chunk = text_data[off:end]
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    instructions = list(md.disasm(chunk, va))
    return instructions, len(chunk)

print("=" * 70)
print("FONCTION compareType @ 0x10002060")
print("=" * 70)
insns, sz = analyze_func(0x10002060, "compareType")
print(f"Taille: {sz} bytes, {len(insns)} instructions\n")

# Cherche les comparaisons avec des constantes (type IDs)
print("COMPARAISONS AVEC CONSTANTES:")
for i in insns:
    if i.mnemonic == 'cmp' and ('0x' in i.op_str or 'dword' in i.op_str):
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

print("\nPROLOGUE (60 premières instructions):")
for i in insns[:60]:
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

print("\nRECHERCHE DE TABLES DE CORRESPONDANCE TYPE→FAMILLE:")
for i in insns:
    op = i.op_str
    # Cherche les références à des tables de données
    if '0x100' in op and ('[' in op or 'ptr' in op):
        pass  # common for data access
    # Vérifie les accès à un tableau indexé par type
    if i.mnemonic == 'mov' and 'eax*4' in op or 'ecx*4' in op:
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {op}")
    if i.mnemonic == 'mov' and 'eax*8' in op or 'edx*8' in op:
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {op}")

print("\n" + "=" * 70)
print("INIT AUTO-TILE TABLE @ 0x1000c560")
print("=" * 70)
insns2, sz2 = analyze_func(0x1000c560, "initAutoTile")
print(f"Taille: {sz2} bytes, {len(insns2)} instructions\n")

# Cherche les écritures dans g_textureTable (0x100687f8)
print("RÉFÉRENCES À g_textureTable (0x100687f8):")
for i in insns2:
    op = i.op_str
    if '0x100687f8' in op or '100687f8' in op:
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {op}")
    if '0x100b28c8' in op or '100b28cc' in op or '100b28d0' in op:
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {op}  <<< vertex grid init")

# Affiche les appels 
calls = [i for i in insns2 if i.mnemonic == 'call']
print(f"\nAPPELS ({len(calls)} total):")
for c in calls[:20]:
    print(f"  0x{c.address:08x}: call {c.op_str}")
if len(calls) > 20:
    print(f"  ... ({len(calls)-20} more)")

# Structure générale (premier niveau de boucle)
print("\nSTRUCTURE (premières 80 instructions):")
for i in insns2[:80]:
    marker = ""
    if i.mnemonic == 'call':
        marker = " <<< CALL"
    if i.mnemonic in ('imul',) and '0x248' in i.op_str:
        marker = " <<< TILE ACCESS"
    if '0x100687f8' in i.op_str or '0x100b28c8' in i.op_str:
        marker = " <<< TEXTURE TABLE"
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}{marker}")

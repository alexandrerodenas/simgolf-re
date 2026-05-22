#!/usr/bin/env python3
"""Analyse de la fonction candidate d'auto-tiling @ 0x1000a130 dans Terrain.dll"""
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

FUNC_VA = 0x1000a130
FUNC_OFF = FUNC_VA - text_addr

# Find function end
func_end = FUNC_VA + 0x300
for i in range(FUNC_OFF + 0x10, min(FUNC_OFF + 0x600, len(text_data))):
    if text_data[i] == 0xC3:
        j = i + 1
        pad = 0
        while j < len(text_data) and text_data[j] == 0xCC:
            pad += 1; j += 1
        if pad >= 3:
            func_end = text_addr + i + 1
            break

chunk = text_data[FUNC_OFF:func_end - text_addr]
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

instructions = list(md.disasm(chunk, FUNC_VA))

print(f"Fonction @ 0x{FUNC_VA:08x}, {len(chunk)} bytes, {len(instructions)} instructions\n")

# Analyse des accès tileAt (imul 0x248)
print("=== ACCÈS AUX TUILES (imul × 0x248 = sizeof(Tile)) ===")
for insn in instructions:
    if insn.mnemonic == 'imul' and ('0x248' in insn.op_str):
        print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}")

# Analyse des comparaisons de type
print("\n=== COMPARAISONS (cmp, je, jne) qui déterminent les transitions ===")
for insn in instructions:
    if insn.mnemonic in ('cmp', 'je', 'jne', 'jz', 'jnz', 'jl', 'jge'):
        print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}")

# Affiche les appels
print("\n=== APPELS DE FONCTIONS ===")
for insn in instructions:
    if insn.mnemonic == 'call':
        print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}")

# Structure détaillée
print("\n=== DÉSASSEMBLAGE COMPLET ===")
for i, insn in enumerate(instructions):
    marker = ""
    if insn.mnemonic == 'imul' and ('0x248' in insn.op_str):
        marker = " <<< TILE ACCESS"
    if insn.mnemonic == 'call':
        marker = " <<< CALL"
    print(f"  0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}{marker}")
    if i > 180:
        print("  ... (truncated)")
        break

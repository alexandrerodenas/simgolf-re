#!/usr/bin/env python3
"""
Extraction précise de Ball_MainFunction @ 0x460cf0
- Trouve la vraie fin de fonction (ret + padding CC)
- Extrait TOUT l'ASM (pas seulement FPU)
- Identifie les constantes flottantes
- Sauvegarde le dump pour analyse P-Code manuelle
"""
import pefile, struct, os, json
from capstone import *

PE_PATH = os.path.expanduser("~/simgolf-re/data/exe_unpacked/golf.exe")
OUT_DIR = os.path.expanduser("~/simgolf-re/ref/raw_disasm")

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

# Adresse cible
FUNC_VA = 0x00460cf0
func_off = FUNC_VA - text_addr

# Trouver la vraie fin de fonction :
# Cherche le PREMIER ret (0xC3) suivi d'au moins 3 padding 0xCC
# APRÈS avoir passé la zone d'entrée (after prologue)
func_end = len(text_data) + text_addr
search_start = func_off + 0x20  # skip prologue

for i in range(search_start, min(func_off + 0x5000, len(text_data))):
    if text_data[i] == 0xC3:
        # Vérifie padding consécutif
        j = i + 1
        pad = 0
        while j < len(text_data) and text_data[j] == 0xCC:
            pad += 1
            j += 1
        if pad >= 3:
            func_end = text_addr + i + 1
            break
        # Sinon continue de chercher (ret intermédiaire)
        # mais limite les recherches pour éviter le scan complet
        if i > search_start + 0x4000:
            break

print(f"Ball_MainFunction @ 0x{FUNC_VA:08x}")
print(f"End: 0x{func_end:08x}")
print(f"Size: {func_end - FUNC_VA} bytes")

chunk = text_data[func_off:func_end - text_addr]

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Analyse
instructions = []
fpu_blocks = []
all_constants = {}
current_block = 0
block_start = FUNC_VA

for insn in md.disasm(chunk, FUNC_VA):
    op_str = insn.op_str
    addr = insn.address
    
    is_fpu = (insn.mnemonic.startswith('f') and insn.mnemonic != 'far') \
             or insn.mnemonic in ('frstor', 'fnsave', 'fxch', 'fcom', 'fcomp', 'fcompp')
    
    entry = {
        'addr': addr,
        'mnemonic': insn.mnemonic,
        'op_str': op_str,
        'bytes': insn.bytes.hex(),
        'is_fpu': is_fpu,
        'size': insn.size,
    }
    instructions.append(entry)

# Analyser les blocs FPU
print(f"\n{'='*60}")
print(f"INSTRUCTIONS FPU ({sum(1 for i in instructions if i['is_fpu'])} total)")
print(f"{'='*60}")

fpu_instrs = [i for i in instructions if i['is_fpu']]

# Extraire les constantes flottantes de .rdata
rdata_sec = None
for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name == '.rdata':
        rdata_sec = sec
        break

rdata_data = rdata_sec.get_data() if rdata_sec else b''
rdata_addr = imagebase + rdata_sec.VirtualAddress if rdata_sec else 0

float_constants = {}
for insn in fpu_instrs:
    op_str = insn['op_str']
    # Cherche les références mémoire à des adresses dans .rdata
    import re
    for m in re.finditer(r'\[(0x[0-9a-fA-F]+)\]', op_str):
        addr = int(m.group(1), 16)
        if addr >= rdata_addr and addr < rdata_addr + len(rdata_data):
            off = addr - rdata_addr
            if off + 8 <= len(rdata_data):
                if 'qword ptr' in op_str:
                    val = struct.unpack_from('<d', rdata_data, off)[0]
                elif 'dword ptr' in op_str:
                    val = struct.unpack_from('<f', rdata_data, off)[0]
                else:
                    continue
                if addr not in float_constants:
                    float_constants[addr] = val
                    print(f"  [0x{addr:08x}] ({'double' if 'qword' in op_str else 'float'}) = {val}")

print(f"\n{'='*60}")
print(f"APPELS DE FONCTIONS CLÉS")
print(f"{'='*60}")
calls = [i for i in instructions if i['mnemonic'] == 'call' and '0x' in i['op_str']]
for c in calls:
    print(f"  0x{c['addr']:08x}: call {c['op_str']}")

# Dump complet
out_path = os.path.join(OUT_DIR, "ball_mainfunction_full.asm")
with open(out_path, 'w') as f:
    f.write(f";; Ball_MainFunction @ 0x{FUNC_VA:08x}\n")
    f.write(f";; Size: {func_end - FUNC_VA} bytes\n")
    f.write(f";; FPU count: {sum(1 for i in instructions if i['is_fpu'])}\n")
    f.write(f";; Call count: {len(calls)}\n\n")
    for i in instructions:
        marker = " <<< FPU" if i['is_fpu'] else ""
        if i['mnemonic'] == 'call':
            marker = " <<< CALL"
        f.write(f"  0x{i['addr']:08x}:  {i['mnemonic']:8s} {i['op_str']}{marker}\n")

print(f"\nDump ASM: {out_path}")
print(f"Total instructions: {len(instructions)}")
print(f"Total FPU instructions: {sum(1 for i in instructions if i['is_fpu'])}")
print(f"Total function calls: {len(calls)}")

#!/usr/bin/env python3
"""
Analyse du système d'auto-tiling de Terrain.dll.
Décompilation des fonctions de sélection de texture selon les voisins.

Cherche dans Terrain.dll les fonctions qui :
1. Comparent les types de terrain voisins
2. Calculent l'orientation (N/E/S/O)
3. Sélectionnent le groupe géométrique (A-E)
4. Calculent la variation cosmétique
"""
import pefile, struct, os, re
from capstone import *

DLL_PATH = os.path.expanduser("~/simgolf-re/data/raw/Terrain.dll")
OUT_DIR = os.path.expanduser("~/simgolf-re/ref/raw_disasm")

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

# Fonctions identifiées dans la REFERENCE_GUIDE liées à l'auto-tiling
TARGETS = {
    # Rendu + sélection texture
    0x1000e6c0: "renderSingleTile",
    0x100032f0: "setType",
    0x10003390: "getVariation",
    0x10002f80: "setTextureOffset",
    0x10001af0: "loadNewCourseType",
    # Gestion voisins
    0x1000ab30: "tileHit",
    0x10001d50: "tileAt",
    0x10001e80: "getWall",
    0x1000a560: "setWall",
    # Potentiellement : une fonction "computeNeighborMask" ou "selectTexture"
    # Cherche dans les plages d'adresses proches de setType
    0x10003100: "candidate_01",
    0x10003360: "candidate_02",
    0x10003400: "candidate_03",
    0x10003500: "candidate_04",
}

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# .rdata de Terrain.dll pour constantes
rdata_sec = None
for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name in ('.rdata', '.data'):
        rdata_sec = sec
        break
rdata_data = rdata_sec.get_data() if rdata_sec else b''
rdata_addr = imagebase + rdata_sec.VirtualAddress if rdata_sec else 0

print("=" * 70)
print("ANALYSE AUTO-TILING — Terrain.dll")
print("=" * 70)

for func_va, func_name in sorted(TARGETS.items()):
    func_off = func_va - text_addr
    func_end = min(func_off + 0x4000, len(text_data) - 1)
    
    # Find function end
    for i in range(func_off + 0x10, min(func_off + 0x4000, len(text_data))):
        if text_data[i] == 0xC3:
            j = i + 1
            pad = 0
            while j < len(text_data) and text_data[j] == 0xCC:
                pad += 1; j += 1
            if pad >= 3:
                func_end = i + 1
                break
    
    chunk = text_data[func_off:func_end]
    func_size = len(chunk)
    
    instructions = list(md.disasm(chunk, func_va))
    
    # Cherche des motifs spécifiques
    has_imul_0x248 = False  # sizeof(Tile) = 584 = 0x248
    has_imul_0x384 = False  # textureTable stride = 900 = 0x384
    has_imul_0x024 = False  # orientation stride = 36 = 0x24
    has_rand_call = False
    neighbor_compares = 0  # comparaisons avec voisins
    
    for insn in instructions:
        if insn.mnemonic == 'imul':
            if '0x248' in insn.op_str or '584' in insn.op_str:
                has_imul_0x248 = True
            if '0x384' in insn.op_str or '900' in insn.op_str:
                has_imul_0x384 = True
            if '0x24' in insn.op_str or '36' in insn.op_str:
                has_imul_0x024 = True
        if insn.mnemonic == 'call':
            op = insn.op_str
            # Vérifie si c'est un appel à rand/srand
            if 'rand' in op.lower() or 'srand' in op.lower():
                has_rand_call = True
    
    # Compte les références aux voisins (additions/soustractions de 1 avec tileAt)
    calls_to_tileAt = sum(1 for i in instructions 
                         if i.mnemonic == 'call' and '0x10001d50' in i.op_str)
    
    print(f"\n{'='*70}")
    print(f"{func_name:30s} @ 0x{func_va:08x}  ({func_size:5d} bytes, {len(instructions):5d} insn)")
    print(f"{'='*70}")
    print(f"  tileAt calls: {calls_to_tileAt}")
    print(f"  imul 0x248: {has_imul_0x248} | imul 0x384: {has_imul_0x384} | imul 0x24: {has_imul_0x024}")
    print(f"  rand() call: {has_rand_call}")
    
    # Affiche les 30 premières instructions
    print(f"  Prologue:")
    for i in instructions[:30]:
        print(f"    0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

# Cherche maintenant les fonctions inconnues par motifs
print(f"\n{'='*70}")
print("RECHERCHE DE FONCTIONS D'AUTO-TILING PAR MOTIFS")
print(f"{'='*70}")

# Cherche des fonctions qui font imul × 0x248 (sizeof Tile) + appels à tileAt
candidates = {}
for func_off in range(0, len(text_data) - 0x100, 0x10):
    # Cherche un prologue (push ebp, mov ebp, esp)
    if text_data[func_off:func_off+3] == b'\x55\x8b\xec':
        func_va = text_addr + func_off
        # Limite la recherche aux fonctions de taille raisonnable
        for end_off in range(func_off + 0x20, min(func_off + 0x2000, len(text_data))):
            if text_data[end_off] == 0xC3:
                j = end_off + 1
                pad = 0
                while j < len(text_data) and text_data[j] == 0xCC:
                    pad += 1; j += 1
                if pad >= 3:
                    chunk = text_data[func_off:end_off+1]
                    
                    # Compte les imul 0x248 (accès tileArray)
                    imul_count = chunk.count(b'\x69\xc0\x48\x02\x00\x00')  # imul eax,eax,0x248
                    imul_count += chunk.count(b'\x69\xc9\x48\x02\x00\x00')  # imul ecx,ecx,0x248
                    imul_count += chunk.count(b'\x69\xd2\x48\x02\x00\x00')  # imul edx,edx,0x248
                    
                    # tileAt calls via thunk 0x10001d50 → cherche les call 0x10001d50
                    tileat_refs = chunk.count(b'\xe8\x00\x00\x00\x00')  # simplifié
                    
                    if imul_count >= 2:  # Au moins 2 accès tuile = lit les voisins
                        insns = list(md.disasm(chunk, func_va))
                        fpu_count = sum(1 for i in insns if i.mnemonic.startswith('f') and i.mnemonic != 'far')
                        size = len(chunk)
                        candidates[func_va] = {
                            'size': size,
                            'imul_248': imul_count,
                            'insn_count': len(insns),
                            'fpu_count': fpu_count,
                        }
                    break

print(f"\nFonctions candidates (≥2 accès tileAt, donc lisent voisins):")
for va, info in sorted(candidates.items()):
    print(f"  0x{va:08x}: {info['size']:5d} bytes, {info['insn_count']:5d} insn, {info['fpu_count']:2d} FPU, imul×248={info['imul_248']}")

# Regarde les plus grosses fonctions candidates
print(f"\nTop 15 fonctions candidates par taille:")
for va, info in sorted(candidates.items(), key=lambda x: -x[1]['size'])[:15]:
    print(f"  0x{va:08x}: {info['size']:5d} bytes, imul_248={info['imul_248']}, insn={info['insn_count']}")

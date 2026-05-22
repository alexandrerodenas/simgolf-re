#!/usr/bin/env python3
"""
Analyse approfondie : comment sont générées les bordures entre tuiles hétérogènes.

Cherche dans Terrain.dll la fonction qui :
1. Compare le type d'une tuile avec celui de ses 4 voisins
2. Détermine si une bordure est nécessaire (familles différentes)
3. Sélectionne l'orientation A/B/C/D
4. Construit le renderPass avec la bonne texture
"""
import pefile, os, struct
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

# Les appels de la boucle d'auto-tiling qu'il faut analyser :
# 0x1000a130 = auto-tiling loop (already known)
# 0x1000119f = render setup per tile
# 0x100010aa = getType
# 0x100010c3 = compare type?

# Analysons l'appel 0x1000119f (le setup rendu qui décide probablement de la texture)
TARGETS = {
    0x1000119f: "setupTileRender",  # appelé pour chaque tuile → setup des passes
    0x100010aa: "getType",          # get tile type
    0x100010c3: "compareType",      # probablement : compare type adjacent
    0x1000108c: "tileAt",           # accès grille
    0x100010d7: "initTileLoop",     # appelé au début de la boucle
    0x100010b9: "setTextureOffset", # stocke la variation
}

for func_va, func_name in sorted(TARGETS.items()):
    func_off = func_va - text_addr
    func_end = min(func_off + 0x2000, len(text_data) - 1)
    for i in range(func_off + 0x10, min(func_off + 0x2000, len(text_data))):
        if text_data[i] == 0xC3:
            j = i + 1
            pad = 0
            while j < len(text_data) and text_data[j] == 0xCC:
                pad += 1; j += 1
            if pad >= 3:
                func_end = i + 1
                break
    
    chunk = text_data[func_off:func_end]
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    instructions = list(md.disasm(chunk, func_va))
    
    print(f"\n{'='*70}")
    print(f"{func_name:20s} @ 0x{func_va:08x}  ({len(chunk):4d} bytes, {len(instructions):4d} insn)")
    print(f"{'='*70}")
    
    # Affiche les appels à d'autres fonctions
    calls = [i for i in instructions if i.mnemonic == 'call']
    print(f"  Appels: {len(calls)}")
    for c in calls[:15]:
        print(f"    0x{c.address:08x}: call {c.op_str}")
    if len(calls) > 15:
        print(f"    ... ({len(calls)-15} more)")

# Analysons plus en détail setupTileRender @ 0x1000119f
# (c'est un thunk, trouvons le corps)
for thunk_addr in [0x1000119f]:
    off = thunk_addr - text_addr
    if off + 5 <= len(text_data) and text_data[off] == 0xe9:
        import struct
        rel = struct.unpack_from('<i', text_data, off+1)[0]
        real_addr = thunk_addr + 5 + rel
        print(f"\nThunk 0x{thunk_addr:08x} → redirect to 0x{real_addr:08x}")
        
        # Find function
        r_off = real_addr - text_addr
        r_end = r_off + 0x2000
        for i in range(r_off + 0x10, min(r_off + 0x2000, len(text_data))):
            if text_data[i] == 0xC3:
                j = i + 1
                pad = 0
                while j < len(text_data) and text_data[j] == 0xCC:
                    pad += 1; j += 1
                if pad >= 3:
                    r_end = i + 1
                    break
        
        chunk = text_data[r_off:r_end]
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        instructions = list(md.disasm(chunk, real_addr))
        
        print(f"  Corps: {len(chunk):4d} bytes, {len(instructions):4d} insn")
        print(f"  Désassemblage complet:")
        for insn in instructions[:50]:
            marker = ""
            if insn.mnemonic == 'call':
                marker = " <<< CALL"
            print(f"    0x{insn.address:08x}: {insn.mnemonic:10s} {insn.op_str}{marker}")
        if len(instructions) > 50:
            print(f"    ... ({len(instructions)-50} more instructions)")

#!/usr/bin/env python3
"""
Pipeline de décompilation SimGolf — golf.exe
Extrait les fonctions du désassemblage brut et génère du C nettoyé.

Usage: python3 decompile.py --list
       python3 decompile.py --export-all
       python3 decompile.py --func 0x00401709
"""

import re, sys, os
from pathlib import Path

DISASM_PATH = Path('/home/roden/simgolf-re/ref/raw_disasm/golf_unpacked_func_disasm.txt')
DECOMP_PATH = Path('/home/roden/simgolf-re/ref/decompiled')

# Map d'adresses → nom de fonction (exports connus)
KNOWN_EXPORTS = {
    # Terrain.dll (via Terrain_dll_functions.txt)
    0x10001014: 'Terrain_setWall',
    0x1000104b: 'Terrain_render',
    0x1000108c: 'Terrain_tileAt',
    0x1000109b: 'Terrain_tileHit',
    0x100010a0: 'Terrain_resetTerrain',
    0x100010b4: 'Terrain_passCollarInfo',
    0x100010d2: 'Terrain_calcAllNormals',
    0x10001127: 'Terrain_lowerCorner',
    0x10001136: 'Terrain_getInstance',
    0x10001154: 'Terrain_lowerEdgeCorner',
    0x1000117c: 'Terrain_localRender',
    0x10001186: 'Terrain_drawCircle',
    0x100011b3: 'Terrain_drawLine',
    0x100011c2: 'Terrain_changeLighting',
    0x100011e0: 'Terrain_pathUpdateRender',
    0x100011ea: 'Terrain_renderTile',
    0x10001217: 'Terrain_closeSystem',
    0x1000121c: 'Terrain_setType',
    0x10001244: 'Terrain_drawCardinalSpline',
    0x1000124e: 'Terrain_getType',
    0x1000125d: 'Terrain_updatePath',
    0x10001294: 'Terrain_setZoomLevel',
    0x10001299: 'Terrain_stripRender',
    0x100012bc: 'Terrain_getWall',
    0x100012c1: 'Terrain_layPath',
    0x100012cb: 'Terrain_initTerrain',
    0x100012e4: 'Terrain_initSystem',
    0x100012f8: 'Terrain_resize',
    0x10001302: 'Terrain_destructor',
    0x10001307: 'Terrain_calcNormals',
    0x10001339: 'Terrain_setSplineHeight',
    0x1000133e: 'Terrain_elevateCorner',
    0x10001343: 'Terrain_getElevation',
}

# Constantes Windows courantes (pour la décompilation)
WIN32_CONSTS = {
    0x80000000: 'MB_OK | MB_ICONERROR',
}


def parse_disassembly(filepath: Path) -> list[dict]:
    """Parse le fichier de désassemblage et retourne la liste des fonctions."""
    functions = []
    current_func = None
    current_lines = []
    
    with open(filepath, 'r') as f:
        for line in f:
            line = line.rstrip()
            
            # Début d'une nouvelle fonction
            func_match = re.match(r';; --- (func_0x[0-9a-fA-F]+)\s*\((\w+)\)\s*---', line)
            if func_match:
                # Sauvegarder la fonction précédente
                if current_func:
                    current_func['body'] = current_lines
                    functions.append(current_func)
                
                current_func = {
                    'name': func_match.group(1),
                    'addr': int(func_match.group(1).split('_')[1], 16),
                    'type': func_match.group(2),
                    'body': [],
                }
                current_lines = []
                continue
            
            # Ligne d'export
            export_match = re.match(r';; EXPORT:\s*(.*?)$', line)
            if export_match and current_func:
                current_func['export'] = export_match.group(1).strip()
                continue
            
            # Ligne de taille
            size_match = re.match(r';; Size:\s*(\d+)\s*bytes', line)
            if size_match and current_func:
                current_func['size'] = int(size_match.group(1))
                continue
            
            if current_func:
                current_lines.append(line)
    
    # Dernière fonction
    if current_func:
        current_func['body'] = current_lines
        functions.append(current_func)
    
    return functions


def analyze_instructions(body: list[str]) -> list[dict]:
    """Analyse les instructions d'une fonction."""
    instrs = []
    for line in body:
        line = line.strip()
        if not line or line.startswith(';') or line.startswith('//'):
            continue
        
        match = re.match(r'\s*0x([0-9a-fA-F]+):\s+(.*)', line)
        if match:
            addr = int(match.group(1), 16)
            asm = match.group(2)
            
            # Extraire l'opcode et les opérandes
            asm_parts = asm.split(None, 1)
            opcode = asm_parts[0] if asm_parts else ''
            operands = asm_parts[1] if len(asm_parts) > 1 else ''
            
            instrs.append({
                'addr': addr,
                'raw': asm,
                'opcode': opcode,
                'operands': operands,
            })
    
    return instrs


def decompile_function(func: dict) -> str:
    """Décompile une fonction en C."""
    name = func['name']
    addr = func['addr']
    ftype = func['type']
    size = func.get('size', 0)
    export = func.get('export', '')
    
    instrs = analyze_instructions(func['body'])
    
    # Détection du type de fonction
    is_stdcall = export and ('@' in export or 'stdcall' in export.lower())
    is_thiscall = export and 'PAV' in export  # MSVC mangling for __thiscall
    is_cdecl = export and not is_stdcall and not is_thiscall
    
    # Nom de la fonction
    func_name = export.split('@@')[0].lstrip('?') if export else f'func_{addr:08x}'
    
    # Signature basée sur le prologue
    params = gen_params_from_prologue(instrs)
    call_conv = '__thiscall' if is_thiscall else ('__stdcall' if is_stdcall else '__cdecl')
    
    lines = []
    lines.append(f'// {func_name}')
    lines.append(f'// Adresse: 0x{addr:08x}, Taille: {size} bytes, Type: {ftype}')
    if export:
        lines.append(f'// Export: {export}')
    lines.append(f'// Instructions: {len(instrs)}')
    lines.append('')
    
    # Prologue et corps
    blocks = identify_blocks(instrs)
    
    if blocks:
        lines.append(f'void* {func_name}(void) {{')
        lines.append(f'    // {len(blocks)} blocs de base')
        for bi, block in enumerate(blocks):
            if block['type'] == 'data':
                lines.append(f'    // bloc data @ 0x{block["addr"]:08x}')
            else:
                first_addr = block['instrs'][0]['addr'] if block['instrs'] else 0
                lines.append(f'    /* block_{bi} @ 0x{first_addr:08x}: {block["type"]} */')
                for instr in block['instrs'][:5]:
                    lines.append(f'    // {instr["raw"]}')
                if len(block['instrs']) > 5:
                    lines.append(f'    // ... ({len(block["instrs"])} instructions)')
        lines.append('}')
    else:
        lines.append(f'void* {func_name}(void) {{')
        lines.append(f'    // {len(instrs)} instructions non décompressées')
        for instr in instrs[:10]:
            lines.append(f'    // {instr["raw"]}')
        if len(instrs) > 10:
            lines.append(f'    // ... ({len(instrs)} instructions)')
        lines.append('}')
    
    return '\n'.join(lines)


def gen_params_from_prologue(instrs: list[dict]) -> str:
    """Génère les paramètres depuis le prologue."""
    if not instrs:
        return 'void'
    return 'void'


def identify_blocks(instrs: list[dict]) -> list[dict]:
    """Identifie les blocs de base (code vs data)."""
    if not instrs:
        return []
    
    blocks = []
    current_block = {'type': 'code', 'addr': instrs[0]['addr'], 'instrs': []}
    
    for instr in instrs:
        # Détection de données intercalées (séquences non-décodables)
        if is_data_sequence(instr):
            if current_block['instrs']:
                blocks.append(current_block)
            current_block = {'type': 'data', 'addr': instr['addr'], 'instrs': [instr]}
            if instrs.index(instr) < len(instrs) - 1:
                next_instr = instrs[instrs.index(instr) + 1]
                if next_instr['opcode'] in ('mov', 'push', 'call', 'cmp', 'jmp', 'je', 'ret', 'nop', 'lea', 'add', 'sub'):
                    blocks.append(current_block)
                    current_block = {'type': 'code', 'addr': next_instr['addr'], 'instrs': []}
        else:
            current_block['instrs'].append(instr)
            
            # Fin de bloc sur les branches
            if instr['opcode'] in ('ret', 'retn', 'jmp', 'int3'):
                if current_block['instrs']:
                    blocks.append(current_block)
                current_block = {'type': 'code', 'addr': 0, 'instrs': []}
    
    if current_block['instrs']:
        blocks.append(current_block)
    
    return blocks


def is_data_sequence(instr: dict) -> bool:
    """Détecte si une instruction est en fait des données."""
    op = instr['opcode']
    # Les instructions valides pour du code
    valid_ops = {
        'mov', 'push', 'pop', 'add', 'sub', 'mul', 'div', 'imul', 'idiv',
        'and', 'or', 'xor', 'not', 'neg', 'shl', 'shr', 'sar', 'ror', 'rol',
        'cmp', 'test', 'jmp', 'je', 'jne', 'jg', 'jl', 'jge', 'jle',
        'ja', 'jb', 'jae', 'jbe', 'js', 'jns', 'jo', 'jno', 'jp', 'jnp',
        'call', 'ret', 'retn', 'int3', 'nop', 'lea', 'xchg',
        'fld', 'fstp', 'fadd', 'fsub', 'fmul', 'fdiv', 'fcom', 'fcomp',
        'fchs', 'fsqrt', 'fild', 'fistp',
        'pushfd', 'popfd', 'pushad', 'popad',
        'cdq', 'cdqe', 'cwde', 'cwd',
        'inc', 'dec', 'enter', 'leave',
        'rep', 'repne', 'stosb', 'stosd', 'movsb', 'movsd', 'lodsb', 'lodsd',
        'scasb', 'scasd', 'cmpsb',
    }
    return op not in valid_ops


def main():
    if not DISASM_PATH.exists():
        print(f"ERREUR: {DISASM_PATH} introuvable")
        return 1
    
    print(f"Parsing: {DISASM_PATH}")
    functions = parse_disassembly(DISASM_PATH)
    print(f"Trouvé: {len(functions)} fonctions")
    
    if '--list' in sys.argv:
        for f in functions:
            export = f.get('export', '')
            size = f.get('size', 0)
            label = export.split('@@')[0].lstrip('?') if export else f['name']
            print(f"  0x{f['addr']:08x} | {size:5d}B | {f['type']:15s} | {label}")
    
    elif '--func' in sys.argv:
        idx = sys.argv.index('--func')
        target = sys.argv[idx + 1]
        if target.startswith('0x'):
            target_addr = int(target, 16)
        else:
            target_addr = int(target)
        
        for f in functions:
            if f['addr'] == target_addr:
                print(decompile_function(f))
                break
        else:
            print(f"Fonction 0x{target_addr:08x} non trouvée")
    
    elif '--export-all' in sys.argv:
        for f in functions:
            if f.get('export'):
                print(f"\n{'='*60}")
                print(decompile_function(f))
    
    else:
        # Stats
        types = {}
        for f in functions:
            t = f.get('type', 'unknown')
            types[t] = types.get(t, 0) + 1
        
        print("\n=== STATS PAR TYPE ===")
        for t, c in sorted(types.items(), key=lambda x: -x[1]):
            print(f"  {t:20s}: {c:4d}")
        
        print("\n=== EXPORTS ===")
        for f in functions:
            if f.get('export'):
                print(f"  0x{f['addr']:08x} {f.get('export', '')}")
    
    return 0


if __name__ == '__main__':
    sys.exit(main())

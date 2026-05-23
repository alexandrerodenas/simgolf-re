#!/usr/bin/env python3
"""
Batch decompiler — transforme le désassemblage brut en C nettoyé.
Traitement par lots de 10 fonctions, écrit dans ref/decompiled/batch_N.c
"""

import re, sys, os
from pathlib import Path

DISASM_PATH = Path('/home/roden/simgolf-re/ref/raw_disasm/golf_unpacked_func_disasm.txt')
DECOMP_DIR = Path('/home/roden/simgolf-re/ref/decompiled')
BATCH_SIZE = 10

# Registres 32 bits
REG_32 = ['eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'esp', 'ebp']

# Opérandes mémoire → variables C
def mem_to_var(op: str) -> str:
    """Convertit un operand mémoire en nom de variable C."""
    op = op.strip()
    # [esp+0xNN] → local_NN
    m = re.match(r'dword\s*ptr\s*\[esp\s*\+\s*(0x[0-9a-fA-F]+)\]', op)
    if m:
        return f'local_{m.group(1)}'
    # [ebp+0xNN] → arg_NN (paramètres) ou var_NN (locales)
    m = re.match(r'dword\s*ptr\s*\[ebp\s*\+\s*(0x[0-9a-fA-F]+)\]', op)
    if m:
        offset = int(m.group(1), 16)
        if offset >= 8:  # paramètres (après ebp+4=return addr)
            return f'arg_{hex(offset-8)}'
        else:
            return f'var_{hex(offset)}'
    # [reg] → *reg
    m = re.match(r'dword\s*ptr\s*\[(\w+)\]', op)
    if m:
        return f'*{m.group(1)}'
    # [reg+N] → reg[N/4] (pour tableaux)
    m = re.match(r'dword\s*ptr\s*\[(\w+)\s*\+\s*(0x[0-9a-fA-F]+)\]', op)
    if m:
        offset = int(m.group(2), 16)
        return f'{m.group(1)}[{hex(offset)}]' if offset > 0 else f'*{m.group(1)}'
    return op


def asm_to_c_comment(instr: dict) -> str:
    """Convertit une instruction ASM en commentaire C."""
    op = instr['opcode']
    ops = instr['operands']
    addr = instr['addr']
    
    # Traductions simples
    if op == 'push' and ops.startswith('0x'):
        val = ops.split(None, 1)[0] if ' ' in ops else ops
        try:
            v = int(val, 16)
            if v > 0x7FFFFFFF:  # flag constant
                return f'push({val})  // flag'
            elif v < 0x10000:
                return f'push({val})'
            else:
                return f'push({val})  // ptr?'
        except:
            pass
    
    if op == 'call':
        target = ops.split(None, 1)[0] if ' ' in ops else ops
        return f'CALL({target})'
    
    if op in ('jmp', 'je', 'jne', 'jg', 'jl', 'jge', 'jle', 'ja', 'jb'):
        target = ops.split(None, 1)[0] if ' ' in ops else ops
        return f'if (...) GOTO({target})'
    
    if op == 'ret' or op == 'retn':
        return 'return;'
    
    if op == 'int3':
        return '// __debugbreak()'
    
    if op == 'nop':
        return '// nop'
    
    return f'{op} {ops}'


def parse_function_asm(body: list[str]) -> list[dict]:
    """Parse les instructions ASM d'une fonction."""
    instrs = []
    for line in body:
        line = line.strip()
        if not line or line.startswith(';'):
            continue
        m = re.match(r'\s*0x([0-9a-fA-F]+):\s+(.*)', line)
        if m:
            addr = int(m.group(1), 16)
            raw = m.group(2).strip()
            parts = raw.split(None, 1)
            opcode = parts[0] if parts else ''
            operands = parts[1] if len(parts) > 1 else ''
            instrs.append({
                'addr': addr,
                'opcode': opcode,
                'operands': operands,
                'raw': raw,
            })
    return instrs


def identify_msvc_pattern(instrs: list[dict]) -> dict:
    """Détecte les patterns MSVC standard."""
    result = {
        'type': 'function',
        'calling': '__cdecl',
        'params': 0,
        'locals_size': 0,
        'has_seh': False,
        'has_float': False,
        'calls': [],
        'constants': set(),
    }
    
    for i, instr in enumerate(instrs):
        # Détection calling convention
        if instr['opcode'] == 'push' and 'ecx' in instr['operands'] and i < 3:
            result['calling'] = '__thiscall'
        
        # Taille des locales (sub esp, N)
        m = re.match(r'(0x[0-9a-fA-F]+)', instr['operands'])
        if instr['opcode'] == 'sub' and 'esp' in instr['operands'] and m:
            result['locals_size'] = int(m.group(1), 16)
        
        # SEH
        if 'fs:' in instr['operands']:
            result['has_seh'] = True
        
        # Float
        if instr['opcode'].startswith('f'):
            result['has_float'] = True
        
        # Appels
        if instr['opcode'] == 'call':
            target = instr['operands'].split()[0] if instr['operands'] else ''
            if target not in result['calls']:
                result['calls'].append(target)
        
        # Constantes
        m = re.match(r'(0x[0-9a-fA-F]+)', instr['operands'])
        if m:
            try:
                val = int(m.group(1), 16)
                if val > 0x1000 and val < 0x80000000:
                    result['constants'].add(hex(val))
            except:
                pass
    
    # Compter push avant call pour les params
    push_count = 0
    for instr in instrs:
        if instr['opcode'] == 'push':
            push_count += 1
        elif instr['opcode'] == 'call':
            result['params'] = max(result['params'], push_count)
            push_count = 0
    
    return result


def generate_c_function(func: dict) -> str:
    """Génère le code C pour une fonction."""
    name = func['name']
    addr = func['addr']
    ftype = func['type']
    
    raw_body = func.get('body', [])
    # Compter les lignes ASM (approximation de la taille)
    asm_lines = [l for l in raw_body if re.match(r'\s*0x[0-9a-fA-F]+:', l)]
    size = len(asm_lines) * 5  # ~5 bytes par instruction en moyenne
    export = func.get('export', '')
    
    instrs = parse_function_asm(raw_body)
    info = identify_msvc_pattern(instrs)
    
    # Nom de la fonction
    func_name = export.split('@@')[0].lstrip('?') if export else f'func_{addr:08x}'
    func_name = re.sub(r'[^A-Za-z0-9_]', '_', func_name)
    
    lines = []
    lines.append('/**')
    lines.append(f' * {func_name} — Auto-décompilé')
    lines.append(f' * Adresse: 0x{addr:08x} [golf.exe]')
    lines.append(f' * Taille: {size} bytes, Type: {ftype}')
    if export:
        lines.append(f' * Export C++: {export}')
    lines.append(f' * Appel: {info["calling"]}, Locals: {info["locals_size"]}B, SEH: {info["has_seh"]}')
    if info['calls']:
        lines.append(f' * Appelle: {", ".join(info["calls"][:8])}')
    if info['constants']:
        lines.append(f' * Constantes: {", ".join(list(info["constants"])[:8])}')
    lines.append(' */')
    
    if size > 10 and len(instrs) > 3:
        lines.append(f'void {func_name}(void) {{')
        lines.append(f'    /* {len(instrs)} instructions */')
        lines.append('')
        
        # Traduire les instructions en commentaires
        for instr in instrs:
            comment = asm_to_c_comment(instr)
            if comment:
                lines.append(f'    // {comment}')
        
        lines.append('}')
    else:
        lines.append(f'// {func_name}: thunk/small ({size}B, {len(instrs)} instrs)')
    
    return '\n'.join(lines)


def batch_decompile(start: int = 0, count: int = 0):
    """Décompile un lot de fonctions."""
    # Parser tout le fichier
    functions = []
    current_func = None
    current_lines = []
    
    with open(DISASM_PATH) as f:
        for line in f:
            line = line.rstrip()
            m = re.match(r';; --- (func_0x[0-9a-fA-F]+)\s+\((\w+)\)\s+---', line)
            if m:
                if current_func:
                    current_func['body'] = current_lines
                    functions.append(current_func)
                current_func = {
                    'name': m.group(1), 'addr': int(m.group(1).split('_')[1], 16),
                    'type': m.group(2), 'body': [], 'size': 0, 'export': '',
                }
                current_lines = []
                continue
            
            m = re.search(r'Size:\s*(\d+)', line)
            if m and current_func:
                current_func['size'] = int(m.group(1))
                continue
            
            m = re.search(r'EXPORT:\s*(.*)', line)
            if m and current_func:
                current_func['export'] = m.group(1).strip()
                continue
            
            if current_func:
                current_lines.append(line)
    
    if current_func:
        current_func['body'] = current_lines
        functions.append(current_func)
    
    # Filtrer pour std_prologue uniquement, avec un minimum d'instructions
    funcs = [f for f in functions if f['type'] == 'std_prologue' and len(f.get('body', [])) > 5]
    
    if count > 0:
        funcs = funcs[start:start + count]
    elif start > 0:
        funcs = funcs[start:]
    
    print(f"Total fonctions avec corps: {len(funcs)}")
    print(f"Traitement du lot: {len(funcs)} fonctions\n")
    
    for f in funcs:
        output = generate_c_function(f)
        # Nettoyer le nom
        export = f.get('export', '')
        fname = export.split('@@')[0].lstrip('?') if export else f['name']
        fname = re.sub(r'[^A-Za-z0-9_]', '_', fname)
        
        # Écrire dans un fichier
        outpath = DECOMP_DIR / f'decompiled_golf_{fname}.c'
        with open(outpath, 'w') as fout:
            fout.write(output)
        print(f"  ✓ {outpath.name} ({len(output)} chars)")
    
    print(f"\nLot terminé: {len(funcs)} fonctions → {DECOMP_DIR}")


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser(description='Batch decompiler SimGolf')
    parser.add_argument('--start', type=int, default=0, help='Index de début')
    parser.add_argument('--count', type=int, default=0, help='Nombre de fonctions à décompiler')
    
    args = parser.parse_args()
    batch_decompile(args.start, args.count)

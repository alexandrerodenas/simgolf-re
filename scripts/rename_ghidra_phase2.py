#!/usr/bin/env python3
"""
Phase 2 du renommage : extraire les noms C++ depuis les en-têtes Ghidra
et les appliquer aux fichiers FUN_* restants.
"""

import os, re, shutil
from pathlib import Path

GHIDRA_DIR = Path("/home/roden/simgolf-re/ref/decompiled/ghidra")
LOG_FILE   = Path("/home/roden/simgolf-re/logs/rename2.log")

def extract_names_from(filepath):
    """Extrait le nom démanglé et l'adresse depuis un fichier Ghidra."""
    results = []
    with open(filepath) as f:
        content = f.read()
    
    # Cherche les en-têtes de fonction avec noms C++
    # Pattern 1: /* public: void __thiscall Terrain::tileAt(int,int) */
    # Pattern 2: /* Function: FUN_1000e6c0 @ 0x1000E6C0 */
    function_name = None
    function_addr = None
    
    for line in content.split('\n')[:10]:  # only check first 10 lines
        m = re.search(r'Function: (\S+) @ (0x[0-9A-Fa-f]+)', line)
        if m:
            function_name = m.group(1)
            function_addr = m.group(2)
    
    if not function_addr:
        return []
    
    addr_int = int(function_addr, 16)
    
    # Check for demangled C++ name
    for line in content.split('\n')[:20]:
        # Pattern: /* public: void __thiscall Class::method(...) */
        m = re.search(r'/\* (?:public|protected|private):\s+(?:\w+\s+)*__\w+call\s+(\w+)::(\w+)', line)
        if m:
            class_name = m.group(1)
            method_name = m.group(2)
            clean_name = f"{class_name}_{method_name}"
            # Clean for filename
            clean_name = re.sub(r'[^a-zA-Z0-9_]', '_', clean_name)
            clean_name = re.sub(r'_+', '_', clean_name).strip('_')
            return [(addr_int, clean_name, function_name)]
    
    # Also check for exported patterns (C conventions)
    for line in content.split('\n')[:20]:
        m = re.search(r'/\* (?:public|protected|private):\s+.*?(\w+)\s+__\w+call\s+(\w+)', line)
        if m:
            return_type = m.group(1)
            func_name = m.group(2)
            if return_type.lower() not in ('void', 'int', 'bool', 'float', 'char', 'long', 'short', 'double', 'unsigned', 'signed'):
                clean_name = func_name
            else:
                clean_name = func_name
            clean_name = re.sub(r'[^a-zA-Z0-9_]', '_', clean_name)
            return [(addr_int, clean_name, function_name)]
    
    return []

def main():
    LOG_FILE.parent.mkdir(parents=True, exist_ok=True)
    log_lines = []
    renamed = 0
    skipped = 0
    already_named = 0

    all_mappings = {}

    # Scan all subdirectories
    for subdir in ['golf', 'terrain', 'sound', 'jgld', 'jgl', 'crt']:
        d = GHIDRA_DIR / subdir
        if not d.exists():
            continue
        for f in sorted(d.glob("FUN_*.c")):
            addrs = extract_names_from(f)
            if not addrs:
                skipped += 1
                continue
            
            for addr, clean_name, orig_name in addrs:
                all_mappings[f.name] = (addr, clean_name, orig_name, subdir)
    
    # Apply renames
    for old_name, (addr, clean_name, orig_name, subdir) in sorted(all_mappings.items()):
        src = GHIDRA_DIR / subdir / old_name
        new_name = f"{clean_name}.c"
        dst = GHIDRA_DIR / subdir / new_name
        
        if dst.exists():
            if dst.stat().st_size > 0:
                already_named += 1
                continue
            # Empty or conflict - use unique name
            dst = GHIDRA_DIR / subdir / f"{clean_name}_{addr:08x}.c"
        
        shutil.move(str(src), str(dst))
        renamed += 1
        log_lines.append(f"{old_name:45s} → {subdir}/{new_name}  (0x{addr:08x})")
    
    print(f"Scanné: {skipped + renamed + already_named} fichiers FUN_")
    print(f"Renommé: {renamed}")
    print(f"Déjà nommé: {already_named}")
    print(f"Sans nom dérivé: {skipped}")
    
    with open(LOG_FILE, 'w') as lp:
        lp.write(f"Phase 2: {renamed} renommés\n\n")
        for line in log_lines:
            lp.write(line + "\n")
    print(f"Log: {LOG_FILE}")

if __name__ == "__main__":
    main()

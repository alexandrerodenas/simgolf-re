#!/usr/bin/env python3
"""
Disassemblage fonction-level de golf.exe (dépaqueté).
Détecte les prologues de fonctions standard ET __thiscall,
désassemble chaque fonction indépendamment,
évite les problèmes de données intercalées du linear sweep.

Utilisation : python3 disassemble_golf_functions.py
Sortie : golf_unpacked_func_disasm.txt
"""

import pefile
import struct
from capstone import *
from collections import Counter
import os

# ================================================================
# Configuration
# ================================================================
PE_PATH = os.path.expanduser("~/simgolf-re/data/exe_unpacked/golf.exe")
OUT_PATH = os.path.expanduser("~/simgolf-re/raw_decomp/golf_unpacked_func_disasm.txt")

# Seuils
MIN_FUNC_SIZE = 8       # Taille minimum d'une fonction (bytes)
MAX_FUNC_SIZE = 50000   # Taille maximum (sécurité)
PADDING_INTS = 4        # Nombre d'int3 (0xCC) minimum pour détecter fin de fonction
THUNK_WINDOW = 0x4000   # Taille de la zone de thunks au début de .text

# ================================================================
# Detection des prologues de fonctions
# ================================================================

def find_function_starts(text_data, text_addr):
    """
    Détecte TOUS les prologues de fonctions :
    
    Standard (push ebp; mov ebp, esp) :
      - 55 89 E5  (mov ebp, esp encoding alternative)
      - 55 8B EC  (standard MSVC)
    
    __thiscall (pattern MSVC debug) :
      - push ecx; push ebx; push esi; mov esi, ecx; push edi
        bytes: 51 53 56 89 CE 57
    """
    starts = set()
    
    # Pattern 1: push ebp; mov ebp, esp (55 8B EC)
    for i in range(len(text_data) - 3):
        if text_data[i] == 0x55 and text_data[i+1] == 0x8B and text_data[i+2] == 0xEC:
            starts.add(text_addr + i)
        # Alternative: push ebp; mov ebp, esp (55 89 E5)
        elif text_data[i] == 0x55 and text_data[i+1] == 0x89 and text_data[i+2] == 0xE5:
            starts.add(text_addr + i)
    
    # Pattern 2: __thiscall (51 53 56 89 CE 57)
    for i in range(len(text_data) - 6):
        if (text_data[i] == 0x51 and text_data[i+1] == 0x53 and 
            text_data[i+2] == 0x56 and text_data[i+3] == 0x89 and 
            text_data[i+4] == 0xCE and text_data[i+5] == 0x57):
            starts.add(text_addr + i)
    
    return sorted(starts)


def find_function_end(text_data, start_va, text_addr, text_len):
    """
    Trouve la fin d'une fonction en cherchant ret + padding int3 (0xCC).
    """
    offset = start_va - text_addr
    if offset < 0 or offset >= text_len:
        return min(offset + MAX_FUNC_SIZE, text_len) + text_addr
    
    end = offset + MIN_FUNC_SIZE
    while end < min(offset + MAX_FUNC_SIZE, text_len):
        b = text_data[end]
        
        if b == 0xC3:  # ret (near)
            pad_end = end + 1
            pad_count = 0
            while pad_end < text_len and text_data[pad_end] == 0xCC:
                pad_count += 1
                pad_end += 1
            if pad_count >= PADDING_INTS:
                return text_addr + pad_end
        
        elif b == 0xC2:  # ret imm16 (near)
            if end + 2 < text_len:
                end += 3  # ret + 2 bytes imm
                pad_end = end
                pad_count = 0
                while pad_end < text_len and text_data[pad_end] == 0xCC:
                    pad_count += 1
                    pad_end += 1
                if pad_count >= PADDING_INTS:
                    return text_addr + pad_end
        
        end += 1
    
    # Fallback: next known function start or max size
    return min(offset + MAX_FUNC_SIZE, text_len) + text_addr


def find_thunk_targets(text_data, text_addr, imagebase):
    """
    Trouve les cibles des thunks (jmp rel32) dans la fenêtre de thunks.
    """
    thunks = {}
    window = min(THUNK_WINDOW, len(text_data))
    
    for i in range(window):
        va = text_addr + i
        # jmp rel32 = 0xE9
        if text_data[i] == 0xE9 and i + 4 < len(text_data):
            rel = struct.unpack_from('<i', text_data, i+1)[0]
            target = (va + 5 + rel) & 0xFFFFFFFF
            if text_addr <= target < text_addr + len(text_data):
                thunks[va] = target  # thunk → target
    
    return thunks


def is_valid_code_start(va, text_addr, text_len):
    """Vérifie qu'une adresse est dans la section .text."""
    return text_addr <= va < text_addr + text_len


# ================================================================
# Analyse des exports et hubs connus
# ================================================================

def build_known_functions():
    """
    Mapping des adresses connues → noms (depuis gameplay_architecture.md et analyse).
    """
    known = {
        # WinMain et pipeline d'initialisation
        0x004a682f: "WinMain (EP)",
        0x004a93ff: "InitGameSystems",
        0x004a794d: "HeapSetup",
        0x004a8dec: "SystemCheck",
        0x004ab240: "CreateMainWindow",
        0x004aaff3: "InitGraphics",
        0x004aaf3a: "InitSound",
        0x004a50db: "InitGameState",
        0x004aaee2: "InitInstance",
        0x004ab372: "ShowErrorDialog",
        0x004ab3ab: "ExitProcess",
        
        # Hubs principaux
        0x00494f00: "CoursEngine::Update (hub, 285 appels)",
        0x00485e80: "TileGrid::Dispatch (hub, 218 appels)",
        0x00476dd0: "StringParser (helper, 296 appels)",
        
        # Simulation
        0x0049846c: "GameTickFunction (16 slots × 0x58)",
        0x004969e0: "SmoothInterpolator::Update",
        
        # Utilitaires
        0x0043d740: "operator_new (alloc, 496 appels)",
        0x00473bf0: "operator_new_array (266 appels)",
        0x0043d6f0: "operator_delete (160 appels)",
        0x0045c1e0: "String_method (130 appels)",
        0x004a5007: "SEH_handler (107 appels)",
        0x004762d0: "Container_method (80 appels)",
        
        # Autres
        0x004a5108: "RegisterGameTimer",
        0x004a5119: "GameLoopCallback",
        0x004aad6a: "CleanupAndExit",
        0x0045baf0: "InitFontSystem",
    }
    return known


def find_string_references(disasm_text):
    """
    Cherche les références aux chaînes de jeu dans le désassemblage.
    (push 0x4bxxxx ou push 0x4cxxxx)
    """
    import re
    refs = Counter()
    for line in disasm_text.split('\n'):
        m = re.search(r'push\s+(0x4[bBcC][0-9a-fA-F]+)', line)
        if m:
            refs[m.group(1)] += 1
    return refs


# ================================================================
# Désassemblage principal
# ================================================================

def main():
    print(f"[*] Chargement de {PE_PATH}...")
    pe = pefile.PE(PE_PATH)
    imagebase = pe.OPTIONAL_HEADER.ImageBase
    print(f"[*] ImageBase: 0x{imagebase:08x}")
    
    # Section .text
    text_sec = None
    for sec in pe.sections:
        name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
        if name == '.text':
            text_sec = sec
            break
    
    if text_sec is None:
        print("[!] Section .text introuvable")
        return
    
    text_data = text_sec.get_data()
    text_addr = imagebase + text_sec.VirtualAddress
    text_size = len(text_data)
    print(f"[*] .text: {text_size} bytes @ 0x{text_addr:08x}")
    
    # Capstone engine
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    
    # === Phase 1: Détection des fonctions ===
    print("\n[*] Phase 1: Détection des prologues de fonctions...")
    func_starts = find_function_starts(text_data, text_addr)
    print(f"    → {len(func_starts)} prologues détectés")
    
    # Fonctions connues
    known_funcs = build_known_functions()
    print(f"    → {len(known_funcs)} fonctions connues")
    
    # Thunks
    thunk_map = find_thunk_targets(text_data, text_addr, imagebase)
    print(f"    → {len(thunk_map)} thunks jmp détectés")
    
    # === Phase 2: Cartographie des fonctions ===
    print("\n[*] Phase 2: Cartographie des fonctions...")
    
    # Fusionne toutes les adresses de fonctions
    all_funcs = set(func_starts)
    for va in thunk_map.values():
        if is_valid_code_start(va, text_addr, text_size):
            all_funcs.add(va)
    for va in known_funcs:
        if is_valid_code_start(va, text_addr, text_size):
            all_funcs.add(va)
    
    all_funcs = sorted(all_funcs)
    print(f"    → {len(all_funcs)} candidats fonctions")
    
    # === Phase 3: Désassemblage fonction par fonction ===
    print(f"\n[*] Phase 3: Désassemblage...")
    
    lines = []
    lines.append(f";; golf.exe UNPACKED - Function-Level Disassembly (v2)")
    lines.append(f";; .text: {text_size} bytes @ 0x{text_addr:08x}")
    lines.append(f";; ImageBase: 0x{imagebase:08x}")
    lines.append(f";; Entry Point: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint + imagebase:08x}")
    lines.append(f";; Functions found: {len(all_funcs)}")
    lines.append(f"")
    
    processed = 0
    errors = 0
    total_funcs = len(all_funcs)
    
    for func_va in all_funcs:
        func_off = func_va - text_addr
        if func_off < 0 or func_off >= text_size:
            continue
        
        # Vérifie qu'on n'a pas déjà inclus cette fonction dans la précédente
        # (évite les doublons de fonctions qui se chevauchent)
        prev_lines = len(lines)
        if prev_lines > 0:
            last_addr_match = None
            for line in reversed(lines[-50:]):
                if '0x' in line:
                    import re
                    m = re.search(r'0x([0-9a-fA-F]+)', line)
                    if m:
                        try:
                            last_addr = int(m.group(1), 16)
                            if last_addr > func_va:
                                break  # Cette fonction est déjà dans le bloc précédent
                            else:
                                pass  # Nouvelle fonction
                        except:
                            pass
        
        # Nom de la fonction
        if func_va in known_funcs:
            name = known_funcs[func_va]
            lines.append(f"\n;; === {name} ===")
            lines.append(f";; @ 0x{func_va:08x}")
        elif func_va in func_starts:
            lines.append(f"\n;; --- func_0x{func_va:08x} (std_prologue) ---")
        else:
            lines.append(f"\n;; --- func_0x{func_va:08x} (thunk_target) ---")
        
        # Trouve la fin de la fonction
        func_end = find_function_end(text_data, func_va, text_addr, text_size)
        func_size = func_end - func_va
        
        if func_size < MIN_FUNC_SIZE:
            lines.append(f"  ; [TOO SMALL: {func_size} bytes, skipping]")
            continue
        
        # Extrait les bytes de la fonction
        chunk = text_data[func_off:func_off + func_size]
        
        # Désassemble
        func_bytes_decoded = 0
        try:
            for insn in md.disasm(chunk, func_va):
                op_str = insn.op_str.replace('\n', ' ').replace('\r', '')
                lines.append(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}")
                func_bytes_decoded = insn.address + insn.size - func_va
                processed += 1
        except Exception as e:
            lines.append(f"  ; [ERROR: {e}]")
            errors += 1
        
        # Vérifie qu'on a bien désassemblé quelque chose
        if func_bytes_decoded < MIN_FUNC_SIZE:
            # Retire l'entête
            lines.pop()
            if lines and lines[-1].startswith(';; ---') or lines[-1].startswith(';; ==='):
                lines.pop()
    
    print(f"    → {processed} instructions désassemblées, {errors} erreurs")
    
    # === Phase 4: Sauvegarde ===
    print(f"\n[*] Sauvegarde dans {OUT_PATH}...")
    with open(OUT_PATH, 'w') as f:
        f.write('\n'.join(lines))
    
    print(f"    → {len(lines)} lignes écrites")
    
    # === Phase 5: Stats ===
    print(f"\n[*] Stats:")
    
    # Compte les fonctions par catégorie
    known_found = sum(1 for va in known_funcs if va in all_funcs)
    std_count = sum(1 for va in func_starts if va in all_funcs)
    print(f"    Fonctions connues trouvées : {known_found}/{len(known_funcs)}")
    print(f"    Prologues std (push ebp)    : {std_count}")
    print(f"    Total fonctions              : {len(all_funcs)}")
    
    # Call graph approximatif
    print(f"\n[*] Recherche des hubs (fonctions avec le plus d'appels)...")
    call_targets = Counter()
    current_func = None
    for line in lines:
        if line.startswith(';; ===') or line.startswith(';; ---'):
            m = __import__('re').search(r'func_0x([0-9a-f]+)|0x([0-9a-f]{8})', line)
            if m:
                addr = m.group(1) or m.group(2)
                current_func = f"0x{addr}"
        m = __import__('re').search(r'call\s+(0x[0-9a-f]+)', line)
        if m and current_func:
            target = m.group(1)
            call_targets[f"{current_func} → {target}"] += 1
    
    # Top appels
    print("\n    Top 30 appels les plus fréquents:")
    for call, count in call_targets.most_common(30):
        print(f"      {call} — {count}x")

if __name__ == '__main__':
    main()

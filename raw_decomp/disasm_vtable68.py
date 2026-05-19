#!/usr/bin/env python3
"""
Disassemble specific .text range in golf.exe and extract function-level ASM.
Cible : 0x465170 (vtable[0x68] candidate FPU) et ses voisines.

Approche :
  1. Charger golf.exe avec pefile
  2. Lire la section .text
  3. Désassembler la plage 0x465000-0x466000 (4KB autour de la cible)
  4. Détection de fonctions : prologues classiques + thunks + SEH
  5. Extraire chaque fonction dans un fichier séparé
"""

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
import struct
import os
import sys

TARGET_ADDR  = 0x00465170
RANGE_BEFORE = 0x1000   # 4 KB avant
RANGE_AFTER  = 0x2000   # 8 KB après (pour capturer les fonctions voisines)
OUTPUT_DIR   = "raw_decomp/functions_extracted"

def main():
    pe = pefile.PE("game_data/exe/golf.exe")
    
    # Find .text section
    text_sec = None
    for s in pe.sections:
        name = s.Name.decode("utf-8", errors="replace").strip("\x00").strip()
        if name == ".text":
            text_sec = s
            break
    if not text_sec:
        print("ERROR: .text section not found")
        sys.exit(1)
    
    text_addr = pe.OPTIONAL_HEADER.ImageBase + text_sec.VirtualAddress
    text_data = text_sec.get_data()
    text_size = len(text_data)
    
    print(f".text section: 0x{text_addr:08x} - 0x{text_addr+text_size:08x} ({text_size} bytes)")
    
    # Compute range to disassemble
    start_off = TARGET_ADDR - text_addr - RANGE_BEFORE
    end_off   = TARGET_ADDR - text_addr + RANGE_AFTER
    
    # Clamp to .text boundaries
    if start_off < 0:
        start_off = 0
    if end_off > text_size:
        end_off = text_size
    
    start_addr = text_addr + start_off
    end_addr   = text_addr + end_off
    chunk_data = text_data[start_off:end_off]
    
    print(f"Disassembling: 0x{start_addr:08x} - 0x{end_addr:08x} ({len(chunk_data)} bytes)")
    print()
    
    # Disassemble with Capstone
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    
    all_insns = list(md.disasm(chunk_data, start_addr))
    print(f"Total instructions: {len(all_insns)}")
    
    # === Detect function starts ===
    func_starts = set()
    
    for i, insn in enumerate(all_insns):
        addr = insn.address
        
        # Pattern 1: std prologue (push ebp; mov ebp, esp)
        if (insn.mnemonic == "push" and insn.op_str == "ebp" and
            i + 1 < len(all_insns) and
            all_insns[i+1].mnemonic == "mov" and "ebp, esp" in all_insns[i+1].op_str):
            func_starts.add(addr)
            continue
        
        # Pattern 2: SEH prologue (mov eax, dword ptr fs:[0]; push -1; push xxx; push eax)
        if (insn.mnemonic == "mov" and "eax, dword ptr fs:[0]" in insn.op_str and
            i + 3 < len(all_insns) and 
            all_insns[i+1].mnemonic == "push" and all_insns[i+1].op_str == "-1"):
            func_starts.add(addr)
            continue
        
        # Pattern 3: __thiscall (push ecx; push ebx; push esi; mov esi, ecx)
        if (insn.mnemonic == "push" and insn.op_str == "ecx" and
            i + 3 < len(all_insns) and
            all_insns[i+1].mnemonic == "push" and all_insns[i+1].op_str == "ebx" and
            all_insns[i+2].mnemonic == "push" and all_insns[i+2].op_str == "esi" and
            all_insns[i+3].mnemonic == "mov" and "esi, ecx" in all_insns[i+3].op_str):
            func_starts.add(addr)
            continue
        
        # Pattern 4: sub esp, N (leaf function with no frame)
        if (insn.mnemonic == "sub" and "esp" in insn.op_str and
            i > 0 and all_insns[i-1].mnemonic not in ("ret", "int3", "nop") and
            i + 1 < len(all_insns) and
            all_insns[i+1].mnemonic in ("push", "mov", "xor")):
            # Only if 3+ insns before were int3 or it's near a known function
            if i >= 3 and all(
                all_insns[i-k-1].mnemonic in ("int3", "nop", "ret")
                for k in range(min(3, i))
            ):
                func_starts.add(addr)
    
    print(f"Functions detected: {len(func_starts)}")
    
    # Sort function starts
    sorted_starts = sorted(func_starts)
    print(f"  Range: 0x{sorted_starts[0]:08x} - 0x{sorted_starts[-1]:08x}")
    print()
    
    # Print all detected functions
    print("=== Functions detected ===")
    for addr in sorted_starts:
        # Try to find function size
        next_addr = None
        for a in sorted_starts:
            if a > addr:
                next_addr = a
                break
        if next_addr is None:
            next_addr = end_addr
        
        # Count instructions
        count = sum(1 for insn in all_insns if addr <= insn.address < next_addr)
        if count > 5:  # Only real functions (not 1-2 instruction stubs)
            # Check for FPU in function
            has_fpu = any(
                insn.mnemonic in ("fld", "fstp", "fmul", "fdiv", "fadd", "fsub", "fsqrt", "fild", "fistp", "fcomi", "fucom")
                for insn in all_insns if addr <= insn.address < next_addr
            )
            fpu_mark = " [FPU]" if has_fpu else ""
            # Check for vtable call
            has_vtbl = any(
                "dword ptr [" in insn.op_str and "0x68" in insn.op_str and insn.mnemonic == "call"
                for insn in all_insns if addr <= insn.address < next_addr
            )
            vtbl_mark = " [VTBL68]" if has_vtbl else ""
            
            print(f"  0x{addr:08x} - 0x{next_addr:08x} ({count:4d} insns){fpu_mark}{vtbl_mark}")
    print()
    
    # === Extract and save the target function ===
    print("=== Target function at 0x%08x ===" % TARGET_ADDR)
    print()
    
    # Find which function contains TARGET_ADDR
    containing_func = None
    for i, addr in enumerate(sorted_starts):
        next_addr = sorted_starts[i+1] if i + 1 < len(sorted_starts) else end_addr
        if addr <= TARGET_ADDR < next_addr:
            containing_func = (addr, next_addr)
            break
    
    if containing_func:
        f_start, f_end = containing_func
        print(f"Function: 0x{f_start:08x} - 0x{f_end:08x}")
        print()
        
        # Print the instructions
        for insn in all_insns:
            if f_start <= insn.address < f_end:
                # Add annotation for FPU ops
                annot = ""
                if insn.mnemonic in ("fld", "fstp", "fmul", "fdiv", "fadd", "fsub", "fsqrt", "fild", "fistp"):
                    annot = "  <-- FPU"
                elif "0x68]" in insn.op_str and insn.mnemonic == "call":
                    annot = "  <-- VTBL DISPATCH"
                
                print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {insn.op_str}{annot}")
    else:
        print(f"ERROR: 0x{TARGET_ADDR:08x} not in any detected function!")
        # Show nearby instructions anyway
        print(f"\nInstructions around 0x{TARGET_ADDR:08x}:")
        for insn in all_insns:
            if abs(insn.address - TARGET_ADDR) < 100:
                print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {insn.op_str}")
    
    # === Save all functions to files ===
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    
    for i, addr in enumerate(sorted_starts):
        next_addr = sorted_starts[i+1] if i + 1 < len(sorted_starts) else end_addr
        count = sum(1 for insn in all_insns if addr <= insn.address < next_addr)
        if count <= 5:
            continue
        
        out_path = os.path.join(OUTPUT_DIR, f"func_{addr:08x}.asm")
        with open(out_path, "w") as f:
            f.write(f";; Function at 0x{addr:08x} (vtable[0x68]=0x{TARGET_ADDR:08x} candidate)\n")
            f.write(f";; Size: {next_addr - addr} bytes, {count} instructions\n")
            f.write(f";; Range: 0x{addr:08x} - 0x{next_addr:08x}\n")
            f.write("\n")
            for insn in all_insns:
                if addr <= insn.address < next_addr:
                    f.write(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {insn.op_str}\n")
        
        if addr == TARGET_ADDR:
            print(f"\nSaved target function to: {out_path}")
        elif abs(addr - TARGET_ADDR) < 0x500:
            pass  # nearby
    
    print(f"\nAll functions saved to {OUTPUT_DIR}/")

if __name__ == "__main__":
    main()

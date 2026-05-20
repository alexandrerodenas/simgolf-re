#!/usr/bin/env python3
"""Disassemble vtable[0x68] function = 0x4048a0"""
import pefile, struct
from capstone import *

PE_PATH = "/home/roden/simgolf-re/data/exe_unpacked/golf.exe"
pe = pefile.PE(PE_PATH)
imagebase = pe.OPTIONAL_HEADER.ImageBase
text_sec = pe.sections[0]
text_data = text_sec.get_data()
text_addr = imagebase + text_sec.VirtualAddress
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

func_va = 0x004048a0
func_off = func_va - text_addr

# Find function end
func_end = func_va + 0x800  # default
for i in range(func_off, min(func_off + 0x1000, len(text_data))):
    if text_data[i] == 0xC3:
        j = i + 1
        pad = 0
        while j < min(i+10, len(text_data)) and text_data[j] == 0xCC:
            pad += 1
            j += 1
        if pad >= 3:
            func_end = text_addr + i + 1
            break

chunk = text_data[func_off:func_end - text_addr]
print(f";; vtable[0x68] = 0x{func_va:08x}")
print(f";; Size: {func_end - func_va} bytes")
print()

ball_refs = 0
fpu_ops = []
calls = []

for insn in md.disasm(chunk, func_va):
    op_str = insn.op_str
    marker = ""
    
    if insn.mnemonic.startswith('f') and insn.mnemonic != 'far':
        fpu_ops.append(insn.mnemonic)
        marker = " <<< FPU"
    
    if '0x81ca10' in op_str or '81ca10' in op_str:
        ball_refs += 1
        marker += " <<< BALL DATA"
    
    if insn.mnemonic == 'call' and '0x' in op_str:
        try:
            target = int(insn.op_str, 16)
            if target > 0x401000 and target < 0x4c0000:
                calls.append(target)
                marker += f" <<< CALL"
        except:
            pass
    
    print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}{marker}")

print(f"\n;; =============")
print(f";; FPU ops: {len(fpu_ops)} — {set(fpu_ops)}")
print(f";; Ball data refs: {ball_refs}")
print(f";; Calls: {[hex(c) for c in calls[:20]]}")

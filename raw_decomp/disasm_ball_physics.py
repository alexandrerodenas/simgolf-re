#!/usr/bin/env python3
"""Disassemble the ball physics function (0x460cf0)"""
import pefile, struct
from capstone import *

PE_PATH = "/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe"
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
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Function at 0x460cf0 (thecall, ~40 refs to ball data)
func_va = 0x00460cf0
func_off = func_va - text_addr

# Find function end
func_end = len(text_data) + text_addr
for i in range(func_off, min(func_off + 0x2000, len(text_data))):
    if text_data[i] == 0xC3:
        j = i + 1
        pad = 0
        while j < len(text_data) and text_data[j] == 0xCC:
            pad += 1
            j += 1
        if pad >= 3:
            func_end = text_addr + i + 1
            break

print(f";; Ball Physics Function @ 0x{func_va:08x}")
print(f";; Size: {func_end - func_va} bytes ({func_end - func_va} insn est.)")
print()

chunk = text_data[func_off:func_end - text_addr]

# Count FPU instructions
fpu_count = 0
all_constants = []
current_va = 0
in_fpu = False

for insn in md.disasm(chunk, func_va):
    op_str = insn.op_str
    is_fpu = (insn.mnemonic.startswith('f') and insn.mnemonic != 'far') or insn.mnemonic in ('frstor', 'fnsave')
    
    if is_fpu:
        fpu_count += 1
        marker = " <<< FPU"
        if insn.mnemonic in ('fsqrt', 'fsin', 'fcos', 'fpatan'):
            marker = " <<< *** ADVANCED ***"
        
        # Check for float constant loads
        if 'dword ptr' in op_str:
            import re
            m = re.search(r'0x[0-9a-fA-F]+', op_str)
            if m:
                addr = int(m.group(0), 16)
                off = addr - 0x400000
                if 0 <= off+4 < len(text_data):
                    try:
                        val_f = struct.unpack_from('<f', text_data, off)[0]
                        if 0.001 < abs(val_f) < 100000:
                            all_constants.append((addr, val_f))
                            marker += f" ; = {val_f}"
                    except:
                        pass
        
        print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {op_str}{marker}")

print(f"\n;; =============")
print(f";; Total FPU instructions: {fpu_count}")
print(f"\n;; Float constants found:")
for addr, val in all_constants[:20]:
    print(f"  [0x{addr:08x}] = {val}")

# Show non-FPU critical calls
print(f"\n;; Key function calls:")
for insn in md.disasm(chunk, func_va):
    if insn.mnemonic == 'call' and '0x' in insn.op_str:
        target = int(insn.op_str, 16)
        if target > 0x401000 and target < 0x4ba000:
            print(f"  0x{insn.address:08x}: call 0x{target:08x}")

print(f"\n;; End of function ~0x{func_end:08x}")

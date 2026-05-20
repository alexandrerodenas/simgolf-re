#!/usr/bin/env python3
"""Debug the UNPACKED golf.exe section layout and disassemble around 0x465170."""
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
import struct

EXE_PATH = "data/exe_unpacked/golf.exe"
TARGET_ADDR = 0x00465170
RANGE = 0x2000  # 8 KB

pe = pefile.PE(EXE_PATH)

# Find .text section
text_sec = None
for s in pe.sections:
    name = s.Name.decode("utf-8", errors="replace").strip("\x00").strip()
    if name == ".text":
        text_sec = s
        break

base = pe.OPTIONAL_HEADER.ImageBase
text_va = text_sec.VirtualAddress
text_raw = text_sec.PointerToRawData
text_size = text_sec.SizeOfRawData
text_virt_size = text_sec.Misc_VirtualSize

print(f"ImageBase = 0x{base:08x}")
print(f".text VA=0x{text_va:x} RawPtr=0x{text_raw:x} RawSize=0x{text_size:x} VirtSize=0x{text_virt_size:x}")

# Target RVA 
target_rva = TARGET_ADDR - base
offset_in_section = target_rva - text_va
file_offset = text_raw + offset_in_section

print(f"\nTarget 0x{TARGET_ADDR:08x}:")
print(f"  RVA = 0x{target_rva:x}")
print(f"  Offset in .text = 0x{offset_in_section:x}")
print(f"  File offset = 0x{file_offset:x}")

# Read section data
text_data = text_sec.get_data()

# Read bytes at target
target_data = text_data[offset_in_section:offset_in_section+32]
print(f"\nBytes at target:")
hex_str = " ".join(f"{b:02x}" for b in target_data)
ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in target_data)
print(f"  {hex_str}  {ascii_str}")

# Check if it looks like code
if target_data[0] in (0x55, 0x64, 0x51, 0x56, 0x8B, 0x83, 0xE8, 0xE9):
    print("  ✅ Looks like code!")
else:
    print("  ⚠️ Might not be code (expected 0x55=push ebp, etc)")

# Disassemble around target
start_offset = max(0, offset_in_section - RANGE//2)
end_offset = min(len(text_data), offset_in_section + RANGE//2)
chunk = text_data[start_offset:end_offset]
chunk_addr = base + text_va + start_offset

md = Cs(CS_ARCH_X86, CS_MODE_32)
all_insns = list(md.disasm(chunk, chunk_addr))
print(f"\nTotal instructions: {len(all_insns)}")

# Show instructions around target
print(f"\n=== Instructions around 0x{TARGET_ADDR:08x} ===")
for insn in all_insns:
    if abs(insn.address - TARGET_ADDR) < 256:
        annot = ""
        if insn.mnemonic in ("fld", "fstp", "fmul", "fdiv", "fadd", "fsub", "fsqrt", "fild", "fistp"):
            annot = "  <-- FPU"
        elif "0x68]" in insn.op_str:
            annot = "  <-- vtable[0x68] dispatch"
        print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {insn.op_str}{annot}")

# Find function starts
print(f"\n=== Function detection ===")
for i, insn in enumerate(all_insns):
    addr = insn.address
    # push ebp; mov ebp, esp
    if insn.mnemonic == "push" and insn.op_str == "ebp" and i+1 < len(all_insns) and all_insns[i+1].mnemonic == "mov" and "ebp, esp" in all_insns[i+1].op_str:
        next_addr = all_insns[i+1].address if i+1 < len(all_insns) else 0
        # Count instructions until next push ebp
        count = 0
        has_fpu = False
        for j in range(i+1, min(i+500, len(all_insns))):
            count += 1
            if all_insns[j].mnemonic in ("fld", "fstp", "fmul"):
                has_fpu = True
            if all_insns[j].mnemonic == "push" and all_insns[j].op_str == "ebp" and j != i and count > 5:
                break
            if all_insns[j].mnemonic == "ret" and j > i+1:
                break
            if count > 5 and (all_insns[j].mnemonic in ("int3", "nop") and 
                 j+1 < len(all_insns) and all_insns[j+1].mnemonic in ("int3", "nop")):
                break
        
        fpumark = " [FPU]" if has_fpu else ""
        if count > 10:
            print(f"  0x{addr:08x}  ({count:4d} insn){fpumark}")

# Check for vtable[0x68] dispatch calls
print(f"\n=== vtable[0x68] dispatch calls ===")
for insn in all_insns:
    if "dword ptr [" in insn.op_str and "+ 0x68]" in insn.op_str and insn.mnemonic == "call":
        print(f"  0x{insn.address:08x}:  {insn.mnemonic:8s} {insn.op_str}")

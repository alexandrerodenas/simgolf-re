#!/usr/bin/env python3
"""Check and disassemble the vtable[0x68] hit at 0x4a6ab8."""
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

pe = pefile.PE("game_data/exe_unpacked/golf.exe")
text = pe.sections[0]
data = text.get_data()
base = pe.OPTIONAL_HEADER.ImageBase + text.VirtualAddress

target = 0x004a6ab8
offset = target - base

print(f"Target: 0x{target:08x}, offset in .text: 0x{offset:x}")
bytes_at = data[offset:offset+32]
hex_str = " ".join(f"{b:02x}" for b in bytes_at)
print(f"Bytes: {hex_str}")

if bytes_at[0] == 0x55 and bytes_at[1] == 0x8b:
    print("=> push ebp; mov ebp, esp - STANDARD PROLOGUE")
elif bytes_at[0] == 0x64:
    print("=> mov eax, fs:[0] - SEH PROLOGUE")
elif bytes_at[0] == 0xe9:
    print("=> jmp - THUNK")
elif bytes_at[0] == 0xeb:
    print("=> jmp short - SMALL THUNK")
elif bytes_at[0] == 0xff and bytes_at[1] == 0x25:
    print("=> jmp [addr] - IMPORT THUNK")
elif bytes_at[0] == 0xff and bytes_at[1] == 0x57:
    print("=> call [edi+...] - VTBL DISPATCH ITSELF")
elif bytes_at[0] == 0xcc:
    print("=> int3 - UNINITIALIZED")
else:
    print(f"=> other opcode: 0x{bytes_at[0]:02x}")

# Actually check 0x4a6ab8 - note it's 0x18 before 0x4a6ad0 (std_prologue)
# Could be a small helper function or a thunk

# Disassemble a wider range to understand the function at 0x4a6ab8
md = Cs(CS_ARCH_X86, CS_MODE_32)
start_off = max(0, offset - 0x100)
end_off = min(len(data), offset + 0x800)  # 2KB after
chunk = data[start_off:end_off]
chunk_addr = base + start_off
insns = list(md.disasm(chunk, chunk_addr))
print(f"\n{len(insns)} instructions in range 0x{base+start_off:08x}-0x{base+end_off:08x}")

# Show from 0x4a6800 to 0x4a7500
print("\n=== Instructions 0x4a6800-0x4a7500 ===")
for insn in insns:
    a = insn.address
    if 0x4a6800 <= a < 0x4a7500:
        fpumark = " <-- FPU" if insn.mnemonic in ("fld","fstp","fmul","fdiv","fadd","fsub","fsqrt","fild","fistp") else ""
        vtbl68 = " <-- vtable[0x68]" if insn.mnemonic == "call" and "0x68" in insn.op_str and "dword" in insn.op_str else ""
        print(f"  0x{a:08x}: {insn.mnemonic:8s} {insn.op_str}{fpumark}{vtbl68}")

# Find actual function hits (push ebp; mov ebp, esp) in this range
print("\n=== Functions detected (push ebp; mov ebp, esp) ===")
for insn in insns:
    a = insn.address
    if 0x4a6800 <= a < 0x4a7500:
        if insn.mnemonic == "push" and insn.op_str == "ebp":
            # Find next instruction
            for i, ins in enumerate(insns):
                if ins.address == a and i+1 < len(insns) and insns[i+1].mnemonic == "mov" and "ebp, esp" in insns[i+1].op_str:
                    # Count size
                    count = 0
                    for j in range(i, min(i+200, len(insns))):
                        count += 1
                        if insns[j].mnemonic == "ret" and j > i+1:
                            break
                    print(f"  0x{a:08x} ({count:4d} ins)")
                    break

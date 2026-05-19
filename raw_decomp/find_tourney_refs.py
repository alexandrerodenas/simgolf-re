#!/usr/bin/env python3
"""Find tournament string references with LEA/MOV patterns"""
import struct

with open('/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

text_start = 0x401000 - 0x400000
text_end = text_start + 754731

interesting_addrs = [
    0x4c6144, 0x4c616c, 0x4c5a80, 0x4c5b00, 0x4c455c, 0x4c457c,
    0x4d0c88, 0x4d0cc8, 0x4d0cfc, 0x4d0d40, 0x4d0d6c,
    0x4cff90, 0x4cffa8, 0x4d15c4, 0x4d1584, 0x4d1598,
    0x4c3cf0, 0x4c6144, 0x4c3128, 0x4c643c, 0x4d0aac,
]

print("Looking for LEA/MOV references to tournament strings:")
for addr in interesting_addrs:
    packed = struct.pack('<I', addr)
    pos = text_start
    count = 0
    while pos < text_end:
        pos = data.find(packed, pos, text_end)
        if pos == -1:
            break
        count += 1
        # Check what instruction this is part of
        if pos >= 2:
            opcode_possible_lea = data[pos-2:pos+4]
            opcode_possible_mov = data[pos-1:pos+4]
            
            # Check for LEA: 8D <modrm> <addr>
            if pos >= 2 and data[pos-2] == 0x8D:
                modrm = data[pos-1]
                dest_reg = modrm & 7
                regs = ['eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi']
                print(f"  0x{addr:08x}: lea {regs[dest_reg]}, [...] at 0x{pos+0x400000-2:08x}")
            
            # Check for MOV reg, imm32: B8-BF
            if data[pos-1] in range(0xB8, 0xC0):
                reg_idx = data[pos-1] - 0xB8
                regs = ['eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi']
                print(f"  0x{addr:08x}: mov {regs[reg_idx]}, 0x{addr:x} at 0x{pos+0x400000-1:08x}")
        pos += 4
    
    if count > 0:
        s_off = addr - 0x400000
        chunk = data[s_off:s_off+40]
        null_idx = chunk.index(0) if 0 in chunk else 40
        s = chunk[:null_idx].decode('ascii', errors='replace')
        print(f"  '{s}' -> {count} reference(s)")

print("\n\nDone.")

#!/usr/bin/env python3
"""Check where address 0x465170 falls in golf.exe sections."""
import pefile

pe = pefile.PE('game_data/exe/golf.exe')
for s in pe.sections:
    name = s.Name.decode('utf-8', errors='replace').strip('\x00').strip()
    start = pe.OPTIONAL_HEADER.ImageBase + s.VirtualAddress
    end = start + s.Misc_VirtualSize
    print(f'{name:10s} 0x{start:08x}-0x{end:08x} ({s.SizeOfRawData//1024} KB)')
    
    if start <= 0x465170 < end:
        print(f'\n*** 0x465170 is in: {name} (0x{start:08x}-0x{end:08x}) ***')

# Also check for 0x004a0000
print()
for s in pe.sections:
    name = s.Name.decode('utf-8', errors='replace').strip('\x00').strip()
    start = pe.OPTIONAL_HEADER.ImageBase + s.VirtualAddress
    end = start + s.Misc_VirtualSize
    if start <= 0x4a0000 < end:
        print(f'0x4a0000 is in: {name} (0x{start:08x}-0x{end:08x})')

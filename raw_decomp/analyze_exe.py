#!/usr/bin/env python3
"""Analyze the depacked golf.exe"""
import sys
sys.path.insert(0, '/usr/lib/python3/dist-packages')

try:
    import pefile
except ImportError:
    print("pefile not available, checking imports with objdump")
    sys.exit(1)

pe = pefile.PE('/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe')
print('IMAGEBASE:', hex(pe.OPTIONAL_HEADER.ImageBase))
print('EP:', hex(pe.OPTIONAL_HEADER.AddressOfEntryPoint))
print('Subsystem:', pe.OPTIONAL_HEADER.Subsystem)
print()

print('=== SECTIONS ===')
for s in pe.sections:
    print(f'  {s.Name.decode().strip(chr(0)):10s}  VA={hex(s.VirtualAddress):10s}  Size={hex(s.SizeOfRawData):10s}  Entropy={s.get_entropy():.2f}')

print()
print('=== IMPORTS ===')
for entry in pe.DIRECTORY_ENTRY_IMPORT:
    dll = entry.dll.decode()
    print(f'\n--- {dll} ---')
    for imp in entry.imports[:5]:
        name = imp.name.decode() if imp.name else f'ord({imp.ordinal})'
        print(f'  0x{imp.address:08x}  {name}')
    if len(entry.imports) > 5:
        print(f'  ... ({len(entry.imports)} total)')

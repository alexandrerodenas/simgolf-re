#!/usr/bin/env python3
"""Deep analysis of golf.exe imports and exports"""
import pefile
pe = pefile.PE('/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe')

print('=== FULL IMPORTS BY DLL ===')
for entry in pe.DIRECTORY_ENTRY_IMPORT:
    dll = entry.dll.decode()
    print(f'\n--- {dll} ({len(entry.imports)} functions) ---')
    for imp in entry.imports:
        name = imp.name.decode() if imp.name else f'ord({imp.ordinal})'
        print(f'  0x{imp.address:08x}  {name}')

print('\n=== EXPORTS (none expected for .exe) ===')
if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
    for exp in pe.DIRECTORY_ENTRY_EXPORT.items:
        print(f'  0x{exp.address:08x}  {exp.name.decode() if exp.name else "ord("+str(exp.ordinal)+")"}')
else:
    print("No exports")

print('\n=== RESOURCE DIRECTORY ===')
if hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
    for res in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        print(f'  ID={res.id}  Name={res.name}')
else:
    print("No resources")

print(f'\n=== ENTRY POINT DETAILS ===')
print(f'EP VA: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint:x}')
print(f'EP RVA: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint - pe.OPTIONAL_HEADER.ImageBase:x}')
print(f'Stack Reserve: {pe.OPTIONAL_HEADER.SizeOfStackReserve}')
print(f'Stack Commit: {pe.OPTIONAL_HEADER.SizeOfStackCommit}')
print(f'Heap Reserve: {pe.OPTIONAL_HEADER.SizeOfHeapReserve}')
print(f'Heap Commit: {pe.OPTIONAL_HEADER.SizeOfHeapCommit}')

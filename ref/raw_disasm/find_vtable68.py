#!/usr/bin/env python3
"""Extract vtable candidates from golf.exe .rdata section.

Cherche les vtables qui ont une entrée non-triviale à l'offset 0x68
(la per-golfer simulation function dispatchée depuis GameTickFunction).
"""
import pefile
import struct
import sys

def find_vtables(exe_path):
    pe = pefile.PE(exe_path)
    
    # Find .rdata section
    rdata = None
    for s in pe.sections:
        name = s.Name.decode('utf-8', errors='replace').strip('\x00').strip()
        if '.rdata' in name:
            rdata = s
            break
    
    if rdata is None:
        print("ERROR: .rdata section not found")
        for s in pe.sections:
            print(f"  Section: {s.Name}")
        return
    
    data = rdata.get_data()
    rdata_base = pe.OPTIONAL_HEADER.ImageBase + rdata.VirtualAddress
    
    # .text section range
    text_start = 0x00401000
    text_end = 0x004b1000
    
    candidates = []
    
    for offset in range(0, len(data) - 0x100, 4):
        ptr0 = struct.unpack_from('<I', data, offset)[0]
        
        # Vtable[0] must point into .text (not null, not import, not stub)
        if not (text_start <= ptr0 < text_end):
            continue
        
        ptr68 = struct.unpack_from('<I', data, offset + 0x68)[0]
        if not (text_start <= ptr68 < text_end):
            continue
        
        # Also check a few more entries to confirm it's a real vtable
        # vtable[8] should also be in .text (at least 9 entries for any real class)
        ptr8 = struct.unpack_from('<I', data, offset + 8)[0]
        if not (text_start <= ptr8 < text_end):
            continue
        
        # vtable[4] should be in .text too
        ptr4 = struct.unpack_from('<I', data, offset + 4)[0]
        
        candidates.append({
            'vtable_addr': rdata_base + offset,
            'offset_in_rdata': offset,
            'entries': [ptr0, ptr4, ptr8, ptr68]
        })
    
    return candidates, rdata_base, data


def classify_entries(candidates, data, rdata_base):
    """Classify vtable entries to find the game object."""
    print(f"\n=== Analysing {len(candidates)} vtable candidates ===\n")
    
    # Read the binary data to check function entry points
    with open('data/exe/golf.exe', 'rb') as f:
        pe_data = f.read()
    
    text_section = None
    import pefile
    pe = pefile.PE('data/exe/golf.exe')
    for s in pe.sections:
        name = s.Name.decode('utf-8', errors='replace').strip('\x00').strip()
        if '.text' in name:
            text_section = s
            break
    
    text_data = text_section.get_data()
    
    for cand in candidates[:20]:  # Top 20
        vaddr = cand['vtable_addr']
        offset = cand['offset_in_rdata']
        e0 = cand['entries'][0]
        e68 = cand['entries'][3]
        
        # Check if entry[0x68] is a real function (not thunk, not stub)
        func_offset = e0 - pe.OPTIONAL_HEADER.ImageBase  # - text_section.VirtualAddress
        
        if func_offset < 0 or func_offset >= len(text_data):
            continue
        
        first_byte = text_data[func_offset] if func_offset < len(text_data) else 0
        
        # Check if the function at vtable[0x68] starts with push ebp (std prologue)
        func68_offset = e68 - pe.OPTIONAL_HEADER.ImageBase
        first68 = text_data[func68_offset] if func68_offset < len(text_data) else 0
        second68 = text_data[func68_offset + 1] if func68_offset + 1 < len(text_data) else 0
        
        prologue68 = (first68 == 0x55 and second68 == 0x8B)  # push ebp; mov ebp, esp
        seh68 = (first68 == 0x64)  # mov eax, fs:[0] (SEH prologue)
        
        # Check vtable[0x68] for FPU ops (physics)
        nearby = text_data[func68_offset:func68_offset + 50]
        has_fpu = b'\xd9' in nearby or b'\xdd' in nearby  # fld/fstp opcodes
        
        flags = []
        if prologue68: flags.append('STD')
        if seh68: flags.append('SEH')
        if has_fpu: flags.append('FPU')
        
        if flags:
            print(f"  0x{vaddr:08x}  entry[0]=0x{e0:08x}  entry[0x68]=0x{e68:08x}  [{','.join(flags)}]")
    
    print("\n--- Candidates with FPU at vtable[0x68] (likely physics/simulation) ---")
    for cand in candidates:
        e68 = cand['entries'][3]
        func68_offset = e68 - pe.OPTIONAL_HEADER.ImageBase
        nearby = text_data[func68_offset:func68_offset + 100]
        if b'\xd9' in nearby or b'\xdd' in nearby:
            print(f"  VTable 0x{cand['vtable_addr']:08x} -> entry[0x68] = 0x{e68:08x}")


if __name__ == '__main__':
    candidates, base, data = find_vtables('data/exe/golf.exe')
    classify_entries(candidates, data, base)

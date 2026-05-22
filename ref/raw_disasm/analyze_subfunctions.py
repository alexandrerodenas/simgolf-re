#!/usr/bin/env python3
"""
Analyse approfondie des sous-fonctions de Ball_MainFunction.
Désassemble et analyse les 11 sous-fonctions candidates.
"""
import pefile, struct, os, json
from capstone import *

PE_PATH = os.path.expanduser("~/simgolf-re/data/exe_unpacked/golf.exe")
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

SUB_FUNCTIONS = {
    0x00462a30: "Physics_Step",
    0x0043d6f0: "Collision_Check",     
    0x004628d0: "Ground_HeightAt",
    0x00463170: "Ball_Integrate",
    0x00474440: "Ball_Init",
    0x00464ee0: "CalcDistance_FPU",
    0x0040df80: "Math_Sqrt_FPU",
    0x00462be0: "Wind_Calculate",
    0x00467130: "Vector3_Add",
    0x00467270: "Vector3_Scale",
    0x004672b0: "Vector3_Dot",
}

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# .rdata pour les constantes
rdata_sec = None
for sec in pe.sections:
    name = sec.Name.decode('utf-8','ignore').strip().rstrip('\x00')
    if name == '.rdata':
        rdata_sec = sec
        break
rdata_data = rdata_sec.get_data() if rdata_sec else b''
rdata_addr = imagebase + rdata_sec.VirtualAddress if rdata_sec else 0

results = {}

for func_va, func_name in sorted(SUB_FUNCTIONS.items()):
    func_off = func_va - text_addr
    func_end = min(func_off + 0x2000, len(text_data) - 1)
    
    # Find function end (ret + CC padding)
    for i in range(func_off + 0x10, min(func_off + 0x500, len(text_data))):
        if text_data[i] == 0xC3:
            j = i + 1
            pad = 0
            while j < len(text_data) and text_data[j] == 0xCC:
                pad += 1; j += 1
            if pad >= 3:
                func_end = i + 1
                break
    
    chunk = text_data[func_off:func_off + func_end - func_off]
    func_va_end = func_va + len(chunk)
    
    instructions = []
    fpu_count = 0
    call_sites = []
    constants = {}
    
    for insn in md.disasm(chunk, func_va):
        entry = {
            'addr': insn.address,
            'mnemonic': insn.mnemonic,
            'op_str': insn.op_str,
        }
        instructions.append(entry)
        
        if insn.mnemonic.startswith('f') and insn.mnemonic != 'far':
            fpu_count += 1
            # Check for float constant loads from .rdata
            import re
            for m in re.finditer(r'\[(0x[0-9a-fA-F]+)\]', insn.op_str):
                addr = int(m.group(1), 16)
                if addr >= rdata_addr and addr < rdata_addr + len(rdata_data):
                    off = addr - rdata_addr
                    if off + 8 <= len(rdata_data):
                        if 'qword ptr' in insn.op_str:
                            val = struct.unpack_from('<d', rdata_data, off)[0]
                        elif 'dword ptr' in insn.op_str:
                            val = struct.unpack_from('<f', rdata_data, off)[0]
                        else:
                            continue
                        constants[hex(addr)] = val
        
        if insn.mnemonic == 'call' and '0x' in insn.op_str:
            try:
                target = int(insn.op_str, 16)
                if 0x401000 < target < 0x4ba000:
                    call_sites.append({'addr': insn.address, 'target': target})
            except:
                pass
    
    total_bytes = len(chunk)
    results[func_name] = {
        'address': hex(func_va),
        'end': hex(func_va + len(chunk)),
        'size_bytes': total_bytes,
        'insn_count': len(instructions),
        'fpu_count': fpu_count,
        'call_count': len(call_sites),
        'constants': constants,
    }
    
    print(f"\n{'='*60}")
    print(f"{func_name} @ {hex(func_va)}")
    print(f"  Size: {total_bytes} bytes, {len(instructions)} insn, {fpu_count} FPU, {len(call_sites)} calls")
    print(f"  Constants: {constants}")
    
    # Afficher le début de la fonction (20 premières insn)
    print(f"  Prologue:")
    for i in instructions[:15]:
        print(f"    {hex(i['addr'])}: {i['mnemonic']:8s} {i['op_str']}")
    
    if fpu_count > 0:
        fpu_insns = [i for i in instructions if i['mnemonic'].startswith('f') and i['mnemonic'] != 'far']
        print(f"  FPU instructions ({min(10, len(fpu_insns))} first):")
        for i in fpu_insns[:10]:
            print(f"    {hex(i['addr'])}: {i['mnemonic']:8s} {i['op_str']}")

print(f"\n\n{'='*60}")
print("SUMMARY")
print(f"{'='*60}")
for name, info in sorted(results.items()):
    print(f"  {name:25s} @ {info['address']:12s}  {info['size_bytes']:6d} bytes  {info['insn_count']:5d} insn  FPU:{info['fpu_count']:2d}")

# Save report
with open('/tmp/ball_subfunctions_report.json', 'w') as f:
    json.dump(results, f, indent=2)
print("\nReport saved to /tmp/ball_subfunctions_report.json")

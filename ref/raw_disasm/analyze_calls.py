#!/usr/bin/env python3
"""Analyze golf.exe disassembly - map function calls and structure"""
import re
from collections import defaultdict

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

# Find message loop areas
print("=== DISPATCHMESSAGE CALLS ===")
for i, line in enumerate(lines):
    if '0x4ba1dc' in line:  # DispatchMessageA
        start = max(0, i-20)
        end = min(len(lines), i+5)
        print(f"\n--- Line {i} (0x{start+1:05x}) ---")
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")

print("\n\n=== PEEKMESSAGE CALLS ===")
for i, line in enumerate(lines):
    if '0x4ba1d8' in line:  # PeekMessageA
        start = max(0, i-20)
        end = min(len(lines), i+5)
        print(f"\n--- Line {i} ---")
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")

# Map functions by their prologue addresses
print("\n\n=== FUNCTION MAP ===")
funcs = {}
current_func = None
for i, line in enumerate(lines):
    # Detect function start
    if 'push     ebp' in line and any(f'mov      ebp, esp' in lines[i+1] for i in [0] if i+1 < len(lines)):
        # Try to find address
        pass
    
    m = re.match(r'\\s*0x([a-f0-9]+):', line)
    if m:
        addr = int(m.group(1), 16)
        if 'push     ebp' in line and i+1 < len(lines) and 'mov      ebp, esp' in lines[i+1]:
            current_func = f'0x{addr:08x}'
            funcs[current_func] = {'calls': set(), 'addr': addr, 'line': i}

    # Track calls from current function
    if current_func:
        cm = re.search(r'call\\s+(0x[a-f0-9]+)', line)
        if cm:
            target = cm.group(1)
            target_int = int(target, 16)
            # Only internal calls (within .text range)
            if 0x401000 <= target_int <= 0x4bc000:
                funcs[current_func]['calls'].add(target)

# Sort and display
sorted_funcs = sorted(funcs.items(), key=lambda x: -len(x[1]['calls']))
print(f"Total functions found: {len(funcs)}")
print(f"\nTop 40 functions by call count:")
for func_name, data in sorted_funcs[:50]:
    print(f"  {func_name}: {len(data['calls'])} calls (line {data['line']})")

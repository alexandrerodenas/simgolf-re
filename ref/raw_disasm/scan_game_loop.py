#!/usr/bin/env python3
"""Deep scan of golf.exe for game loop patterns"""
import re

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

# Find SetTimer calls
print("=== SETTIMER CALLS ===")
for i, line in enumerate(lines):
    if '0x4ba1b8' in line:  # SetTimer
        start = max(0, i-15)
        end = min(len(lines), i+3)
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")
        print()

# Find KillTimer calls  
print("\n=== KILLTIMER CALLS ===")
for i, line in enumerate(lines):
    if '0x4ba1b4' in line:  # KillTimer
        start = max(0, i-5)
        end = min(len(lines), i+3)
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")
        print()

# Find LoadCursor/LoadImage - window creation
print("\n=== LOADCURSOR/LOADIMAGE ===")
for i, line in enumerate(lines):
    if '0x4ba1c4' in line or '0x4ba1fc' in line:  # LoadCursorA or LoadImageA
        start = max(0, i-5)
        end = min(len(lines), i+3)
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")
        print()

# Find all call patterns by frequency to find the most active functions
from collections import Counter
call_targets = Counter()
for line in lines:
    m = re.search(r'call\\s+(0x[a-f0-9]+)', line)
    if m:
        addr = int(m.group(1), 16)
        if 0x401000 <= addr <= 0x4bc000:  # Internal calls
            call_targets[hex(addr)] += 1

print("\n=== MOST CALLED INTERNAL FUNCTIONS ===")
for addr, count in call_targets.most_common(30):
    print(f"  {addr}: called {count} times")

# Find functions that call many different functions (hub functions)
from collections import defaultdict
func_calls = defaultdict(set)
current_func = None
current_func_addr = None

for i, line in enumerate(lines):
    # Detect function start - push ebp followed by mov ebp, esp on next line
    if 'push     ebp' in line:
        m = re.match(r'\\s*0x([a-f0-9]+):\\s+push     ebp', line)
        if m:
            current_func_addr = f'0x{int(m.group(1),16):08x}'
            current_func = current_func_addr
    
    if current_func and current_func_addr:
        cm = re.search(r'call\\s+(0x[a-f0-9]+)', line)
        if cm:
            target = cm.group(1)
            target_int = int(target, 16)
            if 0x401000 <= target_int <= 0x4bc000:
                func_calls[current_func].add(target)

print("\n=== FUNCTIONS WITH MOST INTERNAL CALLS (potential dispatchers) ===")
sorted_funcs = sorted(func_calls.items(), key=lambda x: -len(x[1]))
for func, targets in sorted_funcs[:40]:
    print(f"  {func}: {len(targets)} unique internal targets called")

#!/usr/bin/env python3
"""Real function detection for golf_exe disassembly"""
import re
from collections import Counter, defaultdict

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

# Detect function prologues
print("=== FUNCTION PROLOGUES ===")
count = 0
for i, line in enumerate(lines):
    # Standard prologue: `  0xXXXXXXXX:  push     ebp` followed by `  0xXXXXXXXX:  mov      ebp, esp`
    m = re.match(r'\s*0x([a-f0-9]+):\s+push\s+ebp', line)
    if m:
        addr = m.group(1)
        # Check next line
        if i+1 < len(lines) and 'mov      ebp, esp' in lines[i+1]:
            count += 1
            if count <= 30:
                print(f"  FUN_{addr}:  {line.strip()}")
print(f"\nTotal standard prologue functions: {count}")

# Now let's count internal calls properly
print("\n=== CALL PATTERN ANALYSIS ===")
call_targets = Counter()
for line in lines:
    m = re.search(r'call\s+(0x[a-f0-9]+)', line)
    if m:
        target = m.group(1)
        target_int = int(target, 16)
        if 0x401000 <= target_int <= 0x4bc000:
            call_targets[target] += 1

print("Most called internal functions:")
for addr, count in call_targets.most_common(40):
    print(f"  {addr}: called {count} times")

# Map function -> what it calls
print("\n\n=== FUNCTION CALL MAP ===")
current_func = None
func_calls = defaultdict(set)

for i, line in enumerate(lines):
    m = re.match(r'\s*0x([a-f0-9]+):\s+push\s+ebp', line)
    if m and i+1 < len(lines) and 'mov      ebp, esp' in lines[i+1]:
        current_func = f'0x{m.group(1):>8s}'
    
    if current_func:
        cm = re.search(r'call\s+(0x[a-f0-9]+)', line)
        if cm:
            target = cm.group(1)
            target_int = int(target, 16)
            if 0x401000 <= target_int <= 0x4bc000:
                func_calls[current_func].add(target)

print("Functions with most internal targets:")
for func, targets in sorted(func_calls.items(), key=lambda x: -len(x[1]))[:50]:
    print(f"  {func}: calls {len(targets):3d} unique functions")

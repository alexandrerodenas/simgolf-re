#!/usr/bin/env python3
"""Extract strings from golf.exe and find game structure"""
import re

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

# Find all push offsets to .rdata section (strings)
# Common patterns: push 0x4xxxxx where xxxxx is in .rdata range (0x4ba000-0x4c0000)
print("=== STRING REFERENCES FROM CODE ===")
for i, line in enumerate(lines[:50000]):  # First half of the file - more dynamic code
    # Look for pushes with addresses in typical data sections
    m = re.search(r'push\s+(0x4[bcdef][0-9a-f]{4})', line)
    if m:
        addr = m.group(1)
        print(f"  Line {i}: {line.strip()}")

# Also look for the specific "WinMain" or class name patterns
# In VC++6, _WinMain@16 is exported from kernel32 or linked from msvcrt
# But the signature is: int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)

# Look for 0x840xxx global data references - those are often important
print("\n\n=== GLOBAL DATA ACCESS (0x84xxxx range) ===")
counts = {}
for line in lines:
    for m in re.finditer(r'0x84([0-9a-f]{4})', line):
        addr = m.group(0)
        counts[addr] = counts.get(addr, 0) + 1

print("Most accessed global data locations:")
for addr, count in sorted(counts.items(), key=lambda x: -x[1])[:30]:
    print(f"  0x{addr}: {count} accesses")

# Look for the most common code patterns that suggest the main loop
# A main loop often has: call timeGetTime, or a cmp/jmp loop structure
print("\n\n=== timeGetTime usage (game timing) ===")
for i, line in enumerate(lines):
    if '0x4ba21c' in line:  # timeGetTime
        start = max(0, i-2)
        end = min(len(lines), i+3)
        for j in range(start, end):
            print(f"  {lines[j].rstrip()}")
        print()

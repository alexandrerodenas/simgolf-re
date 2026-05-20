#!/usr/bin/env python3
"""Extract and analyze the 3 key hub functions"""
import re

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

def find_function_boundary(lines, target_addr):
    """Find the start and end lines of a function"""
    # Format: `  0xXXXXXXXX:  push     ebp`
    target_str = f'0x{int(target_addr,16):08x}:'
    
    start_line = None
    for i, line in enumerate(lines):
        if target_str in line and 'push     ebp' in line:
            start_line = i
            break
    
    if start_line is None:
        return None, None
    
    # Find end: next push ebp, or ret in a function
    # For these large hub functions, look for the next function start
    end_line = len(lines)
    for i in range(start_line + 1, min(start_line + 5000, len(lines))):
        if re.match(r'\s*0x[a-f0-9]+:\s+push\s+ebp', lines[i]):
            # Check if followed by mov ebp, esp
            if i+1 < len(lines) and 'mov      ebp, esp' in lines[i+1]:
                end_line = i
                break
    
    return start_line, end_line

# Function 1: 0x476dd0 - most connected (296 calls) -> main game loop
print("=" * 70)
print("FUNCTION 0x00476dd0 - MAIN GAME LOOP (296 internal calls)")
print("=" * 70)

start, end = find_function_boundary(lines, '0x476dd0')
if start:
    print(f"  Lines {start} to {end} ({end-start} lines)")
    for j in range(start, min(start+80, end)):
        line = lines[j].rstrip()
        # Highlight API calls and interesting patterns
        if 'call' in line or 'ret' in line or 'jmp' in line:
            print(f"  >>>{lines[j].rstrip()}")
        else:
            print(f"     {line}")
    if end - start > 80:
        print(f"  ... ({end-start-80} more lines)")

# Function 2: 0x494f00 - initialization (285 calls)
print("\n\n" + "=" * 70)
print("FUNCTION 0x00494f00 - INITIALIZATION (285 internal calls)")
print("=" * 70)

start, end = find_function_boundary(lines, '0x494f00')
if start:
    print(f"  Lines {start} to {end} ({end-start} lines)")
    # First 60 lines
    for j in range(start, min(start+60, end)):
        line = lines[j].rstrip()
        if 'call' in line or 'ret' in line:
            print(f"  >>>{line}")
        else:
            print(f"     {line}")
    if end - start > 60:
        print(f"  ... ({end-start-60} more lines)")

# Function 3: 0x485e80 - window procedure (218 calls)
print("\n\n" + "=" * 70)
print("FUNCTION 0x00485e80 - WINDOW/DISPATCHER (218 internal calls)")
print("=" * 70)

start, end = find_function_boundary(lines, '0x485e80')
if start:
    print(f"  Lines {start} to {end} ({end-start} lines)")
    for j in range(start, min(start+60, end)):
        line = lines[j].rstrip()
        if 'call' in line or 'ret' in line:
            print(f"  >>>{line}")
        else:
            print(f"     {line}")
    if end - start > 60:
        print(f"  ... ({end-start-60} more lines)")

# Also look at the EP function (WinMain)
print("\n\n" + "=" * 70)
print("FUNCTION 0x004a682f - ENTRY POINT / WinMain(16 calls)")
print("=" * 70)
start, end = find_function_boundary(lines, '0x4a682f')
if start:
    print(f"  Lines {start} to {end} ({end-start} lines)")
    for j in range(start, min(start+80, end)):
        print(f"     {lines[j].rstrip()}")

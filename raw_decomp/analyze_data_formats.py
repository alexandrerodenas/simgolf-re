#!/usr/bin/env python3
"""Analyze binary formats of SimGolf data files."""
import struct, os, sys

def analyze_file(path, label):
    if not os.path.exists(path):
        print(f"\n=== {label} === FILE NOT FOUND")
        return
    with open(path, "rb") as f:
        data = f.read()
    print(f"\n=== {label} === ({len(data)} bytes)")
    
    # Hex dump first 256 bytes
    for i in range(0, min(256, len(data)), 16):
        hexstr = " ".join(f"{b:02x}" for b in data[i:i+16])
        ascstr = "".join(chr(b) if 32 <= b < 127 else "." for b in data[i:i+16])
        print(f"  {i:04x}: {hexstr:48s} {ascstr}")
    
    # Find null-terminated strings >= 3 chars
    print(f"\n  Strings found:")
    i = 0
    while i < len(data):
        if 32 <= data[i] < 127:
            j = i
            while j < len(data) and 32 <= data[j] < 127:
                j += 1
            if j - i >= 3:
                s = data[i:j].decode("ascii", errors="replace")
                print(f"    0x{i:04x}: \"{s}\"")
            i = j
        else:
            i += 1

base = "game_data/extracted"

analyze_file(f"{base}/Themes/Championship/Gary Golf.pro", ".pro (Gary Golf)")
analyze_file(f"{base}/Themes/Firaxis/Bonus.chr", ".chr (Bonus)")
analyze_file(f"{base}/Themes/Firaxis/Joe Pro.glf", ".glf (Joe Pro)")
analyze_file(f"{base}/extracted/top10.sve", ".sve (top10)")

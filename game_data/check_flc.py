#!/usr/bin/env python3
"""Check FLC file headers"""
import os, struct

base = '/home/roden/simgolf-re/game_data/extracted/Flics'

files = [
    'Tees/Tee_Frame_01.flc',
    'Bldgs/Clubhouse_Shadow.flc',
    'Trees/Ponderosa Pine 01.flc', 
    'Male/Golfer_Female_A.flc',
    'Water/Fountain_01.flc',
    'Flowers/Flowerbed_01.flc',
    'Celebs/Ranger.flc',
    'Animals/Bird_01.flc',
]

for rel in files:
    path = os.path.join(base, rel)
    if not os.path.exists(path):
        # Try to find any file in that directory
        dirpath = os.path.join(base, os.path.dirname(rel))
        if os.path.exists(dirpath):
            items = [f for f in os.listdir(dirpath) if f.lower().endswith('.flc')]
            if items:
                path = os.path.join(dirpath, items[0])
    
    with open(path, 'rb') as f:
        h = f.read(16)
    
    size = os.path.getsize(path)
    magic = h[:4]
    
    if magic in (b'\xf1\x00', b'\x00\x00') or (magic[0] == 0 and magic[1] == 0):
        # FLC/FLI format
        ftype = 'FLC' if magic[:2] == b'\x00\x00' else 'FLI'
        frames = struct.unpack('<H', h[6:8])[0]
        width = struct.unpack('<H', h[8:10])[0]
        height = struct.unpack('<H', h[10:12])[0]
        depth = struct.unpack('<H', h[12:14])[0]
        print(f"  {os.path.basename(path):40s} {ftype} {width}x{height} {frames}frames {depth}bit {size}b")
    else:
        print(f"  {os.path.basename(path):40s} UNKNOWN magic={magic.hex()} {size}b")

# Also count all FLC files by subdirectory
print("\n=== FLC COUNT BY DIRECTORY ===")
total = 0
for root, dirs, files in os.walk(base):
    flcs = [f for f in files if f.lower().endswith('.flc')]
    if flcs:
        rel = os.path.relpath(root, base)
        print(f"  {rel:30s}: {len(flcs)}")
        total += len(flcs)
print(f"  {'TOTAL':30s}: {total}")

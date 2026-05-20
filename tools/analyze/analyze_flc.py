#!/usr/bin/env python3
"""Analyze FLC animation files structure"""
import os, struct

FLICS_DIR = '/home/roden/simgolf-re/data/raw/Flics'

def analyze_flc(path):
    """Read FLC/Flic header"""
    with open(path, 'rb') as f:
        header = f.read(128)
    
    if header[:4] != b'FLIC':
        # Check for FLI header
        if header[:2] not in (b'\xf1\x00',):
            return None
    
    try:
        # FLC header structure
        size = struct.unpack('<I', header[0:4])[0]
        type_flag = struct.unpack('<H', header[4:6])[0]
        frames = struct.unpack('<H', header[6:8])[0]
        width = struct.unpack('<H', header[8:10])[0]
        height = struct.unpack('<H', header[10:12])[0]
        depth = struct.unpack('<H', header[12:14])[0]
        speed = struct.unpack('<H', header[14:16])[0]
        
        return {
            'size': size,
            'type': type_flag,
            'frames': frames,
            'width': width,
            'height': height,
            'depth': depth,
            'speed_ms': speed * 1000 if speed else 0,
            'file': os.path.basename(path),
        }
    except:
        return None

# Analyze first few FLCs from each category
print("=== FLC ANIMATION ANALYSIS ===")
categories = {}
for root, dirs, files in os.walk(FLICS_DIR):
    for f in files:
        if f.lower().endswith('.flc'):
            cat = os.path.basename(root)
            if cat not in categories:
                categories[cat] = []
            if len(categories[cat]) < 3:  # Sample 3 per category
                path = os.path.join(root, f)
                info = analyze_flc(path)
                if info:
                    categories[cat].append(info)

# Print stats
total_flcs = sum(len(os.listdir(os.path.join(FLICS_DIR, d))) 
                 for d in os.listdir(FLICS_DIR) 
                 if os.path.isdir(os.path.join(FLICS_DIR, d)) 
                 and not d.startswith('.'))
# Count recursively
all_flcs = 0
for root, dirs, files in os.walk(FLICS_DIR):
    all_flcs += len([f for f in files if f.lower().endswith('.flc')])

print(f"\nTotal FLC files: {all_flcs}")
print(f"\nCategory samples:")
for cat, infos in sorted(categories.items()):
    for info in infos:
        print(f"  {cat:10s} | {info['file']:30s} | {info['width']}x{info['height']} | {info['frames']} frames | {info['depth']}bit | {info['speed_ms']}ms/frame")

#!/usr/bin/env python3
"""
SimGolf PCX → PNG Converter

Converts all 646+ PCX files to PNG for web use.
Organizes output by category (Interface, Heads, Flics, Bodies, ...).
"""
import os, json
from PIL import Image

DATA_DIR = '/home/roden/simgolf-re/data/raw'
OUT_DIR = '/home/roden/simgolf-re/web_port/assets/ui'

os.makedirs(OUT_DIR, exist_ok=True)

# Find all PCX files
pcx_files = []
for root, dirs, files in os.walk(DATA_DIR):
    for f in files:
        if f.lower().endswith('.pcx'):
            pcx_files.append(os.path.join(root, f))

print(f"Found {len(pcx_files)} PCX files")

# Categorize and convert
categories = {
    'interface': [],
    'heads': [],
    'bodies': [],
    'flics': [],
    'data': [],
    'other': [],
}

converted = 0
errors = 0
catalog = {'total': 0, 'errors': 0, 'categories': {}, 'files': []}

for src in sorted(pcx_files):
    rel = os.path.relpath(src, DATA_DIR)
    parts = rel.replace('\\', '/').split('/')
    
    # Determine category
    if parts[0] == 'Interface':
        cat = 'interface'
    elif parts[0] == 'Heads':
        cat = 'heads'
    elif parts[0] == 'Bodies':
        cat = 'bodies'
    elif parts[0] == 'Flics' or parts[0] == 'Data':
        cat = 'flics'
    elif parts[0] in ('Data',):
        cat = 'data'
    else:
        cat = 'other'
    
    # Compute output filename
    # Preserve subdirectory structure for flics
    if cat == 'flics' and len(parts) > 2:
        subdir = '_'.join(parts[1:-1]) if len(parts) > 2 else ''
        out_name = f"{subdir}_{os.path.splitext(parts[-1])[0].lower()}" if subdir else os.path.splitext(parts[-1])[0].lower()
        out_name = out_name.replace(' ', '_').replace('&', 'n')
        out_path = os.path.join(OUT_DIR, cat, f"{out_name}.png")
    else:
        # Strip extension
        base = os.path.splitext(parts[-1])[0].lower().replace(' ', '_').replace('&', 'n')
        out_path = os.path.join(OUT_DIR, cat, f"{base}.png")
    
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    
    try:
        img = Image.open(src)
        
        # Convert paletted (P) to RGBA or RGB
        if img.mode == 'P':
            # Check if palette has transparency
            if img.info.get('transparency', -1) >= 0:
                img = img.convert('RGBA')
            else:
                img = img.convert('RGB')
        elif img.mode == '1':
            img = img.convert('RGB')
        elif img.mode not in ('RGB', 'RGBA'):
            img = img.convert('RGB')
        
        img.save(out_path, 'PNG', optimize=True)
        
        entry = {
            'file': os.path.relpath(out_path, OUT_DIR).replace('\\', '/'),
            'src': rel,
            'w': img.width,
            'h': img.height,
            'mode': img.mode,
        }
        catalog['files'].append(entry)
        categories[cat].append(entry)
        converted += 1
        
        if converted % 50 == 0:
            print(f"  Progress: {converted}/{len(pcx_files)}...")
            
    except Exception as e:
        errors += 1
        if errors <= 10:
            print(f"  ERR: {rel}: {e}")

print(f"\n✓ Converted: {converted}")
print(f"✗ Errors: {errors}")

# Build catalog
catalog['total'] = converted
catalog['errors'] = errors

for cat_name, entries in sorted(categories.items()):
    if entries:
        catalog['categories'][cat_name] = {
            'count': len(entries),
            'examples': [
                {
                    'file': e['file'],
                    'w': e['w'],
                    'h': e['h'],
                }
                for e in entries[:5]
            ]
        }

# Stats
print(f"\n=== STATS ===")
for cat, entries in sorted(categories.items()):
    if entries:
        avg_w = sum(e['w'] for e in entries) // len(entries)
        avg_h = sum(e['h'] for e in entries) // len(entries)
        max_w = max(e['w'] for e in entries)
        max_h = max(e['h'] for e in entries)
        print(f"  {cat:15s}: {len(entries):3d} files  (avg {avg_w}x{avg_h}, max {max_w}x{max_h})")

# Save catalog
catalog_path = os.path.join(OUT_DIR, 'ui_catalog.json')
with open(catalog_path, 'w') as f:
    json.dump(catalog, f, indent=2)
print(f"\n✓ Catalog saved: {catalog_path}")
print(f"✓ PNGs saved to: {OUT_DIR}/")

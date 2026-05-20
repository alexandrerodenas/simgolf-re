#!/usr/bin/env python3
"""Convert SimGolf BMP textures to PNG for web use"""
import os, json
from PIL import Image

DATA_DIR = '/home/roden/simgolf-re/data/raw/Data'
OUT_DIR = '/home/roden/simgolf-re/web_port/assets/textures'

os.makedirs(OUT_DIR, exist_ok=True)

# Also convert the theme PCX overlays
os.makedirs(os.path.join(OUT_DIR, 'overlays'), exist_ok=True)

converted = 0
errors = 0
texture_map = {}  # category -> [(filename, width, height)]

for root, dirs, files in os.walk(DATA_DIR):
    for f in sorted(files):
        ext = os.path.splitext(f)[1].lower()
        if ext not in ('.bmp', '.tga', '.pcx'):
            continue
        
        src = os.path.join(root, f)
        rel = os.path.relpath(src, DATA_DIR)
        
        # Determine output path
        if ext == '.tga':
            out = os.path.join(OUT_DIR, 'tga', os.path.splitext(f)[0] + '.png')
        elif ext == '.pcx':
            out = os.path.join(OUT_DIR, 'overlays', f.replace('.pcx', '.png').lower())
        else:
            # BMP: mirror the subdirectory structure
            subdir = os.path.basename(root)
            if subdir in ('Textures', 'Data'):
                out = os.path.join(OUT_DIR, f.replace('.bmp', '.png').lower())
            else:
                theme_dir = os.path.join(OUT_DIR, subdir.lower())
                os.makedirs(theme_dir, exist_ok=True)
                out = os.path.join(theme_dir, f.replace('.bmp', '.png').lower())
        
        try:
            img = Image.open(src)
            os.makedirs(os.path.dirname(out), exist_ok=True)
            
            # Convert paletted to RGB
            if img.mode == 'P':
                img = img.convert('RGBA' if img.info.get('transparency') else 'RGB')
            elif img.mode == 'RGBA':
                pass
            elif img.mode != 'RGB':
                img = img.convert('RGB')
            
            img.save(out, 'PNG', optimize=True)
            converted += 1
            
            # Track by category
            base = os.path.splitext(f)[0]
            cat = ''.join(c for c in base if not c.isdigit() and c not in '._- ')
            cat = cat.replace(' ', '')
            if cat not in texture_map:
                texture_map[cat] = []
            texture_map[cat].append({
                'file': f.replace('.bmp', '.png').lower(),
                'theme': subdir,
                'w': img.width,
                'h': img.height,
            })
            
            if converted % 200 == 0:
                print(f"  Progress: {converted}...")
                
        except Exception as e:
            errors += 1
            if errors <= 5:
                print(f"  ERR: {rel}: {e}")

print(f"\n✓ Converted: {converted}")
print(f"✗ Errors: {errors}")

# Build catalog
catalog = {
    'meta': {
        'total': converted,
        'errors': errors,
        'default_size': 64,  # Most BMP textures are 64x64
    },
    'categories': {},
    'themes': {},
}

for cat, files in sorted(texture_map.items()):
    catalog['categories'][cat] = {
        'count': len(files),
        'files': files[:10],  # Limit to save space
    }
    for f in files:
        t = f['theme']
        if t not in catalog['themes']:
            catalog['themes'][t] = 0
        catalog['themes'][t] += 1

# Save catalog
catalog_path = os.path.join(OUT_DIR, '..', 'texture_catalog.json')
with open(catalog_path, 'w') as f:
    json.dump(catalog, f, indent=2)

print(f"✓ Catalog: {catalog_path}")
print(f"✓ Textures: {OUT_DIR}/")

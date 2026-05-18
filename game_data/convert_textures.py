#!/usr/bin/env python3
"""
SimGolf Texture Analysis & Conversion Pipeline

Analyse la structure des textures SimGolf et les convertit en PNG
pour utilisation dans le portage web.
"""
import os, struct, subprocess, json
from PIL import Image
from collections import defaultdict

DATA_DIR = '/home/roden/simgolf-re/game_data/extracted'
OUT_DIR = '/home/roden/simgolf-re/web_port/assets/textures'

def analyze_bmp(path):
    """Analyze a BMP file to understand its format"""
    with open(path, 'rb') as f:
        header = f.read(54)  # Standard BMP header size
    
    if header[:2] != b'BM':
        return None
    
    file_size = struct.unpack('<I', header[2:6])[0]
    data_offset = struct.unpack('<I', header[10:14])[0]
    width = struct.unpack('<i', header[18:22])[0]
    height = struct.unpack('<i', header[22:26])[0]
    bpp = struct.unpack('<H', header[28:30])[0]
    compression = struct.unpack('<I', header[30:34])[0]
    colors_used = struct.unpack('<I', header[46:50])[0]
    
    return {
        'file_size': file_size,
        'width': width,
        'height': height,
        'bpp': bpp,
        'compression': compression,
        'colors_used': colors_used,
        'data_offset': data_offset,
    }

def analyze_all_textures():
    """Analyze all textures and build a catalog"""
    categories = defaultdict(list)
    sizes = defaultdict(int)
    formats = defaultdict(int)
    
    for root, dirs, files in os.walk(os.path.join(DATA_DIR, 'Data')):
        for f in files:
            path = os.path.join(root, f)
            ext = os.path.splitext(f)[1].lower()
            
            if ext in ('.bmp', '.tga', '.pcx'):
                info = analyze_bmp(path) if ext == '.bmp' else None
                if info:
                    formats[f'bmp_{info["bpp"]}bit'] += 1
                    sizes[(info['width'], info['height'])] += 1
                
                # Extract category from naming
                base = os.path.splitext(f)[0]
                # Remove leading numbers for categorization
                cat = ''.join(c for c in base if not c.isdigit())
                categories[cat].append(f)
    
    print("=== FORMATS ===")
    for fmt, count in sorted(formats.items(), key=lambda x: -x[1]):
        print(f"  {fmt}: {count} files")
    
    print("\n=== DIMENSIONS ===")
    for size, count in sorted(sizes.items(), key=lambda x: -x[1])[:20]:
        print(f"  {size[0]}x{size[1]}: {count} files")
    
    print("\n=== CATEGORIES (groups) ===")
    for cat, files in sorted(categories.items(), key=lambda x: -len(x[1]))[:30]:
        print(f"  {cat}: {len(files)} files")
        for f in files[:3]:
            print(f"    - {f}")

def convert_bmp_to_png():
    """Convert all BMP textures to PNG for web use"""
    import PIL.Image
    
    # Find all BMP/TGA files
    converted = 0
    errors = 0
    skipped = 0
    
    for root, dirs, files in os.walk(os.path.join(DATA_DIR, 'Data')):
        for f in files:
            ext = os.path.splitext(f)[1].lower()
            if ext not in ('.bmp', '.tga', '.pcx'):
                continue
            
            src_path = os.path.join(root, f)
            
            # Compute output path (mirror structure)
            rel_path = os.path.relpath(src_path, DATA_DIR)
            out_path = os.path.join(OUT_DIR, rel_path)
            out_path = os.path.splitext(out_path)[0] + '.png'
            
            try:
                img = PIL.Image.open(src_path)
                os.makedirs(os.path.dirname(out_path), exist_ok=True)
                img.save(out_path, 'PNG')
                converted += 1
                if converted <= 5:
                    print(f"  OK: {rel_path} -> {img.size} {img.mode}")
            except Exception as e:
                errors += 1
                if errors <= 3:
                    print(f"  ERR: {f}: {e}")
    
    print(f"\nConverted: {converted}, Errors: {errors}")

def generate_texture_catalog():
    """Generate a JSON catalog of all textures"""
    catalog = {
        'themes': {},
        'total': 0,
    }
    
    for theme in ['Desert', 'Links', 'Parkland', 'Tropical']:
        theme_dir = os.path.join(DATA_DIR, 'Data/Textures', theme)
        if not os.path.exists(theme_dir):
            continue
        
        theme_data = {'files': [], 'count': 0, 'categories': defaultdict(list)}
        
        for f in sorted(os.listdir(theme_dir)):
            path = os.path.join(theme_dir, f)
            if not os.path.isfile(path):
                continue
            
            ext = os.path.splitext(f)[1].lower()
            if ext not in ('.bmp', '.tga', '.pcx'):
                continue
            
            file_size = os.path.getsize(path)
            
            # Extract category
            base = os.path.splitext(f)[0]
            cat_key = ''.join(c for c in base if not c.isdigit() and c not in '._- ')
            
            entry = {
                'file': f,
                'ext': ext,
                'size': file_size,
                'category': cat_key,
            }
            
            # Try to get image dimensions
            try:
                img = Image.open(path)
                entry['width'] = img.width
                entry['height'] = img.height
            except:
                pass
            
            theme_data['files'].append(entry)
            theme_data['categories'][cat_key].append(f)
            theme_data['count'] += 1
        
        catalog['themes'][theme] = {
            'count': theme_data['count'],
            'categories': {k: len(v) for k, v in theme_data['categories'].items()},
        }
        catalog['total'] += theme_data['count']
    
    return catalog

# Main
print("=" * 70)
print("TEXTURE ANALYSIS")
print("=" * 70)
analyze_all_textures()

print("\n\n" + "=" * 70)
print("TEXTURE CATALOG")
print("=" * 70)
catalog = generate_texture_catalog()
for theme, data in catalog['themes'].items():
    print(f"\n--- {theme} ({data['count']} textures) ---")
    for cat, count in sorted(data['categories'].items(), key=lambda x: -x[1])[:15]:
        print(f"  {cat}: {count}")

print(f"\nTotal: {catalog['total']} textures")

# Save catalog to JSON for TypeScript to use
with open('/home/roden/simgolf-re/web_port/assets/texture_catalog.json', 'w') as f:
    json.dump(catalog, f, indent=2)
print("\nCatalog saved to web_port/assets/texture_catalog.json")

# Do a small test convert
print("\n\n" + "=" * 70)
print("TEST CONVERSION (first 10 textures)")
print("=" * 70)
os.makedirs(OUT_DIR, exist_ok=True)
convert_bmp_to_png()

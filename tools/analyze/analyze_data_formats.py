#!/usr/bin/env python3
"""Analyze binary data formats from SimGolf"""
import struct, os, sys

data_dir = '/home/roden/simgolf-re/data/raw'

def analyze_chr(path):
    """Character files - golfer personalities"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    print(f"  Head: {data[:64].hex()}")
    
    # Look for string content
    strings = []
    current = []
    for b in data:
        if 32 <= b < 127:
            current.append(chr(b))
        else:
            if len(current) >= 4:
                strings.append(''.join(current))
            current = []
    if len(current) >= 4:
        strings.append(''.join(current))
    
    print(f"  Strings: {strings[:10]}")
    
    # Detect format
    if data[:2] == b'\xff\xfe':
        print(f"  Format: UTF-16LE (Windows Unicode)")
    elif data[:2] == b'\xfe\xff':
        print(f"  Format: UTF-16BE")
    elif all(32 <= b < 127 for b in data[:32]):
        print(f"  Format: ASCII text")
    else:
        print(f"  Format: Binary")
        
        # Try to identify structure
        # Look for 4-byte markers
        for i in range(0, min(256, len(data)-4), 4):
            word = struct.unpack('<I', data[i:i+4])[0]
            if 0 < word < 1000:  # Could be an ID or count
                pass

def analyze_glf(path):
    """Golfer data files"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    
    # Try UTF-16 (Windows wide string)
    if data[:2] in (b'\xff\xfe',):
        text = data.decode('utf-16-le', errors='replace')
        print(f"  UTF-16 content: {text[:200]}")
        return
    
    # Try ASCII
    try:
        text = data.decode('ascii', errors='replace')
        if text.isprintable() or text.count('\n') > 2:
            print(f"  ASCII content: {text[:300]}")
            return
    except:
        pass
    
    # Binary format
    print(f"  Head hex: {data[:64].hex()}")

def analyze_pro(path):
    """Pro golfer profiles"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    
    # Try UTF-16
    if data[:2] == b'\xff\xfe':
        text = data.decode('utf-16-le', errors='replace')
        print(f"  UTF-16: {text[:300]}")
        return
    
    print(f"  Head hex: {data[:64].hex()}")
    # Check for strings
    strings = []
    current = []
    for b in data:
        if 32 <= b < 127:
            current.append(chr(b))
        else:
            if len(current) >= 3:
                strings.append(''.join(current))
            current = []
    if len(current) >= 3:
        strings.append(''.join(current))
    print(f"  Strings: {strings[:15]}")

def analyze_fot(path):
    """Bitmap font files"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    print(f"  Head: {data[:32].hex()}")
    
    # FOT files are often FON format or custom
    # Check for RIFF/WAV header
    if data[:4] == b'RIFF':
        print(f"  Format: RIFF (FON format)")
        size = struct.unpack('<I', data[4:8])[0]
        print(f"  RIFF size: {size}")
    elif data[:4] == b'\x00\x01\x00\x00':
        print(f"  Format: Custom bitmap font (1bpp)")
        
        # Look for character map pattern
        # The first 256 bytes might be char widths  
        if len(data) > 256:
            widths = struct.unpack('B' * 256, data[:256])
            non_zero = [i for i, w in enumerate(widths) if w > 0]
            print(f"  First 20 char widths: {list(widths[:20])}")
            print(f"  Non-zero chars: {len(non_zero)}")
            
            # Try to find glyph data size
            total_width = sum(widths)
            glyph_area = len(data) - 256
            print(f"  Glyph area: {glyph_area} bytes after widths")
            print(f"  Avg width per char: {total_width / max(1, len(non_zero)):.1f}px")
    else:
        # Just print structure
        for i in range(0, min(256, len(data)), 16):
            hex_str = data[i:i+16].hex()
            ascii_str = ''.join(chr(b) if 32 <= b < 127 else '.' for b in data[i:i+16])
            print(f"  {i:04x}: {hex_str:32s} {ascii_str}")

def analyze_sve(path):
    """Save game files"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    print(f"  Head: {data[:64].hex()}")
    print(f"  ASCII: {data[:64]}")
    
    # Look for known strings
    strings = []
    current = []
    for b in data:
        if 32 <= b < 127:
            current.append(chr(b))
        else:
            if len(current) >= 4:
                strings.append(''.join(current))
            current = []
    if len(current) >= 4:
        strings.append(''.join(current))
    
    print(f"  Strings found: {strings[:30]}")

def analyze_dta(path):
    """Data table files"""
    with open(path, 'rb') as f:
        data = f.read()
    
    print(f"  Size: {len(data)} bytes")
    print(f"  Head: {data[:64]}")
    
    # Try UTF-16
    if data[:2] == b'\xff\xfe':
        text = data.decode('utf-16-le', errors='replace')
        lines = text.split('\n')
        print(f"  UTF-16 content ({len(lines)} lines):")
        for line in lines[:20]:
            print(f"    {line.rstrip()}")
        return
    
    try:
        text = data.decode('ascii', errors='replace')
        if text.count('\n') > 3:
            print(f"  ASCII content:")
            for line in text.split('\n')[:20]:
                print(f"    {line.rstrip()}")
            return
    except:
        pass
    
    # Binary
    print(f"  Binary format - head hex: {data[:64].hex()}")

# Main analysis
print("=" * 70)
print("FICHIERS .chr (Personnages)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.chr'):
            path = os.path.join(root, f)
            print(f"\n--- {f} ---")
            analyze_chr(path)

print("\n\n" + "=" * 70)
print("FICHIERS .glf (Golfeurs)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.glf'):
            path = os.path.join(root, f)
            print(f"\n--- {f} ---")
            analyze_glf(path)

print("\n\n" + "=" * 70)
print("FICHIERS .pro (Profils Pro)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.pro'):
            path = os.path.join(root, f)
            print(f"\n--- {f} ---")
            analyze_pro(path)

print("\n\n" + "=" * 70)
print("FICHIERS .fot (Polices bitmap)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.fot'):
            path = os.path.join(root, f)
            print(f"\n--- {f} ---")
            analyze_fot(path)

print("\n\n" + "=" * 70)
print("FICHIER .sve (Sauvegarde)")
print("=" * 70)
sve_path = os.path.join(data_dir, 'top10.sve')
if os.path.exists(sve_path):
    analyze_sve(sve_path)

print("\n\n" + "=" * 70)
print("FICHIERS .dta (Données)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.dta'):
            path = os.path.join(root, f)
            print(f"\n--- {f} ---")
            analyze_dta(path)

print("\n\n" + "=" * 70)
print("FICHIERS .txt (Histoires/Scénarios)")
print("=" * 70)
for root, dirs, files in os.walk(data_dir):
    for f in sorted(files):
        if f.endswith('.txt') and not f.startswith('test') and 'Lighting' not in f and f != 'readme.txt' and f != 'license.txt' and f != 'infolist.txt':
            path = os.path.join(root, f)
            with open(path, 'rb') as fp:
                header = fp.read(4)
            if header == b'\xff\xfe':  # UTF-16
                with open(path, 'r', encoding='utf-16-le') as fp:
                    content = fp.read(200)
                print(f"\n--- {f} (UTF-16, {os.path.getsize(path)} bytes) ---")
                print(f"  Preview: {content[:200].strip()}")
            else:
                with open(path, 'r', errors='replace') as fp:
                    content = fp.read(200)
                print(f"\n--- {f} ({os.path.getsize(path)} bytes) ---")
                print(f"  Preview: {content[:200].strip()}")

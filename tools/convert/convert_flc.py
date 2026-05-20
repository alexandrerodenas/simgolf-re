#!/usr/bin/env python3
"""
Convertisseur FLC SimGolf → Spritesheets PNG.

Le format SimGolf .flc est un FLC modifie :
  - 0x00: file size (4B)
  - 0x04: FLC magic 0xAF12 (2B)
  - 0x08: Width (2B), 0x0A: Height (2B)
  - 0x10: Frame count (4B) - custom offset!
  - 0x50+: Frame data with standard FLC frame headers (0xF1FA)

Les frames utilisent :
  - CHUNK_COPY (0x10) : image complete
  - CHUNK_SS2 (0x0F) / CHUNK_LC (0x0B) : RLE compresse (bytes >= 0x80 = run)
  - CHUNK_COLOR_256 (0x07) : mise a jour palette
  - CHUNK_BLACK (0x0D) : frame noire

Les palettes initiales sont dans les fichiers .pcx correspondants
(Flag_DESERTpal.pcx → FlagDESERT*.flc).

Usage: python3 convert_flc.py [--all] [--test]
"""

import os, sys, struct, json
from PIL import Image

FLC_DIR = os.path.expanduser("~/simgolf-re/data/raw/Flics")
OUT_DIR = os.path.expanduser("~/simgolf-re/data/converted/animations")
CATALOG_PATH = os.path.expanduser("~/simgolf-re/data/converted/flc_catalog.json")

def find_palette(flc_path):
    """Find corresponding PCX palette file."""
    name = os.path.splitext(os.path.basename(flc_path))[0]
    d = os.path.dirname(flc_path)
    # Try exact match first
    for f in os.listdir(d):
        if f.lower().endswith('.pcx') and f.lower().startswith(name.lower()[:8]):
            p = os.path.join(d, f)
            try:
                img = Image.open(p)
                pal = img.getpalette()
                if pal and len(pal) == 768:
                    return pal
            except: pass
    # Try generic *Pal.pcx match
    for f in os.listdir(d):
        if f.lower().endswith('pal.pcx') or f.lower().endswith('palette.pcx'):
            p = os.path.join(d, f)
            try:
                img = Image.open(p)
                pal = img.getpalette()
                if pal and len(pal) == 768:
                    return pal
            except: pass
    return None


def decode_flc(path, base_palette=None):
    """Decode SimGolf .flc to list of RGBA PIL Images."""
    with open(path, 'rb') as f:
        data = f.read()

    w = struct.unpack('<H', data[10:12])[0]
    h = struct.unpack('<H', data[8:10])[0]
    n_frames = struct.unpack('<I', data[0x10:0x14])[0]
    px = w * h

    # Find frames via 0xF1FA markers
    frames_pos = []
    for i in range(0x50, len(data) - 6):
        if data[i:i+2] == b'\xfa\xf1':
            fs = struct.unpack('<I', data[i-4:i])[0]
            if 16 < fs < 50000 and i - 4 + fs <= len(data):
                frames_pos.append(i - 4)
                if len(frames_pos) >= n_frames:
                    break

    # Default palette
    if base_palette:
        pal = list(base_palette)
    else:
        pal = [i for i in range(256) for _ in range(3)]

    frame = bytearray(px)
    images = []

    for fi in range(len(frames_pos)):
        fp = frames_pos[fi]
        fs = struct.unpack('<I', data[fp:fp+4])[0]
        cp = fp + 0x10

        while cp < fp + fs and cp + 6 <= len(data):
            cs = struct.unpack('<I', data[cp:cp+4])[0]
            ct = struct.unpack('<H', data[cp+4:cp+6])[0]
            if cs < 6 or cp + cs > len(data):
                cp += 6; continue
            cd = data[cp+6:cp+cs]

            if ct == 7:  # PAL256
                pp = 2
                while pp + 1 < len(cd):
                    skip = cd[pp]; count = cd[pp+1]; pp += 2
                    if count == 0: count = 256
                    for j in range(count):
                        if pp + 2 >= len(cd) or skip + j >= 256: break
                        idx = (skip + j) * 3
                        if idx + 2 < len(pal):
                            pal[idx:idx+3] = [cd[pp], cd[pp+1], cd[pp+2]]
                        pp += 3
                    if pp >= len(cd): break

            elif ct in (11, 15):  # LC/SS2 - RLE compressed
                out = bytearray()
                p = 0
                while p < len(cd) and len(out) < px:
                    b = cd[p]; p += 1
                    if b >= 0x80:
                        cnt = b & 0x7F
                        if p < len(cd):
                            out.extend([cd[p]] * cnt); p += 1
                    else:
                        out.append(b)
                if len(out) > 0:
                    frame = bytearray(out[:px]) if len(out) >= px else bytearray(out + bytes(px - len(out)))

            elif ct == 16:  # COPY
                frame = bytearray(cd[:px])
                if len(frame) < px:
                    frame.extend(bytes(px - len(frame)))

            elif ct == 13:  # BLACK
                frame = bytearray(px)

            cp += cs

        # Create PIL Image
        img = Image.new('P', (w, h))
        img.putdata(list(frame))
        img.putpalette(pal)
        images.append(img.convert('RGBA'))

    return images


def decode_and_save(path, out_dir):
    """Decode FLC and save spritesheet + individual frames."""
    name = os.path.splitext(os.path.basename(path))[0]
    os.makedirs(out_dir, exist_ok=True)

    # Find palette
    pal = find_palette(path)

    # Decode
    images = decode_flc(path, pal)
    if not images:
        return None

    # Save spritesheet (8 frames per row)
    w, h = images[0].size
    cols = min(8, len(images))
    rows = (len(images) + cols - 1) // cols
    sheet = Image.new('RGBA', (w * cols, h * rows))
    for i, img in enumerate(images):
        sheet.paste(img, ((i % cols) * w, (i // cols) * h))
    sheet_path = os.path.join(out_dir, f'{name}.png')
    sheet.save(sheet_path, optimize=True)

    # Save individual frames dir (for smaller animations)
    frames_dir = os.path.join(out_dir, name)
    os.makedirs(frames_dir, exist_ok=True)
    for i, img in enumerate(images):
        img.save(os.path.join(frames_dir, f'{i:04d}.png'), optimize=True)

    return {
        'width': w, 'height': h,
        'frames': len(images),
        'sheet': f'{name}.png',
    }


def batch_decode():
    """Decode all FLC files."""
    os.makedirs(OUT_DIR, exist_ok=True)
    catalog = {}
    total = 0
    errors = 0

    for root, dirs, files in os.walk(FLC_DIR):
        for f in sorted(files):
            if f.lower().endswith('.flc'):
                path = os.path.join(root, f)
                rel = os.path.relpath(path, FLC_DIR)
                out_subdir = os.path.join(OUT_DIR, os.path.dirname(rel))
                
                result = decode_and_save(path, out_subdir)
                if result:
                    catalog[rel] = result
                    total += 1
                else:
                    catalog[rel] = {'error': 'decode failed'}
                    errors += 1

                if total % 200 == 0:
                    print(f'  [{total}] decoded...')

    with open(CATALOG_PATH, 'w') as f:
        json.dump(catalog, f, indent=2)

    print(f'\nDecoded: {total}, Errors: {errors}')
    print(f'Catalog: {CATALOG_PATH}')
    return catalog


if __name__ == '__main__':
    if '--all' in sys.argv:
        batch_decode()
    elif '--test' in sys.argv:
        for rel in ['Tees/FlagDESERT_open.flc', 'Male/Golfer_Male_A.flc', 'Celebs/Ranger.flc']:
            path = os.path.join(FLC_DIR, rel)
            if os.path.exists(path):
                out = os.path.join('/tmp', os.path.dirname(rel))
                os.makedirs(out, exist_ok=True)
                r = decode_and_save(path, out)
                if r:
                    print(f'{rel}: {r["width"]}x{r["height"]}, {r["frames"]} frames OK')
                else:
                    print(f'{rel}: FAILED')
    else:
        print(__doc__)

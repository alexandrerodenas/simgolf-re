#!/usr/bin/env python3
"""
Decodeur FLC SimGolf → PNG spritesheets (CORRIGE).
Le format est du FLC standard avec un header custom de 128 bytes
(offset 0-3 = taille fichier, header FLC standard commence a +4,
frames data commence a +0x80).

Opcodes corriges :
  0x07 = FLI_SS2  (word-oriented delta, PAS palette)
  0x0B = FLI_COLOR (palette)
  0x0C = FLI_LC   (byte-oriented delta)
  0x0D = FLI_BLACK
  0x0F = FLI_BRUN (byte run-length encoding, PAS SS2)
  0x10 = FLI_COPY (full frame copy)

Usage: python3 decode_flc.py [--all] [--sheet] [--frames]
"""

import os, sys, struct
from PIL import Image

FLC_DIR = os.path.expanduser("~/simgolf-re/game_data/extracted/Flics")
OUT_DIR = os.path.expanduser("~/simgolf-re/game_data/converted/sprites")

# ================================================================
# FLC Decoder (corrige)
# ================================================================

class FLCDecoder:
    """Decodes SimGolf FLC files (standard FLC with custom 128-byte header)."""
    
    # Opcodes FLC standard (corriges)
    FLI_SS2 = 0x07       # Word-oriented delta compression
    FLI_COLOR = 0x0B     # Palette update
    FLI_LC = 0x0C        # Byte-oriented delta compression
    FLI_BLACK = 0x0D     # Black frame
    FLI_BRUN = 0x0F      # Byte run-length encoding
    FLI_COPY = 0x10      # Full frame copy
    
    def __init__(self, path, palette_path=None):
        self.path = path
        self.palette_path = palette_path
        self.frames = []
        self.palette = [(0, 0, 0)] * 256
        
        with open(path, 'rb') as f:
            self.data = f.read()
        
        # Load external palette if provided (or auto-discover)
        found_pal = self._find_palette_auto()
        if found_pal:
            self._load_palette_from_pcx(found_pal)
        
        self._parse_header()
        self._parse_frames()
    
    def _find_palette_auto(self):
        """Auto-discover palette file for this FLC.
        
        Search strategies:
        1. Same dir: Pal{BaseName}.pcx, {BaseName}Pal*.pcx
        2. Same dir: *Pal*.pcx containing first word of FLC name
        3. Same dir: any Pal*.pcx
        4. Same dir: any *_palette.pcx
        5. Same dir: any *.pal
        """
        if self.palette_path and os.path.exists(self.palette_path):
            return self.palette_path
        
        base = os.path.dirname(self.path)
        name = os.path.splitext(os.path.basename(self.path))[0]
        
        # Strategy 1: Pal{Name}.pcx (common for tree palettes)
        pal_name = f'Pal{name}'
        for f in os.listdir(base):
            if f.startswith(pal_name) and f.lower().endswith(('.pcx', '.pal')):
                return os.path.join(base, f)
        
        # Strategy 2: {Name}Pal*.pcx (common for Links trees)
        for f in os.listdir(base):
            if name in f and 'Pal' in f and f.lower().endswith('.pcx'):
                return os.path.join(base, f)
        
        # Strategy 2b: palette shares a common word (≥3 chars) with the FLC name.
        # Score by number of shared words, pick the best match.
        # Handles: FlagPARK_open.flc ↔ Flag_PARKpal.pcx, etc.
        import re
        def extract_words(s):
            # Split on underscores and PascalCase boundaries
            parts = re.split(r'[_]', s)
            words = set()
            for part in parts:
                for w in re.findall(r'[A-Z]{2,}|[A-Z][a-z]+|[a-z]+', part):
                    if len(w) >= 3:
                        words.add(w.lower())
            return words
        
        flc_words = extract_words(name)
        best_pal = None
        best_score = -1
        for f in os.listdir(base):
            if not (f.lower().endswith('.pcx') and 'pal' in f.lower()):
                continue
            pal_name_only = os.path.splitext(f)[0]
            pal_words = extract_words(pal_name_only)
            overlap = flc_words & pal_words
            # Score: prefer specific thematic matches over generic ones
            generic = {'pal', 'flag', 'tree', 'shadow', 'open', 'pop', 'close', 'anim'}
            score = sum(2 for w in overlap if w not in generic) + sum(0.5 for w in overlap if w in generic)
            if score > best_score:
                best_score = score
                best_pal = f
        if best_pal and best_score > 0.5:
            return os.path.join(base, best_pal)
        
        # Strategy 3: any Pal*.pcx in same directory
        pal_files = [f for f in os.listdir(base) 
                     if f.lower().startswith('pal') and f.lower().endswith('.pcx')]
        if pal_files:
            return os.path.join(base, pal_files[0])
        
        # Strategy 4: any *_palette.pcx in same directory
        pal_files = [f for f in os.listdir(base) if f.lower().endswith('_palette.pcx')]
        if pal_files:
            return os.path.join(base, pal_files[0])
        
        # Strategy 5: any .pal file in same directory
        pal_files = [f for f in os.listdir(base) if f.lower().endswith('.pal')]
        if pal_files:
            return os.path.join(base, pal_files[0])
        
        return None
    
    def _load_palette_from_pcx(self, pcx_path):
        """Load 256-color palette from a PCX palette file or raw .pal file."""
        ext = os.path.splitext(pcx_path)[1].lower()
        
        if ext == '.pal':
            # Raw palette file: 256 * 3 bytes = 768 bytes RGB
            self._load_palette_raw(pcx_path)
            return
        
        try:
            from PIL import Image as PILImage
            img = PILImage.open(pcx_path)
            if img.mode == 'P' and img.palette:
                pal_data = img.palette.palette
                for i in range(256):
                    r = pal_data[i * 3] if i * 3 < len(pal_data) else 0
                    g = pal_data[i * 3 + 1] if i * 3 + 1 < len(pal_data) else 0
                    b = pal_data[i * 3 + 2] if i * 3 + 2 < len(pal_data) else 0
                    self.palette[i] = (r, g, b)
            elif img.mode == 'P':
                # PCX with embedded palette in the file data
                with open(pcx_path, 'rb') as f:
                    data = f.read()
                # PCX v3 palette is stored at EOF: byte 0x0C followed by 768 bytes
                if len(data) >= 769 and data[-769] == 0x0C:
                    pal_data = data[-768:]
                    for i in range(256):
                        r = pal_data[i * 3]
                        g = pal_data[i * 3 + 1]
                        b = pal_data[i * 3 + 2]
                        self.palette[i] = (r, g, b)
        except Exception as e:
            print(f"  Warning: could not load palette from {pcx_path}: {e}")
    
    def _load_palette_raw(self, pal_path):
        """Load raw 768-byte RGB palette file."""
        try:
            with open(pal_path, 'rb') as f:
                data = f.read()
            if len(data) >= 768:
                for i in range(256):
                    r = data[i * 3]
                    g = data[i * 3 + 1]
                    b = data[i * 3 + 2]
                    self.palette[i] = (r, g, b)
        except Exception as e:
            print(f"  Warning: could not load raw palette {pal_path}: {e}")
    
    def _parse_header(self):
        d = self.data
        if len(d) < 132:
            raise ValueError("File too small")
        
        # SimGolf custom FLC header:
        # 0x00-0x03: File size (uint32)
        # 0x04-0x05: FLC magic (0xAF12)
        # 0x06-0x07: Frames count (uint16, low word)
        # 0x08-0x09: Width (uint16)
        # 0x0A-0x0B: Height (uint16)
        # 0x0C-0x0D: Depth (uint16, always 8)
        # 0x0E-0x0F: Flags (uint16)
        # 0x10-0x13: Speed (ms per frame, uint32)
        # 0x14-0x7F: Padding (reserved)
        # 0x80+: Frame data starts
        
        self.file_size = struct.unpack('<I', d[0:4])[0]
        self.magic = struct.unpack('<H', d[4:6])[0]
        self.frames_count = struct.unpack('<H', d[6:8])[0]
        self.width = struct.unpack('<H', d[8:10])[0]
        self.height = struct.unpack('<H', d[10:12])[0]
        self.depth = struct.unpack('<H', d[12:14])[0]
        self.flags = struct.unpack('<H', d[14:16])[0]
        self.speed = struct.unpack('<I', d[0x10:0x14])[0]
        
        if self.magic != 0xAF12:
            print(f"  Warning: magic=0x{self.magic:04x} (expected 0xAF12)")
    
    def _parse_frames(self):
        d = self.data
        
        # Frame data starts at offset 0x80 always
        # But some files might have a different layout - search for 0xF1FA
        frame_positions = []
        search_start = 0x50  # Start search early just in case
        for i in range(search_start, len(d) - 4):
            if d[i:i+2] == b'\xfa\xf1':
                frame_positions.append(i - 4)
                if len(frame_positions) >= self.frames_count:
                    break
        
        if len(frame_positions) == 0:
            # Fallback: assume sequential frames starting at 0x80
            pos = 0x80
            for _ in range(self.frames_count):
                if pos + 8 > len(d):
                    break
                frame_size = struct.unpack('<I', d[pos:pos+4])[0]
                if 16 <= frame_size <= min(100000, len(d) - pos):
                    frame_positions.append(pos)
                    pos += frame_size
                else:
                    break
        
        # Parse each frame
        frame_pixels = None
        prev_pixels = None
        
        for idx, pos in enumerate(frame_positions):
            if idx >= self.frames_count:
                break
            if pos + 16 > len(d):
                break
            
            frame_size = struct.unpack('<I', d[pos:pos+4])[0]
            if frame_size < 16 or pos + frame_size > len(d):
                continue
            
            frame_magic = struct.unpack('<H', d[pos+4:pos+6])[0]
            frame_chunks = struct.unpack('<H', d[pos+6:pos+8])[0]
            
            if frame_magic != 0xF1FA:
                continue
            
            # Parse sub-chunks within this frame
            chunk_pos = pos + 16
            chunk_end = pos + frame_size
            
            # Start with previous frame for delta decoding, or blank
            if prev_pixels is not None:
                pixels = bytearray(prev_pixels)
            else:
                pixels = bytearray(self.width * self.height)
            
            decoded_this_frame = False
            
            while chunk_pos < chunk_end and chunk_pos + 6 < len(d):
                ck_size = struct.unpack('<I', d[chunk_pos:chunk_pos+4])[0]
                ck_type = struct.unpack('<H', d[chunk_pos+4:chunk_pos+6])[0]
                
                # Sanity check: chunk must be within frame bounds, 
                # and type must be a known FLC opcode
                if ck_size < 6 or chunk_pos + ck_size > chunk_end:
                    # Invalid chunk - frame data ended
                    break
                
                if ck_type not in (self.FLI_COLOR, self.FLI_COPY, self.FLI_BRUN,
                                   self.FLI_LC, self.FLI_SS2, self.FLI_BLACK):
                    # Unknown chunk type - might be garbage data at end of frame
                    break
                
                chunk_data = d[chunk_pos+6:chunk_pos+ck_size]
                
                if ck_type == self.FLI_COLOR:
                    self._decode_palette(chunk_data)
                
                elif ck_type == self.FLI_COPY:
                    # Full frame copy - raw pixel data
                    total_pixels = self.width * self.height
                    data_len = min(len(chunk_data), total_pixels)
                    pixels[:data_len] = chunk_data[:data_len]
                    decoded_this_frame = True
                
                elif ck_type == self.FLI_BRUN:
                    self._decode_brun(chunk_data, pixels)
                    decoded_this_frame = True
                
                elif ck_type == self.FLI_LC:
                    self._decode_delta_lc(chunk_data, pixels)
                    decoded_this_frame = True
                
                elif ck_type == self.FLI_SS2:
                    self._decode_delta_ss2(chunk_data, pixels)
                    decoded_this_frame = True
                
                elif ck_type == self.FLI_BLACK:
                    # Black frame = all zeros
                    pixels = bytearray(self.width * self.height)
                    decoded_this_frame = True
                
                chunk_pos += ck_size
            
            prev_pixels = bytes(pixels)
            self.frames.append(bytes(pixels))
    
    def _decode_palette(self, data):
        """Decode FLI_COLOR palette chunk (type 0x0B)."""
        if len(data) < 2:
            return
        
        try:
            packet_count = struct.unpack('<H', data[0:2])[0]
        except:
            return
        
        pos = 2
        for _ in range(packet_count):
            if pos + 1 >= len(data):
                break
            skip = data[pos]
            count = data[pos + 1]
            if count == 0:
                count = 256
            pos += 2
            for j in range(count):
                if pos + 2 >= len(data) or skip + j >= 256:
                    break
                r = (data[pos] << 2) | (data[pos] >> 6)
                g = (data[pos + 1] << 2) | (data[pos + 1] >> 6)
                b = (data[pos + 2] << 2) | (data[pos + 2] >> 6)
                self.palette[skip + j] = (r, g, b)
                pos += 3
    
    def _decode_brun(self, data, pixels):
        """Decode FLI_BRUN byte run-length encoding (type 0x0F).
        
        SimGolf variant: flat RLE pairs covering the entire image.
        Each pair: (run_length: uint8, color_index: uint8).
        No per-line headers — runs span across line boundaries.
        """
        w = self.width
        h = self.height
        total_pixels = w * h
        dst = 0
        pos = 0
        
        while dst < total_pixels and pos + 1 < len(data):
            run_len = data[pos]
            color = data[pos + 1]
            pos += 2
            
            for _ in range(run_len):
                if dst < total_pixels:
                    pixels[dst] = color
                    dst += 1
    
    def _decode_delta_lc(self, data, pixels):
        """Decode FLI_LC byte-oriented delta compressed frame (type 0x0C)."""
        if len(data) < 6:
            return
        
        lines_to_skip = struct.unpack('<H', data[0:2])[0]
        lines_to_do = struct.unpack('<H', data[2:4])[0]
        pos = 6
        w = self.width
        h = self.height
        total_pixels = w * h
        
        for line in range(lines_to_do):
            if pos >= len(data):
                break
            line_offset = (lines_to_skip + line) * w
            packets = data[pos]
            pos += 1
            
            for _ in range(packets):
                if pos + 1 >= len(data):
                    break
                skip_count = data[pos]
                size_count = data[pos + 1]
                pos += 2
                
                if size_count > 0:
                    line_offset += skip_count
                    chunk = data[pos:pos + size_count]
                    pos += size_count
                    for j, pixel in enumerate(chunk):
                        idx = line_offset + j
                        if idx < total_pixels:
                            pixels[idx] = pixel
                    line_offset += size_count
                else:
                    # Run-length: skip_count pixels, then a run
                    line_offset += skip_count
                    if pos >= len(data):
                        break
                    run_value = data[pos]
                    pos += 1
                    for j in range(size_count & 0xFF):
                        idx = line_offset + j
                        if idx < total_pixels:
                            pixels[idx] = run_value
                    line_offset += (size_count & 0xFF)
    
    def _decode_delta_ss2(self, data, pixels):
        """Decode FLI_SS2 word-oriented delta compressed frame (type 0x07).
        
        Similar to FLI_LC but operates on word boundaries.
        Each packet affects 2-pixel columns.
        """
        if len(data) < 6:
            return
        
        lines_to_skip = struct.unpack('<H', data[0:2])[0]
        lines_to_do = struct.unpack('<H', data[2:4])[0]
        pos = 6
        w = self.width
        h = self.height
        total_pixels = w * h
        
        for line in range(lines_to_do):
            if pos >= len(data):
                break
            line_offset = (lines_to_skip + line) * w
            
            if pos + 1 >= len(data):
                break
            packets = data[pos]
            pos += 1
            
            for _ in range(packets):
                if pos + 1 >= len(data):
                    break
                skip_count = data[pos]
                size_count = data[pos + 1]
                pos += 2
                
                if size_count > 0:
                    # Skip specified columns (2px per skip_count)
                    line_offset += skip_count
                    # Copy size_count pixel-pairs (word-oriented: read top byte of each word)
                    chunk = data[pos:pos + size_count * 2]
                    pos += size_count * 2
                    for j in range(size_count):
                        idx = line_offset + j
                        if idx < total_pixels and j < len(chunk):
                            pixels[idx] = chunk[j]
                    line_offset += size_count
                else:
                    # Run-length
                    line_offset += skip_count
                    if pos >= len(data):
                        break
                    run_value = data[pos]
                    pos += 1
                    for j in range(size_count & 0xFF):
                        idx = line_offset + j
                        if idx < total_pixels:
                            pixels[idx] = run_value
                    line_offset += size_count
    
    def get_image(self, frame_index=0):
        """Get a PIL Image for a specific frame."""
        if frame_index >= len(self.frames):
            return None
        
        img = Image.new('P', (self.width, self.height))
        img.putdata(list(self.frames[frame_index]))
        flat_palette = [c for rgb in self.palette for c in rgb]
        img.putpalette(flat_palette)
        return img
    
    def save_frame(self, frame_index, out_path):
        """Save a specific frame as PNG."""
        img = self.get_image(frame_index)
        if img:
            img = img.convert('RGBA')
            data = img.getdata()
            new_data = []
            for pixel in data:
                r, g, b, a = pixel
                # FLC chroma keys:
                # - Color index 0 is typically background (green-screen)
                # - Pure magenta (255,0,255) is a common FLC transparency color
                if (r == 0 and g == 0 and b == 0) or (r == 255 and g == 0 and b == 255):
                    new_data.append((0, 0, 0, 0))
                else:
                    new_data.append(pixel)
            img.putdata(new_data)
            img.save(out_path, 'PNG')
            return True
        return False
    
    def save_spritesheet(self, out_path, frames_per_row=8):
        """Save all frames as a spritesheet PNG."""
        if not self.frames:
            return False
        
        n = len(self.frames)
        cols = min(frames_per_row, n)
        rows = (n + cols - 1) // cols
        
        sheet = Image.new('P', (self.width * cols, self.height * rows))
        flat_palette = [c for rgb in self.palette for c in rgb]
        sheet.putpalette(flat_palette)
        
        for i, frame in enumerate(self.frames):
            col = i % cols
            row = i // cols
            img = Image.new('P', (self.width, self.height))
            img.putdata(list(frame))
            sheet.paste(img, (col * self.width, row * self.height))
        
        # Convert to RGBA and handle chroma keys
        sheet = sheet.convert('RGBA')
        data = list(sheet.getdata())
        new_data = []
        for pixel in data:
            r, g, b, a = pixel
            if (r == 0 and g == 0 and b == 0) or (r == 255 and g == 0 and b == 255):
                new_data.append((0, 0, 0, 0))
            else:
                new_data.append(pixel)
        sheet.putdata(new_data)
        sheet.save(out_path)
        return True


# ================================================================
# Main
# ================================================================

def scan_flcs():
    """Scan all FLC files and return metadata."""
    catalog = {}
    total = 0
    
    for root, dirs, files in os.walk(FLC_DIR):
        for f in sorted(files):
            if f.lower().endswith('.flc'):
                path = os.path.join(root, f)
                rel = os.path.relpath(path, FLC_DIR)
                try:
                    dec = FLCDecoder(path)
                    catalog[rel] = {
                        'width': dec.width,
                        'height': dec.height,
                        'frames': len(dec.frames),
                        'speed': dec.speed,
                        'size': os.path.getsize(path),
                    }
                    total += 1
                    if total % 500 == 0:
                        print(f"  Scanned {total}/1893...")
                except Exception as e:
                    catalog[rel] = {'error': str(e)}
    
    return catalog, total


def decode_all():
    """Decode all FLC files to individual frames."""
    os.makedirs(OUT_DIR, exist_ok=True)
    count = 0
    
    for root, dirs, files in os.walk(FLC_DIR):
        for f in sorted(files):
            if f.lower().endswith('.flc'):
                path = os.path.join(root, f)
                rel = os.path.relpath(path, FLC_DIR)
                out_subdir = os.path.join(OUT_DIR, os.path.dirname(rel))
                os.makedirs(out_subdir, exist_ok=True)
                
                try:
                    dec = FLCDecoder(path)
                    base = os.path.splitext(f)[0]
                    
                    # Save spritesheet
                    sheet_path = os.path.join(out_subdir, f'{base}.png')
                    dec.save_spritesheet(sheet_path)
                    
                    # Save individual frames
                    frames_dir = os.path.join(out_subdir, base)
                    os.makedirs(frames_dir, exist_ok=True)
                    for i in range(len(dec.frames)):
                        frame_path = os.path.join(frames_dir, f'{i:04d}.png')
                        dec.save_frame(i, frame_path)
                    
                    count += 1
                    if count % 100 == 0:
                        print(f"  Decoded {count}...")
                except Exception as e:
                    print(f"  Error: {rel}: {e}")
    
    print(f"  Decoded {count} FLC files")


def scan_only():
    """Just scan and print stats."""
    print("Scanning FLC files...")
    catalog, total = scan_flcs()
    
    print(f"\nTotal FLC: {total}")
    print(f"\nBy directory:")
    dirs = {}
    for rel, info in catalog.items():
        d = os.path.dirname(rel)
        dirs[d] = dirs.get(d, 0) + 1
    for d, count in sorted(dirs.items()):
        print(f"  {d}: {count}")
    
    sizes = [info['size'] for info in catalog.values() if 'size' in info]
    if sizes:
        print(f"\nSize range: {min(sizes)} - {max(sizes)} bytes")
    
    errors = sum(1 for info in catalog.values() if 'error' in info)
    print(f"Errors: {errors}")


def generate_catalog():
    """Generate JSON catalog of all FLC files."""
    import json
    catalog, total = scan_flcs()
    catalog_path = os.path.join(OUT_DIR, '..', 'flc_catalog.json')
    os.makedirs(os.path.dirname(catalog_path), exist_ok=True)
    with open(catalog_path, 'w') as f:
        json.dump(catalog, f, indent=2)
    print(f"Catalog written: {catalog_path}")


if __name__ == '__main__':
    if '--all' in sys.argv:
        decode_all()
    elif '--scan' in sys.argv:
        scan_only()
    elif '--catalog' in sys.argv:
        generate_catalog()
    else:
        # Test on a few files
        test_files = [
            ('Tees/FlagLINKS_openShadow.flc', None),
            ('Tees/FlagPARK_open.flc', 'Tees/Flag_PARKpal.pcx'),
            ('Trees/TreeMapleLarge.flc', None),
            ('Trees/TreePalmLg.flc', None),
            ('Trees/TreePineLarge.flc', None),
            ('Celebs/Ranger.flc', None),
            ('Water/Wave.flc', None),
        ]
        base = FLC_DIR
        for rel, pal_rel in test_files:
            path = os.path.join(base, rel)
            if os.path.exists(path):
                pal_path = os.path.join(base, pal_rel) if pal_rel else None
                print(f"\n=== {rel} ===")
                if pal_rel:
                    print(f"    Palette: {pal_rel}")
                try:
                    dec = FLCDecoder(path, pal_path)
                    print(f"  Size: {dec.width}x{dec.height}, Frames: {len(dec.frames)}, Speed: {dec.speed}ms")
                    print(f"  Palette non-zero entries: {sum(1 for c in dec.palette if c != (0,0,0))}")
                    if dec.frames:
                        unique_vals = len(set(dec.frames[0]))
                        print(f"  Frame 0 unique pixel values: {unique_vals}")
                    
                    # Save test frame
                    out = f'/tmp/flc_{os.path.basename(rel).replace(".flc","")}.png'
                    dec.save_frame(0, out)
                    print(f"  Frame 0 saved: {out}")
                    
                    if len(dec.frames) > 1:
                        out2 = f'/tmp/flc_{os.path.basename(rel).replace(".flc","")}_mid.png'
                        dec.save_frame(len(dec.frames)//2, out2)
                        print(f"  Frame {len(dec.frames)//2} saved: {out2}")
                except Exception as e:
                    print(f"  Error: {e}")
                    import traceback
                    traceback.print_exc()

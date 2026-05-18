#!/usr/bin/env python3
"""
Decodeur FLC SimGolf → PNG spritesheets.
Le format est du FLC standard mais avec un header de 4 bytes supplementaire
(offset 0-3 = taille du fichier, le vrai header FLC commence à l'offset 4).

Usage: python3 decode_flc.py [--all] [--sheet] [--frames]
  --all      : decodes all 1893 FLC files to PNG
  --sheet    : generates spritesheets per animation
  --frames   : extracts individual frames as PNG
"""

import os, sys, struct
from PIL import Image

FLC_DIR = os.path.expanduser("~/simgolf-re/game_data/extracted/Flics")
OUT_DIR = os.path.expanduser("~/simgolf-re/game_data/converted/sprites")

# ================================================================
# FLC Decoder (offset +4 variant)
# ================================================================

class FLCDecoder:
    """Decodes SimGolf FLC files (standard FLC with +4 byte offset)."""
    
    FLI_COLOR_256 = 0x07
    FLI_LC = 0x0B
    FLI_BLACK = 0x0D
    FLI_SS2 = 0x0F
    FLI_COPY = 0x10
    FLI_COLOR_64 = 0x0C
    
    def __init__(self, path):
        self.path = path
        self.frames = []
        self.palette = [(0, 0, 0)] * 256
        
        with open(path, 'rb') as f:
            self.data = f.read()
        
        # Parse header at offset 4
        self._parse_header()
        self._parse_frames()
    
    def _parse_header(self):
        d = self.data
        if len(d) < 20:
            raise ValueError("File too small")
        
        # SimGolf custom FLC header:
        # 0x00-0x03: File size (uint32)
        # 0x04-0x05: FLC magic (0xAF12)
        # 0x06-0x07: Unknown (not standard frame count!)
        # 0x08-0x09: Width (uint16)
        # 0x0A-0x0B: Height (uint16)
        # 0x0C-0x0D: Depth (uint16, always 8)
        # 0x0E-0x0F: Flags/Speed ?
        # 0x10-0x13: Frame count (uint32) ← CUSTOM OFFSET!
        # 0x14-0x4F: Unknown/padding
        # 0x50+: Frame data starts
        
        self.file_size = struct.unpack('<I', d[0:4])[0]
        self.magic = struct.unpack('<H', d[4:6])[0]
        self.width = struct.unpack('<H', d[8:10])[0]
        self.height = struct.unpack('<H', d[10:12])[0]
        self.depth = struct.unpack('<H', d[12:14])[0]
        self.flags = struct.unpack('<H', d[14:16])[0]
        self.frames_count = struct.unpack('<I', d[0x10:0x14])[0]  # Custom offset!
        
        # Speed/ms per frame might be in the frame data itself
        # (speed = 0 means render every frame, ~33ms at 30fps)
        self.speed = 0  # To be determined from frame data
        
        if self.magic != 0xAF12:
            print(f"  Warning: magic=0x{self.magic:04x} (expected 0xAF12)")
    
    def _parse_frames(self):
        d = self.data
        
        # Frame data starts after the custom header
        # Header is variable size - need to find first frame marker
        # Look for 0xF1FA frame magic in the file
        frame_positions = []
        for i in range(0x50, min(len(d) - 4, 0x200), 2):
            if d[i:i+2] == b'\xfa\xf1':  # 0xF1FA in little-endian
                frame_positions.append(i - 4)  # Point to frame size field
                if len(frame_positions) >= self.frames_count:
                    break
        
        if len(frame_positions) < self.frames_count:
            # Alternative: search for 0xF1FA anywhere
            frame_positions = []
            for i in range(0x50, len(d) - 4):
                if d[i:i+2] == b'\xfa\xf1':
                    frame_positions.append(i - 4)
                    if len(frame_positions) >= self.frames_count:
                        break
        
        if len(frame_positions) == 0:
            # Fallback: assume frames start at 0x50 with standard FLC frames
            pos = 0x50
            for _ in range(self.frames_count):
                if pos + 8 > len(d):
                    break
                frame_size = struct.unpack('<I', d[pos:pos+4])[0]
                if frame_size > 0 and pos + frame_size <= len(d):
                    frame_positions.append(pos)
                    pos += frame_size
                else:
                    break
        
        # Parse each frame
        for i, pos in enumerate(frame_positions):
            if i >= self.frames_count:
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
            
            chunk_pos = pos + 16
            chunk_end = pos + frame_size
            
            frame_decoded = False
            
            while chunk_pos < chunk_end and chunk_pos + 6 < len(d):
                chunk_size = struct.unpack('<I', d[chunk_pos:chunk_pos+4])[0]
                chunk_type = struct.unpack('<H', d[chunk_pos+4:chunk_pos+6])[0]
                
                if chunk_size < 6 or chunk_pos + chunk_size > len(d):
                    chunk_pos += 6
                    continue
                    
                chunk_data = d[chunk_pos+6:chunk_pos+chunk_size]
                
                if chunk_type == self.FLI_COLOR_256 or chunk_type == self.FLI_COLOR_64:
                    self._decode_palette(chunk_data, chunk_type)
                
                elif chunk_type == self.FLI_COPY:
                    pixels = chunk_data[:self.width * self.height]
                    if len(pixels) == self.width * self.height:
                        self._add_frame(pixels)
                        frame_decoded = True
                
                elif chunk_type == self.FLI_LC:
                    self._decode_delta_lc(chunk_data)
                    frame_decoded = True
                
                elif chunk_type == self.FLI_SS2:
                    self._decode_delta_ss2(chunk_data)
                    frame_decoded = True
                
                elif chunk_type == self.FLI_BLACK:
                    self._add_frame(bytes(self.width * self.height))
                    frame_decoded = True
                
                chunk_pos += chunk_size
            
            if not frame_decoded and not self.frames:
                self._add_frame(bytes(self.width * self.height))
    
    def _decode_palette(self, data, chunk_type):
        """Decode FLI_COLOR_256 palette chunk."""
        if chunk_type == self.FLI_COLOR_256:
            packet_count = struct.unpack('<H', data[0:2])[0]
            pos = 2
            for _ in range(packet_count):
                if pos + 1 > len(data): break
                skip = data[pos]
                count = data[pos+1] if data[pos+1] > 0 else 256
                pos += 2
                for j in range(count):
                    if pos + 3 > len(data) or skip + j >= 256: break
                    self.palette[skip + j] = (
                        data[pos] << 2,
                        data[pos+1] << 2,
                        data[pos+2] << 2
                    )
                    pos += 3
        elif chunk_type == self.FLI_COLOR_64:
            packet_count = struct.unpack('<H', data[0:2])[0]
            pos = 2
            for _ in range(packet_count):
                if pos + 1 > len(data): break
                skip = data[pos]
                count = data[pos+1] if data[pos+1] > 0 else 64
                pos += 2
                for j in range(count):
                    if pos + 3 > len(data) or skip + j >= 256: break
                    self.palette[skip + j] = (
                        (data[pos] & 0xFC) | (data[pos] >> 6),
                        (data[pos+1] & 0xFC) | (data[pos+1] >> 6),
                        (data[pos+2] & 0xFC) | (data[pos+2] >> 6)
                    )
                    pos += 3
    
    def _decode_delta_lc(self, data):
        """Decode FLI_LC byte-oriented delta compressed frame."""
        if len(data) < 6: return
        lines_to_skip = struct.unpack('<H', data[0:2])[0]
        lines_to_do = struct.unpack('<H', data[2:4])[0]
        # data[4:6] = rest of header
        pos = 6
        
        # Start with a copy of the previous frame or blank
        if self.frames:
            frame = bytearray(self.frames[-1])
        else:
            frame = bytearray(self.width * self.height)
        
        for line in range(lines_to_do):
            if pos >= len(data): break
            line_offset = (lines_to_skip + line) * self.width
            packets = data[pos]
            pos += 1
            for _ in range(packets):
                if pos + 1 >= len(data): break
                skip_count = data[pos]
                size_count = data[pos+1]
                pos += 2
                if size_count > 0:
                    line_offset += skip_count
                    chunk = data[pos:pos + size_count]
                    pos += size_count
                    for j, pixel in enumerate(chunk):
                        if line_offset + j < len(frame):
                            frame[line_offset + j] = pixel
                    line_offset += size_count
                else:
                    # Run-length encoded
                    line_offset += skip_count
                    if pos >= len(data): break
                    run_value = data[pos]
                    pos += 1
                    for j in range(size_count & 0xFF):
                        if line_offset + j < len(frame):
                            frame[line_offset + j] = run_value
                    line_offset += (size_count & 0xFF)
        
        self._add_frame(bytes(frame))
    
    def _decode_delta_ss2(self, data):
        """Decode FLI_SS2 word-oriented delta compressed frame."""
        if len(data) < 6: return
        lines_to_skip = struct.unpack('<H', data[0:2])[0]
        lines_to_do = struct.unpack('<H', data[2:4])[0]
        pos = 6
        
        if self.frames:
            frame = bytearray(self.frames[-1])
        else:
            frame = bytearray(self.width * self.height)
        
        for line in range(lines_to_do):
            if pos >= len(data): break
            line_offset = (lines_to_skip + line) * self.width
            packets = struct.unpack('<H', data[pos:pos+2])[0]
            pos += 2
            for _ in range(packets):
                if pos + 1 >= len(data): break
                skip_count = data[pos]
                size_count = data[pos+1]
                pos += 2
                if size_count > 0:
                    line_offset += skip_count * 2
                    chunk = data[pos:pos + size_count * 2]
                    pos += size_count * 2
                    for j in range(size_count):
                        idx = line_offset + j
                        if idx < len(frame) and j * 2 + 1 < len(chunk):
                            frame[idx] = chunk[j * 2]
                    line_offset += size_count
                else:
                    line_offset += skip_count * 2
                    if pos >= len(data): break
                    run_value = data[pos]
                    pos += 1
                    for j in range(size_count & 0xFF):
                        idx = line_offset + j
                        if idx < len(frame):
                            frame[idx] = run_value
                    line_offset += size_count
        
        self._add_frame(bytes(frame))
    
    def _add_frame(self, pixel_data):
        """Add decoded frame to list."""
        self.frames.append(pixel_data)
        
        # Sync decoder palette: use the first non-palette frame's palette
        # (the palette is global, set at the start of the animation)
    
    def get_image(self, frame_index=0):
        """Get a PIL Image for a specific frame."""
        if frame_index >= len(self.frames):
            return None
        
        img = Image.new('P', (self.width, self.height))
        img.putdata(list(self.frames[frame_index]))
        img.putpalette([c for rgb in self.palette for c in rgb])
        return img
    
    def save_frame(self, frame_index, out_path):
        """Save a specific frame as PNG."""
        img = self.get_image(frame_index)
        if img:
            img.save(out_path)
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
        sheet.putpalette([c for rgb in self.palette for c in rgb])
        
        for i, frame in enumerate(self.frames):
            col = i % cols
            row = i // cols
            img = Image.new('P', (self.width, self.height))
            img.putdata(list(frame))
            sheet.paste(img, (col * self.width, row * self.height))
        
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
    
    # Size distribution
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
            'Tees/FlagLINKS_openShadow.flc',
            'Male/Golfer_Male_A.flc',
            'Celebs/Ranger.flc',
        ]
        base = FLC_DIR
        for rel in test_files:
            path = os.path.join(base, rel)
            if os.path.exists(path):
                print(f"\n=== {rel} ===")
                try:
                    dec = FLCDecoder(path)
                    print(f"  Size: {dec.width}x{dec.height}, Frames: {len(dec.frames)}, Speed: {dec.speed}ms")
                    
                    # Save test frame
                    out = f'/tmp/flc_{os.path.basename(rel).replace(".flc","")}.png'
                    dec.save_frame(0, out)
                    print(f"  Frame 0 saved: {out}")
                except Exception as e:
                    print(f"  Error: {e}")

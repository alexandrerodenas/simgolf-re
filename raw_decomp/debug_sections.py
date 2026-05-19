#!/usr/bin/env python3
"""Debug PE section layout."""
import pefile
import struct

pe = pefile.PE("game_data/exe/golf.exe")

print("=== Section Headers ===")
for s in pe.sections:
    name = s.Name.decode("utf-8", errors="replace").strip("\x00").strip()
    va = s.VirtualAddress
    raw_size = s.SizeOfRawData
    virt_size = s.Misc_VirtualSize
    raw_ptr = s.PointerToRawData
    print(f"{name:10s} VA=0x{va:05x} RawSize=0x{raw_size:x} VirtSize=0x{virt_size:x} RawPtr=0x{raw_ptr:x}")

base = pe.OPTIONAL_HEADER.ImageBase
print(f"\nImageBase = 0x{base:08x}")

# Check the actual raw data offset for 0x465170
text_sec = pe.sections[0]
text_va = text_sec.VirtualAddress
text_raw = text_sec.PointerToRawData
target_va_offset = 0x465170 - base  # Relative to image base
print(f"\nTarget: 0x465170")
print(f"  RVA (relative to base): 0x{target_va_offset:x}")
print(f"  VA offset within .text section: 0x{target_va_offset - text_va:x}")
print(f"  Raw file offset: 0x{text_raw + (target_va_offset - text_va):x}")

# Read actual raw data at that offset
raw_offset = text_raw + (target_va_offset - text_va)
with open("game_data/exe/golf.exe", "rb") as f:
    f.seek(raw_offset)
    data = f.read(64)
    print(f"\nRaw bytes at file offset 0x{raw_offset:x}:")
    for i in range(0, len(data), 16):
        hex_str = " ".join(f"{b:02x}" for b in data[i:i+16])
        ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in data[i:i+16])
        print(f"  {raw_offset+i:08x}: {hex_str:48s} {ascii_str}")

# Also check the first bytes of .text
print(f"\n=== First 64 bytes of .text ===")
f = open("game_data/exe/golf.exe", "rb")
f.seek(text_raw)
data = f.read(64)
for i in range(0, len(data), 16):
    hex_str = " ".join(f"{b:02x}" for b in data[i:i+16])
    ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in data[i:i+16])
    print(f"  {raw_offset+i:08x}: {hex_str:48s} {ascii_str}")
f.close()

# Check the section's raw data size vs virtual size
print(f"\n=== Section details ===")
text = pe.sections[0]
print(f".text VirtualSize:    0x{text.Misc_VirtualSize:x} ({text.Misc_VirtualSize} bytes)")
print(f".text SizeOfRawData:  0x{text.SizeOfRawData:x} ({text.SizeOfRawData} bytes)")
print(f"Difference (zero-fill): {text.Misc_VirtualSize - text.SizeOfRawData} bytes")

#!/usr/bin/env python3
"""Analyze golf.exe packer - try to find decryption key."""
import pefile
from collections import Counter

pe = pefile.PE("/home/roden/simgolf-re/data/exe/golf.exe")

text_sec = pe.sections[0]
packed = text_sec.get_data()

prologue = bytes([0x55, 0x8B, 0xEC])  # push ebp; mov ebp, esp

first = packed[:32]
print(f"Packed first 32 bytes: {' '.join(f'{b:02x}' for b in first)}")

# Try single-byte XOR
print("\n=== Single-byte XOR keys producing push ebp ===")
for key in range(256):
    decoded = bytes(b ^ key for b in packed[:16])
    if decoded[:3] == prologue:
        print(f"  XOR 0x{key:02x}: {decoded[:12].hex()}")

# Byte frequency
print(f"\n=== .text first 4K byte frequency ===")
freq = Counter(packed[:4096])
for byte, count in freq.most_common(15):
    print(f"  0x{byte:02x}: {count} ({count*100//4096}%)")

# Check entropy in chunks
import math
print(f"\n=== Entropy by 256-byte chunks ===")
for i in range(0, min(2048, len(packed)), 256):
    chunk = packed[i:i+256]
    freq = Counter(chunk)
    e = -sum((c/256) * math.log2(c/256) for c in freq.values())
    print(f"  [{i:4d}-{i+255:4d}]: entropy={e:.3f}")

# Search entire packed data for XOR keys derived from packer
print(f"\n=== Looking for XOR keys in stxt371 section ===")
stxt371 = pe.sections[5].get_data()
# Try each 4-byte sequence in stxt371 as XOR key against .text start
for off in range(0, min(len(stxt371), 4096), 4):
    if off + 4 > len(stxt371): break
    key = stxt371[off:off+4]
    decoded = bytes(packed[i] ^ key[i % 4] for i in range(16))
    if decoded[:3] == prologue:
        print(f"  KEY at stxt371+0x{off:x}: {key.hex()} -> {decoded[:16].hex()}")

# Check .rdata for potential key material
print(f"\n=== .rdata section analysis ===")
rdata = pe.sections[1].get_data()
print(f"  .rdata size: {len(rdata)} bytes, entropy: {Counter(rdata)}")

# Maybe the key is the section virtual address or size
print(f"\n=== Trying address-based keys ===")
for addr in [0x400000, 0x401000, 0x443056, 0x4A5F9F, 0x843056]:
    key = addr.to_bytes(4, 'little')
    decoded = bytes(packed[i] ^ key[i % 4] for i in range(16))
    if decoded[:3] == prologue:
        print(f"  KEY 0x{addr:08x}: {decoded[:16].hex()}")

#!/usr/bin/env python3
"""Find which functions reference key game strings"""
import re

with open('/home/roden/simgolf-re/raw_decomp/golf_unpacked_disasm.txt') as f:
    lines = f.readlines()

# Key strings and their addresses
key_strings = {
    '0x4c3f5c': 'Profit:',
    '0x4cfef0': 'Revenue',
    '0x4cfee0': 'Profit2',
    '0x4c3f38': 'Club:',
    '0x4c45ac': 'This hole has a',
    '0x4c45e7': 'hole,',
    '0x4c0ba4': 'This bench is so comfortable.',
    '0x4c09a0': 'Triple Bogey.',
    '0x4c09c8': 'Par.',
    '0x4c09d0': 'Birdie.',
    '0x4c09dc': 'Eagle.',
    '0x4c09b0': 'Double Bogey.',
    '0x4c09e4': 'Double Eagle.',
    '0x4c09f4': 'Triple Eagle.',
    '0x4bf840': 'tees',
    '0x4bf870': 'green',
    '0x4bf8a0': 'fairway',
    '0x4bf900': 'rough',
    '0x4bf990': 'sand trap',
    '0x4bfae0': 'pine tree',
    '0x4bfb70': 'water',
    '0x4bfc30': 'building',
    '0x4bf378': '1st Challenge hole',
    '0x4bf408': '1st Tournament',
    '0x4c1d00': 'Game Saved.',
    '0x4c30ac': 'top10.sve',
    '0x4c3128': 'Themes\\\\Championship\\\\',
    '0x4bfca9': "Ocean's Edge",
    '0x4bfdad': 'Jurassic Springs',
    '0x4bfe2f': 'Ace in the Hole',
    '0x4c0037': 'Windy Point',
    '0x4c013b': 'Christmas Pines',
    '0x4c03c5': 'Ocean Grove',
    '0x4c01bb': 'Classic Car',
    '0x4befc0': 'Summer',
    '0x4bf6bc': 'Park',
    '0x4bf6d8': 'Grand Slam Victory (Desert)',
    '0x4bf708': 'Grand Slam Victory (Tropical)',
    '0x4bf738': 'Grand Slam Victory (Links)',
    '0x4c47e8': 'Rainy',
    '0x4c4820': 'Sandler',
    '0x4c10d0': 'Valley',
    '0x4c10e0': 'Paradise',
    '0x4c11b8': 'Carmen',
}

print("=== STRING REFERENCES IN CODE ===")
for addr, label in sorted(key_strings.items()):
    found = False
    for i, line in enumerate(lines):
        if f'push     {addr}' in line or f'mov.*{addr}' in line:
            # Find the function containing this reference
            for j in range(i, max(0, i-300), -1):
                m = re.match(r'\s*0x([a-f0-9]+):\s+push\s+ebp', lines[j])
                if m and j+1 < len(lines) and 'mov      ebp, esp' in lines[j+1]:
                    func = f'0x{m.group(1):>8s}'
                    print(f'  {label:30s} → {func:15s} (line {i})')
                    found = True
                    break
            if not found:
                # Try __thiscall prologue
                for j in range(i, max(0, i-300), -1):
                    if 'push     ecx' in lines[j] and 'push     ebx' in lines[j+1] if j+1 < len(lines) else False:
                        m = re.match(r'\s*0x([a-f0-9]+):', lines[j])
                        if m:
                            func = f'0x{m.group(1):>8s}'
                            print(f'  {label:30s} → {func:15s} (line {i}) [thiscall]')
                            found = True
                            break
            if not found:
                print(f'  {label:30s} → ??? (line {i})')
            break

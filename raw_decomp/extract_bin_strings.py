#!/usr/bin/env python3
"""Extract readable strings directly from golf.exe binary"""
import string

with open('/home/roden/simgolf-re/game_data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

# Extract ASCII strings of length >= 6
min_len = 6
result = []
current = []
for byte in data:
    if 32 <= byte < 127:
        current.append(chr(byte))
    else:
        if len(current) >= min_len:
            s = ''.join(current)
            result.append(s)
        current = []

if len(current) >= min_len:
    s = ''.join(current)
    result.append(s)

# Print most interesting strings (ignore compiler/linker garbage)
print("=== INTERESTING STRINGS IN golf.exe ===")
keywords = ['golf', 'sim', 'course', 'hole', 'ball', 'club', 'player', 'swing', 'putt', 
            'terrain', 'green', 'fairway', 'sand', 'water', 'tree', 'bunker', 'par',
            'round', 'score', 'mulligan', 'tour', 'pro', 'amateur', 'crowd',
            'save', 'load', 'menu', 'option', 'click', 'select', 'pix', 'pcx',
            'texture', 'sprite', 'anim', 'sound', 'music', 'volum',
            'error', 'failed', 'cannot', 'file', 'data', 'init',
            'Firaxis', 'Maxis', 'SimGolf', 'Sid', 'Meier',
            'hole', 'tee', 'pin', 'flag',
            'climate', 'wind', 'season', 'day', 'night',
            'build', 'place', 'remove', 'paint', 'flat',
            'elevat', 'raise', 'lower', 'smooth',
            'money', 'cash', 'buget', 'price', 'cost',
            'happi', 'mood', 'satis', 'skill',
            'fade', 'dissolve', 'wipe', 'transit',
            'view', 'zoom', 'camera', 'angle',
            'scenar', 'campaign', 'tutorial',
            'option', 'setting', 'config',
            'gui', 'cursor', 'icon', 'butto',
            'font', 'arial', 'bitmap',
            'debug', 'tweak', 'cheat']

for s in result:
    lower = s.lower()
    for kw in keywords:
        if kw.lower() in lower:
            print(f"  {s!r}  (at offset {hex(data.find(s.encode()))})")
            break

# Also dump the .rdata and .data sections in text form
print("\n\n=== RANDOM STRING DUMP ===")
print("First 100 strings found:")
count = 0
for s in result:
    if count >= 100:
        break
    # Skip pure numeric/trash
    if any(c.isalpha() for c in s):
        print(f"  {s[:80]}...'  [{len(s)} chars]")
        count += 1

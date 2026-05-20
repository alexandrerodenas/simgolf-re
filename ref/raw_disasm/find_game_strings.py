#!/usr/bin/env python3
"""Extract ALL interesting strings from golf.exe"""
with open('/home/roden/simgolf-re/data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

min_len = 4
results = []
current = []
for byte in data:
    if 32 <= byte < 127:
        current.append(chr(byte))
    else:
        if len(current) >= min_len:
            s = ''.join(current)
            results.append((data.find(s.encode()), s))
        current = []

# Filter for game-relevant strings (skip compiler/linker noise)
skip_patterns = ['Runtime Error', 'abnormal program', 'floating point', 'not enough space',
                 'cannot', 'This program', '.rdata', '.text', '.data', '.rsrc', '.reloc',
                 'Bink', 'Terrain', 'KERNEL32', 'USER32', 'WINMM', 'BINKW32',
                 'GetLastError', 'SetLastError', 'HeapAlloc', 'VirtualAlloc',
                 'msvcrt', 'dll', '_except', '_Xcpt', 'string too long']

game_strings = []
for offset, s in results:
    lower = s.lower()
    if 'golf' in lower or 'sim' in lower or 'course' in lower:
        game_strings.append((offset, s))
        continue
    if any(c in lower for c in ['hole', 'ball', 'club', 'swing', 'putt', 'tee', 'pin',
                                  'green', 'fairway', 'sand', 'bunker', 'water', 'tree',
                                  'trap', 'hazard', 'rough', 'par', 'birdie', 'eagle',
                                  'bogey', 'stroke', 'score', 'round', 'tour']):
        game_strings.append((offset, s))
        continue
    if any(kw in lower for kw in ['menu', 'option', 'button', 'click', 'cursor', 'icon',
                                    'pix', 'pcx', 'texture', 'sprite', 'font', 'bitmap',
                                    'animat', 'sound', 'music', 'volum',
                                    'save', 'load', 'quit', 'exit', 'play', 'back',
                                    'build', 'place', 'remove', 'paint', 'landscape',
                                    'elevat', 'raise', 'lower', 'smooth', 'level',
                                    'money', 'cash', 'price', 'cost', 'budget',
                                    'happi', 'mood', 'satis', 'skill', 'fame',
                                    'view', 'zoom', 'camera', 'angle', 'rotate',
                                    'scenar', 'campaign', 'tutorial', 'challeng',
                                    'tournament', 'championship',
                                    'groundskeeper', 'pro shop', 'clubhouse',
                                    'member', 'guest', 'visitor',
                                    'day', 'week', 'month', 'year', 'season',
                                    'spring', 'summer', 'fall', 'winter',
                                    'beginner', 'amateur', 'profession', 'expert',
                                    'crowd', 'spectator', 'fans',
                                    'trophy', 'reward', 'award', 'unlock',
                                    'incom', 'revenue', 'profit', 'expense',
                                    'employee', 'staff', 'worker',
                                    'train', 'practice', 'lesson',
                                    'driving', 'range', 'flag', 'cup',
                                    'top', 'hundred', 'grand slam',
                                    'car', 'path', 'road', 'bridge',
                                    'lamp', 'bench', 'statue', 'fountain',
                                    'flower', 'shrub', 'bush', 'garden',
                                    'ocean', 'lake', 'pond', 'river',
                                    'mountain', 'hill', 'valley',
                                    'climate', 'wind', 'weather',
                                    'drought', 'rain', 'storm',
                                    'type', 'class', 'style',
                                    'north', 'south', 'east', 'west',
                                    'front', 'back', 'left', 'right',
                                    'accept', 'cancel', 'confirm', 'apply',
                                    'difficul', 'easy', 'medium', 'hard',
                                    'length', 'width', 'height', 'size',
                                    'new game', 'continue', 'resum',
                                    'hole info', 'course map', 'scorecard']):
        game_strings.append((offset, s))
        continue

# Sort by offset
game_strings.sort(key=lambda x: x[0])

print("=== GAME STRINGS FOUND ===")
for offset, s in game_strings:
    if len(s) > 0:
        # Hex dump the offset for referencing in disassembly
        print(f"  0x{offset + 0x400000:08x}: {s[:120]}")

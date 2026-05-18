#!/usr/bin/env python3
"""Extract economic/gameplay strings from golf.exe"""
with open('game_data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

keywords = [
    b'Profit', b'Revenue', b'Expense', b'Budget', b'Cash', b'Fee', 
    b'Par', b'Eagle', b'Birdie', b'Bogey', b'Stroke', b'Score',
    b'SGA', b'Rating', b'Length', b'Accuracy', b'Imagination',
    b'Recovery', b'Green', b'Fairway', b'Rough', b'Sand', b'Bunker',
    b'Tournament', b'Championship', b'Grand Slam',
    b'Groundskeeper', b'Ranger', b'Pro', b'Member',
    b'Scenario', b'Campaign', b'Tutorial',
    b'Course', b'Hole', b'Club', b'Golfer',
    b'Skill', b'Drive', b'Putt', b'Chip',
    b'Mood', b'Energy', b'Crowd', b'Prestige',
    b'Revenue', b'Total', b'Weekly',
]
seen = set()
for kw in keywords:
    pos = 0
    while True:
        pos = data.find(kw, pos)
        if pos < 0:
            break
        addr = 0x400000 + pos
        if addr not in seen:
            seen.add(addr)
            end = pos
            while end < len(data) and data[end] != 0:
                end += 1
            s = data[pos:end].decode('latin-1', errors='replace').strip()
            if len(s) > 3 and len(s) < 100:
                print(f'  0x{addr:08x} -> {s}')
        pos += 1

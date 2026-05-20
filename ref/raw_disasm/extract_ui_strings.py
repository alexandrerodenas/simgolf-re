#!/usr/bin/env python3
"""Extract all UI-related strings from SimGolf binary"""
import re

with open('/home/roden/simgolf-re/data/exe_unpacked/golf.exe', 'rb') as f:
    data = f.read()

# Extract all printable strings
min_len = 4
strings = []
current = []
for byte in data:
    if 32 <= byte < 127:
        current.append(chr(byte))
    else:
        if len(current) >= min_len:
            s = ''.join(current)
            strings.append(s)
        current = []

# Filter UI-related
ui_keywords = ['interface', 'panel', 'button', 'cursor', 'toolbar', 'icon', 'popup',
               'Title', 'World', 'Pair', 'InfoButtons', 'CGbuttons', 'PopUp',
               'AmenitiesPanel', 'ElevationPanel', 'EmployeePanel', 'BuildingPanel',
               'BaseTerrainPanel', 'AlphaButtons', 'infoscreens',
               'shortcuts', 'Top10', 'Trophies', 'Credits',
               'TerrainButtons', 'choose', 'DesertTerrain', 'holemark',
               'holeinfo', 'scorecard', 'HoleSTAT', 'course map',
               'loading', 'splash', 'logo', 'bink']

ui_strings = []
for s in strings:
    lower = s.lower()
    if any(kw in lower for kw in ui_keywords):
        if '\\' in s or '/' in s or s.endswith('.pcx') or s.endswith('.bmp'):
            ui_strings.append(s)
            continue
        # Also filter for game UI strings
        if any(kw in lower for kw in ['panel', 'button', 'cursor', 'toolbar', 'icon',
                                        'title', 'world', 'pair', 'popup', 'shortcut',
                                        'top10', 'trophy', 'credit', 'loading', 'splash',
                                        'holeinfo', 'scorecard', 'coursemap']):
            ui_strings.append(s)

# Deduplicate
ui_strings = sorted(set(ui_strings))

print(f"\n=== UI STRINGS ({len(ui_strings)}) ===\n")
for s in ui_strings:
    print(f"  {s}")

# Group by category
print(f"\n=== BY CATEGORY ===")

pcx_files = [s for s in ui_strings if s.lower().endswith('.pcx')]
print(f"\n--- PCX files ({len(pcx_files)}) ---")
for s in pcx_files:
    print(f"  {s}")

panels = [s for s in ui_strings if 'panel' in s.lower()]
print(f"\n--- Panels ({len(panels)}) ---")
for s in panels:
    print(f"  {s}")

buttons = [s for s in ui_strings if 'button' in s.lower() or 'Buttons' in s]
print(f"\n--- Buttons ({len(buttons)}) ---")
for s in buttons:
    print(f"  {s}")

info_screens = [s for s in ui_strings if 'infoscreen' in s.lower()]
print(f"\n--- Info screens ({len(info_screens)}) ---")
for s in info_screens:
    print(f"  {s}")

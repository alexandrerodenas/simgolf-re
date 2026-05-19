#!/usr/bin/env python3
"""Find economy-related strings in golf.exe unpacked binary."""
with open("game_data/exe_unpacked/golf.exe", "rb") as f:
    data = f.read()

# Known economy string addresses from game_systems mapping
# 0x4c3f5c = "Profit:"
# 0x4cfef0 = "Revenue"
# 0x4cff98 = "Greens Fees"
# 0x4d14bc = "Cash Reserve"

targets = {
    b"Profit": "Economy",
    b"Revenue": "Economy", 
    b"Greens Fee": "Economy",
    b"Cash Reserve": "Economy",
    b"Course Value": "Economy",
    b"Maintenance": "Economy",
    b"Cost": "Economy",
    b"Expense": "Economy",
    b"Skill Rating": "Scoring",
    b"Length skill": "Skills",
    b"Accuracy skill": "Skills",
    b"Imagination": "Skills",
}

for t, category in sorted(targets.items(), key=lambda x: -len(x[0])):
    idx = data.find(t)
    if idx >= 0:
        # The file offset equals RVA for standard PE sections in this exe
        addr = 0x00400000 + idx
        # Extract readable context
        start = idx
        end = min(len(data), idx + 64)
        raw = data[start:end]
        # Find null terminator
        null_pos = raw.find(b'\x00')
        if null_pos >= 0:
            raw = raw[:null_pos]
        s = raw.decode("ascii", errors="replace")
        print(f"  0x{addr:08x} [{category:10s}] \"{s}\"")
    else:
        print(f"  {t.decode():20s} NOT FOUND")

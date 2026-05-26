"""
Translation of FUN_004385D0 — Golfer Skill Display / Stats UI.

Original: ref/decompiled/ghidra/golf/FUN_004385d0.c (1999 lines)

Shows golfer portrait, skill ratings (Length Skill, Accuracy Skill,
Skill Rating), marital status, age category, golf skill levels,
and signature sayings. Handles UI interaction for customizing,
saving/loading characters, and upgrading golfer stats.

Key globals:
  DAT_004d6088  — Golfer stats struct (stride 0x8c per golfer)
  DAT_004d60a8  — Golfer flags/attributes (stride 0x230)
  DAT_005794d0  — Tile type / course flags array (stride 0x100)
  DAT_005795a8  — Golfer skill level array (stride per course)
  DAT_0051a068  — Global text buffer (string output area)
  DAT_00582e6e  — Current golfer index (short)
  DAT_00582dd1  — Toggle flags for skill checkboxes
  DAT_00582e70  — Golfer attribute flags (ushort)
  DAT_00582dd0  — Spacer/format char

Key strings:
  s_Length_Skill        = "Length Skill"
  s_Accuracy_Skill      = "Accuracy Skill"
  s_Fun_Rating          = "Fun Rating"
  s_SkillRating         = "Skill Rating"
  s_Imagination         = "Imagination"
  s_Golf_Skill_Levels   = "Golf Skill Levels"
  Golfer types: "Power Hitter", "Club Pro", "Hacker", "Duffer", etc.
"""

from __future__ import annotations

from typing import Dict, Final, List, Optional, Tuple

# ── Constants ──────────────────────────────────────────────────────────────────

GOLFER_STATS_STRIDE: Final[int] = 0x8c   # DAT_004d6088 stride
GOLFER_FLAGS_STRIDE: Final[int] = 0x230  # DAT_004d60a8 stride
TILE_STRIDE: Final[int] = 0x100          # DAT_005794d0 stride
SKILL_ARRAY_STRIDE: Final[int] = 0x80    # DAT_0057956e similarity

# ── Color constants (from FUN_00404B70 / FUN_00404BC0 usage) ──────────────────
COLOR_WHITE: Final[int] = 0x80000000
COLOR_YELLOW: Final[int] = 0x80007fff
COLOR_GOLD: Final[int] = 0x80007b20
COLOR_GREEN: Final[int] = 0x80004210
COLOR_CYAN: Final[int] = 0x80002108
COLOR_DARK: Final[int] = 0x80000848
COLOR_RED: Final[int] = 0x80006000
COLOR_GREY: Final[int] = 0x80006318
COLOR_WHITE_2: Final[int] = 0x80007d08
COLOR_GOLD_2: Final[int] = 0x80007ff0

# ── Button action IDs ─────────────────────────────────────────────────────────
BTN_NONE: Final[int] = -1
BTN_TOGGLE_LENGTH: Final[int] = 0
BTN_TOGGLE_ACCURACY: Final[int] = 1
BTN_TOGGLE_SHORTGAME: Final[int] = 2
BTN_TOGGLE_PUTTING: Final[int] = 3
BTN_TOGGLE_POWER: Final[int] = 4


# ── Marital status flag values (from DAT_00582e70 / _DAT_00582e70) ────────────
MARRIED_SINGLE: Final[int] = 0x08
MARRIED_MARRIED: Final[int] = 0x10
MARRIED_DIVORCED: Final[int] = 0x20
MARRIED_WIDOWED: Final[int] = 0x40

# ── Age category flag values ──────────────────────────────────────────────────
AGE_YOUNG: Final[int] = 0x01
AGE_MIDDLE: Final[int] = 0x02
AGE_MATURE: Final[int] = 0x04

# ── Skill bitmask values (DAT_00582dd1 usage) ─────────────────────────────────
SKILL_LENGTH: Final[int] = 1
SKILL_ACCURACY: Final[int] = 2
SKILL_SHORTGAME: Final[int] = 4

# ── Golfer type pointer array ─────────────────────────────────────────────────
# PTR_s_Power_Hitter_004c2c3c — array of golfer type string pointers
GOLFER_TYPE_NAMES: Final[List[str]] = [
    "Power Hitter",     # 0
    "Club Pro",         # 1
    "Hacker",           # 2
    "Duffer",           # 3
    "Steady",           # 4
    "Sand/Short Game Expert",  # 5
    "Putting Expert",   # 6
    "Iron Master",      # 7
    "Long Ball Hitter", # 8
    "Accuracy Expert",  # 9
    "Hot Head",         # 10
    "Cool Customer",    # 11
    "Never Say Die",    # 12
    "Road Warrior",     # 13
    "Slugger",          # 14
    "Magician",         # 15
    "Streaky",          # 16
    "Fairway Finder",   # 17
    "Scrambler",        # 18
    "Charger",          # 19
    "Mr. Consistency",  # 20
    "Professor",        # 21
    "Glory Hunter",     # 22
    "Tortoise",         # 23
    "Hare",             # 24
    "Grinder",          # 25
    "Natural",          # 26
    "Wily Veteran",     # 27
    "Free Swinger",     # 28
    "Grumpy",           # 29
    "Joker",            # 30
    "Gentleman",        # 31
    "Wild Thing",       # 32
    "Craftsman",        # 33
    "Dynamo",           # 34
    "Showman",          # 35
    "Head Case",        # 36
    "Smooth",           # 37
    "Choker",           # 38
    "Lucky",            # 39
    "Unlucky",          # 40
    "Fighter",          # 41
    "Quitter",          # 42
    "Closer",           # 43
    "Blowup",           # 44
    "Fast Starter",     # 45
    "Slow Starter",     # 46
    "Giant Killer",     # 47
    "Bellyacher",       # 48
    "Fan Favorite",     # 49
    "Anonymous",        # 50
    "Ironman",          # 51
    "Frail",            # 52
    "Mulligan Man",     # 53
    "Purist",           # 54
    "Renegade",         # 55
    "Maestro",          # 56
    "Pirate",           # 57
    "Bandit",           # 58
    "Sheriff",          # 59
    "Hero",             # 60
    "Goat",             # 61
]

# ── Marital status strings ────────────────────────────────────────────────────
MARITAL_STRINGS: Final[Dict[int, str]] = {
    MARRIED_SINGLE: "Single",
    MARRIED_MARRIED: "Married",
    MARRIED_DIVORCED: "Divorced",
    MARRIED_WIDOWED: "Widowed",
}

# ── Age category strings ──────────────────────────────────────────────────────
AGE_STRINGS: Final[Dict[int, str]] = {
    AGE_YOUNG: "Young",
    AGE_MIDDLE: "Middle Aged",
    AGE_MATURE: "Mature",
}

# ── Membership tier strings ───────────────────────────────────────────────────
MEMBERSHIP_TIERS: Final[Dict[int, str]] = {
    1: "Visitor",
    2: "Member",
    3: "Silver Member",
    4: "Gold Member",
    5: "Platinum Member",
    -1: "Resigned",
}

# ── UI layout coordinates ─────────────────────────────────────────────────────
GOLFER_NAME_X: Final[int] = 0x9a
GOLFER_NAME_Y: Final[int] = 0x18
GOLFER_SUBTYPE_X: Final[int] = 0x9a
GOLFER_SUBTYPE_Y: Final[int] = 0x30
GOLFER_MARITAL_X: Final[int] = 0x9a
GOLFER_MARITAL_Y: Final[int] = 0x45
GOLFER_AGE_X: Final[int] = 0x9a
GOLFER_AGE_Y: Final[int] = 0x5a

SKILL_CHECKBOX_X: Final[int] = 0x9a
SKILL_CHECKBOX_Y_BASE: Final[int] = 0x40
SKILL_CHECKBOX_SPACING: Final[int] = 0x14

SKILL_NAME_X: Final[int] = 0x5d
SKILL_VALUE_X: Final[int] = 0x1f5
SKILL_LABEL_X: Final[int] = 0x222

TYPE_LIST_X: Final[int] = 0x1f2
TYPE_LIST_Y_BASE: Final[int] = 0x3d
TYPE_LIST_SPACING: Final[int] = 0x10
TYPE_NAME_X: Final[int] = 0x222
TYPE_VALUE_X: Final[int] = 0x1f5

SIG_SAYING_X: Final[int] = 0x34
SIG_SAYING_Y_BASE: Final[int] = 0x10f
SIG_SAYING_SPACING: Final[int] = 0x10
SIG_CATEGORY_X: Final[int] = 0x19c

STATS_TITLE_X: Final[int] = 0x249
STATS_TITLE_Y: Final[int] = 0x1e

LOW_ROUND_LABEL_X: Final[int] = 0x244
LOW_ROUND_LABEL_Y: Final[int] = 0x1e
LOW_ROUND_VAL_X: Final[int] = 0x244
LOW_ROUND_VAL_Y: Final[int] = 0x32
HANDICAP_LABEL_X: Final[int] = 0x244
HANDICAP_LABEL_Y: Final[int] = 0x40
ROUNDS_LABEL_X: Final[int] = 0x244
ROUNDS_LABEL_Y: Final[int] = 0x4e
ABOUT_TEXT_X: Final[int] = 0x244
ABOUT_TEXT_Y: Final[int] = 0x62
NAME_TEXT_X: Final[int] = 0x244
NAME_TEXT_Y: Final[int] = 0x72

BUTTON_THEMES_X: Final[int] = 0x34
BUTTON_THEMES_Y: Final[int] = 0x10f
BUTTON_SAVE_X: Final[int] = 0x9a
BUTTON_SAVE_Y_BASE: Final[int] = 0x40
BUTTON_SAVE_SPACING: Final[int] = 0x14

UPDATE_BIO_X: Final[int] = 0x9a
UPDATE_BIO_Y: Final[int] = 0x45

PORTRAIT_X: Final[int] = 0x163
PORTRAIT_Y: Final[int] = 0x74

# ═══════════════════════════════════════════════════════════════════════════════
#  Global state proxy (mimics the DAT_* globals of the original)
# ═══════════════════════════════════════════════════════════════════════════════

# Shared state — modules that import this can access a common instance
_GOB: dict = {}  # golfer globals dictionary


def _get_gob() -> dict:
    """Get (or create) the global object dictionary."""
    global _GOB
    if not _GOB:
        _GOB = {
            # Text buffer (DAT_0051a068 conceptually)
            "text_buf": "",

            # Current golfer index (short)
            "cur_golfer": 0,          # DAT_00582e6e

            # Golfer attribute flags (ushort from byte at DAT_004d60a9)
            "golfer_attr_flags": 0,   # _DAT_00582e70

            # Toggle flags for skill checkboxes
            "skill_toggle": 0,        # DAT_00582dd1

            # Spacer char
            "spacer": ' ',            # DAT_00582dd0

            # Text color code
            "text_color": 0,          # DAT_0058b198

            # UI state flags
            "ui_done": 0,             # DAT_00822d68

            # Golfer skill levels array
            # DAT_005795a8 — per-golfer, per-course skill points
            "skill_levels": [0] * 200,

            # Golfer stats (DAT_004d6088, stride 0x8c)
            "golfer_stats": [bytearray(0x8c) for _ in range(100)],

            # Golfer flags (DAT_004d60a8, stride 0x230)
            "golfer_flags": [bytearray(0x230) for _ in range(100)],

            # Golfer names (DAT_004d60b8, stride 0x8c — null-terminated)
            "golfer_names": [""] * 100,

            # Golfer data text (DAT_00543d10, stride 0x4e2)
            "golfer_data_text": [""] * 100,

            # Building data (DAT_005849e0, stride 0x2c)
            "building_data": [bytearray(0x2c) for _ in range(100)],

            # Signature sayings (DAT_00543d10 + idx * 0x4e2)
            "signature_sayings": [""] * 100,

            # Course tile type flags (DAT_005794d0)
            "tile_type_flags": [0] * 0x10000,

            # DAT_005a9f54 / DAT_005aa554 — click tracking
            "last_click_action": 0,
            "click_repeat_count": 0,

            # DAT_0051a068 — secondary text buffer sections
            "text_buf2": "",
        }
    return _GOB


def reset_state() -> None:
    """Reset the global state (for testing / new game)."""
    global _GOB
    _GOB = {}


# ═══════════════════════════════════════════════════════════════════════════════
#  Engine call stubs (delegated to real engine or no-op placeholders)
# ═══════════════════════════════════════════════════════════════════════════════


def FUN_00448200(sound_id: int) -> None:
    """Play a sound effect."""
    pass


def FUN_004481b0(sound_id: int, volume: int, pan: int, loop: int, prio: int) -> None:
    """Play a sound effect with parameters."""
    pass


def FUN_0045c1e0(mode: int) -> int:
    """Get random / game-state value."""
    return 0


def FUN_00474ae0() -> None:
    """Clear screen / reset render state."""
    pass


def FUN_00475840(path: str, dest_buf: int, unk2: int, palette_size: int, mode: int) -> int:
    """Load a palette/graphic file."""
    print(f"  [GFX] {path}")
    return 1


def FUN_00475c60(surface: int, x: int, y: int, w: int, h: int, max_w: int, max_h: int) -> None:
    """Set up a rendering surface/clipping region."""
    pass


def FUN_0047ab50(out_x: list, out_y: list) -> None:
    """Get mouse cursor position."""
    out_x[0] = 0
    out_y[0] = 0


def FUN_00438260(mouse_x: int, mouse_y: int) -> int:
    """Hit-test UI widgets — returns action ID or -1."""
    return -1


def FUN_00473cb0(surface: int, x: int, y: int, w: int, h: int, unk: int, flip: int) -> None:
    """Draw a box/rectangle on screen."""
    pass


def FUN_00473e60(surface: int, x: int, y: int, color: int) -> None:
    """Draw a filled rectangle area."""
    pass


def FUN_00462020(golfer_id: int) -> None:
    """Get golfer portrait information."""
    pass


def FUN_0046c940(golfer_id: int) -> int:
    """Get/check partner status for a golfer."""
    return 0


def FUN_004675d0(golfer_id: int) -> None:
    """Get golfer mood/expression for portrait."""
    pass


def FUN_004628d0(x: int, y: int, w: int, h: int, src_x: int, src_y: int, src_w: int, src_h: int) -> None:
    """Draw a portrait sprite."""
    pass


def FUN_004762d0(surface: int, x: int, y: int, flags: int) -> None:
    """Push drawing surface."""
    pass


def FUN_004676e0(golfer_id: int, param_2: int) -> None:
    """Update golfer mood/satisfaction."""
    pass


def FUN_00404bc0(text: str, x: int, y: int, color: int) -> None:
    """Draw text (bright/highlight variant)."""
    print(f"  [TEXT+] {text!r} @ ({x}, {y}) color=0x{color:08x}")


def FUN_00404b70(text: str, x: int, y: int, color: int) -> None:
    """Draw text (large title variant)."""
    print(f"  [TEXT]  {text!r} @ ({x}, {y}) color=0x{color:08x}")


def FUN_004049d0(text: str, x: int, y: int, color: int) -> None:
    """Draw standard UI text."""
    print(f"  [UI]    {text!r} @ ({x}, {y}) color=0x{color:08x}")


def FUN_00480b00(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a colored rectangle/bar."""
    pass


def FUN_0045b0d0(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a UI element/bar."""
    pass


def FUN_0045b2c0(prompt: str, max_len: int, x: int, y: int) -> int:
    """Show text input dialog. Returns non-zero if user entered text."""
    return 0


def FUN_004ad425(value: int, buf: int, base: int) -> str:
    """Integer-to-string conversion (like itoa)."""
    return str(value)


def FUN_00469b00(event_type: int, param_2: int, param_3: int, golfer_id: int) -> None:
    """Event/dialog reaction handler."""
    pass


def FUN_0043d6f0(skill_idx: int, max_skill: int, variant: int) -> int:
    """Get skill level string/color."""
    return 0


def FUN_0045bf80(duration: int, mode: int) -> None:
    """Wait / delay function."""
    pass


def FUN_0045c030() -> None:
    """Frame present / buffer flip."""
    pass


def FUN_00480c80(unk: int) -> None:
    """Process input events."""
    pass


def FUN_0040cc00(x: int, y: int, w: int, h: int, flags: int) -> None:
    """Draw a framed box."""
    pass


def FUN_00479830(x: int, y: int, flags: int) -> None:
    """UI drawing primitive."""
    pass


def FUN_004798c0(x: int, y: int, flags: int) -> None:
    """UI drawing primitive."""
    pass


def FUN_00479950(x: int, y: int, flags: int) -> None:
    """UI drawing primitive."""
    pass


def FUN_00483420(r: int, g: int, b: int, a: int) -> int:
    """Create an ARGB color."""
    return 0


def FUN_00486110(x: int, y: int, w: int, h: int, buf: int, flags: int) -> None:
    """Draw a text input area."""
    pass


def FUN_00486b30(flags: int) -> None:
    """Set text input mode."""
    pass


def FUN_00486250(max_len: int) -> None:
    """Set text input max length."""
    pass


def FUN_00486200(buf: str) -> None:
    """Pre-fill text input buffer."""
    pass


def FUN_0047b670(mode: int) -> None:
    """Show keyboard / input handler."""
    pass


def FUN_00483bb0() -> None:
    """Render frame."""
    pass


def FUN_00483c70() -> None:
    """Render UI layer."""
    pass


def FUN_00483d80() -> None:
    """Render cursor."""
    pass


def FUN_004860d0() -> None:
    """Close text input."""
    pass


def FUN_00483d30() -> None:
    """Set cursor / UI to default state."""
    pass


def FUN_00474c40() -> None:
    """Pop rendering surface restore."""
    pass


def FUN_00432620(mouse_x: int, mouse_y: int) -> None:
    """Handle tooltip display."""
    pass


def FUN_00437fa0(name_buf: str, golfer_idx: int, param_3: int) -> None:
    """Load golfer character from theme/saved data."""
    pass


def FUN_00437910(golfer_idx: int, param_2: int, param_3: int) -> int:
    """Save golfer character. Returns non-zero on success."""
    return 0


def FUN_00438390(golfer_id: int) -> int:
    """Get golfer face index."""
    return 0


def FUN_0043d2a0(text_buf: str, data_a: int, data_b: int) -> int:
    """Show theme selector list. Returns count of items or -1."""
    return -1


def FUN_0046de70(text_buf: str, item_count: int, item_height: int) -> int:
    """Show a scrollable selection list. Returns selected index or -1."""
    return -1


def FUN_0046d6e0(x: int, y: int, w: int, h: int, flags: int) -> None:
    """Draw a message box / notification."""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Internal helper — string copy (replaces the C do-while strlen+strcpy pattern)
# ═══════════════════════════════════════════════════════════════════════════════


def _set_text_buf(s: str) -> None:
    """Set the global text buffer (DAT_0051a068)."""
    gob = _get_gob()
    gob["text_buf"] = s


def _append_text_buf(s: str) -> None:
    """Append to the global text buffer."""
    gob = _get_gob()
    gob["text_buf"] += s


def _clear_text_buf() -> None:
    """Clear the global text buffer (DAT_0051a068._0_1_ = 0)."""
    _set_text_buf("")


def _itoa(value: int) -> str:
    """Convert an integer to a string (wraps FUN_004ad425)."""
    return FUN_004ad425(value, 0, 10)


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_004385D0 — Golfer Skill Display / Stats UI
# ═══════════════════════════════════════════════════════════════════════════════

def golfer_stats_screen(golfer_idx: int, param_2: int) -> None:
    """FUN_004385D0 — Display golfer skill stats and handle interactions.

    Args:
        golfer_idx: Index of the golfer whose stats to display.
        param_2: Context/screen parameter (theme select or stats review).
    """
    gob = _get_gob()

    # ── Initialization ───────────────────────────────────────────────────
    iVar10 = param_2 * TILE_STRIDE
    # Check if this is a stats review screen (bit 5 of tile type flags)
    is_stats_review = bool(
        (gob["tile_type_flags"][iVar10] & 0xe0) == 0x20
    )
    local_2cc = 0  # changed flag

    gob["skill_toggle"] = 0
    iVar9 = golfer_idx * GOLFER_FLAGS_STRIDE

    # Back up golfer stats (DAT_004d6088 -> DAT_004e1618, stride 0x8c)
    # In the original: memcpy(&DAT_004e1618, &DAT_004d6088 + param_1*0x8c, 0x8c)
    _backup_golfer_stats(golfer_idx)

    # ── Draw background ──────────────────────────────────────────────────
    FUN_00448200(0x2d)  # sound
    FUN_004481b0(
        (-1 if ((gob["golfer_flags"][iVar9][0] & 0x80) != 0) else 0) & 0xfffffffd + 0x80,
        100, 0, 0, 0
    )

    gob["cur_golfer"] = golfer_idx
    gob["text_color"] = FUN_0045c1e0(3)
    gob["golfer_attr_flags"] = gob["golfer_flags"][iVar9][0]  # byte from DAT_004d60a9
    gob["spacer"] = '\0'
    gob["skill_toggle"] = gob["tile_type_flags"][iVar10 + 1]  # DAT_005794d1

    FUN_00474ae0()

    # Choose background based on gender (bit 7 of flags)
    if (gob["golfer_flags"][iVar9][0] & 0x80) == 0:
        bg_path = "interface/CustGlfBckMale"
    else:
        bg_path = "interface/CustGolfBckgrnd"
    FUN_00475840(bg_path, 0, 0, 0x100, 2)

    # ── Main UI loop ─────────────────────────────────────────────────────
    gob["ui_done"] = 0
    while True:
        FUN_00475c60(0, 0, 0, 0, 0, 800, 600)

        # Get mouse position
        mouse_x = [0]
        mouse_y = [0]
        FUN_0047ab50(mouse_x, mouse_y)
        px = mouse_x[0]
        py = mouse_y[0]

        # Hit-test UI widgets
        action_id = FUN_00438260(px, py)

        # Map action 0xf (gender toggle) to -1 if male background
        if action_id == 0xf and (gob["golfer_flags"][iVar9][0] & 0x80) == 0:
            action_id = -1

        # ── Check skill checkbox hit-testing ─────────────────────────────
        skill_sel = -1
        if action_id in (-1, 0x14):
            # Check if mouse is in the skill checkbox region
            rel_x = px - 0x9a
            rel_y = py - 0x40
            if 0 <= rel_x < 0x50 and 0 <= rel_y < 0x28:
                slot = (py - 0x18) // 0x14
                if slot == 0:
                    skill_sel = 0
                elif slot == 1:
                    skill_sel = 1
                elif slot == 2:
                    skill_sel = 2
                elif slot == 3:
                    skill_sel = 3
                elif slot == 4:
                    skill_sel = 4
        else:
            # Play sound for non-skill button click
            _play_click_sound(action_id)

        # ── Draw golfer portrait ─────────────────────────────────────────
        cVar7 = gob["golfer_flags"][gob["cur_golfer"] * GOLFER_FLAGS_STRIDE][1]  # DAT_004d60aa

        # Check if portrait needs expression update
        if _get_golfer_stat(gob["cur_golfer"], 0x14) & 8:  # from DAT_004d60b4
            FUN_00473e60(0, 0x160, 0x74, 0)  # clear portrait area

        FUN_00462020(0x99)  # load portrait

        if cVar7 < 0x14:
            FUN_0046c940(0x99)
            FUN_004675d0(0x99)
            portrait_x = 0x150
        else:
            FUN_0046c940(0x99)
            FUN_004675d0(0x99)
            portrait_x = 0x13c

        FUN_00473cb0(0, PORTRAIT_X, PORTRAIT_Y, 1, 1, 1, 0)

        # ── Draw portrait sprite ─────────────────────────────────────────
        if _get_gob_pointer("DAT_0083ad50") is not None:
            # Call render method
            pass

        FUN_00473e60(0, 299, 0xdc, 0)

        # ── Determine golfer mood / skill level ──────────────────────────
        partner_status = FUN_0046c940(0x99)
        if partner_status == 0:
            mood = 7
            idx = gob["cur_golfer"] * GOLFER_FLAGS_STRIDE
            flags_byte = gob["golfer_flags"][idx][0]  # DAT_004d60a9
            if flags_byte & 1:
                mood = 6
            if gob["golfer_flags"][idx][0] & 8:  # DAT_004d60a8 low bit
                mood = 8
            if flags_byte & 4:
                mood = 5
            if _get_golfer_stat(gob["cur_golfer"], 0x14) != 0:  # DAT_004d60b4 != 0
                mood = (gob["golfer_flags"][idx][2] >> 4 & 3) + 5  # DAT_004d60ab
        else:
            if (gob["skill_toggle"] & 4) == 0:
                mood = 1
            else:
                mood = ((~gob["skill_toggle"] & 2) | 4) >> 1
            idx = gob["cur_golfer"] * GOLFER_FLAGS_STRIDE
            if _get_golfer_stat(gob["cur_golfer"], 0x14) != 0:
                mood = gob["golfer_flags"][idx][2] >> 4 & 3  # DAT_004d60ab
            if gob["spacer"] == ' ':
                mood = _get_golfer_type_for_mood(gob["cur_golfer"])

        # Draw skill level bars
        skill_color_a = FUN_0043d6f0(mood, 5, 0)
        FUN_004628d0(0x13b, 0xef, 0xef, 0x1e, 0x28, skill_color_a, 4, 0x199)
        skill_color_b = FUN_0043d6f0(mood, 5, 4)
        FUN_004628d0(0x14f, 0xef, 0xef, 0x1e, 0x28, skill_color_b, 4, 0x199)

        # ── Render golfer name ───────────────────────────────────────────
        FUN_004762d0(0, 0, 0, 0)
        _clear_text_buf()

        FUN_004676e0(0x99, 0)

        # Copy name into text buffer if partner
        if _get_golfer_stat(gob["cur_golfer"], 0x14) & 8:
            _set_text_buf("Partner")  # from &DAT_004c86dc

        FUN_00404bc0(
            gob["text_buf"],
            GOLFER_NAME_X, GOLFER_NAME_Y,
            COLOR_GOLD_2 if skill_sel != 0 else COLOR_YELLOW
        )

        # ── Render golfer subtype/class ──────────────────────────────────
        _clear_text_buf()
        _set_text_buf("")  # from &DAT_004c59e4, seems empty in some modes
        FUN_00404bc0(
            gob["text_buf"],
            GOLFER_SUBTYPE_X, GOLFER_SUBTYPE_Y,
            COLOR_GOLD if skill_sel != 1 else COLOR_YELLOW
        )

        # Copy golfer stats name (profession) into buffer
        _clear_text_buf()
        _copy_golfer_stats_name(gob, golfer_idx)  # from DAT_004d6088 + idx*0x8c

        # Draw separator line
        _clear_text_buf()
        _set_text_buf("")  # from &DAT_004c59e0
        FUN_00404bc0(
            gob["text_buf"],
            GOLFER_NAME_X, GOLFER_MARITAL_Y,
            COLOR_GOLD_2 if skill_sel != 2 else COLOR_YELLOW
        )

        # ── Render marital status ────────────────────────────────────────
        FUN_004762d0(0, 0, 0, 0)
        attr_flags = gob["golfer_attr_flags"]
        _clear_text_buf()

        if attr_flags & MARRIED_SINGLE:
            _set_text_buf("Single")  # from s_Single_004c86d4
        if attr_flags & MARRIED_MARRIED:
            _append_text_buf(" Married")  # from s_Married_004c86cc
        if attr_flags & MARRIED_DIVORCED:
            _append_text_buf(" Divorced")  # from s_Divorced_004c86c0
        if attr_flags & MARRIED_WIDOWED:
            _append_text_buf(" Widowed")  # from s_Widowed_004c86b8

        if skill_sel == 2:
            FUN_00404bc0(gob["text_buf"], GOLFER_MARITAL_X, GOLFER_MARITAL_Y, COLOR_YELLOW)
        else:
            FUN_00404b70(gob["text_buf"], GOLFER_MARITAL_X, GOLFER_MARITAL_Y, COLOR_DARK)

        # ── Render age category ──────────────────────────────────────────
        attr_flags = gob["golfer_attr_flags"]
        _clear_text_buf()

        if attr_flags & AGE_YOUNG:
            _set_text_buf("Young")
        if attr_flags & AGE_MIDDLE:
            _append_text_buf(" Middle Aged")
        if attr_flags & AGE_MATURE:
            _append_text_buf(" Mature")

        if skill_sel == 3:
            FUN_00404bc0(gob["text_buf"], GOLFER_AGE_X, GOLFER_AGE_Y, COLOR_YELLOW)
        else:
            FUN_00404b70(gob["text_buf"], GOLFER_AGE_X, GOLFER_AGE_Y, COLOR_DARK)

        # ── Render skill checkboxes ──────────────────────────────────────
        FUN_004762d0(0, 0, 0, 0)
        skill_check_flags = gob["golfer_flags"][gob["cur_golfer"] * GOLFER_FLAGS_STRIDE][0]  # DAT_004d60a8 byte
        check_y = 0x7a
        _skill_names_ptr = _get_skill_names_ptr()

        for i in range(4):
            bit_val = 1 << i
            has_skill = bool(skill_check_flags & bit_val)

            # Draw checkbox box
            x_pos = _get_skill_checkbox_x(i)
            y_pos = _get_skill_checkbox_y(i)
            FUN_00473cb0(0, x_pos, y_pos, 1, 1, 1, 0)

            # Draw skill name
            _clear_text_buf()
            name_ptr = _skill_names_ptr[i] if i < len(_skill_names_ptr) else ""
            _set_text_buf(name_ptr)

            # Color: highlighted if skill is active
            text_color = COLOR_GREEN if has_skill else COLOR_DARK
            FUN_00404b70(gob["text_buf"], SKILL_NAME_X + i * 0x1c, check_y, text_color)

            check_y += 0x1c

        # ── Render skill toggle checkboxes ───────────────────────────────
        FUN_004762d0(0, 0, 0, 0)
        i = 0
        toggle_y = 0x8e
        toggle_names_ptr = _get_toggle_names_ptr()

        while True:
            bit_mask = 1 << i
            is_active = bool(gob["skill_toggle"] & bit_mask)

            # Draw checkbox box
            x_pos = _get_toggle_checkbox_x(i)
            y_pos = _get_toggle_checkbox_y(i)
            FUN_00473cb0(0, x_pos, y_pos, 1, 1, 1, 0)

            # Draw toggle name
            _clear_text_buf()
            name_ptr = toggle_names_ptr[i]
            _set_text_buf(name_ptr)

            text_color = COLOR_GREEN if is_active else COLOR_DARK
            FUN_00404b70(gob["text_buf"], 0xd4, toggle_y, text_color)

            i += 1
            toggle_y += 0x23
            if i >= 4:
                break

        # ── STATS REVIEW MODE (is_stats_review == 0) ─────────────────────
        if not is_stats_review:
            _render_stats_review(gob, golfer_idx, iVar9, action_id, skill_sel)
        else:
            # ── SKILL LEVELS MODE ────────────────────────────────────────
            _render_skill_levels(gob, golfer_idx, iVar10, action_id, skill_sel)

        # ── Render signature sayings ─────────────────────────────────────
        _render_signature_sayings(gob, golfer_idx, action_id)

        # ── End-of-frame processing ──────────────────────────────────────
        FUN_00480c80(0)
        FUN_0045bf80(5, 0)
        FUN_0045c030()
        FUN_0045bf80(5, 0)

        if gob["ui_done"] != 0:
            break

    # ── Handle button actions ─────────────────────────────────────────────
    _handle_button_actions(gob, action_id, golfer_idx, iVar9, iVar10, param_2, is_stats_review)

    # ── Finalization ──────────────────────────────────────────────────────
    # Wait for UI to settle
    while True:
        FUN_0045c030()
        if gob["ui_done"] != 0:
            break

    FUN_0045bf80(5, 0)
    while True:
        FUN_0045c030()
        if gob["ui_done"] != 0:
            break

    if local_2cc != 0:
        # Save skill level updates back to course data
        if (gob["tile_type_flags"][iVar10] & 0xe0) == 0x20:
            # Save skill levels to the course golfer data
            _save_skill_levels(gob, golfer_idx, iVar9, iVar10)

        FUN_00448200(
            (-1 if ((gob["golfer_flags"][iVar9][0] & 0x80) != 0) else 0) & 0xfffffffd + 0x80
        )
        FUN_004481b0(0x2d, 100, 0, 0, 0)
        FUN_00483d30()

    # ── Cleanup ───────────────────────────────────────────────────────────
    FUN_00474c40()


# ═══════════════════════════════════════════════════════════════════════════════
#  Assistant functions
# ═══════════════════════════════════════════════════════════════════════════════


def _backup_golfer_stats(golfer_idx: int) -> None:
    """Backup golfer stats DAT_004d6088 -> DAT_004e1618 (0x8c bytes)."""
    gob = _get_gob()
    # In the original this is a memcpy. Store the backup in a shadow array.
    if "stats_backup" not in gob:
        gob["stats_backup"] = {}
    gob["stats_backup"]["backup"] = bytearray(gob["golfer_stats"][golfer_idx])


def _restore_golfer_stats(golfer_idx: int) -> None:
    """Restore golfer stats from backup (DAT_004e1618 -> DAT_004d6088)."""
    gob = _get_gob()
    backup = gob.get("stats_backup", {}).get("backup")
    if backup is not None:
        gob["golfer_stats"][golfer_idx] = bytearray(backup)


def _get_golfer_stat(golfer_idx: int, offset: int) -> int:
    """Read a byte from golfer stats array (DAT_004d6088 + idx*0x8c + offset)."""
    gob = _get_gob()
    return gob["golfer_stats"][golfer_idx][offset]


def _set_golfer_stat(golfer_idx: int, offset: int, val: int) -> None:
    """Write a byte to golfer stats array."""
    gob = _get_gob()
    gob["golfer_stats"][golfer_idx][offset] = val & 0xff


def _get_gob_pointer(key: str):
    """Simulate a pointer dereference from gob dict."""
    gob = _get_gob()
    return gob.get(key)


def _play_click_sound(action_id: int) -> None:
    """Play UI click sound for a button."""
    # PTR_DAT_004c1570 is a sound/click buffer
    # FUN_00473cb0(PTR_DAT_004c1570, x, y, 1, 1, 1, 0)
    pass


def _copy_golfer_stats_name(gob: dict, golfer_idx: int) -> None:
    """Copy the golfer's profession/name from stats array into text buffer."""
    # DAT_004d6088 + golfer_idx * 0x8c is the start of the golfer name
    name_bytes = gob["golfer_stats"][golfer_idx]
    # Read null-terminated string from stats buffer
    name = name_bytes.split(b'\x00')[0].decode('latin-1', errors='replace')
    _set_text_buf(name)


def _get_skill_checkbox_x(i: int) -> int:
    """Get X coordinate for skill checkbox i."""
    # &DAT_004c7b9c[i*2]
    checkboxes_x = [0x5d, 0x79, 0x95, 0xb1]
    return checkboxes_x[i] if i < len(checkboxes_x) else 0x5d


def _get_skill_checkbox_y(i: int) -> int:
    """Get Y coordinate for skill checkbox i."""
    # &DAT_004c7b9e[i*2]
    checkboxes_y = [0x7a, 0x96, 0xb2, 0xce]
    return checkboxes_y[i] if i < len(checkboxes_y) else 0x7a


def _get_toggle_checkbox_x(i: int) -> int:
    """Get X coordinate for toggle checkbox i."""
    checkboxes_x = [0x8e, 0xb1, 0xd4, 0xf7]
    return checkboxes_x[i] if i < len(checkboxes_x) else 0x8e


def _get_toggle_checkbox_y(i: int) -> int:
    """Get Y coordinate for toggle checkbox i."""
    checkboxes_y = [0x8e, 0xb1, 0xd4, 0xf7]
    return checkboxes_y[i] if i < len(checkboxes_y) else 0x8e


def _get_skill_names_ptr() -> List[str]:
    """Get skill name pointer array (PTR_s_length_004c2858 variant)."""
    return [
        "Length",      # s_length at 004c2858
        "Accuracy",    # s_accuracy
        "Short Game",  # s_short_game
        "Putting",     # s_putting
    ]


def _get_toggle_names_ptr() -> List[str]:
    """Get toggle skill name pointer array."""
    return [
        "Length Skill",
        "Accuracy Skill",
        "Short Game Skill",
        "Putting Skill",
    ]


def _get_golfer_type_for_mood(golfer_idx: int) -> int:
    """Get the golfer type index for mood determination."""
    # (byte)(&DAT_0058dd70)[(uint)DAT_00582e73 * 0x38]
    gob = _get_gob()
    return 0


def _render_stats_review(gob: dict, golfer_idx: int, iVar9: int,
                         action_id: int, skill_sel: int) -> None:
    """Render the stats review panel (non-skill-levels mode)."""
    # ── Golfer membership tier ───────────────────────────────────────────
    if is_golfer_member(golfer_idx):
        _render_membership(gob, golfer_idx)

    # ── Low round, handicap, rounds played ───────────────────────────────
    _render_low_round(gob, golfer_idx)
    _render_handicap(gob, golfer_idx)
    _render_rounds_played(gob, golfer_idx)

    # ── About / bio text ─────────────────────────────────────────────────
    _clear_text_buf()
    _copy_golfer_bio(gob, golfer_idx)  # from DAT_004d60b8 + param_1 * 0x8c
    FUN_0045b0d0(0x1e, ABOUT_TEXT_X, ABOUT_TEXT_Y, 0x80000018)

    # ── Name input field ─────────────────────────────────────────────────
    if action_id == 0x14:
        _handle_name_input(gob, golfer_idx, iVar9)


def _render_skill_levels(gob: dict, golfer_idx: int, iVar10: int,
                          action_id: int, skill_sel: int) -> None:
    """Render the gold skill levels panel."""
    # Draw title
    FUN_00404b70("Golf Skill Levels", STATS_TITLE_X, STATS_TITLE_Y, COLOR_WHITE)
    FUN_004762d0(0, 0, 0, 0)

    # Iterate over golfer types
    skill_offset = 0
    y_pos = 0x3d
    for type_idx in range(len(GOLFER_TYPE_NAMES)):
        if golfer_idx == 0:
            level = _get_skill_level_course0(gob, skill_offset)
        else:
            level = _get_skill_level_courseN(gob, skill_offset, iVar10)
        level = level & 0xff

        FUN_00480b00(TYPE_LIST_X, y_pos - 3, 0x2a, 0xe, COLOR_WHITE)
        bar_color = COLOR_GOLD_2 if level != 0 else COLOR_DARK
        FUN_00480b00(499, y_pos - 2, 0x28, 0xc, bar_color)

        if level != 0:
            _clear_text_buf()
            _set_text_buf(":")  # separator
            # Append level value * 10
            _append_text_buf(_itoa(level * 10))
            _append_text_buf("%")
            FUN_004049d0(gob["text_buf"], TYPE_VALUE_X, y_pos, COLOR_WHITE)

        # Draw type name
        name_color = COLOR_GREEN if level != 0 else COLOR_DARK
        FUN_004049d0(GOLFER_TYPE_NAMES[type_idx], TYPE_NAME_X, y_pos, name_color)

        y_pos += TYPE_LIST_SPACING
        skill_offset += 1


def _get_skill_level_course0(gob: dict, offset: int) -> int:
    """Get skill level from course0 array (DAT_005a5a04)."""
    return gob["skill_levels"][offset]


def _get_skill_level_courseN(gob: dict, offset: int, course_offset: int) -> int:
    """Get skill level from course-specific array (DAT_005795a8)."""
    return gob["skill_levels"][course_offset + offset]


def _render_signature_sayings(gob: dict, golfer_idx: int, action_id: int) -> None:
    """Render list of signature sayings for this golfer."""
    FUN_004762d0(0, 0, 0, 0)

    y_pos = 0x10f
    saying_ptr = _get_saying_data_ptr()
    category_ptr = _get_category_ptr(golfer_idx)  # DAT_00543d10 + idx * 0x4e2

    while True:
        gob["text_color"] = 0
        _clear_text_buf()

        # Get category name and render
        cat_idx = _get_category_index(category_ptr)
        FUN_00469b00(cat_idx, cat_idx & 0x3fff, 0, 0x99)

        if gob.get("text_color2") == -0x7fff9ce8:
            pass  # fixed color no-op

        # Copy category pointer string to text buf
        _set_text_buf(category_ptr)

        # Append separator
        _append_text_buf(":")
        # Recalculate length and copy
        _set_text_buf(gob["text_buf"] + ": ")

        color = COLOR_DARK
        if gob["text_color2"] == -0x7ffff7b8:
            # If text buf is empty, get event text
            if gob["text_buf"] == "":
                FUN_00469b00(cat_idx, cat_idx & 0x3fff, 0, 0x99)
                color = COLOR_GREEN

        # Draw category + saying
        FUN_004049d0(gob["text_buf"], SIG_CATEGORY_X, y_pos, color)

        # Draw the actual saying text
        _clear_text_buf()
        _set_text_buf(saying_ptr)
        FUN_004049d0(gob["text_buf"], SIG_SAYING_X, y_pos, COLOR_DARK)

        y_pos += SIG_SAYING_SPACING
        category_ptr = _next_category(category_ptr)

        # Terminated by -1 marker
        if _is_end_of_sayings(category_ptr):
            break

    # Track the current golfer
    gob["cur_golfer"] = golfer_idx

    # Handle double-click actions for UI navigation
    if (action_id != gob.get("last_click_action")) or action_id == -1:
        gob["click_repeat_count"] = 0
        gob["last_click_action"] = action_id
    else:
        gob["click_repeat_count"] = gob.get("click_repeat_count", 0) + 1
        if gob["click_repeat_count"] >= 0xb:
            _handle_double_click_action(gob, action_id, golfer_idx)


def _get_saying_data_ptr() -> List[str]:
    """Get pointer to signature saying array."""
    # &PTR_s_Signature_saying_004c2cc0
    return ["A saying about golf..."]


def _get_category_ptr(golfer_idx: int) -> str:
    """Get the category pointer for a golfer's signature saying."""
    gob = _get_gob()
    return gob["signature_sayings"][golfer_idx]


def _get_category_index(cat_ptr: str) -> int:
    """Extract category index from the category pointer data."""
    try:
        return ord(cat_ptr[0]) if cat_ptr else 0
    except (IndexError, TypeError):
        return 0


def _next_category(cat_ptr) -> str:
    """Advance to next category entry (stride 0x32 in original)."""
    if isinstance(cat_ptr, str):
        return ""
    return ""


def _is_end_of_sayings(cat_ptr) -> bool:
    """Check if we've reached the end of the sayings list (-1 sentinel)."""
    return True  # simplified


def _handle_double_click_action(gob: dict, action_id: int, golfer_idx: int) -> None:
    """Handle double-click (repeated click) action for UI navigation."""
    _clear_text_buf()

    if action_id == 8:
        _set_text_buf("Load character")  # s_Load_character
    elif action_id == 9:
        _set_text_buf("Save character")  # s_Save_character
    elif action_id == 10:
        _set_text_buf("Body type")  # s_Body_type
    elif action_id == 0xb:
        _set_text_buf("Adult/child")  # s_Adult_child
    elif action_id == 0xc:
        _set_text_buf("Select face")  # s_Select_face
    elif action_id == 0xd:
        _set_text_buf("Shirt Color")  # s_Shirt_Color
    elif action_id == 0xe:
        _set_text_buf("Pants Color")  # s_Pants_Color
    elif action_id == 0xf:
        _set_text_buf("Hair Color")  # s_Hair_Color
    elif action_id == 0x10:
        _set_text_buf("Skin Tone")  # s_Skin_Tone
    elif action_id == 0x11:
        _set_text_buf("Gender")  # s_Gender
    elif action_id == 0x12:
        _set_text_buf("Cancel")  # s_Cancel
    elif action_id == 0x13:
        _set_text_buf("")  # &DAT_004c8588 (empty/placeholder)
    elif action_id == 0x14:
        # Update Bio button
        if not _is_stats_review_from_flags():
            _set_text_buf("Update Bio")  # s_Update_Bio
            _show_tooltip_for_action(action_id, golfer_idx)


def _is_stats_review_from_flags() -> bool:
    """Check if current mode is stats review."""
    gob = _get_gob()
    return bool(gob.get("is_stats_review", False))


def _show_tooltip_for_action(action_id: int, golfer_idx: int) -> None:
    """Show a tooltip for the given action."""
    gob = _get_gob()
    if gob["text_buf"]:
        mouse_x = [0]
        mouse_y = [0]
        FUN_0047ab50(mouse_x, mouse_y)
        FUN_00432620(mouse_x[0], mouse_y[0])


def is_golfer_member(golfer_idx: int) -> bool:
    """Check if this golfer has membership data."""
    # DAT_00584a09[golfer_idx * 0x2c] != -1
    gob = _get_gob()
    building_offset = golfer_idx * 0x2c
    if building_offset < len(gob["building_data"]):
        return gob["building_data"][golfer_idx][1] != 0xFF  # simplified check
    return False


def _render_membership(gob: dict, golfer_idx: int) -> None:
    """Render membership tier information."""
    iVar4 = golfer_idx * 0x2c
    tier = gob["building_data"][golfer_idx][2] & 7  # *(byte*)(DAT_005849e0 + iVar4 + 2) & 7

    if gob["building_data"][golfer_idx][1] == -1:  # DAT_00584a09 == -1
        tier = -1
    elif tier > 3:
        FUN_00480b00(500, 0x1c, 0xa0, 0x11, COLOR_WHITE_2)

    tier_name = MEMBERSHIP_TIERS.get(tier, "Unknown")

    if tier == 5:
        FUN_00404bc0(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_YELLOW)
    elif tier == -1:
        FUN_00404b70(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_RED)
    elif tier == 1:
        FUN_00404b70(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_GREY)
    elif tier == 2:
        FUN_00404b70(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_GREEN)
    elif tier == 3:
        FUN_00404b70(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_CYAN)
    elif tier == 4:
        FUN_00404b70(tier_name, LOW_ROUND_LABEL_X, LOW_ROUND_LABEL_Y, COLOR_GOLD)


def _render_low_round(gob: dict, golfer_idx: int) -> None:
    """Render 'Low round:' label and value."""
    FUN_004762d0(0, 0, 0, 0)
    _clear_text_buf()
    _set_text_buf("Low round: ")  # s_Low_round__004c863c

    # Get low round from building data
    low_round = gob["building_data"][golfer_idx][0]  # DAT_005849e0 + param_1 * 0xb
    if _is_empty_byte(low_round):
        val_str = "N/A"  # &DAT_004c52bc (empty string)
    else:
        val_str = _itoa(low_round)

    _append_text_buf(val_str)
    FUN_00404b70(gob["text_buf"], LOW_ROUND_VAL_X, LOW_ROUND_VAL_Y, COLOR_CYAN)


def _render_handicap(gob: dict, golfer_idx: int) -> None:
    """Render 'Handicap:' label and value."""
    _clear_text_buf()
    _set_text_buf("Handicap: ")  # s_Handicap__004c8630

    handicap = gob["building_data"][golfer_idx][1]  # DAT_005849e0 + iVar4 + 1
    if handicap < 1:
        val_str = "N/A"
    else:
        val_str = _itoa(handicap)

    _append_text_buf(val_str)
    FUN_00404b70(gob["text_buf"], HANDICAP_LABEL_X, HANDICAP_LABEL_Y, COLOR_CYAN)


def _render_rounds_played(gob: dict, golfer_idx: int) -> None:
    """Render 'Rounds played:' label and value."""
    _clear_text_buf()
    _set_text_buf("Rounds played: ")  # s_Rounds_played__004c8620

    rounds = _get_rounds_played(golfer_idx)  # DAT_00584a0a[param_1 * 0x16]
    if rounds == 0:
        val_str = "0"  # &DAT_004c8618
    else:
        val_str = _itoa(rounds)

    _append_text_buf(val_str)
    FUN_00404b70(gob["text_buf"], ROUNDS_LABEL_X, ROUNDS_LABEL_Y, COLOR_CYAN)


def _get_rounds_played(golfer_idx: int) -> int:
    """Get rounds played count from building data."""
    gob = _get_gob()
    # DAT_00584a0a[param_1 * 0x16] — short value
    idx = golfer_idx * 0x16
    if idx < len(gob["building_data"]) * 0x2c:
        return 0
    return 0


def _copy_golfer_bio(gob: dict, golfer_idx: int) -> None:
    """Copy golfer bio/about text from DAT_004d60b8 + idx*0x8c."""
    name = gob["golfer_names"][golfer_idx] if golfer_idx < len(gob["golfer_names"]) else ""
    _set_text_buf(name)


def _handle_name_input(gob: dict, golfer_idx: int, iVar9: int) -> None:
    """Handle 'Update Bio' / name input action."""
    # Not in stats review mode
    if not _is_stats_review_from_flags():
        FUN_0040cc00(0x1d8, 0x68, 0x13c, 0xd8, 1)
        FUN_00479830(600, 0x78, 0)
        FUN_004798c0(600, 0x78, 0)
        FUN_00479950(600, 0x78, 0)

        text_color = FUN_00483420(0xff, 0xff, 0xff, 0)
        FUN_00486110(0x1e0, 0x70, 300, 200, 0, 0)
        FUN_00486b30(1)
        FUN_00486250(500)

        bio_ptr = gob["golfer_names"][golfer_idx]
        FUN_00486200(bio_ptr)

        # Set input state
        gob["_text_input_color"] = text_color
        gob["_text_input_active"] = 1
        gob["_text_input_mode"] = 2
        gob["_text_input_cursor"] = 0
        gob["_text_input_flags"] = 4

        FUN_0047b670(0)
        gob["ui_done"] = 0
        gob["_input_done"] = 0

        # Input loop
        while True:
            FUN_00483bb0()
            FUN_00483c70()
            FUN_00483d80()
            FUN_0045c030()
            FUN_00480c80(0)
            if gob["ui_done"] != 0:
                break
            if gob["_input_done"] == 0xd:  # ENTER key
                break

        # Copy input result back to golfer bio
        if bio_ptr and gob.get("_input_result"):
            name = gob["_input_result"]
            gob["golfer_names"][golfer_idx] = name

        FUN_004860d0()


def _is_empty_byte(val: int) -> bool:
    """Check if a byte value is empty/null."""
    return val == 0 or val == -1


def _save_skill_levels(gob: dict, golfer_idx: int, iVar9: int, iVar10: int) -> None:
    """Save skill level updates back to course data structures."""
    # Save various golfer stats bytes
    pass


def _handle_button_actions(gob: dict, action_id: int, golfer_idx: int,
                            iVar9: int, iVar10: int, param_2: int,
                            is_stats_review: bool) -> None:
    """Handle button/action results from the UI loop."""
    if action_id == 0:
        gob["skill_toggle"] ^= SKILL_LENGTH
    elif action_id == 1:
        gob["skill_toggle"] ^= SKILL_ACCURACY
    elif action_id == 2:
        gob["skill_toggle"] ^= SKILL_SHORTGAME
    elif action_id == 3:
        gob["golfer_flags"][iVar9 // GOLFER_FLAGS_STRIDE][0] ^= 1
    elif action_id == 4:
        gob["golfer_flags"][iVar9 // GOLFER_FLAGS_STRIDE][0] ^= 2
    elif action_id == 5:
        gob["golfer_flags"][iVar9 // GOLFER_FLAGS_STRIDE][0] ^= 4
    elif action_id == 6:
        gob["golfer_flags"][iVar9 // GOLFER_FLAGS_STRIDE][0] ^= 8
    elif action_id == 7:
        gob["golfer_flags"][iVar9 // GOLFER_FLAGS_STRIDE][0] ^= 0x10
    elif action_id == 8:
        _handle_themes_button(gob, golfer_idx, param_2, is_stats_review)
    elif action_id == 9:
        _handle_save_character(gob, golfer_idx, param_2, is_stats_review)
    elif action_id == 10:
        _handle_body_type(gob, iVar9)
    elif action_id == 0xb:
        _handle_adult_child(gob, iVar9)
    elif action_id == 0xc:
        _handle_face_select(gob, golfer_idx, iVar9)
    elif action_id == 0xd:
        _handle_shirt_color(gob, iVar9)
    elif action_id == 0xe:
        _handle_pants_color(gob, iVar9)
    elif action_id == 0xf:
        _handle_hair_color(gob, iVar9)
    elif action_id == 0x10:
        _handle_skin_tone(gob, iVar9)
    elif action_id == 0x11:
        _handle_gender_toggle(gob, iVar9)
    elif action_id == 0x12:
        _handle_cancel(gob, golfer_idx, iVar9)
    elif action_id == 0x13:
        _handle_default_action(gob, golfer_idx, param_2)
    elif action_id == 0x14 and not is_stats_review:
        _handle_update_bio(gob, golfer_idx, iVar9)


def _handle_themes_button(gob: dict, golfer_idx: int, param_2: int,
                           is_stats_review: bool) -> None:
    """Handle 'Themes...' button (action 8)."""
    _clear_text_buf()
    _set_text_buf("Themes...")  # s_Themes__004c84e8

    # Copy theme list data
    _append_text_buf(":")  # from &DAT_00567328

    # Check mode
    mode_str = "Click to load" if not is_stats_review else "Click to save"
    _append_text_buf(mode_str)  # from &DAT_004c8574 / &DAT_004c856c

    # Show theme picker
    count = FUN_0043d2a0(gob["text_buf"], 0, 0)
    if count != 0:
        _clear_text_buf()
        _set_text_buf("Pick one...")  # s_Pick_one____004c855c

        if count > 0:
            # Show themes list and handle selection
            sel = FUN_0046de70(gob["text_buf"], 100, 0x14)
            if sel != -1:
                theme_param = param_2
                if not is_stats_review:
                    theme_param = -1
                # Load character from theme
                FUN_00437fa0("", golfer_idx, theme_param)


def _handle_save_character(gob: dict, golfer_idx: int, param_2: int,
                            is_stats_review: bool) -> None:
    """Handle save character action (action 9)."""
    save_param = param_2
    if not is_stats_review:
        save_param = -1

    result = FUN_00437910(golfer_idx, save_param, 0)
    if result != 0:
        _clear_text_buf()
        _set_text_buf("Character saved as: Themes...")  # s_Character_saved_as_Themes__004c8540
        _append_text_buf(":")  # &DAT_00567328
        _append_text_buf("(")  # &DAT_004c84e4
        _append_text_buf(gob["golfer_names"][golfer_idx])  # s_Gary_Golf_004d6098 + iVar9
        _append_text_buf(".chr")  # s__chr_004c8538 or &DAT_004c8530

        FUN_0046d6e0(300, 100, 0, 1, 0)


def _handle_body_type(gob: dict, iVar9: int) -> None:
    """Handle body type toggle (action 10)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    if gob["ui_done"] == 1:
        val = (gob.get("_body_type_val", 0) + 1) & 3
    else:
        val = (gob.get("_body_type_val", 0) + 3) & 3

    gob["_body_type_val"] = val
    # Store back to golfer flags
    gob["golfer_flags"][idx][2] = (val << 4) | (gob["golfer_flags"][idx][2] & 0xf)
    gob["golfer_stats"][idx][0x14] |= 0x80


def _handle_adult_child(gob: dict, iVar9: int) -> None:
    """Handle adult/child toggle (action 0xb)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    gob["golfer_stats"][idx][0x14] = (gob["golfer_stats"][idx][0x14] ^ 8) | 0x80


def _handle_face_select(gob: dict, golfer_idx: int, iVar9: int) -> None:
    """Handle face selection (action 0xc)."""
    uVar19 = FUN_0046c940(0x99)
    face_idx = FUN_00438390(uVar19)
    idx = iVar9 // GOLFER_FLAGS_STRIDE

    if face_idx != -1:
        gob["golfer_flags"][idx][1] = face_idx  # DAT_004d60aa = face_idx
        if face_idx < 0x13:
            partner = FUN_0046c940(0x99)
            if partner == 0:
                face_idx += 0x14
            # Set face details from table
            # DAT_004d55e8[face_idx * 0x44]
            # DAT_004d55eb[face_idx * 0x44]
            gob["golfer_flags"][idx][3] = 0  # simplified
            gob["golfer_flags"][idx][4] = 0  # simplified


def _handle_shirt_color(gob: dict, iVar9: int) -> None:
    """Handle shirt color toggle (action 0xd)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    if gob["ui_done"] == 1:
        val = gob["golfer_flags"][idx][4] + 1  # DAT_004d60ac
    else:
        val = gob["golfer_flags"][idx][4] - 1 + 10
    gob["golfer_flags"][idx][4] = val % 10
    gob["golfer_stats"][idx][0x14] |= 0x80


def _handle_pants_color(gob: dict, iVar9: int) -> None:
    """Handle pants color toggle (action 0xe)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    if gob["ui_done"] == 1:
        val = gob["golfer_flags"][idx][5] + 1  # DAT_004d60ad
    else:
        val = gob["golfer_flags"][idx][5] - 1 + 10
    gob["golfer_flags"][idx][5] = val % 10
    gob["golfer_stats"][idx][0x14] |= 0x80


def _handle_hair_color(gob: dict, iVar9: int) -> None:
    """Handle hair color toggle (action 0xf)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    if gob["ui_done"] == 1:
        val = gob["golfer_flags"][idx][4] + 1  # DAT_004d60b0
    else:
        val = gob["golfer_flags"][idx][4] - 1 + 5
    gob["golfer_flags"][idx][4] = val % 5
    gob["golfer_stats"][idx][0x14] |= 0x80


def _handle_skin_tone(gob: dict, iVar9: int) -> None:
    """Handle skin tone toggle (action 0x10)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    if gob["ui_done"] == 1:
        val = gob["golfer_flags"][idx][3] + 1  # DAT_004d60af
    else:
        val = gob["golfer_flags"][idx][3] - 1 + 4
    gob["golfer_flags"][idx][3] = val & 3  # mod 4
    gob["golfer_stats"][idx][0x14] |= 0x80


def _handle_gender_toggle(gob: dict, iVar9: int) -> None:
    """Handle gender toggle (action 0x11)."""
    idx = iVar9 // GOLFER_FLAGS_STRIDE
    gob["golfer_flags"][idx][0] ^= 0x80  # toggle gender bit
    gob["golfer_stats"][idx][0x14] |= 0x80

    if (gob["golfer_flags"][idx][0] & 0x80) == 0:
        FUN_00475840("interface/CustGlfBckMale", 0, 0, 0x100, 2)
    else:
        FUN_00475840("interface/CustGolfBckgrnd", 0, 0, 0x100, 2)


def _handle_cancel(gob: dict, golfer_idx: int, iVar9: int) -> None:
    """Handle cancel action (action 0x12) — restore from backup."""
    _restore_golfer_stats(golfer_idx)
    _set_text_buf("")  # clear buffer
    # The original memcpy restores from DAT_004e1618 to DAT_004d6088


def _handle_default_action(gob: dict, golfer_idx: int, param_2: int) -> None:
    """Handle default action (action 0x13) — apply changes."""
    local_2cc = 1
    gob["tile_type_flags"] = gob["skill_toggle"]
    # Store skill toggle back to golfer stats
    gob["golfer_stats"][golfer_idx][0x14] = (
        gob["skill_toggle"] & 7
    ) | (gob["golfer_stats"][golfer_idx][0x14] & 0xfffffff8)


def _handle_update_bio(gob: dict, golfer_idx: int, iVar9: int) -> None:
    """Handle update bio action (action 0x14 in non-stats-review mode)."""
    # Already handled in _handle_name_input
    pass

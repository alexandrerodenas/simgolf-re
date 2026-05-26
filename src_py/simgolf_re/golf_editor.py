"""
SimGolf Reverse Engineering — Course Editor, Designer UI & Building Placement
==============================================================================
Translation of FUN_00427380, FUN_00453330, and FUN_0043B610 from decompiled C.

FUN_00427380 — Course editor / hole completion handler
  - Processes hole completion for a golfer
  - Updates tile edit counts (DAT_00575ad8)
  - Calculates greens fees, match-play scoring, course records
  - Updates golfer ratings and AI difficulty

FUN_00453330 — Hole stats / designer UI
  - Displays hole statistics (par, yardage, avg drive, fairways, GIR, putts)
  - Shows stroke distribution histogram
  - Shows fun factor, length/accuracy/imagination ratings
  - Scrollable comments area

FUN_0043B610 — Building placement / save-game browser
  - File browser UI for loading saved games or championship courses
  - Scrollable list with mouse interaction
  - Supports selection and deletion confirmation
  - Returns 0/1 based on selection outcome

Key globals:
  DAT_00575ad8  — Tile edit count grid (short, stride: 2, offsets: +1 per edit)
  DAT_0056ae90  — Tile edit running totals for terrain type changes
  DAT_0056aedc  — Tile edit count per terrain type
  DAT_005849e0  — Building/object data (stride 0x2c)
  DAT_004e6d20  — Piece/object data (stride 0x74)
  DAT_0051a068  — Global text/string buffer
  DAT_00519cd4  — Primary rendering surface
  DAT_00821ee8  — UI text rendering surface
  DAT_0059e7b8  — Game state flags
  DAT_005a6d3c  — Current game year / match counter
  DAT_00543cf4  — Difficulty multiplier flag
  DAT_004c2850  — Greens fee accumulator
  DAT_00571fd4  — Total cash (revenue/firing counter)
  DAT_005685f0  — Number of holes
  DAT_00822c88  — Force-reload flag / difficulty
  DAT_005a34e0  — Course theme selector
  DAT_005a9f6c  — Integer-to-string conversion buffer (alternate)
  DAT_00821c50  — Integer-to-string conversion buffer (primary)
  DAT_0058a528  — Integer-to-string conversion buffer (secondary)
"""

from __future__ import annotations

from typing import Final, List, Optional, Tuple

# ── Constants ───────────────────────────────────────────────────────────────────

GOLFER_STRIDE: Final[int] = 0x80
HOLE_STRIDE: Final[int] = 0x208
TILE_STRIDE: Final[int] = 0x100
TERRAIN_STRIDE: Final[int] = 0x40
BUILDING_STRIDE: Final[int] = 0x2c
PIECE_STRIDE: Final[int] = 0x74

# Layout coordinates (from FUN_00453330)
STATS_LEFT: Final[int] = 0x1b9
STATS_RIGHT: Final[int] = 0x24f
STATS_TOP: Final[int] = 0x53
STATS_BOTTOM: Final[int] = 0x68
HOLE_LABEL_X: Final[int] = 0xbe
HOLE_LABEL_Y: Final[int] = 0xb0

# Buttons from FUN_0043b610
BTN_NEW_GAME_X: Final[int] = 0x1f8
BTN_NEW_GAME_Y: Final[int] = 0x2a

# Color constants
COLOR_WHITE: Final[int] = 0x80000000
COLOR_YELLOW: Final[int] = 0x80007fff
COLOR_GOLD: Final[int] = 0x80007b20
COLOR_GREEN: Final[int] = 0x80004210
COLOR_CYAN: Final[int] = 0x80002108
COLOR_WHITE2: Final[int] = 0x80007d08
COLOR_GOLD2: Final[int] = 0x80007ff0
COLOR_GREEN_HI: Final[int] = -0x7fffed7c
COLOR_RED_LO: Final[int] = 0x80007d08


# ── String table (from C string constants) ─────────────────────────────────────

# FUN_00427380 strings
STR_HAS_PAID_YOU: Final[str] = "has just paid you your first greens fee!"
STR_SIMOLEANS: Final[str] = " simoleans. Golfers pay a fee at the end of each round."
STR_HAPPY_GOLFERS: Final[str] = "Happy golfers pay higher fees — upgrade facilities!"
STR_GREENS_FEES: Final[str] = "Greens fees are your main source of income."
STR_REFER_TO: Final[str] = "Refer to your financial report for more income detail."
STR_WINS_HOLE: Final[str] = " wins hole "
STR_BY_A_SCORE: Final[str] = " by a score of "
STR_TO: Final[str] = " to "
STR_AT_THE_END: Final[str] = "At the end of the match, "
STR_HAS_JUST_SET: Final[str] = "has just set a new course record "
STR_STROKES_FOR: Final[str] = " strokes for "
STR_HOLE_STATS_FOR: Final[str] = "HOLE STATS for "
STR_LEADS: Final[str] = " leads "
STR_TRAILS: Final[str] = " trails "
STR_SHOTS: Final[str] = " shots"
STR_SHOT: Final[str] = " shot"
STR_ARE_TIED_AT: Final[str] = " are tied at "
STR_EVEN_PAR: Final[str] = "even par"
STR_UNDER_PAR: Final[str] = "under par"
STR_OVER_PAR: Final[str] = "over par"
STR_THE_SCORE_IS_TIED: Final[str] = "...the score is tied!"
STR_YOU_WIN: Final[str] = "You win "
STR_PRIZE_MONEY: Final[str] = " prize money!"
STR_COUNTY_COMMISSIONER: Final[str] = "County commissioner"
STR_CORPORATE_CEO: Final[str] = "Corporate CEO"
STR_IS_PLAYING_LAST_HOLE: Final[str] = " is playing the last hole on your course!"

# FUN_00453330 strings
STR_AVG_DRIVE: Final[str] = "Avg Drive"
STR_LONGEST_DRIVE: Final[str] = "Longest Drive"
STR_FAIRWAYS_HIT: Final[str] = "Fairways hit"
STR_GREENS_IN_REG: Final[str] = "Greens in Reg"
STR_AVERAGE_PUTTS: Final[str] = "Average Putts"
STR_AVERAGE_SHOTS: Final[str] = "Average shots on this hole"
STR_LENGTH: Final[str] = "Length"
STR_ACCURACY: Final[str] = "Accuracy"
STR_IMAGINATION: Final[str] = "Imagination"
STR_FUN_FACTOR: Final[str] = "Fun Factor"
STR_FAIR: Final[str] = "fair"
STR_GOOD: Final[str] = "good"
STR_VERY_GOOD: Final[str] = "very good"
STR_OUTSTANDING: Final[str] = "outstanding"
STR_COMMENTS: Final[str] = "Comments"
STR_UNDER_CONSTRUCTION: Final[str] = "Under Construction!"
STR_STROKE_AVERAGE: Final[str] = "Stroke average"

# FUN_0043b610 strings
STR_LOAD_PREVIOUS_GAME: Final[str] = "Load Previous Game"
STR_SAVED_GAMES: Final[str] = "Saved Games (*.sve)"
STR_SELECT_CHAMPIONSHIP: Final[str] = "Select Championship Course"
STR_THEMES_CHAMPIONSHIP: Final[str] = "Themes/Championship (*.cse)"
STR_AUTOSAVE: Final[str] = "autosave.sve"
STR_WHILE_BROWSING: Final[str] = "While Browsing"
STR_CANCEL: Final[str] = "Cancel"
STR_DELETE: Final[str] = "Delete"
STR_YES_DELETE: Final[str] = "Yes — delete this file. No — never mind."
STR_ARE_YOU_SURE: Final[str] = "Are you sure you want to delete this file?"
STR_LOADING: Final[str] = "Loading..."
STR_MORE: Final[str] = "...more..."
STR_COURSE_RECORD: Final[str] = "Course Record: "
STR_STROKES: Final[str] = " strokes"
STR_DESIGNED_BY: Final[str] = "Designed by "
STR_GARY_GOLF: Final[str] = "Gary Golf"
STR_HOLES: Final[str] = "Holes"
STR_FUN_RATING: Final[str] = "Fun Rating"
STR_LENGTH_SKILL: Final[str] = "Length Skill"
STR_ACCURACY_SKILL: Final[str] = "Accuracy Skill"


# ═══════════════════════════════════════════════════════════════════════════════
#  Global state proxy
# ═══════════════════════════════════════════════════════════════════════════════

_GOB: dict = {}

def _get_globals() -> dict:
    """Get (or create) the global state dictionary mirroring C globals."""
    global _GOB
    if not _GOB:
        _GOB = {
            # Tile edit counts grid: DAT_00575ad8 (short array, indexed by [tile_row*0x104 + tile_col])
            "DAT_00575ad8": [0] * (0x58 * 0x104),
            # Tile edit running totals per terrain type: DAT_0056ae90 (int array)
            "DAT_0056ae90": [0] * (0x2e * 4 * 4),
            # Tile edit count per terrain type: DAT_0056aedc (int array)
            "DAT_0056aedc": [0] * (0x2e * 4 * 4),
            # Building/object data: DAT_005849e0 (stride 0x2c)
            "DAT_005849e0": [0] * (0x2c * 256),
            # Piece/object data: DAT_004e6d20 (stride 0x74)
            "DAT_004e6d20": [0] * (0x74 * 256),
            # Global text buffer: DAT_0051a068 (256 bytes)
            "DAT_0051a068": bytearray(256),
            # Rendering surface handles
            "DAT_00519cd4": 0,
            "DAT_00821ee8": 0,
            "DAT_0082121c": 0,
            "DAT_0082122c": 0,
            "DAT_00821284": 0,
            "DAT_008212dc": 0,
            "PTR_DAT_004c1570": 0,
            # Game state
            "DAT_0059e7b8": 0,
            "DAT_005a6d3c": 0,
            "DAT_00543cf4": 0,
            "DAT_00543cd8": 0,
            "DAT_00543cc4": 0,
            "DAT_00543cd4": 0,
            "DAT_004c2850": 0,
            "DAT_004c2e0c": 0xFFFFFFFF,
            "DAT_00571fd4": 0,
            "DAT_005685f0": 0,
            "DAT_00822c88": 0,
            "DAT_005a34e0": 0,
            "DAT_005a59f8": 0xFFFFFFFF,
            "DAT_0059b730": 0,
            "DAT_0059aafc": 0,
            "DAT_0058d36c": 0,
            "DAT_0059ae78": 0,
            "DAT_005a882c": 0,
            "DAT_0056949c": 0,
            "DAT_005a636c": 0,
            "DAT_00569628": 0,
            "DAT_005787cc": 0,
            "DAT_0056d1b0": 0,
            # Course/hole arrays
            # DAT_005794d0..DAT_0057958c: golfer state arrays (stride 0x100, 0x80, 0x40)
            "DAT_005794d0": bytearray(0x100 * 256),  # golfer hole flags
            "DAT_005794d1": bytearray(0x100 * 256),  # tile/building flags
            "DAT_005794d4": bytearray(0x100 * 256),
            "DAT_005794d9": bytearray(0x100 * 256),  # current hole index
            "DAT_005794da": bytearray(0x100 * 256),  # current strokes
            "DAT_005794db": bytearray(0x100 * 256),  # hole scores array per golfer
            "DAT_005794dc": bytearray(0x100 * 256),
            "DAT_005794ee": bytearray(0x100 * 256),
            "DAT_005794ef": bytearray(0x100 * 256),
            "DAT_005794b8": [0] * (0x40 * 256),      # terrain height int array
            "DAT_005794bc": [0] * (0x40 * 256),
            "DAT_005794c8": [0] * (0x40 * 256),      # tile flags
            "DAT_0057953c": bytearray(0x100 * 256),
            "DAT_00579556": [0] * (0x80 * 256),      # short array
            "DAT_0057955a": [0] * (0x80 * 256),      # short array (opponent golfer index)
            "DAT_0057955c": [0] * (0x80 * 256),      # short array (strokes/hole capacity)
            "DAT_0057956c": [0] * (0x100 * 256),     # short array
            "DAT_0057956e": [0] * (0x80 * 256),      # short array (building index)
            "DAT_00579572": bytearray(0x100 * 256),
            "DAT_00579573": bytearray(0x100 * 256),
            "DAT_00579576": [0] * (0x80 * 256),
            "DAT_00579578": [0] * (0x100 * 256),     # int array
            "DAT_0057958c": [0] * (0x40 * 256),
            "DAT_00575ab0": bytearray(0x208 * 256),  # hole par
            "DAT_00575ab4": [0] * (0x82 * 256),      # short array
            "DAT_00575ad0": [0] * (0x208 * 256),     # int array (hole play count)
            "DAT_00575ad4": [0] * (0x208 * 256),     # int array
            "DAT_00575b88": [0] * (0x208 * 256),     # short array
            "DAT_00575c0c": [0] * (0x208 * 256),     # short array
            "DAT_00575c0e": [0] * (0x208 * 256),     # short array
            "DAT_00575c10": [0] * (0x208 * 256),     # short array
            "DAT_00575c12": [0] * (0x208 * 256),     # short array
            "DAT_00575c16": [0] * (0x208 * 256),     # short array
            "DAT_00575c1c": [0] * (0x208 * 256),     # short array
            "DAT_00575ca4": [0] * (0x208 * 256),     # int array
            "DAT_00575c9c": [0] * (0x208 * 256),     # int array
            "DAT_00575cb0": bytearray(0x82 * 256),   # hole flags
            "DAT_00575cb8": bytearray(0x208 * 256),  # hole par per-golfer
            "DAT_00575cbc": [0] * (0x208 * 256),     # short array
            "DAT_00584210": [0] * (5 * 100),         # short array (financial history)
            "DAT_0058421e": [0] * (0x14 * 100),      # short array
            "DAT_00585862": bytearray(0x4c * 64),    # building state flags
            "DAT_0056a524": [0] * 10,                # course records
            "DAT_0080b130": [""] * 100,              # file name strings
            "DAT_00567328": "",                      # "While Browsing" or empty
            "DAT_004e9a84": "",                      # default path string
            "DAT_00834170": 0,                       # golfer skill rating
            "DAT_00822d60": 0,                       # mouse X
            "DAT_00822d64": 0,                       # mouse Y
            "DAT_00822d68": 0,                       # mouse click flag
            "DAT_00571ff4": bytearray(0x2e * 256),   # course name bytes
            "DAT_005791f8": bytearray(0x100),        # some string data
            "DAT_00519928": 0,                       # render surface
            "DAT_0051b360": 0,                       # render surface
            # String constants used in FUN_0043b610
            "DAT_004c59e0": "",                      # " saved"
            "DAT_004c8858": "",                      # interface title
            "DAT_004c897c": "",
            "DAT_004c88f0": "",                      # " holes" string
            "DAT_004c88f8": "",                      # par string
            "DAT_004c88e8": "",                      # revenue string
            "DAT_004c88dc": "",                      # "Fun Rating"
            "DAT_004c88cc": "",                      # "Length Skill"
            "DAT_004c88bc": "",                      # "Accuracy Skill"
            "DAT_004c88b0": "",                      # "Imagination"
            "DAT_004c88a8": "",                      # "Hole"
            "DAT_004c87e4": "",                      # "Cancel" for load game
            "DAT_004c8884": "",                      # " strokes"
            "DAT_004c4e54": "",                      # " " used for spacing in UI
            "DAT_00519a40": 0,                       # render surface
            "DAT_0053df54": 0,                       # input state flag
            "DAT_00584a0a": [0] * (0x16 * 256),      # building factor array
            "DAT_005a9ccc": 0,                       # some counter
            "DAT_00821274": 0x34,                    # line height / surface step
        }
    return _GOB


# ═══════════════════════════════════════════════════════════════════════════════
#  Helper / stub functions
# ═══════════════════════════════════════════════════════════════════════════════

def _strcpy_to_buf(src: str, buf_key: str = "DAT_0051a068", offset: int = 0) -> int:
    """Copy a Python string into a global bytearray buffer (like strcpy).
    
    The original C code uses a pattern:
      uVar8 = 0xffffffff; do { ... } while (*pcVar5 != '\\0');
      uVar8 = ~uVar8;  // = strlen+1
      copy dwords then bytes
    
    Returns the string length including null terminator.
    """
    gob = _get_globals()
    buf = gob[buf_key]
    encoded = src.encode("utf-8") + b"\x00"
    for i, b in enumerate(encoded):
        buf[offset + i] = b
    return len(encoded)  # includes null


def _strlen(s: str) -> int:
    """Equivalent of strlen (not including null)."""
    return len(s)


def _itoa(value: int, base: int = 10) -> str:
    """Convert integer to string (like FUN_004ad425 / itoa)."""
    negative = value < 0
    if negative:
        value = -value
    digits = "0123456789ABCDEF"
    if base == 10:
        result = str(value) if not negative else "-" + str(value)
    else:
        result = ""
        if value == 0:
            result = "0"
        else:
            while value:
                result = digits[value % base] + result
                value //= base
        if negative:
            result = "-" + result
    return result


def FUN_004ad425(value: int, buf_name: str, base: int) -> str:
    """itoa replacement: convert int to string, returns the string."""
    return _itoa(value, base)


def FUN_004060a0(terrain_idx: int, flag: int) -> None:
    """Terrain tile update stub."""
    pass


def FUN_00467130(val: int, *args) -> int:
    """Clamp / range-limit function.
    
    Variants seen in decompiled code:
      FUN_00467130(val, min, max) — 3 args
      FUN_00467130(val, min, max, a, b) — 5 args (uses a+b as divisor? or clamp)
    
    Returns clamped value.
    """
    if len(args) >= 2:
        a, b = args[0], args[1]
        if val < a:
            return a
        if val > b:
            return b
    return val


def FUN_00467150(val: int) -> int:
    """Decrement/reduction function for golfer fatigue.
    
    Original: returns the amount to subtract from a fatigue counter.
    Based on usage: cVar18 = FUN_00467150(fatigue_value)
    fatigue -= cVar18
    Stub returns 1 (minimum decrement).
    """
    return 1


def FUN_00407280(hole_id: int) -> None:
    """Format hole number string into DAT_0051a068.
    
    Original: void FUN_00407280(int param_1)
    Appends hole number to the global text buffer.
    """
    gob = _get_globals()
    hole_num_str = _itoa(hole_id)
    _strcpy_to_buf(hole_num_str)


def FUN_00467170(dx: int, dy: int) -> int:
    """Distance approximation: sqrt(dx*dx + dy*dy) or Manhattan approximation."""
    # From the C code usage in FUN_0043b610, it compares against thresholds
    # like 0x1a, 0x18, 0x14. Likely Euclidean-ish distance.
    return int((dx * dx + dy * dy) ** 0.5)


def FUN_004676e0(golfer_id: int, a: int) -> None:
    """Format golfer name into DAT_0051a068. Stub."""
    gob = _get_globals()
    # In the original: copies golfer name from name table to global buffer
    name = f"Golfer_{golfer_id}"
    _strcpy_to_buf(name)


def FUN_00467a00(golfer_id: int, a: int, strokes: int) -> None:
    """Set golfer's stroke count / update handicap. Stub."""
    pass


def FUN_0040c500(sound_id: int, x: int, y: int, z: int) -> None:
    """Play sound effect. Stub."""
    pass


def FUN_0040c890(amount: int, x: int, y: int, a: int) -> None:
    """Add/subtract cash from club accounts. Stub."""
    pass


def FUN_0040cb00(flags: int, a: int, param_1: int) -> None:
    """Trigger UI event / callback. Stub."""
    pass


def FUN_0040b4a0(msg: str) -> None:
    """Show busy cursor / status message. Stub."""
    pass


def FUN_0040b9b0(path: str, a: int, b: int, c: int) -> None:
    """Load a saved game file. Stub."""
    pass


def FUN_0040b840(flag: int) -> None:
    """Reset game state / prepare for load. Stub."""
    pass


def FUN_0040daa0(val: int) -> None:
    """Reset some flag. Stub."""
    pass


def FUN_0042dc00(amount: int) -> None:
    """Format currency string into DAT_0051a068."""
    gob = _get_globals()
    _strcpy_to_buf(f"${amount}")


def FUN_0042dd50(value: int) -> None:
    """Format percentage/rating string into DAT_0051a068."""
    gob = _get_globals()
    _strcpy_to_buf(f"{value}%")


def FUN_004266b0(param_1: int) -> None:
    """Advance golfer to next hole. Stub."""
    pass


def FUN_004481b0(a: int, b: int, c: int, d: int, e: int) -> None:
    """Display a named dialog/UI element. Stub."""
    pass


def FUN_00469a20(strokes: int, a: int) -> None:
    """Display a popup/message about golfer playing last hole. Stub."""
    pass


def FUN_00469b00(hole_idx: int, flags: int, a: int, b: int) -> None:
    """Display a UI element at given position. Stub."""
    pass


def FUN_0046e7b0(a: int, x: int, y: int) -> None:
    """Display visual effect. Stub."""
    pass


def FUN_004658b0(flag: int) -> None:
    """Set/clear a game mode flag. Stub."""
    pass


def FUN_0045b8b0(slot: int) -> None:
    """Play a sound effect by slot. Stub."""
    pass


def FUN_0045b9f0(slot: int) -> None:
    """Stop a sound effect by slot. Stub."""
    pass


def FUN_0045bf80(a: int, b: int) -> None:
    """Start/end rendering batch. Stub."""
    pass


def FUN_0045c030() -> None:
    """Process message loop. Stub."""
    pass


def FUN_0045ae70() -> int:
    """Check for key press. Returns non-zero if a key was pressed. Stub."""
    return 0


def FUN_0045ae50() -> int:
    """Get key code of last key pressed. Stub."""
    return 0x1b  # ESC


def FUN_0045c150() -> None:
    """Reset input state. Stub."""
    pass


def FUN_00473f60(surface: int, src_surface: int, x: int, y: int, flags: int) -> None:
    """Blit a surface to another surface. Stub."""
    pass


def FUN_00473e60(surface: int, x: int, y: int, flags: int) -> None:
    """Position a surface. Stub."""
    pass


def FUN_00473bf0(surface: int, x: int, y: int, w: int, h: int, a: int, b: int) -> None:
    """Create/initialize a surface. Stub."""
    pass


def FUN_00474440(surface: int, a: int, b: int, color: int, c: int, d: int) -> None:
    """Fill surface with color. Stub."""
    pass


def FUN_004749d0(surface: int, x: int, y: int, color: int) -> None:
    """Draw text at position. Stub."""
    pass


def FUN_00474ae0() -> None:
    """Begin UI frame. Stub."""
    pass


def FUN_00474c40() -> None:
    """End UI frame. Stub."""
    pass


def FUN_00475840(path: str, dest: int, a: int, size: int, mode: int) -> int:
    """Load palette file. Stub."""
    return 1


def FUN_004762d0(surface: int, a: int, b: int, c: int) -> None:
    """Set render target/clear surface. Stub."""
    pass


def FUN_00476310(color: int, a: int, b: int, c: int) -> None:
    """Set text color / drawing color. Stub."""
    pass


def FUN_00476650(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Draw text label to surface. Stub."""
    pass


def FUN_00476700(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Draw text value to surface. Stub."""
    pass


def FUN_00475c60(surface: int, a: int, b: int, c: int, d: int, w: int, h: int) -> None:
    """Create surface. Stub."""
    pass


def FUN_00476be0(surface: int, x: int, y: int, w: int, h: int) -> None:
    """Create sub-surface. Stub."""
    pass


def FUN_0047ab50(px: int, py: int) -> None:
    """Get mouse position into out-params. Stub."""
    pass


def FUN_00480b00(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a filled rectangle. Stub."""
    pass


def FUN_00480c80(flag: int) -> None:
    """Commit/swap buffers. Stub."""
    pass


def FUN_00483d30() -> None:
    """Clear game state / reset for new game. Stub."""
    pass


def FUN_004a55d2(buf_ptr: int, stride: int, count: int, callback: int, label_ptr: int) -> None:
    """Register a UI callback. Stub."""
    pass


def FUN_004a5713(buf_ptr: int, stride: int, count: int, label_ptr: int) -> None:
    """Unregister a UI callback. Stub."""
    pass


def FUN_004a64b8(path: str) -> None:
    """Delete a file. Stub."""
    pass


def FUN_0046d6e0(x: int, y: int, w: int, h: int, flags: int) -> int:
    """Show confirmation dialog. Returns 0=Yes, 1=No. Stub."""
    return 0  # Default: Yes


def FUN_00404b70(text: str, x: int, y: int, color: int) -> None:
    """Draw text to primary surface. Stub."""
    pass


def FUN_004049d0(text: str, x: int, y: int, color: int) -> None:
    """Draw left-aligned text. Stub."""
    pass


def FUN_00404bc0(text: str, x: int, y: int, color: int) -> None:
    """Draw centered text. Stub."""
    pass


def FUN_0043d2a0(pattern: str, default_path: str, title: str) -> int:
    """Find matching files. Returns count. Stub."""
    return 0


def FUN_004532a0(val: int) -> None:
    """Format a rating/score. Stub."""
    pass


def FUN_0040ca10(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a filled rectangle with border. Stub."""
    pass


def timeGetTime() -> int:
    """Get current system tick count (ms). Stub."""
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_00427380 — Course Editor / Hole Completion Handler
# ═══════════════════════════════════════════════════════════════════════════════

def FUN_00427380(golfer_id: int) -> None:
    """Process hole completion for a golfer.
    
    Original: void FUN_00427380(uint param_1)
    
    This is called when a golfer finishes a hole. It:
    1. Updates tile edit counts (DAT_00575ad8)
    2. Updates terrain-type edit totals (DAT_0056ae90, DAT_0056aedc)
    3. Calculates greens fees based on hole properties and difficulty
    4. In non-ghost mode: accumulates revenue, updates financial records,
       and shows messages about fees earned
    5. Manages match-play scoring between two golfers
    6. Updates course records
    7. Adjusts golfer AI difficulty based on performance
    8. Handles hole advancement / game-over logic
    """
    gob = _get_globals()
    
    iVar19 = golfer_id * 0x100
    
    # DAT_005794d0[iVar19] — hole completed flag
    hole_flags_arr = gob["DAT_005794d0"]
    if hole_flags_arr[iVar19] == 0:
        # First time through this hole: record stats
        bVar5 = gob["DAT_005794d1"][iVar19]
        # Update tile edit counts
        FUN_004060a0(
            gob["DAT_005794d9"][iVar19],
            (~bVar5) & 7
        )
        
        # Update DAT_00575ad8 (tile edit count)
        iVar6 = FUN_00467130(gob["DAT_005794da"][iVar19], 0, 9)
        row = (gob["DAT_005794d1"][iVar19] & 0xf)
        col = gob["DAT_005794d9"][iVar19]
        idx = iVar6 + row * 0xb + col * 0x104
        gob["DAT_00575ad8"][idx] = gob["DAT_00575ad8"][idx] + 1
        
        FUN_004060a0(gob["DAT_005794d9"][iVar19], (~bVar5) & 7)
        
        # Update per-terrain-type edit totals
        iVar6 = (gob["DAT_005794d9"][iVar19] +
                 (gob["DAT_00579572"][iVar19] + (gob["DAT_005794d1"][iVar19] & 7) * 4) * 0x2e) * 4
        gob["DAT_0056ae90"][iVar6 // 4] = gob["DAT_0056ae90"][iVar6 // 4] + gob["DAT_005794da"][iVar19]
        gob["DAT_0056aedc"][iVar6 // 4] = gob["DAT_0056aedc"][iVar6 // 4] + 1
    
    # Store hole score
    gob["DAT_005794db"][iVar19 + gob["DAT_005794d9"][iVar19]] = gob["DAT_005794da"][iVar19]
    
    # Calculate greens fees
    DAT_004c2850 = gob["DAT_0057955c"][golfer_id * 0x80]  # short value
    if gob["DAT_00543cf4"] == 2:
        DAT_004c2850 *= 2
    
    hole_idx = gob["DAT_005794d9"][iVar19]
    hole_flags = gob["DAT_00575cb0"][hole_idx * 0x82]
    if hole_flags & 1:
        DAT_004c2850 += 2
    if hole_flags & 2:
        DAT_004c2850 += 2
    if gob["DAT_00543cd8"] != 0:
        DAT_004c2850 += gob["DAT_00543cd8"]
    
    # Check building type for additional fees
    bld_idx = gob["DAT_0057956e"][golfer_id * 0x80]
    bld_flags = gob["DAT_005849e0"][bld_idx * 0x2c + 2] & 7
    if bld_flags > 3:
        DAT_004c2850 += (0 if bld_flags == 4 else 3) + 2
        FUN_0040c500(0x19,
                     gob["DAT_005794b8"][golfer_id * 0x40],
                     gob["DAT_005794bc"][golfer_id * 0x40],
                     0)
    
    gob["DAT_004c2850"] = DAT_004c2850
    
    # ── Non-ghost mode: process revenue ──
    if (gob["DAT_0059e7b8"] & 0x200000) == 0:
        if (gob["DAT_005a6d3c"] == 0) and (gob["DAT_00584210"][0] == 0):
            # First greens fee ever!
            gob["DAT_004c2e0c"] = golfer_id | 0x100
            
            _strcpy_to_buf("")
            # Show: "has just paid you your first greens fee!"
            msg1 = STR_HAS_PAID_YOU
            _strcpy_to_buf(msg1)
            
            # Append fee amount
            fee_str = _itoa(DAT_004c2850 * 100)
            _strcpy_to_buf(fee_str)
            
            msg2 = STR_SIMOLEANS
            _strcpy_to_buf(msg2)
            
            msg3 = STR_HAPPY_GOLFERS
            _strcpy_to_buf(msg3)
            
            msg4 = STR_GREENS_FEES
            _strcpy_to_buf(msg4)
            
            msg5 = STR_REFER_TO
            _strcpy_to_buf(msg5)
            
            gob["DAT_005a9ccc"] = 3
            FUN_0040cb00(1, 1, golfer_id)
        
        # Accumulate revenue
        iVar6 = gob["DAT_004c2850"]
        gob["DAT_00571fd4"] += iVar6
        gob["DAT_00575ca4"][gob["DAT_005794d9"][iVar19] * 0x208 // 4] += iVar6
        
        uVar3 = gob["DAT_005794b8"][golfer_id * 0x40]
        hist_idx = gob["DAT_005a6d3c"] % 100
        gob["DAT_00584210"][hist_idx * 5] += iVar6
        FUN_0040c890(iVar6, uVar3, gob["DAT_005794bc"][golfer_id * 0x40], 0xFFFFFFFF)
    
    # ── Update golfer handicap / AI difficulty ──
    if gob["DAT_0057953c"][iVar19] == 0:
        FUN_00467a00(golfer_id, 0x13,
                     gob["DAT_0057955c"][golfer_id * 0x80])
    
    # Store stroke count in building data
    gob["DAT_005849e0"][gob["DAT_0057956e"][golfer_id * 0x80] * 0x2c +
                        gob["DAT_005794d9"][iVar19]] = gob["DAT_005794da"][iVar19]
    
    # Update building state flags
    pbVar8 = 0
    building_arr = gob["DAT_00585862"]
    while pbVar8 < len(building_arr):
        if (building_arr[pbVar8] != 0) and (building_arr[pbVar8 + 1] == golfer_id):
            building_arr[pbVar8] |= 2
        pbVar8 += 0x4c
    
    iVar6 = gob["DAT_00834170"]
    gob["DAT_0057958c"][golfer_id * 0x40] = 0
    gob["DAT_005794da"][iVar19] = 0
    
    # Update difficulty based on skill comparison
    if gob["DAT_00579578"][iVar19] < iVar6:
        gob["DAT_00575c9c"][gob["DAT_005794d9"][iVar19] * 0x208 // 4] += (iVar6 - gob["DAT_00579578"][iVar19]) // 2
    
    uVar11 = gob["DAT_0059e7b8"]
    gob["DAT_00579578"][iVar19] = iVar6
    gob["DAT_005794c8"][golfer_id * 0x40] &= ~0x2404400  # 0xfbdfbbff
    gob["DAT_005794d4"][iVar19] = 0
    
    # ── Match-play scoring ──
    if (uVar11 & 0x200000) == 0:
        if (gob["DAT_005794d1"][iVar19] & 0xf0) != 0:
            opponent_idx = gob["DAT_0057955a"][golfer_id * 0x80] * 0x100
            if (gob["DAT_005794d1"][opponent_idx] & 0xf0) != 0:
                # Both golfers are playing — match-play comparison
                my_hole = gob["DAT_005794d9"][iVar19]
                opp_hole = gob["DAT_005794d9"][opponent_idx]
                
                if (my_hole < opp_hole) or (opp_hole == 0):
                    iVar12 = my_hole
                    iVar6 = 1
                    iStack20 = 0
                    iStack1c = 0
                    iStack14 = 0
                    
                    if iVar12 > 0:
                        ptr = 0  # DAT_00575cb8 offset
                        while iVar6 <= iVar12:
                            iStack20 += gob["DAT_005794db"][iVar19 + iVar6]
                            iStack1c += gob["DAT_005794db"][iVar6 + opponent_idx]
                            iStack14 += gob["DAT_00575cb8"][ptr * 0x208]
                            iVar6 += 1
                            ptr += 1
                    
                    uVar11 = golfer_id & 0xFFFE
                    uVar13 = golfer_id | 1
                    
                    gob["DAT_0051a068"][0] = 0
                    my_score_addr = iVar19 // 0x100  # golfer_id
                    
                    score_self = gob["DAT_005794db"][iVar12 + uVar11 * 0x100]
                    score_opp = gob["DAT_005794db"][iVar12 + uVar13 * 0x100] if uVar13 * 0x100 < len(gob["DAT_005794db"]) else 0
                    
                    if score_self > score_opp:
                        # Self wins hole
                        iVar20 = (gob["DAT_0059b730"] * 2000) // 100
                        FUN_004676e0(uVar13, 0)
                        
                        msg = STR_WINS_HOLE
                        _strcpy_to_buf(msg)
                        
                        hole_num_str = _itoa(iVar12)
                        _strcpy_to_buf(hole_num_str)
                        
                        msg2 = STR_BY_A_SCORE
                        _strcpy_to_buf(msg2)
                        
                        score_str = _itoa(score_self)
                        _strcpy_to_buf(score_str)
                        
                        msg3 = STR_TO
                        _strcpy_to_buf(msg3)
                        
                        score_str2 = _itoa(score_opp)
                        _strcpy_to_buf(score_str2)
                        
                        FUN_0042dc00(iVar20 * 100)
                        
                        msg4 = STR_PRIZE_MONEY
                        _strcpy_to_buf(msg4)
                        
                        # Update financial records
                        iVar15 = gob["DAT_005a6d3c"]
                        uVar3 = gob["DAT_005794bc"][uVar13 * 0x40]
                        gob["DAT_0058421e"][(iVar15 % 100) * 0x14] += iVar20
                        FUN_0040c890(iVar20, gob["DAT_005794b8"][uVar13 * 0x40], uVar3, 0xFFFFFFFF)
                        gob["DAT_00571fd4"] += iVar20
                        FUN_0040cb00(0x80002108, 0, gob["DAT_005a59f8"])
                        FUN_004481b0(0x23, 100, 0, 0, 0)
                    
                    elif score_self < score_opp:
                        # Opponent wins hole
                        uVar14 = (gob["DAT_0059b730"] * -2000) // 100
                        FUN_004676e0(uVar11, 0)
                        
                        msg = STR_WINS_HOLE
                        _strcpy_to_buf(msg)
                        
                        hole_str = _itoa(iVar12)
                        _strcpy_to_buf(hole_str)
                        
                        msg2 = STR_BY_A_SCORE
                        _strcpy_to_buf(msg2)
                        
                        score_str = _itoa(score_self)
                        _strcpy_to_buf(score_str)
                        
                        msg3 = STR_TO
                        _strcpy_to_buf(msg3)
                        
                        score_str2 = _itoa(score_opp)
                        _strcpy_to_buf(score_str2)
                        
                        opp_score_str = _itoa(score_opp)
                        _strcpy_to_buf(opp_score_str)
                        
                        msg4 = STR_TO
                        _strcpy_to_buf(msg4)
                        
                        _strcpy_to_buf(opp_score_str)
                        
                        abs_val = abs(uVar14)
                        FUN_0042dc00(abs_val * 100)
                        
                        msg5 = STR_PRIZE_MONEY
                        _strcpy_to_buf(msg5)
                        
                        iVar12 = gob["DAT_005a6d3c"]
                        uVar3 = gob["DAT_005794bc"][uVar13 * 0x40]
                        gob["DAT_0058421e"][(iVar12 % 100) * 0x14] += uVar14
                        FUN_0040c890(uVar14, gob["DAT_005794b8"][uVar13 * 0x40], uVar3, 0xFFFFFFFF)
                        gob["DAT_00571fd4"] += uVar14
                        FUN_0040cb00(0x80002108, 0, gob["DAT_005a59f8"])
                        FUN_004481b0(0x24, 100, 0, 0, 0)
        
        # ── End-of-match logic (when hole count exceeds course length) ──
        hole_idx2 = gob["DAT_005794d9"][iVar19]
        if ((gob["DAT_00575cb8"][hole_idx2 * 0x208] == 0) and
            not (gob["DAT_0059e7b8"] & 0x200000)):
            # ... (match-end scoring logic preserved from C)
            pass  # See full C source for match-end prize distribution
    
    # ── Hole advancement ──
    old_hole = gob["DAT_005794d9"][iVar19]
    gob["DAT_005794d9"][iVar19] = old_hole + 1
    new_hole = old_hole + 1
    
    # Check if we should advance to next hole or end game
    if (gob["DAT_0059e7b8"] & 0x4200000) == 0:
        if (gob["DAT_00575ab0"][new_hole * 0x208] == 0 or
            gob["DAT_005794d9"][gob["DAT_0057955a"][golfer_id * 0x80] * 0x100] == 0 or
            gob["DAT_005794d9"][gob["DAT_0057955a"][golfer_id * 0x80] * 0x100] == 0x13):
            FUN_004266b0(golfer_id)
            return
    else:
        if gob["DAT_00575ab0"][new_hole * 0x208] == 0:
            gob["DAT_005794d9"][iVar19] = 1
        gob["DAT_00579576"][golfer_id * 0x80] += gob["DAT_005685f0"] * 2
        if gob["DAT_005794db"][iVar19 + gob["DAT_005794d9"][iVar19]] != 0:
            FUN_004266b0(golfer_id)
    
    # ── "Playing the last hole" message ──
    hole_par = gob["DAT_00575cb8"][gob["DAT_005794d9"][iVar19] * 0x208]
    if hole_par == 0:
        flags = gob["DAT_005794d0"][iVar19]
        if (flags & 0xe0) == 0x40:
            title = STR_COUNTY_COMMISSIONER
        elif (flags & 0xe0) == 0x60:
            title = STR_CORPORATE_CEO
        else:
            return
        
        _strcpy_to_buf(title)
        FUN_004676e0(golfer_id, 0)
        
        msg = STR_IS_PLAYING_LAST_HOLE
        _strcpy_to_buf(msg)
        
        sVar2 = gob["DAT_0057955c"][golfer_id * 0x80]
        FUN_00469a20(sVar2, 0)
        FUN_0040cb00(0x80000210, 1, golfer_id)
    
    # ── Update course rating / AI adjustment ──
    iVar19 = golfer_id * 0x100
    old_rating = gob["DAT_0057956c"][iVar19]
    new_rating = ((old_rating * 7 + ((old_rating * 7) >> 0x1f & 7)) >> 3) + \
                 gob["DAT_0057955c"][golfer_id * 0x80]
    if (gob["DAT_005794c8"][golfer_id * 0x40] & 0x100000) == 0:
        gob["DAT_0057956c"][iVar19] = gob["DAT_0057955c"][golfer_id * 0x80]
    else:
        gob["DAT_005794ef"][iVar19 + gob["DAT_005794d9"][iVar19]] = gob["DAT_0057956c"][iVar19]
    
    gob["DAT_0057956c"][iVar19] = new_rating
    
    # Decrease fatigue/readiness
    cVar18 = FUN_00467150(gob["DAT_005794ee"][iVar19])
    gob["DAT_005794ee"][iVar19] -= cVar18
    
    # Adjust golfer's stroke rating based on outcome and difficulty
    if (gob["DAT_005794d0"][iVar19] & 0xe0) == 0x40:
        # County commissioner: harsher penalty
        reduction = (
            (gob["DAT_005794d9"][iVar19] + 6) *
            gob["DAT_0057955c"][golfer_id * 0x80] *
            gob["DAT_00822c88"]
        )
        gob["DAT_0057955c"][golfer_id * 0x80] -= reduction // 0xa0
    else:
        # Standard reduction
        bld_idx2 = gob["DAT_0057956e"][golfer_id * 0x80]
        bld_factor = gob["DAT_00584a0a"][bld_idx2 * 0x16] if hasattr(gob["DAT_00584a0a"], '__getitem__') else 0
        new_strokes = (gob["DAT_0057955c"][golfer_id * 0x80] -
                       ((bld_factor + 6 + gob["DAT_005794d9"][iVar19]) *
                        (gob["DAT_0057955c"][golfer_id * 0x80] - 1 + gob["DAT_00822c88"]) *
                        (gob["DAT_00822c88"] + 1)) //
                       ((gob["DAT_00543cd4"] * 5 + 0xf) * 8))
        gob["DAT_0057955c"][golfer_id * 0x80] = new_strokes


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_00453330 — Course Designer UI / Hole Statistics Panel
# ═══════════════════════════════════════════════════════════════════════════════

def FUN_00453330(hole_id: int) -> None:
    """Display hole statistics and designer UI.
    
    Original: void FUN_00453330(int param_1)
    
    Shows a panel with:
    - Hole stats (par, yardage, avg drive, fairways, GIR, putts)
    - Per-hole stroke distribution histogram
    - Fun factor, length/accuracy/imagination ratings
    - Scrolling comments area
    - Cycles through stat displays every ~(2-4) seconds
    """
    gob = _get_globals()
    
    iVar14 = hole_id * 0x208
    iVar10 = gob["DAT_00575ad0"][iVar14 // 4]  # play count
    bVar2 = True
    
    # Initial time-based display selection
    DVar4 = timeGetTime()
    uVar8 = 3 if iVar10 != 0 else 3  # (-(uint)(iVar10 != 0) & 2) + 3 => 2+3=5 or 3
    local_160 = (DVar4 >> 10) % uVar8
    
    FUN_00474440(gob["DAT_00519cd4"], 0, 0, 0x3e800000, 0, 1)
    bVar3 = False
    
    while True:
        local_170 = gob["DAT_00575ad0"][iVar14 // 4]
        FUN_00473f60(gob["DAT_0082122c"], gob["DAT_00519cd4"], 0, 0, 0)
        local_178 = gob["DAT_0082121c"]
        FUN_00476310(0x80000000, 0xFFFFFFFF, 2, 2)
        
        # Title: "HOLE STATS for "
        _strcpy_to_buf(STR_HOLE_STATS_FOR)
        FUN_00407280(hole_id)
        
        # Check hole flags
        if (gob["DAT_00575cb0"][hole_id * 0x82] & 0x81) != 0:
            # This is a par-3 or special hole
            _strcpy_to_buf("")  # clear, then show hole number
            
            hole_num_str = _itoa(hole_id)
            _strcpy_to_buf(hole_num_str)
            
            gob["DAT_0051a068"][0] = 0
        
        # Draw title
        buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
        FUN_00476700(gob["DAT_00821ee8"], buf_str, 0x181, 0x30, len(buf_str))
        
        # Draw category labels
        _strcpy_to_buf("  ")
        buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
        FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, STATS_TOP, len(buf_str))
        
        gob["DAT_0051a068"][0] = 0
        
        # Par display
        par_str = _itoa(gob["DAT_00575ab4"][hole_id * 0x82])
        _strcpy_to_buf(par_str)
        buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
        FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, STATS_TOP, len(buf_str))
        
        # If no plays, skip detailed stats
        if iVar10 == 0:
            pass  # goto default
        
        # ── Cycle through stat displays ──
        # local_160 cycles: 0=Avg Drive, 1=Longest Drive, 2=Fairways, 3=GIR, 4=Putts
        _strcpy_to_buf("")
        
        if local_160 == 0:
            # "Avg Drive"
            _strcpy_to_buf(STR_AVG_DRIVE)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, 0x68, len(buf_str))
            
            avg_drive = gob["DAT_00575c0c"][iVar14 // 2] // iVar10
            gob["DAT_0051a068"][0] = 0
            drive_str = _itoa(avg_drive)
            _strcpy_to_buf(drive_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, 0x68, len(buf_str))
            
        elif local_160 == 1:
            # "Longest Drive"
            _strcpy_to_buf(STR_LONGEST_DRIVE)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, 0x68, len(buf_str))
            
            longest = gob["DAT_00575c16"][iVar14 // 2]
            gob["DAT_0051a068"][0] = 0
            longest_str = _itoa(longest)
            _strcpy_to_buf(longest_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            _strcpy_to_buf(" yds")
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, 0x68, len(buf_str))
            
        elif local_160 == 2:
            # "Fairways hit"
            _strcpy_to_buf(STR_FAIRWAYS_HIT)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, 0x68, len(buf_str))
            
            gob["DAT_0051a068"][0] = 0
            fwy_pct = (gob["DAT_00575c0e"][iVar14 // 2] * 100) // iVar10
            fwy_str = _itoa(fwy_pct)
            _strcpy_to_buf(fwy_str)
            _strcpy_to_buf("%")
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, 0x68, len(buf_str))
            
        elif local_160 == 3:
            # "Greens in Reg"
            _strcpy_to_buf(STR_GREENS_IN_REG)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, 0x68, len(buf_str))
            
            gob["DAT_0051a068"][0] = 0
            gir_pct = (gob["DAT_00575c10"][iVar14 // 2] * 100) // local_170
            gir_str = _itoa(gir_pct)
            _strcpy_to_buf(gir_str)
            _strcpy_to_buf("%")
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, 0x68, len(buf_str))
            
        elif local_160 == 4:
            # "Average Putts"
            _strcpy_to_buf(STR_AVERAGE_PUTTS)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476650(gob["DAT_00821ee8"], buf_str, STATS_LEFT, 0x68, len(buf_str))
            
            gob["DAT_0051a068"][0] = 0
            avg_putts = (gob["DAT_00575c12"][iVar14 // 2] * 100) // local_170
            FUN_0042dd50(avg_putts)
        
        # Draw label for bottom section
        _strcpy_to_buf("")
        buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
        FUN_00476700(gob["DAT_00821ee8"], buf_str, STATS_RIGHT, 0x68, len(buf_str))
        
        # ── Default section: Fun Factor display ──
        _strcpy_to_buf("")
        buf_str = STR_FUN_FACTOR
        FUN_00476650(gob["DAT_00821ee8"], buf_str, HOLE_LABEL_X, 0x53, len(buf_str))
        
        # Fun factor calculation
        if gob["DAT_00575ad4"][iVar14 // 4] != 0:
            fun_val = (gob["DAT_00575c08"][iVar14 // 2] * 100) // \
                      (gob["DAT_00575ad4"][iVar14 // 4] // 2 + 4 + iVar10)
            gob["DAT_0051a068"][0] = 0
            fun_str = _itoa(fun_val)
            _strcpy_to_buf(fun_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            
            # Rating text
            if fun_val < 0:
                rating_str = ""
            elif fun_val // 0x14 == 0:
                rating_str = STR_FAIR
            elif fun_val // 0x14 == 1:
                rating_str = STR_GOOD
            elif fun_val // 0x14 == 2:
                rating_str = STR_VERY_GOOD
            else:
                rating_str = STR_OUTSTANDING
            
            if rating_str:
                _strcpy_to_buf(rating_str)
            
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00476700(gob["DAT_00821ee8"], buf_str, 0x164, 0x53, len(buf_str))
        
        # ── Length / Accuracy / Imagination ──
        FUN_00476650(gob["DAT_00821ee8"], STR_LENGTH, HOLE_LABEL_X, 0x68, len(STR_LENGTH))
        FUN_00476650(gob["DAT_00821ee8"], STR_ACCURACY, HOLE_LABEL_X, 0x7d, len(STR_ACCURACY))
        FUN_00476650(gob["DAT_00821ee8"], STR_IMAGINATION, HOLE_LABEL_X, 0x92, len(STR_IMAGINATION))
        
        # Display difficulty comparison
        # (abbreviated — see full C for local_124/local_128/local_12c logic)
        
        # ── Comments section ──
        _strcpy_to_buf("")
        buf_str = STR_COMMENTS
        FUN_00476650(gob["DAT_00821ee8"], buf_str, HOLE_LABEL_X, 0xca, len(buf_str))
        
        # "Under Construction" blinking text
        if gob["DAT_00575ab0"][iVar14] == 0:
            FUN_00473f60(gob["DAT_00821284"], gob["DAT_00519cd4"], 0, local_178, 0)
            DVar4 = timeGetTime()
            if (DVar4 & 0x200) != 0:
                FUN_00476310(0x80007d08, 0xFFFFFFFF, 2, 2)
                FUN_00476700(gob["DAT_00821ee8"], STR_UNDER_CONSTRUCTION, 400, local_178,
                             len(STR_UNDER_CONSTRUCTION))
            local_178 += gob["DAT_00821274"]
        
        # ── Stroke distribution histogram ──
        # Copy 64 hole stat shorts into local array
        hole_stats = []
        base = iVar14 // 2  # short offset
        for j in range(0x40):
            hole_stats.append(gob["DAT_00575b88"][base + j])
        
        remaining = 5  # local_168
        prev_high_idx = 0  # local_144
        
        while remaining > 0:
            max_val = 0
            max_idx = 0
            for j in range(0x40):
                if j < 0x32 and max_val < hole_stats[j]:
                    max_val = hole_stats[j]
                    max_idx = j
            
            if max_val != 0 and iVar10 != 0:
                FUN_00473f60(gob["DAT_00821284"], gob["DAT_00519cd4"], 0, local_178, 0)
                gob["DAT_0051a068"][0] = 0
                
                pct = (hole_stats[max_idx] * 100) // iVar10
                pct_str = _itoa(pct)
                _strcpy_to_buf(pct_str)
                _strcpy_to_buf("%")
                
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                
                # Draw histogram bar
                FUN_00469b00(max_idx,
                             gob["DAT_00575c1c"][(max_idx + hole_id * 0x104) * 2] & 0x3fff,
                             hole_id * 0xb, 0x98)
                
                # Update display
                # (simplified)
            
            remaining -= 1
            prev_high_idx = max_idx
        
        # ── Footer and event loop ──
        FUN_00473f60(gob["DAT_008212dc"], gob["DAT_00519cd4"], 0, local_178, 0)
        iVar10 = local_178 + 8
        FUN_00473e60(gob["DAT_00519cd4"], 0x23e, iVar10, 0)
        FUN_00480c80(0)
        
        if bVar2:
            FUN_0045bf80(10, 0)
            FUN_00483d30()
            bVar2 = False
        
        FUN_0045bf80(1, 0)
        
        # ── Mouse tracking for popup display ──
        mouse_x, mouse_y = 0, 0
        FUN_0047ab50(mouse_x, mouse_y)
        
        uVar8 = 5 if local_170 != 0 else 3  # display cycle length
        uVar9 = timeGetTime()
        bVar20 = bVar3
        
        while local_160 == (uVar9 >> 10) % uVar8:
            # Check if mouse is in the panel area
            in_panel = (0x23e <= mouse_x <= 0x269) and (iVar10 <= mouse_y <= local_178 + 0x34)
            
            if not in_panel:
                if bVar3:
                    bVar3 = False
                    bVar20 = False
            elif not bVar3:
                bVar3 = True
                bVar20 = True
                FUN_00473e60(gob["DAT_00519cd4"], 0x23e, iVar10, 0)
                FUN_00480c80(0)
            
            FUN_0045c030()
            
            if gob["DAT_00822d68"] != 0:
                gob["DAT_0053df54"] = 0
                FUN_0045c150()
                return
            
            iVar12 = FUN_0045ae70()
            if iVar12 != 0:
                gob["DAT_0053df54"] = 0
                FUN_0045c150()
                return
            
            FUN_0045bf80(1, 0)
            FUN_0047ab50(mouse_x, mouse_y)
            uVar9 = timeGetTime()
        
        DVar4 = timeGetTime()
        local_160 = (DVar4 >> 10) % uVar8
        bVar3 = bVar20


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0043B610 — Building Placement / Save-Game Browser
# ═══════════════════════════════════════════════════════════════════════════════

def FUN_0043b610(param_1: int, param_2: int) -> int:
    """Save-game / championship course selection browser.
    
    Original: undefined4 FUN_0043b610(int param_1, int param_2)
    
    Args:
        param_1: 0 = show "While Browsing" cursor initially
        param_2: 0 = load saved game (*.sve), non-zero = championship course (*.cse)
    
    Returns:
        0 = cancelled / new game, 1 = file selected and loaded
    """
    gob = _get_globals()
    
    if param_1 == 0 and param_2 == 0:
        FUN_0040b4a0(STR_WHILE_BROWSING)
    
    local_9f0 = gob["DAT_005a34e0"]
    local_9ec = gob["DAT_0059e7b8"]
    
    # Copy "While Browsing" string to local buffer
    local_474 = bytearray(128)
    _strcpy_to_buf(STR_WHILE_BROWSING)
    for i in range(min(128, len(STR_WHILE_BROWSING) + 1)):
        local_474[i] = gob["DAT_0051a068"][i]
    
    # Button coordinates array
    local_9e8 = [
        600,      # 0: left column label
        0x2e4,    # 1: Cancel button X
        0x30a,    # 2: Scroll up X
        0x30a,    # 3: Scroll down X
        0x29e,    # 4: Delete button X
        0x208,    # +5: label Y
        0x212,    # Cancel Y
        100,      # Scroll up Y
        0x17c,    # Scroll down Y
        0x208,    # Delete Y
    ]
    
    FUN_004a55d2(0, 0x2c, 0xf, 0, 0)
    
    local_4 = 0
    local_a08 = -1  # selected index
    local_a0c = 0    # scroll offset
    
    FUN_00474ae0()
    local_4 = 1
    
    # Initialize UI elements
    FUN_00475840("interface/Title/LoadGame/MO", 0, 0, 0x100, 2)
    FUN_00473bf0(0, 600, 0x208, 0x46, 0x46, 1, 1)
    FUN_00473bf0(0, 0x2e4, 0x212, 0x3c, 0x3c, 1, 1)
    FUN_00473bf0(0, 0x30a, 100, 0x16, 0x28, 1, 1)
    FUN_00473bf0(0, 0x30a, 0x17c, 0x16, 0x28, 1, 1)
    FUN_00473bf0(0, 0x29e, 0x208, 0x46, 0x46, 1, 1)
    FUN_00473bf0(0, 600, 0x1b3, 0x46, 0x46, 1, 1)
    FUN_00473bf0(0, 0x29e, 0x1b3, 0x46, 0x46, 1, 1)
    FUN_00475840("interface/Title/LoadGame", 0, 0, 0x100, 2)
    FUN_00473bf0(0, 600, 0x208, 0x46, 0x46, 1, 1)
    FUN_00473bf0(0, 0x2e4, 0x212, 0x3c, 0x3c, 1, 1)
    FUN_00473bf0(0, 0x30a, 100, 0x16, 0x28, 1, 1)
    FUN_00473bf0(0, 0x30a, 0x17c, 0x16, 0x28, 1, 1)
    FUN_00473bf0(0, 0x29e, 0x208, 0x46, 0x46, 1, 1)
    
    gob["DAT_00822d68"] = 0
    
    # ── Main UI loop ──
    while True:
        FUN_004762d0(gob["DAT_00519a40"], 0, 0, 0)
        FUN_00475c60(gob["DAT_00519cd4"], 0, 0, 0, 0, 800, 600)
        
        if local_a08 == -1:
            FUN_00473e60(gob["PTR_DAT_004c1570"], 600, 0x208, 0)
            FUN_00473e60(gob["PTR_DAT_004c1570"], 0x29e, 0x208, 0)
        
        # ── Find matching files ──
        if param_2 == 0:
            FUN_00404b70(STR_LOAD_PREVIOUS_GAME, BTN_NEW_GAME_X, BTN_NEW_GAME_Y, COLOR_WHITE)
            _strcpy_to_buf(STR_SAVED_GAMES)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            iVar3 = FUN_0043d2a0(buf_str, gob["DAT_004e9a84"], STR_WHILE_BROWSING)
        else:
            FUN_00404b70(STR_SELECT_CHAMPIONSHIP, BTN_NEW_GAME_X, BTN_NEW_GAME_Y, COLOR_WHITE)
            _strcpy_to_buf(STR_THEMES_CHAMPIONSHIP)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            iVar3 = FUN_0043d2a0(buf_str, gob["DAT_004e9a84"], gob["DAT_004e9a84"])
        
        FUN_004762d0(gob["DAT_0051b360"], 0, 0, 0)
        
        local_9f4 = iVar3 - 0x10  # max visible items
        iVar10 = 0x74
        if local_9f4 < local_a0c:
            local_a0c = local_9f4
        if local_a0c < 0:
            local_a0c = 0
        
        # ── Scrollbar ──
        if iVar3 != 0:
            iVar4 = (local_a0c * 0xe4) // iVar3
            iVar5 = FUN_00467130(iVar3 - local_a0c, 0, 0x10, 0, 0xe4 - iVar4)
            uVar6 = FUN_00467130((iVar5 * 0xe4) // iVar3)
            FUN_00480b00(0x30d, iVar4 + 0x93, 6, uVar6, 0x80007fff)
        
        # ── Draw file list ──
        if local_a0c < local_a0c + 0x10:
            file_idx = local_a0c
            iVar10 = 0x74
            while file_idx < local_a0c + 0x10 and file_idx < iVar3:
                filename = gob["DAT_0080b130"][file_idx]
                
                if filename.startswith("&"):
                    # Handle autosave
                    _strcpy_to_buf("")  # clear
                    _strcpy_to_buf(STR_AUTOSAVE)
                    
                    # Append path info
                    full_path = filename
                    _strcpy_to_buf(full_path)
                    
                    _strcpy_to_buf("  [saved]")
                    
                    FUN_0040b9b0(filename, 0, 1, 0)
                    
                    # Rebuild display string
                    _strcpy_to_buf("")
                    _strcpy_to_buf(full_path)
                    _strcpy_to_buf("  [saved]")
                    
                    buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                    _strcpy_to_buf(buf_str)
                
                # Highlight selected item
                if local_a08 == file_idx:
                    FUN_00480b00(0x136, iVar10 - 1, 0x1c8, 0xf, 0x80007b20)
                
                # Draw filename
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                FUN_004049d0(buf_str, 0x140, iVar10, COLOR_WHITE)
                
                iVar10 += 0x10
                file_idx += 1
        
        if local_a0c + 0x10 < iVar3:
            FUN_004049d0(STR_MORE, 0x140, iVar10, COLOR_WHITE)
        
        # ── Detail panel for selected item ──
        if local_a08 != -1 and local_a08 < iVar3:
            selected_path = gob["DAT_0080b130"][local_a08]
            
            # Draw hole count
            FUN_00404b70(STR_HOLES, 0x42, 0x7c, COLOR_GREEN)
            # Par info
            FUN_00404b70(gob["DAT_004c88f8"], 0x7d, 0x7c, COLOR_GREEN)
            # Holes label
            FUN_00404b70(gob["DAT_004c88f0"], 0xb8, 0x7c, COLOR_GREEN)
            
            # Number of holes
            gob["DAT_0051a068"][0] = 0
            holes_str = _itoa(gob["DAT_005685f0"] - 1)
            _strcpy_to_buf(holes_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0x42, 0x92, COLOR_WHITE)
            
            # Fun rating
            gob["DAT_0051a068"][0] = 0
            fun_str = _itoa(gob["DAT_0059aafc"])
            _strcpy_to_buf(fun_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0x7d, 0x92, COLOR_WHITE)
            
            # Length/Accuracy/Imagination ratings
            gob["DAT_0051a068"][0] = 0
            len_str = _itoa(gob["DAT_0058d36c"])
            _strcpy_to_buf(len_str)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xb8, 0x92, COLOR_WHITE)
            
            # Revenue
            FUN_00404b70(gob["DAT_004c88e8"], 0x4b, 0xa9, COLOR_CYAN)
            gob["DAT_0051a068"][0] = 0
            FUN_0042dc00(gob["DAT_00571fd4"] * 100)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xa1, 0xa9, COLOR_WHITE)
            
            # Skill ratings
            FUN_004049d0(STR_FUN_RATING, 0x30, 0xc0, COLOR_CYAN)
            FUN_004049d0(STR_LENGTH_SKILL, 0x30, 0xd2, COLOR_CYAN)
            FUN_004049d0(STR_ACCURACY_SKILL, 0x30, 0xe4, COLOR_CYAN)
            FUN_004049d0(STR_IMAGINATION, 0x30, 0xf6, COLOR_CYAN)
            
            # Rating values
            gob["DAT_0051a068"][0] = 0
            FUN_0042dd50(gob["DAT_0059ae78"])
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xb8, 0xc0, COLOR_YELLOW)
            
            gob["DAT_0051a068"][0] = 0
            FUN_0042dd50(gob["DAT_005a882c"])
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xb8, 0xd2, COLOR_CYAN)
            
            gob["DAT_0051a068"][0] = 0
            FUN_0042dd50(gob["DAT_0056949c"])
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xb8, 0xe4, COLOR_CYAN)
            
            gob["DAT_0051a068"][0] = 0
            FUN_0042dd50(gob["DAT_005a636c"])
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_00404b70(buf_str, 0xb8, 0xf6, COLOR_CYAN)
            
            # Per-hole breakdown
            FUN_00404b70(gob["DAT_004c88a8"], 0x42, 0x10e, COLOR_GREEN)
            FUN_00404b70(gob["DAT_004c88f8"], 0x7d, 0x10e, COLOR_GREEN)
            FUN_00404b70(gob["DAT_004c88f0"], 0xb8, 0x10e, COLOR_GREEN)
            
            # List hole-by-hole par & scores
            for hole_num in range(1, gob["DAT_005685f0"]):
                y_pos = 0x11e + (hole_num - 1) * 0x11
                
                gob["DAT_0051a068"][0] = 0
                num_str = _itoa(hole_num)
                _strcpy_to_buf(num_str)
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                FUN_00404b70(buf_str, 0x42, y_pos, COLOR_WHITE)
                
                # Par
                par_addr = (hole_num - 1) * 0x104  # short offset into DAT_00575cbc
                # (access via gob arrays)
                gob["DAT_0051a068"][0] = 0
                # hole_data[hole_num-1] = ...
                buf_str = ""
                FUN_00404b70(buf_str, 0x7d, y_pos, COLOR_WHITE)
                
                # Score (course record min)
                gob["DAT_0051a068"][0] = 0
                buf_str = ""
                FUN_00404b70(buf_str, 0xb8, y_pos, COLOR_WHITE)
            
            # Theme / course name
            gob["DAT_0051a068"][0] = 0
            _strcpy_to_buf("  " + STR_GARY_GOLF)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_004049d0(buf_str, 0x184, 0x1ba, COLOR_GOLD)
            
            _strcpy_to_buf(STR_DESIGNED_BY)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            _strcpy_to_buf(STR_GARY_GOLF)
            buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
            FUN_004049d0(buf_str, 0x184, 0x1ca, COLOR_GOLD)
            
            # Course record display
            if gob["DAT_0056a524"][0] != 0:
                _strcpy_to_buf(STR_COURSE_RECORD)
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                
                record_str = _itoa(gob["DAT_0056a524"][0])
                _strcpy_to_buf(record_str)
                _strcpy_to_buf(STR_STROKES)
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                
                FUN_0045b9f0(0x14)
                buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                FUN_004049d0(buf_str, 0x184, 0x1da, COLOR_GOLD)
        
        FUN_00480c80(0)
        
        # ── Mouse hover detection and button interaction ──
        iVar4 = 0
        iVar10 = -1  # current hover button
        
        while True:
            FUN_0045bf80(2, 0)
            FUN_0045c030()
            
            mouse_x, mouse_y = 0, 0
            FUN_0047ab50(mouse_x, mouse_y)
            
            iVar12 = -1
            
            # Hit-test buttons
            if FUN_00467170(mouse_x - 0x279, mouse_y - 0x22b) < 0x1a:
                iVar12 = 0  # Load/Select button
            if FUN_00467170(mouse_x - 0x301, mouse_y - 0x22c) < 0x18:
                iVar12 = 1  # Cancel button
            if FUN_00467170(mouse_x - 0x310, mouse_y - 0x78) < 0x14:
                iVar12 = 2  # Scroll up
            if FUN_00467170(mouse_x - 0x310, mouse_y - 400) < 0x14:
                iVar12 = 3  # Scroll down
            if FUN_00467170(mouse_x - 0x2c0, mouse_y - 0x22b) < 0x17:
                iVar12 = 4  # Delete button
            
            if iVar12 == iVar10:
                iVar4 += 1
                if iVar4 > 0x1e and iVar12 != -1:
                    # Hover tooltip
                    gob["DAT_0051a068"][0] = 0
                    if iVar12 == 0:
                        if local_a08 != -1:
                            tooltip = ""
                        else:
                            tooltip = ""
                    elif iVar12 == 1:
                        _strcpy_to_buf(STR_CANCEL)
                    elif iVar12 == 4:
                        _strcpy_to_buf(STR_DELETE)
                    
                    if iVar4 == 0x1f:
                        FUN_0040ca10(local_9e8[iVar12] + 6,
                                     local_9e8[iVar12 + 5] + 0xe,
                                     0x30, 0x10, 0)
                    
                    buf_str = bytes(gob["DAT_0051a068"]).rstrip(b'\x00').decode('utf-8', errors='replace')
                    FUN_00404bc0(buf_str,
                                 local_9e8[iVar12] + 0x1e,
                                 local_9e8[iVar12 + 5] + 0x10,
                                 COLOR_GOLD)
                    FUN_00480c80(0)
            else:
                if iVar10 != -1:
                    FUN_00473e60(gob["PTR_DAT_004c1570"],
                                 local_9e8[iVar10],
                                 local_9e8[iVar10 + 5], 0)
                if iVar12 != -1:
                    FUN_00473e60(gob["PTR_DAT_004c1570"],
                                 local_9e8[iVar12],
                                 local_9e8[iVar12 + 5], 0)
                if local_a08 == -1:
                    FUN_00473e60(gob["PTR_DAT_004c1570"], 600, 0x208, 0)
                    FUN_00473e60(gob["PTR_DAT_004c1570"], 0x29e, 0x208, 0)
                FUN_00480c80(0)
                iVar4 = 0
            
            if gob["DAT_00822d68"] != 0:
                break  # mouse click
            
            iVar5 = FUN_0045ae70()
            iVar10 = iVar12
            if iVar5 != 0:
                break  # key press
        
        # ── Handle selection ──
        if gob["DAT_00822d68"] == 0:
            iVar10 = FUN_0045ae50()
            if iVar10 != 0x1b:  # ESC
                # Not ESC — process as navigation
                pass
            else:
                iVar12 = 1  # Cancel
        else:
            # Mouse click detected
            if iVar12 == -1:
                # Click outside buttons — check if on file list
                if mouse_x > 0x140 and mouse_y > 0x73:
                    local_a08 = ((mouse_y - 0x74 + 0xf) >> 4) + local_a0c
                    if local_a08 < local_a0c + 0x10:
                        if local_a08 < iVar3:
                            # Select file
                            if param_2 == 0:
                                FUN_0040b9b0(gob["DAT_0080b130"][local_a08], 0, 0, 0)
                            else:
                                _strcpy_to_buf(STR_THEMES_CHAMPIONSHIP)
                                _strcpy_to_buf(gob["DAT_0080b130"][local_a08])
                                FUN_0040b840(1)
                        else:
                            local_a08 = -1
                            FUN_00473e60(gob["PTR_DAT_004c1570"], 600, 0x208, 0)
                            FUN_00473e60(gob["PTR_DAT_004c1570"], 0x29e, 0x208, 0)
                    else:
                        local_a0c = FUN_00467130(local_a0c + 4, 0, local_9f4)
                else:
                    local_a08 = -1
                    FUN_00473e60(gob["PTR_DAT_004c1570"], 600, 0x208, 0)
                    FUN_00473e60(gob["PTR_DAT_004c1570"], 0x29e, 0x208, 0)
                
                # Restart UI loop
                continue
            
            # Button was clicked
            gob["DAT_00822d68"] = 0
            
            if iVar12 == 0:
                # Load / Select button
                pass  # jumps to case D below
            
            elif iVar12 == 1:
                # Cancel
                gob["DAT_0059e7b8"] = local_9ec
                gob["DAT_005a34e0"] = local_9f0
                if param_1 != 0 or param_2 != 0:
                    pass  # goto cleanup
                else:
                    pass  # goto new game
            
            elif iVar12 == 2:
                # Scroll up
                local_a0c = FUN_00467130(local_a0c - 4, 0, local_9f4)
            
            elif iVar12 == 3:
                # Scroll down
                local_a0c = FUN_00467130(local_a0c + 4, 0, local_9f4)
            
            elif iVar12 == 4:
                # Delete file
                _strcpy_to_buf(STR_ARE_YOU_SURE)
                
                if param_2 != 0:
                    _strcpy_to_buf(STR_THEMES_CHAMPIONSHIP)
                
                _strcpy_to_buf(gob["DAT_0080b130"][local_a08])
                
                _strcpy_to_buf(STR_YES_DELETE)
                
                iVar3 = FUN_0046d6e0(400, 100, 1, 1, 0)
                if iVar3 == 0:
                    # User confirmed Yes
                    if param_2 == 0:
                        _strcpy_to_buf(STR_SAVED_GAMES)
                    else:
                        _strcpy_to_buf(STR_THEMES_CHAMPIONSHIP)
                    
                    _strcpy_to_buf(gob["DAT_0080b130"][local_a08])
                    FUN_004a64b8(gob["DAT_0080b130"][local_a08])
        
        # ── Restart loop ──
        # (The switch/case flow continues the outer while True loop)
    
    # ── Case D: file selected / load confirmed ──
    # (This code is reached via the 'case 0' or mouse click on file)
    gob["DAT_005a34e0"] = local_9f0
    gob["DAT_0059e7b8"] = local_9ec
    
    if local_a08 < 0 or local_a08 >= iVar3:
        if param_1 == 0 and param_2 == 0:
            gob["DAT_005a34e0"] = local_9f0
            gob["DAT_0059e7b8"] = local_9ec
            FUN_0040b9b0("While Browsing.sve", 1, 0, 0)
        
        FUN_00483d30()
        local_4 &= 0xFFFFFF00
        FUN_00474c40()
        local_4 = 0xFFFFFFFF
        FUN_004a5713(0, 0x2c, 0xf, 0)
        return 0  # cancelled / new game
    
    else:
        # Load selected file
        FUN_004762d0(gob["DAT_00519928"], 0, 0, 0)
        FUN_004049d0(STR_LOADING, 0x226, 0x1c8, COLOR_GOLD)
        FUN_004762d0(gob["DAT_0051b360"], 0, 0, 0)
        FUN_00480c80(0)
        
        if param_2 == 0:
            FUN_0040b9b0(gob["DAT_0080b130"][local_a08], param_1 == 0, 0, 0)
        else:
            _strcpy_to_buf(STR_THEMES_CHAMPIONSHIP)
            _strcpy_to_buf(gob["DAT_0080b130"][local_a08])
            FUN_0040b840(0)
        
        # Compare string to check if theme changed
        local_buf = STR_WHILE_BROWSING
        saved_buf = bytes(gob["DAT_00567328"].encode('utf-8')) if isinstance(gob["DAT_00567328"], str) else b""
        
        # String comparison
        iVar3 = 0
        a = local_474
        b = gob["DAT_00567328"]
        if isinstance(b, str):
            b = b.encode('utf-8')
        
        for i in range(min(len(a), len(b))):
            if a[i] != b[i]:
                iVar3 = -1 if a[i] < b[i] else 1
                break
            if a[i] == 0:
                break
        else:
            if len(a) != len(b):
                iVar3 = -1 if len(a) < len(b) else 1
        
        if iVar3 != 0:
            FUN_004658b0(1)  # Theme changed
        
        FUN_00483d30()
        local_4 &= 0xFFFFFF00
        FUN_00474c40()
        local_4 = 0xFFFFFFFF
        FUN_004a5713(0, 0x2c, 0xf, 0)
        return 1  # file loaded

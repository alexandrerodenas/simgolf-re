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

from engine_stubs import add_money, apply_terrain, begin_draw, begin_screen, blit_list, blit_surface, calculate_score, clamp_editor_val, clamp_int, compute_grid_offset, compute_visibility, create_scrollbar, draw_3d_surface, draw_minimap, draw_rect, draw_save_text, draw_surface, draw_surface_shadow, draw_text, draw_text_centered, draw_text_left, draw_tile_preview, draw_title_text, edit_golfer, end_draw, execute_shot, fill_debug_list, fill_surface, game_delay, game_delay_cancel, get_adjusted_tick, get_hole_index, get_mouse_pos, get_tick_count, itoa, load_debug_script, load_file, load_palette, open_file_dialog, play_sound_ex, pop_render_target, push_render_target, reset_random, resize_edit, set_clip_rect, set_color, set_hole_id, set_loading_mode, set_ui_mode, show_course_rating, show_cursor, show_message, show_speech_bubble, sort_debug_list, spawn_animal, spawn_money_particles, spawn_particles, spawn_sound_particles, spend_money, update_display, update_golfer_mood
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


def timeGetTime() -> int:
    """Get current system tick count (ms). Stub."""
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_00427380 — Course Editor / Hole Completion Handler
# ═══════════════════════════════════════════════════════════════════════════════

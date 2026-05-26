"""
SimGolf Reverse Engineering — UI Screen Management (FUN_004659A0)
===================================================================
Translation of FUN_004659a0 from Ghidra decompiled C.

This function initialises the UI screens for themes, celebrities, and
pro golfers.  It loads data from .dta files (Themes/Standard/*.dta,
celebrities.dta, progolfers.dta) and populates the corresponding
global arrays.

Key strings from original decompile:
  "SAVE GAME: edit name then press ENTER"
  "Game Saved!"
  "Invalid File Name"
  "saved games"
  "Loading..."

Key globals:
  DAT_0053a454  — Theme palette data array (0x4e2 ints)
  DAT_0080b130  — Course theme names array (stride 100 bytes)
  DAT_00838228  — Theme index array (stride 0x43 ints)
  DAT_00838220  — Theme title buffer
  DAT_0055d758  — Celebrity data array (stride 0x25, initialized to 0xff)
  DAT_0058dd70  — Pro golfer data array (stride 0x38, initialized to 0xff)
  DAT_0051a068  — Global string buffer
  DAT_0059e7b8  — Game state flags
  DAT_00567328  — "Data" path string
  DAT_0057e1a8  — Default pro golfer skill array (10 bytes)
  DAT_004e9a84  — File system handle
  DAT_004d3884  — File system handle (secondary)
  DAT_004c76a8  — Token parser handle
  DAT_0053a454  — Theme colour data
  DAT_00838a9c  — "OpeningDay" string search result

Strings:
  s_Themes__004c84e8       — "Themes\\"
  s_Joe_Pro_glf_004e1920   — "Joe Pro.glf"
  s_I_M_Picky_glf_004e1910 — "I.M. Picky.glf"
  s_Ivana_Richman_glf_004e18fc — "Ivana Richman.glf"
  s_J_P_Bigdome_glf_004e18ec — "J.P. Bigdome.glf"
  s__celebrities_dta_004e18ac — "celebrities.dta"
  s__progolfers_dta_004e1868 — "progolfers.dta"
  s_OpeningDay_004e18c0     — "OpeningDay"
  s___file_not_found__004e1878 — "  -- file not found --"
  s_Gary_Golf_004e06d8      — "Gary Golf"
"""

from __future__ import annotations

from typing import Final, List, Optional

# ── Constants ───────────────────────────────────────────────────────────────────
THEME_NAME_LEN: Final[int] = 100         # Stride for course theme names
THEME_DATA_COUNT: Final[int] = 0x4e2    # Number of theme colour entries
THEME_INDEX_STRIDE: Final[int] = 0x43   # Stride for theme index array
CELEB_STRIDE: Final[int] = 0x25         # Stride for celebrity data
PROGOLFER_STRIDE: Final[int] = 0x38     # Stride for pro golfer data
THEME_MAX: Final[int] = 100             # Max theme entries
CELEB_MAX: Final[int] = 300             # Approx max celebrities
PROGOLFER_MAX: Final[int] = 100         # Approx max pro golfers

# ── String table ────────────────────────────────────────────────────────────────
STR_THEMES: Final[str] = "Themes"
STR_BACKSLASH: Final[str] = "\\"
STR_THEMES_PATH: Final[str] = "Themes\\"
STR_DATA: Final[str] = "Data"
STR_CELEBRITIES_DTA: Final[str] = "celebrities.dta"
STR_PROGOLFERS_DTA: Final[str] = "progolfers.dta"
STR_OPENING_DAY: Final[str] = "OpeningDay"
STR_FILE_NOT_FOUND: Final[str] = "  -- file not found --"
STR_STANDARD_TXT: Final[str] = "Themes/Standard/_.txt"
STR_STANDARD_CELEBRITIES: Final[str] = "Themes/Standard/celebrities.dta"
STR_STANDARD_PROGOLFERS: Final[str] = "Themes/Standard/progolfers.dta"

# Golfer filenames (player template names)
STR_GOLFER_FILES: Final[List[str]] = [
    "Joe Pro.glf",
    "I.M. Picky.glf",
    "Ivana Richman.glf",
    "J.P. Bigdome.glf",
]

# ── Golfer skill IDs ────────────────────────────────────────────────────────────
GOLFER_SKILL_IDS: Final[List[int]] = [0x4c, 0x4d, 0x4e, 0x4f]


# ═══════════════════════════════════════════════════════════════════════════════
#  GameState — globals modified by FUN_004659a0
# ═══════════════════════════════════════════════════════════════════════════════

class GameState:
    """Encapsulates global arrays modified by FUN_004659a0."""

    def __init__(self) -> None:
        # Theme palette data (DAT_0053a454 — 0x4e2 ints)
        self.theme_palette: List[int] = [0] * THEME_DATA_COUNT

        # Course theme names (DAT_0080b130 — up to 100 entries, stride 100)
        self.theme_names: List[str] = [""] * THEME_MAX

        # Theme index array (DAT_00838228 — stride 0x43 ints)
        self.theme_index: List[int] = [-1] * ((0x838a88 - 0x838228) // 0x43)

        # Theme title buffer (DAT_00838220)
        self.theme_title: str = ""

        # Flag indicating Standard themes were loaded
        self.standard_theme_loaded: bool = False

        # Celebrity data (DAT_0055d758 — stride 0x25)
        self.celebrities: List[bytearray] = [
            bytearray(CELEB_STRIDE) for _ in range(CELEB_MAX)
        ]

        # Pro golfer data (DAT_0058dd70 — stride 0x38)
        self.pro_golfers: List[bytearray] = [
            bytearray(PROGOLFER_STRIDE) for _ in range(PROGOLFER_MAX)
        ]

        # Pro golfer count
        self.pro_golfer_count: int = 0

        # Game state flags (DAT_0059e7b8)
        self.game_flags: int = 0

        # "OpeningDay" search result offset
        self.opening_day_offset: int = -1

        # Default pro golfer skill data (DAT_0057e1a8 — 10 bytes)
        self.default_skills: List[int] = [0] * 10


# ═══════════════════════════════════════════════════════════════════════════════
#  Helper stubs
# ═══════════════════════════════════════════════════════════════════════════════

def _register_golfer_file(filename: str, skill_id: int, unknown: int) -> None:
    """FUN_00437fa0 — Register a golfer template file with the game."""
    pass


def _file_exists(filename: str, handle: object) -> int:
    """FUN_0043d2a0 — Check if a file exists in the data directory.

    Returns 1 if found, 0 if not found.
    """
    return 0


def _open_file(filename: str, handle: object) -> int:
    """FUN_004a614d — Open a file.

    Returns 0 on success, non-zero on failure.
    """
    return -1


def _read_line(buf: bytearray, max_len: int, handle: object) -> int:
    """FUN_004a65ee — Read a line from a file into buf.

    Returns non-zero if a line was read.
    """
    return 0


def _tokenise_string(s: str, parser_handle: object) -> str:
    """FUN_004a678b — Parse/tokenise a string; return the next token.

    Pass empty string or None to reset.
    """
    return ""


def _close_file(handle: object) -> None:
    """FUN_004a609f — Close a previously opened file."""
    pass


def _show_file_not_found(text: str, x: int, y: int) -> None:
    """FUN_0046de70 — Display a 'file not found' message."""
    pass


def _str_str(haystack: str, needle: str) -> Optional[int]:
    """strstr — Find substring."""
    idx: int = haystack.find(needle)
    return idx if idx >= 0 else None


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_004659a0 — UI Screen Initialisation
# ═══════════════════════════════════════════════════════════════════════════════

def fun_004659a0(state: GameState, text_buf: List[str]) -> None:
    """Initialise UI screens: themes, celebrities, and pro golfers.

    Loads golfer template files, theme palette data, celebrity definitions,
    and pro golfer definitions from the game data directory.

    This function must be called once at game startup (or when the Themes
    screen is first opened).
    """
    # ── 1. Register default golfer templates ─────────────────────────
    for filename, skill_id in zip(STR_GOLFER_FILES, GOLFER_SKILL_IDS):
        _register_golfer_file(filename, skill_id, 0xffffffff)

    # ── 2. Clear theme palette ───────────────────────────────────────
    state.theme_palette = [0] * THEME_DATA_COUNT

    # ── 3. Load theme data ───────────────────────────────────────────
    state.game_flags &= 0xefffffff

    # Build path: "Themes\\"
    text_buf.clear()
    text_buf.append(STR_THEMES_PATH)

    # Build path: STR_THEMES + "\\Data"
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH + STR_DATA)

    # Try to open "Themes/Standard/_.txt"
    i_var5: int = _file_exists(STR_THEMES_PATH, None)
    if i_var5 == 0:
        _file_exists(STR_STANDARD_TXT, None)
        state.game_flags |= 0x10000000
        state.standard_theme_loaded = True

    # Copy theme palette data from DAT_0080b130
    for i in range(THEME_DATA_COUNT):
        state.theme_palette[i] = i  # placeholder — original copies from DAT_0080b130

    # Search for "OpeningDay" theme
    opening_day_found: bool = False
    for theme_idx in range(THEME_MAX):
        if theme_idx < len(state.theme_names) and STR_OPENING_DAY in state.theme_names[theme_idx]:
            opening_day_found = True
            break

    state.opening_day_offset = 0 if opening_day_found else -1

    # ── 4. Initialise theme index array ───────────────────────────────
    for i in range(len(state.theme_index)):
        state.theme_index[i] = -1

    # ── 5. Set theme title ────────────────────────────────────────────
    _copy_str_to_buffer(text_buf, STR_THEMES)
    state.theme_title = text_buf[0] if text_buf else ""
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH + STR_DATA)
    state.theme_title = text_buf[0] if text_buf else ""

    # ── 6. Load celebrities ───────────────────────────────────────────
    _load_celebrities(state, text_buf)

    # ── 7. Load pro golfers ───────────────────────────────────────────
    _load_pro_golfers(state, text_buf)

    # ── 8. Apply theme data to palette ────────────────────────────────
    _apply_theme_palette(state, text_buf)


# ═══════════════════════════════════════════════════════════════════════════════
#  Celebrity loading
# ═══════════════════════════════════════════════════════════════════════════════

def _load_celebrities(state: GameState, text_buf: List[str]) -> None:
    """Load celebrity definitions from celebrities.dta.

    The file format is line-based. Lines starting with '*' are skipped.
    Each celebrity record takes 0x25 bytes.
    """
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH)
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH + STR_DATA)

    # Try opening the file
    handle: int = _open_file(STR_CELEBRITIES_DTA, None)
    if handle != 0:
        handle = _open_file(STR_STANDARD_CELEBRITIES, None)

    if handle != 0:
        # File not found
        _copy_str_to_buffer(text_buf, STR_FILE_NOT_FOUND)
        _show_file_not_found(text_buf[0], 100, 0x32)
        return

    # Initialise celebrity data to 0xff
    for celeb in state.celebrities:
        for j in range(CELEB_STRIDE):
            celeb[j] = 0xff

    # Parse the file
    celeb_data: bytearray = bytearray(256)
    celeb_idx: int = 0
    while celeb_idx < len(state.celebrities):
        ret: int = _read_line(celeb_data, 0xfa, handle)
        if ret == 0:
            break

        line: str = celeb_data.decode("ascii", errors="replace").rstrip("\x00\r\n")
        if not line or line[0] == '*':
            continue

        # Parse celebrity fields
        _parse_celebrity_line(state, celeb_idx, celeb_data, handle)
        celeb_idx += 1

    _close_file(handle)


def _parse_celebrity_line(state: GameState, idx: int,
                          line_buf: bytearray, handle: int) -> None:
    """Parse a single celebrity definition line and store in state.celebrities[idx].

    Fields (from original C, stored in 0x25-byte record):
      offset -0x21: name (string, max 32 bytes)
      offset -0x01: type (byte, from first char of name)
      offset  0x00: hair colour (byte, derived from first char)
      offset  0x01: eye colour (byte, derived from second char)
      offset  0x02: skin tone (byte, derived from third char)
      offset  0x03: clothing colour (byte, derived from fourth char)
      offset  0x04: accessory (byte, derived from optional field)
      offset  0x05..0x14: skill values (10 bytes)
    """
    if idx >= len(state.celebrities):
        return

    celeb: bytearray = state.celebrities[idx]

    # Read name from first token
    _tokenise_string("", None)  # reset parser
    name: str = _tokenise_string(line_buf.decode("ascii", errors="replace"), None)
    if len(name) > 9:
        name = name[:9]  # truncate

    # Store name at offset -0x21 (before start of record)
    # In the original C, this writes to celeb[-0x21] via pointer arithmetic
    # We'll store it in a separate name list
    celeb[0] = (ord(name[0]) - 0x41) % 0xb if name else 0

    # Read type
    type_str: str = _tokenise_string("", None)
    if type_str:
        if '1' <= type_str <= '3':
            celeb[1] = int(type_str)
        else:
            celeb[1] = 0

    # Read hair colour
    hair_str: str = _tokenise_string("", None)
    if hair_str:
        celeb[2] = (ord(hair_str[0]) - 0x30) % 10 if hair_str else 0

    # Read eye colour
    eye_str: str = _tokenise_string("", None)
    if eye_str:
        celeb[3] = (ord(eye_str[0]) - 0x30) % 10 if eye_str else 0

    # Read skin tone
    skin_str: str = _tokenise_string("", None)
    if skin_str:
        celeb[4] = (ord(skin_str[0]) - 0x30) % 10 if skin_str else 0

    # Read accessory
    acc_str: str = _tokenise_string("", None)
    if acc_str:
        celeb[5] = (ord(acc_str[0]) - 0x30) % 10 if acc_str else 0

    # Read 10 skill values
    for s in range(10):
        skill_str: str = _tokenise_string("", None)
        if skill_str and skill_str[0].isdigit():
            celeb[s + 6] = int(skill_str[0]) % 10
        elif 'A' <= skill_str[0].upper() <= 'Z':
            celeb[s + 6] = (ord(skill_str[0].upper()) - 0x41) % 10 + 10
        else:
            celeb[s + 6] = 0

    # Compute checksum
    checksum: int = sum(celeb[6:16])
    # Store checksum at offset 0x16 (as short)
    # In Python, we store it in the record


# ═══════════════════════════════════════════════════════════════════════════════
#  Pro golfer loading
# ═══════════════════════════════════════════════════════════════════════════════

def _load_pro_golfers(state: GameState, text_buf: List[str]) -> None:
    """Load pro golfer definitions from progolfers.dta.

    Format similar to celebrities.dta but with 0x38-byte records.
    """
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH)
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH + STR_DATA)

    handle: int = _open_file(STR_PROGOLFERS_DTA, None)
    if handle != 0:
        handle = _open_file(STR_STANDARD_PROGOLFERS, None)

    if handle != 0:
        _copy_str_to_buffer(text_buf, STR_FILE_NOT_FOUND)
        _show_file_not_found(text_buf[0], 100, 0x32)
        state.pro_golfer_count = 0
        return

    # Initialise pro golfer data to 0xff
    for pg in state.pro_golfers:
        for j in range(PROGOLFER_STRIDE):
            pg[j] = 0xff

    # Parse file
    line_buf: bytearray = bytearray(256)
    state.pro_golfer_count = 0

    for pg_idx in range(len(state.pro_golfers)):
        ret: int = _read_line(line_buf, 0xfa, handle)
        if ret == 0:
            break

        line: str = line_buf.decode("ascii", errors="replace").rstrip("\x00\r\n")
        if not line or line[0] == '*':
            continue

        _parse_pro_golfer_line(state, pg_idx, line_buf, handle)
        if pg_idx >= state.pro_golfer_count:
            state.pro_golfer_count = pg_idx + 1

    _close_file(handle)


def _parse_pro_golfer_line(state: GameState, idx: int,
                           line_buf: bytearray, handle: int) -> None:
    """Parse a single pro golfer definition line.

    Fields (0x38-byte record):
      offset -0x20: name (string, max 32 bytes)
      offset  0x00: type (byte)
      offset  0x01: attribute 1 (byte)
      offset  0x02: attribute 2 (byte)
      offset  0x03: attribute 3 (byte)
      offset  0x04: attribute 4 (byte)
      offset  0x05..0x14: skills (10 bytes)
      offset  0x16: checksum (short)
    """
    if idx >= len(state.pro_golfers):
        return

    pg: bytearray = state.pro_golfers[idx]

    # Reset token parser
    _tokenise_string("", None)
    name: str = _tokenise_string(
        line_buf.decode("ascii", errors="replace"), None
    )
    if len(name) > 9:
        name = name[:9]

    # Store type (first char of name -> type code)
    if name:
        pg[0] = (ord(name[0]) - 0x30) & 7

    # Read attributes
    for attr_idx in range(5):
        token: str = _tokenise_string("", None)
        if token:
            val: int = (ord(token[0]) - 0x30) % 10
            pg[attr_idx + 1] = val

    # Read skills (10 values)
    for s in range(10):
        skill_str: str = _tokenise_string("", None)
        if not skill_str:
            break
        if skill_str[0].isdigit():
            pg[s + 5] = int(skill_str[0]) % 10
        elif 'A' <= skill_str[0].upper() <= 'Z':
            pg[s + 5] = (ord(skill_str[0].upper()) - 0x41) % 10 + 10
        else:
            pg[s + 5] = 0

    # Compute checksum
    checksum_val: int = sum(pg[5:15])
    # Store checksum at offset 0x16 (2 bytes)
    pg[0x16] = checksum_val & 0xff
    pg[0x17] = (checksum_val >> 8) & 0xff


# ═══════════════════════════════════════════════════════════════════════════════
#  Theme palette application
# ═══════════════════════════════════════════════════════════════════════════════

def _apply_theme_palette(state: GameState, text_buf: List[str]) -> None:
    """Apply theme data to the palette, loading golfer skill entries."""
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH)
    _copy_str_to_buffer(text_buf, STR_THEMES_PATH + STR_DATA)

    handle: int = _open_file("", None)
    if handle >= 0:
        if False:  # Always false in original — fallback to default
            pass
        else:
            ptr: int = 0
            pg_base: int = 0
            for _ in range(handle if handle > 0 else 0):
                # This loop loads golfer skill entries from the opened file
                # Each entry: name, skills[10], checksum
                if ptr >= len(state.pro_golfers):
                    break
                # Assign default skills
                for s in range(10):
                    state.default_skills[s] = s * 10  # placeholder
                pg: bytearray = state.pro_golfers[ptr]
                for s in range(10):
                    skill_val: int = state.default_skills[s]
                    pg[s + 5] = skill_val
                checksum: int = sum(pg[5:15])
                pg[0x16] = checksum & 0xff
                pg[0x17] = (checksum >> 8) & 0xff
                ptr += 1
            state.pro_golfer_count = ptr


def _copy_str_to_buffer(text_buf: List[str], s: str) -> None:
    """Copy a string into the global text buffer (DAT_0051a068)."""
    text_buf.clear()
    text_buf.append(s)

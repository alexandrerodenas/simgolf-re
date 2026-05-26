"""
Translation of FUN_0044CFF0 — End of Year / Club Management Screen.

Original: ref/decompiled/ghidra/golf/FUN_0044cff0.c (1713 lines)

Displays the "END of YEAR" screen with:
  - Financial summary: cash reserves this year vs last year
  - Fun rating comparison (this year vs last year)
  - Skill rating comparison
  - Membership changes
  - Monthly highlights (holes opened, pathways built,
    tournaments won, board members, etc.)
  - Board concern messages if ratings are poor for 2+ years

Key globals:
  DAT_0051a068     — Global text buffer
  DAT_00519cd4     — Primary rendering surface
  DAT_0051b388     — Cash reserves history array (short array)
  DAT_0053e63c     — Fun rating history array (short array)
  DAT_005409ac     — Skill rating history array (short array)
  DAT_00520640     — Membership history array (short array)
  DAT_00568600     — Monthly highlight events array
  DAT_0055d738     — Golfer name table (stride 0x25)
  DAT_0058b388     — Current membership count
  DAT_00571fd4     — Firing/board concern counter
  DAT_0059e7b8     — Game state flags
  DAT_005a6374     — Board concern level (0-2+)
  DAT_005a6d3c     — Current game year
  DAT_00821c50     — Integer-to-string conversion buffer
  DAT_00821ee8     — UI text surface

Key strings:
  s_END_of_YEAR                = "END of YEAR"
  s_This_Year                  = "This Year"
  s_Last_Year                  = "Last Year"
  s_Highlights                 = "Highlights"
  s_Cash_reserves_have         = "Cash reserves have "
  s_increased / s_not_changed / s_decreased
  s_Your_fun_rating_has        = "Your fun rating has "
  s_Your_skill_rating_has      = "Your skill rating has "
  s_Your_membership_has        = "Your membership has "
  s_The_board_is_concerned_about_our  = Board concern messages
"""

from __future__ import annotations

from typing import Final, List, Optional, Tuple

# ── Constants ──────────────────────────────────────────────────────────────────

# Layout coordinates (from the C code)
TITLE_X: Final[int] = 0x196
TITLE_Y: Final[int] = 0x37

COLUMN_THIS_YEAR_X: Final[int] = 0x1d1
COLUMN_LAST_YEAR_X: Final[int] = 0x236
COLUMN_HEADER_Y: Final[int] = 0x5d

HIGHLIGHTS_TITLE_X: Final[int] = 0x194
HIGHLIGHTS_TITLE_Y: Final[int] = 200

CASH_LABEL_X: Final[int] = 0x12d
CASH_LABEL_Y: Final[int] = 0x73
CASH_VAL_Y: Final[int] = 0x73
CASH_VAL_X_THIS: Final[int] = 0x259
CASH_VAL_X_LAST: Final[int] = 500  # 0x1f4

FUN_LABEL_X: Final[int] = 0x12d
FUN_LABEL_Y: Final[int] = 0x87
FUN_VAL_Y: Final[int] = 0x87

SKILL_LABEL_X: Final[int] = 0x12d
SKILL_LABEL_Y: Final[int] = 0x9b
SKILL_VAL_Y: Final[int] = 0x9b

MEMBERSHIP_LABEL_X: Final[int] = 0x12d
MEMBERSHIP_LABEL_Y: Final[int] = 0xaf
MEMBERSHIP_VAL_Y: Final[int] = 0xaf

HIGHLIGHT_BOX_X: Final[int] = 0xbb
HIGHLIGHT_BOX_Y: Final[int] = 0x28
HIGHLIGHT_BOX_W: Final[int] = 0x1ad
HIGHLIGHT_BOX_H: Final[int] = 0xb0

HIGHLIGHT_SUB_X: Final[int] = 0xbb
HIGHLIGHT_SUB_Y: Final[int] = 0x176
HIGHLIGHT_SUB_W: Final[int] = 0x1ad
HIGHLIGHT_SUB_H: Final[int] = 0x37

HIGHLIGHT_SEP_X: Final[int] = 0xbb
HIGHLIGHT_SEP_Y: Final[int] = 0x123
HIGHLIGHT_SEP_W: Final[int] = 0x1ad
HIGHLIGHT_SEP_H: Final[int] = 0xf

HIGHLIGHT_TEXT_X: Final[int] = 0x194
HIGHLIGHT_TEXT_Y_BASE: Final[int] = 0xbb  # first highlight Y offset
HIGHLIGHT_LINE_HEIGHT: Final[int] = 0x28  # local_3b0 — spacing between highlights

BUTTON_X: Final[int] = 0x226
BUTTON_Y_BASE: Final[int] = 0  # iVar11 (dynamically computed)

BOARD_MSG_Y_BASE: Final[int] = 0xbb

# ── Color constants (from FUN_00404B70 / FUN_00404BC0 usage in this function) ─
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
COLOR_GREEN_INCREASE: Final[int] = -0x7fffed7c  # from comparison sVar3 < sVar4
COLOR_RED_DECREASE: Final[int] = 0x80007d08  # from sVar3 != sVar4

# ── Month names array (PTR_s_March_004c2908) ──────────────────────────────────
MONTH_NAMES: Final[List[str]] = [
    "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December",
    "January", "February",
]

# ── Event string templates ────────────────────────────────────────────────────
EVENT_HOLE_OPENED: Final[str] = "Hole %d opened"
EVENT_PATHWAY_BUILT: Final[str] = "Pathway built"
EVENT_BUYS_HOME: Final[str] = "buys a home"
EVENT_WON_MATCH: Final[str] = "Won match vs %s"
EVENT_RATED_TOP_100: Final[str] = "rated top 100"
EVENT_RATED_TOP_18: Final[str] = "rated top 18"
EVENT_JOINS_BOARD: Final[str] = "joins the board"
EVENT_HAPPY_ENDING: Final[str] = "Happy Ending"
EVENT_ADDITIONAL_LAND: Final[str] = "Additional land purchased"
EVENT_IVANA_DONATES: Final[str] = "Ivana donates a"


# ═══════════════════════════════════════════════════════════════════════════════
#  Global state proxy
# ═══════════════════════════════════════════════════════════════════════════════

_GOB: dict = {}


def _get_gob() -> dict:
    """Get (or create) the global object dictionary."""
    global _GOB
    if not _GOB:
        _GOB = {
            # Text buffer
            "text_buf": "",

            # Rendering surfaces
            "render_surface": 0,     # DAT_00519cd4
            "ui_surface": 0,         # DAT_00821ee8
            "num_buf": 0,            # DAT_00821c50

            # Financial history (short arrays — DAT_0051b388, stride 2)
            "cash_history": [0] * 500,  # cash this/last year

            # Fun rating history (DAT_0053e63c, stride 2)
            "fun_history": [0] * 500,

            # Skill rating history (DAT_005409ac, stride 2)
            "skill_history": [0] * 500,

            # Membership history (DAT_00520640, stride 2)
            "membership_history": [0] * 500,

            # Current membership count (DAT_0058b388)
            "membership_count": 0,

            # Monthly highlights (DAT_00568600, stride 2) — short event codes
            "monthly_highlights": [0] * 500,

            # Golfer name table (DAT_0055d738, stride 0x25)
            "golfer_names": [""] * 100,

            # Game year (DAT_005a6d3c)
            "game_year": 2000,

            # Board concern level (DAT_005a6374)
            "board_concern_level": 0,

            # Board concern counter (DAT_00571fd4)
            "board_concern_counter": -1,

            # Game state flags (DAT_0059e7b8)
            "game_flags": 0,

            # UI state
            "ui_done": 0,            # DAT_00822d68
            "num_years": 0,          # computed from cash_history length
            "text_color": 0,         # DAT_0058b198 (color/format code)
            "text_color2": 0,        # secondary color

            # Text surface layers
            "text_surface_current": 0,  # for clipping layer management

            # Derived indices
            "this_year_idx": 0,      # local_3e4
            "last_year_idx": 0,      # iVar11

            # Line spacing
            "line_spacing": 0x28,    # local_3b0

            # Button Y coordinate
            "button_y": 0,          # iVar11 (computed)
        }
    return _GOB


def reset_state() -> None:
    """Reset the global state (for testing / new game)."""
    global _GOB
    _GOB = {}


# ═══════════════════════════════════════════════════════════════════════════════
#  Engine call stubs
# ═══════════════════════════════════════════════════════════════════════════════


def FUN_00474ae0() -> None:
    """Clear screen / reset render state."""
    pass


def FUN_00473ab0() -> None:
    """Push/pop rendering layer."""
    pass


def FUN_00474dd0(w: int, h: int, x: int, y: int, flags: int, unk: int) -> None:
    """Set up rendering surface dimensions."""
    pass


def FUN_00475840(path: str, dest_buf: int, unk2: int, palette_size: int, mode: int) -> int:
    """Load a palette/graphic file. Returns handle or 0 on failure."""
    print(f"  [GFX] {path}")
    return 1


def FUN_00473c60(surface: int, x: int, y: int, w: int, h: int, fill: int, outline: int) -> None:
    """Draw a bordered rectangle."""
    pass


def FUN_00474cb0() -> None:
    """Flip / present buffers."""
    pass


def FUN_004481b0(sound_id: int, volume: int, pan: int, loop: int, prio: int) -> None:
    """Play a sound effect with parameters."""
    pass


def FUN_00474440(surface: int, x: int, y: int, z: int, flags: int, mode: int) -> None:
    """Set up a surface transformation."""
    pass


def FUN_00473f60(surface_list: int, src_surface: int, x: int, y: int, flags: int) -> None:
    """Attach a sub-surface / clipping region."""
    pass


def FUN_00476310(color: int, flags: int, mode: int, unk: int) -> None:
    """Set text color / format."""
    pass


def FUN_00476700(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Draw text (left-aligned, with clipping)."""
    print(f"  [TEXT-L] {text!r} @ ({x}, {y}) w={width}")


def FUN_00476750(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Draw text (right-aligned)."""
    print(f"  [TEXT-R] {text!r} @ ({x}, {y}) w={width}")


def FUN_004ad425(value: int, buf: int, base: int) -> str:
    """Integer-to-string conversion (itoa wrapper)."""
    return str(value)


def FUN_0042dc00(value: int) -> None:
    """Format a cash value into the text buffer."""
    pass


def FUN_0042dd50(value: int) -> None:
    """Format a rating value into the text buffer."""
    pass


def FUN_00467130(value: int, min_val: int, max_val: int) -> int:
    """Clamp value to range."""
    return max(min_val, min(value, max_val))


def FUN_00466b70(golfer_idx: int, unk1: int, unk2: int, unk3: int) -> None:
    """Skill training facility interaction helper."""
    pass


def FUN_004074a0(tile_id: int, flags: int) -> None:
    """Handle land purchase / building event."""
    pass


def FUN_00473e60(surface: int, x: int, y: int, color: int) -> None:
    """Draw a filled rectangle."""
    pass


def FUN_00480c80(unk: int) -> None:
    """Process input events."""
    pass


def FUN_0045bf80(duration: int, mode: int) -> None:
    """Wait / delay."""
    pass


def FUN_0045c030() -> None:
    """Frame present / buffer flip."""
    pass


def FUN_0047ab50(out_x: list, out_y: list) -> None:
    """Get mouse position."""
    out_x[0] = 0
    out_y[0] = 0


def FUN_0045c150() -> None:
    """Play UI click sound."""
    pass


def FUN_004732d0() -> int:
    """Get UI button return value."""
    return -1


def FUN_00473470() -> None:
    """UI button handler."""
    pass


def FUN_00448200(sound_id: int) -> None:
    """Play a simple sound effect."""
    pass


def FUN_00473ae0() -> None:
    """Pop rendering surface."""
    pass


def FUN_00474c40() -> None:
    """Pop and restore rendering surface."""
    pass


def FUN_0045ae70() -> int:
    """Check for click / keypress. Returns non-zero on action."""
    return 0


def FUN_00483d30() -> None:
    """Set cursor / UI to default state."""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Internal helpers
# ═══════════════════════════════════════════════════════════════════════════════


def _set_text_buf(s: str) -> None:
    """Set the global text buffer."""
    gob = _get_gob()
    gob["text_buf"] = s


def _append_text_buf(s: str) -> None:
    """Append to the global text buffer."""
    gob = _get_gob()
    gob["text_buf"] += s


def _clear_text_buf() -> None:
    """Clear the global text buffer."""
    _set_text_buf("")


def _itoa(value: int) -> str:
    """Convert integer to string."""
    return FUN_004ad425(value, 0, 10)


def _strlen(s: str) -> int:
    """Get string length (replaces the C do-while strlen pattern)."""
    return len(s)


def _copy_and_draw(surface: int, text: str, x: int, y: int, width: int = -1) -> None:
    """Copy string to text buffer and draw it."""
    _set_text_buf(text)
    if width < 0:
        width = _strlen(text)
    FUN_00476700(surface, text, x, y, width)


def _copy_concat_and_draw(surface: int, parts: List[str], x: int, y: int) -> None:
    """Concatenate strings into text buffer and draw."""
    _set_text_buf("")
    for p in parts:
        _append_text_buf(p)
    FUN_00476700(surface, _get_gob()["text_buf"], x, y, _strlen(_get_gob()["text_buf"]))


def _format_cash(value: int) -> str:
    """Format a cash value with commas."""
    if value < 0:
        return f"-${abs(value)}"
    return f"${value}"


def _format_rating(value: int) -> str:
    """Format a rating value."""
    return str(value)


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0044CFF0 — End of Year / Club Management Screen
# ═══════════════════════════════════════════════════════════════════════════════

def end_of_year_screen() -> None:
    """FUN_0044CFF0 — Display the 'END of YEAR' summary screen.

    Shows financial stats, ratings (fun, skill, membership), and monthly
    highlights. Handles board concern messages if necessary.
    """
    gob = _get_gob()

    # ── Initialise rendering layers ──────────────────────────────────────
    FUN_00474ae0()

    # Push 6 rendering layers (g_surface_stack)
    for layer_id in range(6):
        FUN_00473ab0()

    FUN_00474dd0(800, 600, 0, 1, 0, 0)

    # ── Load background image ────────────────────────────────────────────
    FUN_00475840("interface/infoscreens/endoyear.pcx", 0, 0, 0x100, 1)

    # Draw bounding boxes for highlights area
    _draw_highlight_boxes()

    # ── Load alternate (animated) background ─────────────────────────────
    FUN_00475840("interface/infoscreens/endoyear_a.pcx", 0, 0, 0x100, 1)
    _draw_highlight_boxes()

    FUN_00474cb0()

    # ── Set up sound ─────────────────────────────────────────────────────
    FUN_004481b0(0x7f, 100, 0, 0, 0)

    # ── Get rendering surface and set up ─────────────────────────────────
    gob["render_surface"] = 0  # DAT_00519d40 from DAT_00519cd4
    FUN_00474440(0, 0, 0, 0x3e800000, 0, 1)  # set up surface transform

    # ── Compute year indices ─────────────────────────────────────────────
    # cash_history is a ring buffer indexed by year % 500
    # local_3e4 = this year index, iVar11 = last year index
    iVar8 = gob.get("_total_years", 0) + (gob.get("_total_years", 0) >> 0x1f & 0x3ff) >> 10
    this_year_idx = iVar8 % 500
    last_year_idx = (iVar8 - 8) % 500
    gob["this_year_idx"] = this_year_idx
    gob["last_year_idx"] = last_year_idx

    # ── Set text colour to white ─────────────────────────────────────────
    FUN_00476310(COLOR_WHITE, 0xffffffff, 2, 2)

    # ── Render "END of YEAR" title ───────────────────────────────────────
    game_year = gob.get("game_year", 2000)
    title_str = f"END of YEAR {game_year + 2000}"  # s_END_of_YEAR__004d2a00
    _copy_and_draw(0, title_str, TITLE_X, TITLE_Y)

    # ── Column headers ───────────────────────────────────────────────────
    _copy_and_draw(0, "This Year", COLUMN_THIS_YEAR_X, COLUMN_HEADER_Y)  # s_This_Year
    _copy_and_draw(0, "Last Year", COLUMN_LAST_YEAR_X, COLUMN_HEADER_Y)  # s_Last_Year

    # ── "Highlights" section title ───────────────────────────────────────
    _copy_and_draw(0, "Highlights", HIGHLIGHTS_TITLE_X, HIGHLIGHTS_TITLE_Y)  # s_Highlights

    # ══════════════════════════════════════════════════════════════════════
    #  1. CASH RESERVES
    # ══════════════════════════════════════════════════════════════════════
    _render_cash_comparison(gob, this_year_idx, last_year_idx)

    # ══════════════════════════════════════════════════════════════════════
    #  2. FUN RATING
    # ══════════════════════════════════════════════════════════════════════
    _render_fun_rating_comparison(gob, this_year_idx, last_year_idx)

    # ══════════════════════════════════════════════════════════════════════
    #  3. SKILL RATING
    # ══════════════════════════════════════════════════════════════════════
    _render_skill_rating_comparison(gob, this_year_idx, last_year_idx)

    # ══════════════════════════════════════════════════════════════════════
    #  4. MEMBERSHIP
    # ══════════════════════════════════════════════════════════════════════
    _render_membership_comparison(gob, this_year_idx, last_year_idx)

    # ══════════════════════════════════════════════════════════════════════
    #  5. MONTHLY HIGHLIGHTS
    # ══════════════════════════════════════════════════════════════════════
    line_spacing = gob.get("line_spacing", 0x28)
    current_y = HIGHLIGHT_TEXT_Y_BASE

    while this_year_idx <= last_year_idx:
        event_code = _get_monthly_highlight(gob, this_year_idx)
        if event_code != 0:
            month_name = _get_month_name(this_year_idx - gob["this_year_idx"])
            highlight_str = _build_highlight_string(
                gob, event_code, month_name, this_year_idx
            )
            if highlight_str:
                # Draw the highlight text
                _copy_and_draw(0, highlight_str, HIGHLIGHT_TEXT_X, current_y + 2)
                current_y += line_spacing

        this_year_idx += 1

    # ══════════════════════════════════════════════════════════════════════
    #  6. BOARD CONCERN MESSAGES
    # ══════════════════════════════════════════════════════════════════════
    board_y = current_y
    board_concern_counter = gob.get("board_concern_counter", -1)
    game_flags = gob.get("game_flags", 0)

    if board_concern_counter < 0 and (game_flags & 0x1000000) == 0:
        _render_board_concern(gob, board_y)

    # ── Draw "Continue" button frame ─────────────────────────────────────
    FUN_00473f60(0, 0, 0, board_y, 0)  # set up clipping for button
    FUN_00476310(gob.get("text_color", COLOR_WHITE), 0xffffffff, 2, 2)

    button_y = board_y + 8
    gob["button_y"] = button_y
    FUN_00473e60(0, BUTTON_X, button_y, 0)  # draw button background

    # ── Process events and handle clicks ─────────────────────────────────
    FUN_00480c80(0)
    FUN_0045bf80(0x3c, 0)  # initial delay
    FUN_00483d30()

    # ── Main click-wait loop ─────────────────────────────────────────────
    done = False
    button_hover = False

    while True:
        FUN_0045bf80(1, 0)
        FUN_0045c030()

        mouse_x = [0]
        mouse_y = [0]
        FUN_0047ab50(mouse_x, mouse_y)
        px = mouse_x[0]
        py = mouse_y[0]

        FUN_00480c80(0)

        # Check for click
        if gob["ui_done"] == 1:
            done = True

        # Check if mouse is in button region
        in_button = (
            BUTTON_X <= px <= (BUTTON_X + 0x2b)  # 0x226..0x251
            and button_y <= py <= (button_y + 0x34)  # iVar11..iVar8+0x34
        )

        if in_button and not button_hover:
            button_hover = True
            FUN_00473e60(0, BUTTON_X, button_y, 0)  # highlight button
            FUN_00480c80(0)

        elif not in_button and button_hover:
            button_hover = False

        # Check for click/action
        action = FUN_0045ae70()
        if action != 0 or done:
            break

    # ── Cleanup and restore rendering state ──────────────────────────────
    FUN_0045c150()
    result = FUN_004732d0()
    if result != -1:
        FUN_00473470()

    FUN_00448200(0x7f)  # sound
    FUN_00473ae0()
    FUN_00473ae0()
    FUN_00473ae0()
    FUN_00473ae0()
    FUN_00473ae0()
    FUN_00473ae0()
    FUN_00474c40()


# ═══════════════════════════════════════════════════════════════════════════════
#  Rendering helpers
# ═══════════════════════════════════════════════════════════════════════════════


def _draw_highlight_boxes() -> None:
    """Draw the background boxes for the highlights section."""
    # FUN_00473c60(local_2c4, 0xbb, 0x28, 0x1ad, 0xb0, 1, 0)
    FUN_00473c60(0, HIGHLIGHT_BOX_X, HIGHLIGHT_BOX_Y,
                  HIGHLIGHT_BOX_W, HIGHLIGHT_BOX_H, 1, 0)
    # FUN_00473c60(local_2c4, 0xbb, 0x176, 0x1ad, 0x37, 1, 0)
    FUN_00473c60(0, HIGHLIGHT_SUB_X, HIGHLIGHT_SUB_Y,
                  HIGHLIGHT_SUB_W, HIGHLIGHT_SUB_H, 1, 0)
    # FUN_00473c60(local_2c4, 0xbb, 0x123, 0x1ad, 0xf, 1, 0)
    FUN_00473c60(0, HIGHLIGHT_SEP_X, HIGHLIGHT_SEP_Y,
                  HIGHLIGHT_SEP_W, HIGHLIGHT_SEP_H, 1, 0)


def _render_cash_comparison(gob: dict, this_idx: int, last_idx: int) -> None:
    """Render cash reserves comparison."""
    cash_this = _get_cash_history(gob, this_idx)
    cash_last = _get_cash_history(gob, last_idx)

    # Determine trend string
    if cash_this < cash_last:
        trend = "increased"  # s_increased
    elif cash_this == cash_last:
        trend = "not changed"  # s_not_changed
    else:
        trend = "decreased"  # s_decreased

    # Draw label
    label = f"Cash reserves have {trend}"
    _copy_and_draw(0, label, CASH_LABEL_X, CASH_LABEL_Y)

    # Draw values
    _clear_text_buf()
    FUN_0042dc00(cash_this * 100)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, CASH_VAL_Y, _strlen(gob["text_buf"]))

    _clear_text_buf()
    FUN_0042dc00(cash_last * 100)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_LAST, CASH_VAL_Y, _strlen(gob["text_buf"]))

    # Set colour based on change direction
    if cash_this < cash_last:
        color = COLOR_GREEN_INCREASE
    elif cash_this == cash_last:
        color = COLOR_WHITE
    else:
        color = COLOR_RED_DECREASE
    FUN_00476310(color, 0xffffffff, 2, 2)

    # Redraw this year value with colour
    _clear_text_buf()
    FUN_0042dc00(cash_this * 100)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, CASH_VAL_Y, _strlen(gob["text_buf"]))

    # Reset colour to white
    FUN_00476310(COLOR_WHITE, 0xffffffff, 2, 2)


def _render_fun_rating_comparison(gob: dict, this_idx: int, last_idx: int) -> None:
    """Render fun rating comparison."""
    fun_this = _get_fun_history(gob, this_idx)
    fun_last = _get_fun_history(gob, last_idx)

    if fun_this < fun_last:
        trend = "increased"
    elif fun_this == fun_last:
        trend = "not changed"
    else:
        trend = "decreased"

    label = f"Your fun rating has {trend}"
    _copy_and_draw(0, label, FUN_LABEL_X, FUN_LABEL_Y)

    # Draw values
    _clear_text_buf()
    FUN_0042dd50(fun_this)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, FUN_VAL_Y, _strlen(gob["text_buf"]))

    _clear_text_buf()
    FUN_0042dd50(fun_last)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_LAST, FUN_VAL_Y, _strlen(gob["text_buf"]))

    if fun_this < fun_last:
        color = COLOR_GREEN_INCREASE
    elif fun_this == fun_last:
        color = COLOR_WHITE
    else:
        color = COLOR_RED_DECREASE
    FUN_00476310(color, 0xffffffff, 2, 2)

    _clear_text_buf()
    FUN_0042dd50(fun_this)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, FUN_VAL_Y, _strlen(gob["text_buf"]))

    FUN_00476310(COLOR_WHITE, 0xffffffff, 2, 2)


def _render_skill_rating_comparison(gob: dict, this_idx: int, last_idx: int) -> None:
    """Render skill rating comparison."""
    skill_this = _get_skill_history(gob, this_idx)
    skill_last = _get_skill_history(gob, last_idx)

    if skill_this < skill_last:
        trend = "increased"
    elif skill_this == skill_last:
        trend = "not changed"
    else:
        trend = "decreased"

    label = f"Your skill rating has {trend}"
    _copy_and_draw(0, label, SKILL_LABEL_X, SKILL_LABEL_Y)

    _clear_text_buf()
    FUN_0042dd50(skill_this)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, SKILL_VAL_Y, _strlen(gob["text_buf"]))

    _clear_text_buf()
    FUN_0042dd50(skill_last)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_LAST, SKILL_VAL_Y, _strlen(gob["text_buf"]))

    if skill_this < skill_last:
        color = COLOR_GREEN_INCREASE
    elif skill_this == skill_last:
        color = COLOR_WHITE
    else:
        color = COLOR_RED_DECREASE
    FUN_00476310(color, 0xffffffff, 2, 2)

    _clear_text_buf()
    FUN_0042dd50(skill_this)
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, SKILL_VAL_Y, _strlen(gob["text_buf"]))

    FUN_00476310(COLOR_WHITE, 0xffffffff, 2, 2)


def _render_membership_comparison(gob: dict, this_idx: int, last_idx: int) -> None:
    """Render membership comparison."""
    # Store current membership into this year's slot
    _set_membership_history(gob, this_idx, gob.get("membership_count", 0))

    mem_this = _get_membership_history(gob, this_idx)
    mem_last = _get_membership_history(gob, last_idx)

    if mem_this < mem_last:
        trend = "increased"
    elif mem_this == mem_last:
        trend = "not changed"
    else:
        trend = "decreased"

    label = f"Your membership has {trend}"
    _copy_and_draw(0, label, MEMBERSHIP_LABEL_X, MEMBERSHIP_LABEL_Y)

    # Draw values
    _clear_text_buf()
    _set_text_buf(_itoa(mem_this))
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, MEMBERSHIP_VAL_Y, _strlen(gob["text_buf"]))

    _clear_text_buf()
    _set_text_buf(_itoa(mem_last))
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_LAST, MEMBERSHIP_VAL_Y, _strlen(gob["text_buf"]))

    if mem_this < mem_last:
        color = COLOR_GREEN_INCREASE
    elif mem_this == mem_last:
        color = COLOR_WHITE
    else:
        color = COLOR_RED_DECREASE
    FUN_00476310(color, 0xffffffff, 2, 2)

    _clear_text_buf()
    _set_text_buf(_itoa(mem_this))
    FUN_00476750(0, gob["text_buf"], CASH_VAL_X_THIS, MEMBERSHIP_VAL_Y, _strlen(gob["text_buf"]))


def _get_month_name(offset: int) -> str:
    """Get month name by offset from March."""
    # FUN_00467130(offset, 0, 7) — clamp to valid range
    idx = FUN_00467130(offset, 0, 7)
    if 0 <= idx < len(MONTH_NAMES):
        return MONTH_NAMES[idx]
    return ""


def _build_highlight_string(gob: dict, event_code: int, month_name: str,
                             year_idx: int) -> Optional[str]:
    """Build a human-readable highlight string from an event code.

    Event code encoding (short):
      Top 11 bits (0xffe0 mask) = event type category
      Low 5 bits (0x1f) = event sub-type/value
    """
    # Parse the short event code
    event_type = event_code & 0xffe0  # top bits
    sub_value = event_code & 0x1f     # low 5 bits

    if event_type < 0xc1:
        # ── Small event types (0x00-0xc0) ───────────────────────────────
        if event_type == 0xc0:
            # "buys a home"
            golfer_name = _get_golfer_name(gob, sub_value)
            return f"{golfer_name} buys a home"

        if event_type == 0x20:
            # "Hole N opened"
            return EVENT_HOLE_OPENED % sub_value

        if event_type == 0x40:
            # "Pathway built"
            return EVENT_PATHWAY_BUILT

        if event_type == 0x60:
            # "Won match vs NAME"
            golfer_name = _get_golfer2_name(gob, year_idx)
            return f"Won match vs {golfer_name}"

        if event_type == 0x80:
            # "rated top 100"
            return EVENT_RATED_TOP_100

        if event_type == 0xa0:
            # "rated top 18"
            return EVENT_RATED_TOP_18

    else:
        # ── Large event types (0xe0+) ───────────────────────────────────
        if event_type == 0xe0:
            # "NAME places N in tournament"
            golfer_name = _get_golfer_name(gob, sub_value)
            return f"{golfer_name} places {sub_value} in tournament"

        if event_type == 0x100:
            # "NAME joins the board"
            golfer_name = _get_joined_name(gob, year_idx)
            return f"{golfer_name} joins the board"

        if event_type == 0x120:
            # "Happy Ending" (special event)
            FUN_00466b70(sub_value, 0xffffffff, 0, 0)
            return EVENT_HAPPY_ENDING

        if event_type == 0x140:
            # "Additional land purchased"
            return EVENT_ADDITIONAL_LAND

        if event_type == 0x160:
            # "Ivana donates a..."
            FUN_004074a0(sub_value, 0)
            return EVENT_IVANA_DONATES

    return None


def _render_board_concern(gob: dict, y_pos: int) -> None:
    """Render board concern messages if needed.

    The original checks DAT_00571fd4 < 0 and (game_flags & 0x1000000) == 0,
    then shows escalating concerns based on DAT_005a6374 level.
    """
    FUN_00476310(COLOR_WHITE_2, 0xffffffff, 2, 2)

    concern_level = gob.get("board_concern_level", 0)
    current_y = y_pos

    if concern_level == 0:
        msg = (
            "The board is concerned about our membership trends. "
            "If we don't improve soon, they might consider other management."
        )
        _copy_and_draw(0, msg, HIGHLIGHT_TEXT_X, current_y + 2)
        current_y += gob.get("line_spacing", 0x28)

        msg2 = (
            "You have two years to return to profitability."
        )
        _copy_and_draw(0, msg2, HIGHLIGHT_TEXT_X, current_y + 2)

    elif concern_level == 1:
        msg = (
            "The board is very worried about our performance. "
            "Things must turn around immediately!"
        )
        _copy_and_draw(0, msg, HIGHLIGHT_TEXT_X, current_y + 2)
        current_y += gob.get("line_spacing", 0x28)

        msg2 = (
            "You have one more year to get our club in shape."
        )
        _copy_and_draw(0, msg2, HIGHLIGHT_TEXT_X, current_y + 2)

    else:  # concern_level >= 2
        msg = (
            "You have been unable to make a profit for three years. "
            "The board has lost confidence in your management."
        )
        _copy_and_draw(0, msg, HIGHLIGHT_TEXT_X, current_y + 2)
        current_y += gob.get("line_spacing", 0x28)

        msg2 = (
            "Regrettably, the board has terminated your employment."
        )
        _copy_and_draw(0, msg2, HIGHLIGHT_TEXT_X, current_y + 2)

    gob["board_concern_level"] += 1


# ═══════════════════════════════════════════════════════════════════════════════
#  Data access helpers
# ═══════════════════════════════════════════════════════════════════════════════


def _get_cash_history(gob: dict, idx: int) -> int:
    """Get cash history value (DAT_0051b388 + idx*2 as short)."""
    history = gob["cash_history"]
    if 0 <= idx < len(history):
        return history[idx]
    return 0


def _get_fun_history(gob: dict, idx: int) -> int:
    """Get fun rating history value (DAT_0053e63c + idx*2 as short)."""
    history = gob["fun_history"]
    if 0 <= idx < len(history):
        return history[idx]
    return 0


def _get_skill_history(gob: dict, idx: int) -> int:
    """Get skill rating history value (DAT_005409ac + idx*2 as short)."""
    history = gob["skill_history"]
    if 0 <= idx < len(history):
        return history[idx]
    return 0


def _get_membership_history(gob: dict, idx: int) -> int:
    """Get membership history (DAT_00520640 + idx*2 as short)."""
    history = gob["membership_history"]
    if 0 <= idx < len(history):
        return history[idx]
    return 0


def _set_membership_history(gob: dict, idx: int, val: int) -> None:
    """Set membership history at given index."""
    history = gob["membership_history"]
    if 0 <= idx < len(history):
        history[idx] = val


def _get_monthly_highlight(gob: dict, idx: int) -> int:
    """Get monthly highlight event code (DAT_00568600 + idx*2 as short)."""
    highlights = gob["monthly_highlights"]
    if 0 <= idx < len(highlights):
        return highlights[idx]
    return 0


def _get_golfer_name(gob: dict, idx: int) -> str:
    """Get golfer name from DAT_0055d738 + idx*0x25."""
    names = gob["golfer_names"]
    if 0 <= idx < len(names):
        return names[idx]
    return "Gary Golf"


def _get_golfer2_name(gob: dict, year_idx: int) -> str:
    """Get opponent name for match victory event."""
    # From &DAT_0058dd50 + uVar12 * 0x38 in the original
    return "Opponent"


def _get_joined_name(gob: dict, year_idx: int) -> str:
    """Get name of person joining the board."""
    # From PTR_s_J_P_Bigdome_004c2c18 in the original
    return "J.P. Bigdome"

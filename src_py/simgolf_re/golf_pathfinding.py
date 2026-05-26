"""
SimGolf Reverse Engineering — Investor & Navigation Events (FUN_004266B0)
=========================================================================
Translation of FUN_004266b0 from Ghidra decompiled C.

This function handles investor/navigator interactions with the player based
on terrain type flags (stored in DAT_005794d0[] & DAT_005794d9[]).

Investor types (bitmask bits 5-7 of terrain flags at DAT_005794d0):
  - 0x60 (bits 5-6 set)  — Corporate CEO
  - 0x40 (bit 6 set)     — County Commissioner
  - 0x80 (bit 7 set)     — Wealthy Heiress
  - 0x100 (bit 8 set)    — International Celebrity

Each type can invest/donate/buy based on:
  - Whether the hole at that tile is already built (DAT_00575ab0)
  - The golfer count at that tile (DAT_0057955c — unsigned short, stride 0x80)
  - Various global counters

Key globals:
  DAT_005794d0  — Terrain flags/type byte array (stride 0x100)
  DAT_005794d9  — Hole index per tile (stride 0x100)
  DAT_00575ab0  — Hole data (stride 0x208)
  DAT_0057955c  — Golfer population per tile (stride 0x80)
  DAT_0057955a  — Partner index per tile
  DAT_0051a068  — Global string buffer
  DAT_00572cac  — CEO approval counter
  DAT_0053a450  — Commissioner approval counter
  DAT_00543cfc  — Landmark flag bitfield
  DAT_0059aaf8  — Fun rating accumulator
  DAT_00822c88  — Skill rating / difficulty flag
  DAT_00569498  — Message box flag
  DAT_00571fd4  — Total cash
  DAT_00567a1c  — UI state flags
  DAT_005a59f8  — Refresh flag
  DAT_005a9ccc  — Screen navigation state
  DAT_0057958c  — Tile active/visited flag (stride 0x40)
"""

from __future__ import annotations

from typing import Final, List, Optional

# ── Constants ───────────────────────────────────────────────────────────────────
TILE_STRIDE: Final[int] = 0x100       # DAT_005794d0 / d9 stride
GOLFER_STRIDE: Final[int] = 0x80      # DAT_0057955c / 5a stride
HOLE_STRIDE: Final[int] = 0x208       # DAT_00575ab0 stride
TERRAIN_STRIDE: Final[int] = 0x40     # DAT_0057958c / c8 stride

# ── String table — investor dialogue ────────────────────────────────────────────

STR_CORPORATE_CEO: Final[str] = "Corporate CEO"
STR_HAS_DECIDED_TO_INVEST: Final[str] = "has decided to invest in your golf course!"
STR_FOR_A_SEAT: Final[str] = "for a seat on the board, he says"
STR_HAS_DECIDED_NOT_TO_INVEST_HI: Final[str] = "has decided not to invest in you."
STR_MY_PARTNER: Final[str] = "My partner"
STR_HAS_QUIT: Final[str] = "has quit, even though"
STR_HE_FUMES: Final[str] = ", he fumes."

STR_COUNTY_COMMISSIONER: Final[str] = "County commissioner"
STR_HAS_DECIDED_TO_APPROVE: Final[str] = "has decided to approve an expansion of your golf course!"
STR_ILL_BE_BACK_AGAIN: Final[str] = "I'll be back again if your"
STR_FUN_RATING_IS_OVER: Final[str] = "fun rating is over"
STR_SKILL_RATING_IS_OVER: Final[str] = "skill rating is over"
STR_HE_SAYS: Final[str] = ", he says."
STR_HAS_DECIDED_NOT_TO_APPROVE: Final[str] = "has decided not to approve your expansion request."
STR_HE_COMMENTS: Final[str] = ", he comments."

STR_WEALTHY_HEIRESS: Final[str] = "Wealthy Heiress"
STR_HAS_DECIDED_NOT_TO_DONATE: Final[str] = "has decided not to donate a land parcel to you."
STR_HAS_DECIDED_TO_DONATE: Final[str] = "has decided to donate a"
STR_TO_YOUR_COURSE: Final[str] = "to your course. In the area near"
STR_GOLFERS_WILL_HAVE: Final[str] = "golfers will have happy thoughts of"
STR_NO_DANDELIONS: Final[str] = "no dandelions will appear."
STR_GARY_GOLF: Final[str] = "Gary Golf"
STR_S_SKILLS: Final[str] = "'s skills will improve rapidly."
STR_GOLFER_STORIES: Final[str] = "golfer stories will proceed happily."
STR_GO_TO_LANDMARKS: Final[str] = "Go to 'Landmarks' under the Improvements menu to place it."
STR_S_CAN_BE_ADDED: Final[str] = "'s can be added to your course for"
STR_ILL_BE_BACK_IF: Final[str] = ". I'll be back if your"
STR_FUN_RATING_IS_UP_TO: Final[str] = "fun rating is up to"
STR_SKILL_RATING_IS_UP_TO: Final[str] = "skill rating is up to"
STR_SHE_SAYS: Final[str] = ", she says."
STR_SHE_COMMENTS: Final[str] = ", she comments. I'll be back in"

STR_INTERNATIONAL_CELEBRITY: Final[str] = "International celebrity"
STR_HAS_DECIDED_TO_BUY: Final[str] = "has decided to buy a vacation home on your course!"
STR_HAS_DECIDED_NOT_TO_BUY: Final[str] = "has decided not to buy a vacation home on your course."

# ── Helper: string copy via memory buffer ───────────────────────────────────────
# In the original C, strings are copied to DAT_0051a068 (global buffer) via
# manual strlen + memcpy loops.  We replace that with a simple assignment.


def _copy_str_to_buffer(buf: List[str], s: str) -> None:
    """Copy a string into the global 400-byte text buffer (DAT_0051a068)."""
    buf.clear()
    buf.append(s)


# ═══════════════════════════════════════════════════════════════════════════════
#  GameState — minimal mirror of relevant globals for this function
# ═══════════════════════════════════════════════════════════════════════════════

class GameState:
    """Encapsulates global arrays modified by FUN_004266b0."""

    def __init__(self) -> None:
        # Terrain flags per tile (0x2700 entries × 1 byte, stride 0x100)
        # Offset 0 = d0 flags, offset 9 = d9 hole_idx
        self.terrain_flags: List[bytearray] = [
            bytearray(TILE_STRIDE) for _ in range(152)
        ]

        # Hole data (DAT_00575ab0 — stride 0x208)
        self.hole_data: List[bytearray] = [
            bytearray(HOLE_STRIDE) for _ in range(152)
        ]

        # Golfer count per tile (DAT_0057955c — short, stride 0x80)
        self.golfer_count: List[int] = [0] * 152

        # Partner index per tile (DAT_0057955a — short, stride 0x80)
        self.partner_idx: List[int] = [-1] * 152

        # Active/visited flag (DAT_0057958c — stride 0x40, offset 0)
        self.tile_active: List[int] = [0] * 152

        # Tile edit/ownership flags (DAT_005794c8 — stride 0x40, offset 0x10)
        self.tile_flags: List[int] = [0] * 152

        # ── Scalar globals ────────────────────────────────────────────
        self.ceo_approval: int = 0           # DAT_00572cac
        self.comm_approval: int = 0          # DAT_0053a450
        self.landmark_flags: int = 0         # DAT_00543cfc
        self.fun_rating_acc: int = 0         # DAT_0059aaf8
        self.skill_rating: int = 0           # DAT_00822c88
        self.msg_box_flag: int = 0           # DAT_00569498
        self.total_cash: int = 0             # DAT_00571fd4
        self.ui_state: int = 0               # DAT_00567a1c
        self.refresh_flag: int = -1          # DAT_005a59f8
        self.screen_state: int = 0           # DAT_005a9ccc
        self.current_year: int = 0           # DAT_005a6d3c
        self.global_landmark_flags: int = 0  # DAT_00822c70


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_004266b0 — Investor / Navigator
# ═══════════════════════════════════════════════════════════════════════════════

def fun_004266b0(state: GameState, param_1: int, text_buf: List[str]) -> None:
    """Handle investor/navigator interactions for tile *param_1*.

    This is the core "visitor" system: depending on terrain flags at the
    given tile, one of four investor types may react to the current state
    of the course.

    Args:
        state:  Global game state.
        param_1: Tile index being visited/interacted with.
        text_buf: Mutable list used as the global text buffer (DAT_0051a068).
    """
    i_var3: int = param_1
    i_var11: int = param_1 * 0x100
    i_var12: int = i_var3

    # ── Bitmask check: what kind of entity is on this tile? ───────────
    terrain_flags: int = state.terrain_flags[param_1][0]  # DAT_005794d0[param_1]
    terrain_type: int = terrain_flags & 0xe0

    # ═══════════════════════════════════════════════════════════════════
    #  TYPE 0x60 — Corporate CEO
    # ═══════════════════════════════════════════════════════════════════
    if terrain_type == 0x60:
        _copy_str_to_buffer(text_buf, STR_CORPORATE_CEO)
        _set_golfer_ui(state, param_1, 0)  # FUN_004676e0(param_1, 0)
        state.ceo_approval &= 0xffffff7f

        hole_idx: int = state.terrain_flags[param_1][9]  # DAT_005794d9
        golfer_ct: int = state.golfer_count[param_1]

        if (state.hole_data[hole_idx][0] == 0 and golfer_ct > 2):
            # Check approval level
            if (state.ceo_approval * 2) < state.terrain_flags[param_1][9]:
                # CEO invests
                _play_sound(0x100, terrain_flags & 0x1f)
                bonus: int = ((1 if golfer_ct > 4 else 0) + 1) * 5000 // 100
                _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_TO_INVEST)
                _add_money_direct(bonus * 100)  # FUN_0042dc00
                _copy_str_to_buffer(text_buf, STR_FOR_A_SEAT)
                state.msg_box_flag = 0
                _show_message(0x80001204, 1, param_1)  # FUN_0040cb00
                state.total_cash += bonus
                # Update yearly revenue log
                # *(short *)(DAT_0058421e + (DAT_005a6d3c % 100) * 0x14) += bonus
                _add_to_stock_report(state, bonus)
                _show_rating_update(0x19, 100, 0, 0, 0)  # FUN_004481b0
                i_var12 = param_1
            else:
                # CEO declines
                _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_NOT_TO_INVEST_HI)
                _show_message(0x80006000, 1, i_var3)
                state.ceo_approval -= 1
        else:
            # No hole built or too few golfers → decline
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_NOT_TO_INVEST_HI)
            s_var2: int = state.golfer_count[param_1]
            if s_var2 > 2:
                partner_idx: int = state.partner_idx[param_1]
                _copy_str_to_buffer(text_buf, STR_MY_PARTNER)
                _set_golfer_ui(state, partner_idx, 0)
                _copy_str_to_buffer(text_buf, STR_HAS_QUIT)
            _clear_golfer_ui(state, s_var2, 0)  # FUN_00469a20
            _copy_str_to_buffer(text_buf, STR_HE_FUMES)
            _show_message(0x80006000, 1, i_var3)

    # ═══════════════════════════════════════════════════════════════════
    #  TYPE 0x40 — County Commissioner
    # ═══════════════════════════════════════════════════════════════════
    if terrain_type == 0x40:
        _copy_str_to_buffer(text_buf, STR_COUNTY_COMMISSIONER)
        _set_golfer_ui(i_var12, 0)
        state.comm_approval &= 0xffffff7f

        hole_idx2: int = state.terrain_flags[param_1][9]
        golfer_ct2: int = state.golfer_count[param_1]

        if state.hole_data[hole_idx2][0] == 0 and golfer_ct2 > 2:
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_TO_APPROVE)
            _copy_str_to_buffer(text_buf, STR_ILL_BE_BACK_AGAIN)

            if state.skill_rating < 2:
                _copy_str_to_buffer(text_buf, STR_FUN_RATING_IS_OVER)
                _add_fun_rating(state, (state.skill_rating + 2) * (state.comm_approval + 3) * 0x32)
            else:
                _copy_str_to_buffer(text_buf, STR_SKILL_RATING_IS_OVER)
                _add_skill_rating(state, (state.skill_rating + 2) * (state.comm_approval + 3) * 0x32)

            _copy_str_to_buffer(text_buf, STR_HE_SAYS)
            state.msg_box_flag = 0
            state.screen_state = 3
            _show_message(0x80001204, 1, i_var12)
            _show_rating_update(0x2f, 100, 0, 0, 0)
            state.ui_state |= 1
        else:
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_NOT_TO_APPROVE)
            s_var2b: int = state.golfer_count[param_1]
            if s_var2b > 2:
                partner_idx2: int = state.partner_idx[param_1]
                _copy_str_to_buffer(text_buf, STR_MY_PARTNER)
                _set_golfer_ui(state, partner_idx2, 0)
                _copy_str_to_buffer(text_buf, STR_HAS_QUIT)
            _clear_golfer_ui(state, s_var2b, 0)
            _copy_str_to_buffer(text_buf, STR_HE_COMMENTS)
            _show_message(0x80006000, 1, i_var12)

    # ═══════════════════════════════════════════════════════════════════
    #  TYPE 0x80 — Wealthy Heiress
    # ═══════════════════════════════════════════════════════════════════
    if terrain_type == 0x80:
        _copy_str_to_buffer(text_buf, STR_WEALTHY_HEIRESS)
        _set_golfer_ui(i_var12, 0)

        hole_idx3: int = state.terrain_flags[param_1][9]
        golfer_ct3: int = state.golfer_count[param_1]

        if state.hole_data[hole_idx3][0] != 0 or golfer_ct3 < 3:
            # Declines donation
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_NOT_TO_DONATE)
            if golfer_ct3 > 2:
                partner_idx3: int = state.partner_idx[param_1]
                _copy_str_to_buffer(text_buf, STR_MY_PARTNER)
                _set_golfer_ui(state, partner_idx3, 0)
                _copy_str_to_buffer(text_buf, STR_HAS_QUIT)
            _clear_golfer_ui(state, golfer_ct3, 0)
            _copy_str_to_buffer(text_buf, STR_SHE_COMMENTS)
            _show_message(0x80006000, 1, i_var12)
        else:
            # Donates a landmark
            i_var12_v2: int = golfer_ct3
            # Find an unoccupied landmark slot
            u_var7: int = _find_landmark_slot(state)
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_TO_DONATE)
            _set_landmark(state, u_var7, 1)  # FUN_004074a0
            _copy_str_to_buffer(text_buf, STR_TO_YOUR_COURSE)

            # Landmark type selection (based on uVar7 & 3)
            type_map: dict = {
                0: STR_GOLFERS_WILL_HAVE,
                1: STR_NO_DANDELIONS,
                2: STR_GARY_GOLF + STR_S_SKILLS,
                3: STR_GOLFER_STORIES,
            }
            _copy_str_to_buffer(text_buf, type_map.get(u_var7 & 3, ""))

            _copy_str_to_buffer(text_buf, STR_GO_TO_LANDMARKS)
            _set_landmark(state, u_var7, 0)  # FUN_004074a0(uVar7, 0)
            _copy_str_to_buffer(text_buf, STR_S_CAN_BE_ADDED)
            _add_money_direct((u_var7 * 5 + 5) * 200)  # FUN_0042dc00
            _copy_str_to_buffer(text_buf, STR_ILL_BE_BACK_IF)

            if state.skill_rating < 2:
                _copy_str_to_buffer(text_buf, STR_FUN_RATING_IS_UP_TO)
                _add_fun_rating(state, state.fun_rating_acc * state.fun_rating_acc * 0x19)
            else:
                _copy_str_to_buffer(text_buf, STR_SKILL_RATING_IS_UP_TO)
                _add_skill_rating(state, state.fun_rating_acc * state.fun_rating_acc * 0x19)

            _copy_str_to_buffer(text_buf, STR_SHE_SAYS)
            state.msg_box_flag = 0
            _show_message(0x80001204, 1, param_1)
            _show_rating_update(0x2f, 100, 0, 0, 0)
            _play_sound(0x160, u_var7)

            # Mark landmark as used
            bit: int = 1 << (u_var7 & 0x1f)
            state.landmark_flags |= bit
            state.global_landmark_flags |= bit
            i_var12 = param_1

    # ═══════════════════════════════════════════════════════════════════
    #  TYPE 0x100 — International Celebrity
    # ═══════════════════════════════════════════════════════════════════
    if terrain_type == 0x100:
        _copy_str_to_buffer(text_buf, STR_INTERNATIONAL_CELEBRITY)
        _set_golfer_ui(i_var12, 0)

        # Gender check: bit 0 of terrain flags
        celeb_gender: str = "Mr." if (terrain_flags & 1) else "Ms."
        _copy_str_to_buffer(text_buf, celeb_gender)

        hole_idx4: int = state.terrain_flags[param_1][9]
        golfer_ct4: int = state.golfer_count[param_1]

        if state.hole_data[hole_idx4][0] == 0 and golfer_ct4 > 1:
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_TO_BUY)
            state.msg_box_flag = 0
            _copy_str_to_buffer(text_buf, f"{STR_INTERNATIONAL_CELEBRITY} {param_1}")
            _show_message(0x80004010, 1, i_var12)
            _play_sound(0xc0, terrain_flags & 0x1f)
            _show_rating_update(0x2c, 100, 0, 0, 0)

            # Find empty building slot
            i_var12_v3: int = 0
            for idx in range(0x100):
                pi_base_idx: int = idx  # DAT_0058bcc0 stride 4
                # piVar6[-2] = type field, piVar6[0] = owner field
                # Check if type == 5 and owner == -1
                if _get_building_type(state, idx) == 5 and _get_building_owner(state, idx) == -1:
                    _set_building_flags(state, idx, terrain_flags & 0xffffff1f)
                    break
        else:
            _copy_str_to_buffer(text_buf, STR_HAS_DECIDED_NOT_TO_BUY)
            state.msg_box_flag = 0
            _copy_str_to_buffer(text_buf, f"{STR_INTERNATIONAL_CELEBRITY} {param_1}")
            _show_message(0x80006000, 1, i_var12)

    # ── Post-handler cleanup ───────────────────────────────────────────
    state.tile_active[param_1] = 0               # DAT_0057958c[param_1 * 0x40] = 0
    state.terrain_flags[param_1][9] = 0x13       # DAT_005794d9[param_1 * 0x100] = 0x13

    tile_flags_offset: int = state.tile_flags[param_1]  # DAT_005794c8
    if (tile_flags_offset & 0x200) != 0:
        state.refresh_flag = -1                    # DAT_005a59f8 = -1


# ═══════════════════════════════════════════════════════════════════════════════
#  Helper stubs — these map to other FUN_* functions in the decompiled code
# ═══════════════════════════════════════════════════════════════════════════════

def _set_golfer_ui(state: GameState, golfer_idx: int, param2: int) -> None:
    """FUN_004676e0 — Set golfer UI selection."""
    pass


def _clear_golfer_ui(state: GameState, golfer_idx: int, param2: int) -> None:
    """FUN_00469a20 — Clear golfer UI selection / remove golfer."""
    pass


def _play_sound(sound_id: int, param2: int) -> None:
    """FUN_0040c6f0 — Play a sound effect."""
    pass


def _add_money_direct(amount: int) -> None:
    """FUN_0042dc00 — Add money directly to player funds."""
    pass


def _show_message(msg_type: int, param2: int, param3: int) -> None:
    """FUN_0040cb00 — Show a message/notification."""
    pass


def _show_rating_update(*args: int) -> None:
    """FUN_004481b0 — Show a rating update animation."""
    pass


def _add_to_stock_report(state: GameState, amount: int) -> None:
    """Update the yearly revenue/stock report (writes to DAT_0058421e)."""
    pass


def _add_fun_rating(state: GameState, amount: int) -> None:
    """FUN_0042dd50 — Add to fun rating accumulator."""
    state.fun_rating_acc += amount


def _add_skill_rating(state: GameState, amount: int) -> None:
    """Add to skill rating (DAT_00822c88)."""
    pass


def _find_landmark_slot(state: GameState) -> int:
    """FUN_00467130 — Find an unused landmark slot (return 0-3)."""
    return 0


def _set_landmark(state: GameState, slot: int, value: int) -> None:
    """FUN_004074a0 — Set landmark availability."""
    pass


def _get_building_type(state: GameState, idx: int) -> int:
    """Read building type from DAT_0058bcc0 array (stride 4, offset -2)."""
    return 0


def _get_building_owner(state: GameState, idx: int) -> int:
    """Read building owner from DAT_0058bcc0 array (stride 4, offset 0)."""
    return 0


def _set_building_flags(state: GameState, idx: int, flags: int) -> None:
    """Set building flags at DAT_0058bcc0[idx*4]."""
    pass

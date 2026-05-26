"""
SimGolf Reverse Engineering — Asset/Terrain/Building Loading System
====================================================================
Translation of FUN_0043DBE0 and FUN_0043D740 from Ghidra decompiled C.

Loads all palette files (.pcx) and animation definitions for 4 course themes:
  - Parkland (0), Desert (1), Tropical (2), Links (3)
Also loads animal sprites, trees, flowers, water effects, bridges,
landmarks, scenic items, golfer animations, and employee animations.

Key globals:
  DAT_005a34e0  — course theme selector (byte: 0=Park, 1=Desert, 2=Tropical, 3=Links)
  DAT_00820b6c  — body type selector for golfer animation sets
  DAT_00820ecc  — loading progress counter
  DAT_00820ec0  — flic memory buffer position
  DAT_00820ec8  — last loaded flic handle
  DAT_00822c88  — force-load flag (-1 = reload)

Calls FUN_0043D740 to register each animation.
Calls FUN_00475840 to load each palette.
"""

from __future__ import annotations

from typing import Dict, List, Optional, Tuple

# ── Course theme constants ─────────────────────────────────────────────────────
COURSE_PARKLAND: int = 0
COURSE_DESERT: int = 1
COURSE_TROPICAL: int = 2
COURSE_LINKS: int = 3

THEME_NAMES: Dict[int, str] = {
    COURSE_PARKLAND: "Parkland",
    COURSE_DESERT: "Desert",
    COURSE_TROPICAL: "Tropical",
    COURSE_LINKS: "Links",
}

# ── Global state mirrors ─────────────────────────────────────────────────────
course_theme: int = COURSE_PARKLAND  # DAT_005a34e0
loading_counter: int = 0             # DAT_00820ecc
flic_buffer_pos: int = 0             # DAT_00820ec0
last_flic_handle: int = 0            # DAT_00820ec8
force_reload_flag: int = -1          # DAT_00822c88
body_type_selector: int = 0          # DAT_00820b6c

# Registered animation names: DAT_008156d0 (stride 0x32)
anim_name_table: Dict[int, str] = {}

# Animation slot states: DAT_005a9370
anim_slot_states: Dict[int, int] = {}

# Animation sizes: DAT_0053f3e8
anim_sizes: Dict[int, int] = {}

# ── Terrain string buffers ────────────────────────────────────────────────────
# DAT_00578350..DAT_005786b0 (variously-sized string buffers)
terrain_name_buf: str = ""    # DAT_00578350..00578372 (0x114 dwords = 0x450 bytes?)
terrain_noun_buf: Dict[int, object] = {}  # various theme-specific descriptors


# ═══════════════════════════════════════════════════════════════════════════════
#  Stub engine calls (delegated to real engine or no-op placeholders)
# ═══════════════════════════════════════════════════════════════════════════════

def FUN_00475840(path: str, dest_buf: int, unk2: int, palette_size: int, mode: int) -> int:
    """Load a palette file (.pcx) into a video buffer.

    In the original: FUN_00475840(char *path, void *dest, int unk2, int size, int mode)
    Returns a handle or 0 on failure.
    """
    # Stub: log the call
    print(f"  [PALETTE] {path}")
    return 1


def FUN_00404120(name_buf: int, slot_id: int, size_ptr: int) -> int:
    """Open+load a flic animation file, register it under slot_id.

    Returns a file/handle ID.
    """
    name = anim_name_table.get(slot_id, f"slot_{slot_id}")
    print(f"  [FLIC_LOAD] slot={slot_id} name='{name}'")
    return slot_id


def FUN_00404090(slot_id: int) -> int:
    """Re-load a previously registered flic by slot ID."""
    name = anim_name_table.get(slot_id, f"slot_{slot_id}")
    print(f"  [FLIC_RELOAD] slot={slot_id}")
    return slot_id


def FUN_004378a0(buf: int) -> int:
    """Check if a file exists (used for Shadow.flc probe).

    Returns 1 if exists, 0 if not.
    """
    return 1


def FUN_00473e60(buf: int, a: int, b: int, c: int) -> None:
    """Perform blit / composite operation."""
    pass


def FUN_00473bf0(buf: int, x: int, y: int, w: int, h: int, unk1: int, unk2: int) -> None:
    """Render a rectangle (loading bar / thumbnail area).

    In the original, this draws onto a temporary surface used for
    the loading screen.
    """
    pass


def FUN_00478af0(x: int, y: int, w: int, h: int, color: int) -> None:
    """Fill a rectangle with a solid color."""
    pass


def FUN_00474ae0() -> None:
    """Initialize the rendering surface / offscreen buffer."""
    pass


def FUN_00474dd0(h: int, w: int, bpp: int, unk1: int, unk2: int, unk3: int) -> None:
    """Create/configure a drawing surface."""
    pass


def FUN_00474c40() -> None:
    """Restore previous surface / cleanup after loading."""
    pass


def FUN_00406250(progress: int) -> None:
    """Update loading progress bar (percentage)."""
    pass


def FUN_00480c80(flag: int) -> None:
    """Process paint messages during loading."""
    pass


def FUN_0045bf80(delay: int, unk: int) -> None:
    """Sleep/delay for loading animation timing."""
    pass


def FUN_00483bd0() -> None:
    """Update the display / present the backbuffer."""
    pass


def FUN_0043d670(slot_id: int) -> None:
    """Free/unregister a previously registered animation slot."""
    pass


def FUN_004041c0(slot_id: int) -> None:
    """Release/close a loaded flic resource."""
    pass


def FUN_0046de70(msg: str, x: int, y: int) -> None:
    """Display an error message (e.g. 'Too many flics!')."""
    print(f"  [ERROR] {msg}")


def FUN_0043d5d0(byte_count: int) -> int:
    """Allocate memory for flic frames. Returns buffer offset or -1."""
    return flic_buffer_pos


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0043D740 — Animation / flic registration
# ═══════════════════════════════════════════════════════════════════════════════

def register_animation(
    anim_id: int,
    name: str,
    frame_count: int,
    unk_param: int,
    has_shadow: int,
) -> None:
    """Register a sprite animation.

    Original: FUN_0043d740(int animID, char *name, int frameCount, int unk, int unk2)

    Steps:
      1. Increment global loading counter, show progress every 100th call.
      2. Paint a loading background.
      3. Copy the animation name into the name table at slot anim_id.
      4. If has_shadow != 0: probe for 'Shadow.flc', if present load it
         as a shadow overlay for this animation.
      5. Load the main animation file via FUN_00404120.
      6. Manage a linear flic memory buffer (max 0xdd40 bytes).
      7. For each frame, render a thumbnail/preview in the loading screen.
      8. Cleanup.
    """
    global loading_counter, flic_buffer_pos, last_flic_handle, body_type_selector

    original_unk = unk_param

    # Increment counter; every 100th call update the loading display
    loading_counter += 1
    if loading_counter % 100 == 0:
        if force_reload_flag == -1:
            FUN_00406250((loading_counter + (loading_counter >> 0x1f & 3)) >> 2)
            FUN_00480c80(0)
        FUN_0045bf80(10, 0)

    FUN_00483bd0()

    if unk_param == -1:
        frame_count = 1

    FUN_00478af0(0, 0, 0x1e0, 0x1e0, 0xff)

    slot_index = anim_id + body_type_selector
    # Copy name into name table
    anim_name_table[anim_id] = name

    # Shadow overlay loading
    if has_shadow != 0:
        shadow_path = "Shadow.flc"
        # Check if Shadow.flc exists
        if FUN_004378a0(0) != 0:  # simplified — original checks via buffer
            has_shadow = 0
        else:
            last_flic_handle = FUN_00404120(0, 0x24e, 0)
            FUN_00473e60(0, 0, 0, 0)

    # ── Load the main animation ──────────────────────────────────────────
    last_flic_handle = FUN_00404120(0, slot_index, 0)
    FUN_00473e60(0, 0, 0, 0)

    buf_pos = flic_buffer_pos
    needs_initializing = body_type_selector == -2
    new_pos = flic_buffer_pos

    if needs_initializing:
        buf_pos = -1
    else:
        new_pos = FUN_0043d5d0(frame_count * anim_sizes.get(slot_index, 0))
        flic_buffer_pos = new_pos

    prev_pos = buf_pos
    if new_pos == -1:
        buf_pos = -1
        flic_buffer_pos = prev_pos
        new_pos = prev_pos

    frame_size = anim_sizes.get(slot_index, 0)
    if frame_size * frame_count + new_pos < 0xdd40:
        needs_init = True
        anim_slot_states[slot_index] = new_pos
        frame_idx = 0
        if frame_count > 0:
            while True:
                col_idx = 0
                if frame_size > 0:
                    while True:
                        if not needs_init:
                            if original_unk == 0:
                                # Small thumbnail for 0-unks
                                FUN_00473bf0(0, 200, 0xd2, 0x3c, 0x3c, 1, 1)
                            else:
                                FUN_00473bf0(0, 0, 0, 0x1e0, 0x1e0, 1, 1)
                            if has_shadow != 0:
                                last_flic_handle = FUN_00404090(0x24e)
                                FUN_00473e60(0, 0, 0, 0)
                            last_flic_handle = FUN_00404090(slot_index)
                            FUN_00473e60(0, 0, 0, 0)
                            new_pos = flic_buffer_pos

                        if original_unk == 0:
                            FUN_00473bf0(0, 200, 0xd2, 0x3c, 0x3c, 1, 1)
                        elif original_unk == 1 or original_unk == -1:
                            FUN_00473bf0(0, 100, 100, 0x118, 0xf0, 1, 1)
                        elif original_unk == 0xf0:
                            FUN_00473bf0(0, 0, 0, 0x1e0, 0x1e0, 1, 1)
                        else:
                            FUN_00473bf0(
                                0,
                                0xf0 - original_unk,
                                0xf0 - original_unk,
                                original_unk * 2,
                                (original_unk * 3) // 2,
                                1,
                                1,
                            )

                        needs_init = False
                        if original_unk == -1:
                            return

                        frame_size = anim_sizes.get(slot_index, 0)
                        col_idx += 1
                        if col_idx >= frame_size:
                            break
                        new_pos = flic_buffer_pos

                frame_idx += 1
                if original_unk == -1 or frame_idx >= frame_count:
                    break
    else:
        FUN_0046de70("Too many flics!", 100, 100)

    # Cleanup
    FUN_004041c0(slot_index)
    FUN_004041c0(0x24e)
    if prev_pos != -1:
        flic_buffer_pos = prev_pos


# ═══════════════════════════════════════════════════════════════════════════════
#  Theme-specific palette and animation data
# ═══════════════════════════════════════════════════════════════════════════════

# ── Palette file paths (extracted from decompiled string constants) ──────────

# Shared palette paths (theme-agnostic)
PAL_SHARED: Dict[str, str] = {
    # These are loaded outside the theme switch:
}

# ── Desert theme palettes (DAT_005a34e0 == 1) ────────────────────────────────
DESERT_PALETTES: List[str] = [
    "flics\\bldgs\\desert\\dessignPal.pcx",       # s_flics_bldgs_desert_dessignPal_004cc2e0
    "flics\\bldgs\\desert\\des_drpal.pcx",        # s_flics_bldgs_desert_des_drpal_004cc2c0
    "flics\\bldgs\\Desert\\DESSnackPal.pcx",      # s_flics_bldgs_Desert_DESSnackPal_004cc2a0
    "flics\\bldgs\\Desert\\DESCartPal.pcx",       # s_flics_bldgs_Desert_DESCartPal_004cc280
    "flics\\bldgs\\Desert\\DESHotelPal.pcx",      # s_flics_bldgs_Desert_DESHotelPal_004cc260
    "flics\\bldgs\\Desert\\DEScasPal.pcx",        # s_flics_bldgs_Desert_DEScasPal_004cc240
    "flics\\bldgs\\Desert\\heliPal.pcx",          # s_flics_bldgs_Desert_heliPal_004cc224
    "flics\\bldgs\\Desert\\dproPal.pcx",          # s_flics_bldgs_Desert_dproPal_004cc208
    "flics\\bldgs\\Desert\\DESclubPal.pcx",       # s_flics_bldgs_Desert_DESclubPal_004cc1e8
    "flics\\bldgs\\Desert\\spaPal.pcx",           # s_flics_bldgs_Desert_spaPal_004cc1cc
    "flics\\bldgs\\desert\\dputtPal.pcx",         # s_flics_bldgs_desert_dputtPal_004cc1b0
    "flics\\scenic\\Desert\\watersprayPa.pcx",    # s_flics_scenic_Desert_watersprayPa_004cc18c
    "flics\\scenic\\SailboatDesert\\Pale.pcx",    # s_flics_scenic_SailboatDesert_Pale_004cc168
    "flics\\scenic\\DolphinDesert\\Palet.pcx",    # s_flics_scenic_DolphinDesert_Palet_004cc144
    "flics\\bldgs\\desert\\DESSnackL2Pal.pcx",    # s_flics_bldgs_desert_DESSnackL2Pal_004cc120
    "flics\\bldgs\\flowers\\DesertFlower.pcx",    # s_flics_bldgs_flowers_DesertFlower_004cc0f4
    "flics\\bldgs\\desert\\DesProL2pal.pcx",      # s_flics_bldgs_desert_DesProL2pal_004cc0d4
    "flics\\bldgs\\desert\\DESputt_platL.pcx",     # s_flics_bldgs_desert_DESputt_platL_004cc0ac
    "flics\\bldgs\\desert\\DesCartL2pal.pcx",      # s_flics_bldgs_desert_DesCartL2pal_004cc08c
    "flics\\bldgs\\desert\\SpaL2pal.pcx",          # s_flics_bldgs_desert_SpaL2pal_004cc070
    "flics\\bldgs\\desert\\HelL2pal.pcx",          # s_flics_bldgs_desert_HelL2pal_004cc054
    "flics\\bldgs\\desert\\DesHoL2pal.pcx",        # s_flics_bldgs_desert_DesHoL2pal_004cc034
    "flics\\bldgs\\desert\\DesCasL2pal.pcx",       # s_flics_bldgs_desert_DesCasL2pal_004cc014
    "flics\\bldgs\\desert\\DesClubL2pal.pcx",      # s_flics_bldgs_desert_DesClubL2pal_004cbff4
    "flics\\flowers\\OilSlickPal.pcx",             # s_flics_flowers_OilSlickPal_004cbfd8
    "flics\\tees\\flag\\desertpal.pcx",            # s_flics_tees_flag_desertpal_004cbfbc
    "flics\\homes\\regular\\desert\\A\\Des.pcx",   # s_flics_homes_regular_desert_A_Des_004cbf8c
    "flics\\bldgs\\desert\\dhouseconpal.pcx",      # s_flics_bldgs_desert_dhouseconpal_004cbf6c
    "flics\\bldgs\\desert\\house_Apal.pcx",        # s_flics_bldgs_desert_house_Apal_004cbf4c
]

# ── Tropical theme palettes (DAT_005a34e0 == 2) ──────────────────────────────
TROPICAL_PALETTES: List[str] = [
    "flics\\bldgs\\Tropical\\TropHouseSi.pcx",     # s_flics_bldgs_Tropical_TropHouseSi_004cc748
    "flics\\bldgs\\Tropical\\TropDriving.pcx",      # s_flics_bldgs_Tropical_TropDriving_004cc724
    "flics\\bldgs\\Tropical\\TropSnackL1.pcx",      # s_flics_bldgs_Tropical_TropSnackL1_004cc6f8
    "flics\\bldgs\\Tropical\\TropCartL1P.pcx",      # s_flics_bldgs_Tropical_TropCartL1P_004cc6d4
    "flics\\bldgs\\Tropical\\TropHotelL1.pcx",      # s_flics_bldgs_Tropical_TropHotelL1_004cc6b0
    "flics\\bldgs\\Tropical\\TROPthemeL1.pcx",      # s_flics_bldgs_Tropical_TROPthemeL1_004cc684
    "flics\\bldgs\\Tropical\\TropMarL1_p.pcx",      # s_flics_bldgs_Tropical_TropMarL1_p_004cc65c
    "flics\\bldgs\\Tropical\\TropProShop.pcx",      # s_flics_bldgs_Tropical_TropProShop_004cc630
    "flics\\bldgs\\Tropical\\TropclubL1P.pcx",      # s_flics_bldgs_Tropical_TropclubL1P_004cc60c
    "flics\\bldgs\\Tropical\\TropSwimL1P.pcx",      # s_flics_bldgs_Tropical_TropSwimL1P_004cc5e8
    "flics\\bldgs\\Tropical\\TropPutting.pcx",      # s_flics_bldgs_Tropical_TropPutting_004cc5c4
    "flics\\scenic\\Trop\\watersprayPal.pcx",       # s_flics_scenic_Trop_watersprayPal_004cc5a4
    "flics\\scenic\\sailboatTropical\\Pa.pcx",      # s_flics_scenic_sailboatTropical_Pa_004cc57c
    "flics\\scenic\\DolphinTropical\\Pal.pcx",      # s_flics_scenic_DolphinTropical_Pal_004cc554
    "flics\\bldgs\\tropical\\SnackL2\\pal.pcx",     # s_flics_bldgs_tropical_SnackL2_pal_004cc52c
    "flics\\bldgs\\flowers\\TropicalFlow.pcx",      # s_flics_bldgs_flowers_TropicalFlow_004cc500
    "flics\\bldgs\\tropical\\TropProShop.pcx",      # s_flics_bldgs_tropical_TropProShop_004cc4d4
    "flics\\bldgs\\Tropical\\TropSwimL2_.pcx",       # s_flics_bldgs_Tropical_TropSwimL2__004cc4ac
    "flics\\bldgs\\tropical\\TropDRL2\\pa.pcx",      # s_flics_bldgs_tropical_TropDRL2_pa_004cc484
    "flics\\bldgs\\tropical\\TropCartL2_.pcx",       # s_flics_bldgs_tropical_TropCartL2__004cc45c
    "flics\\bldgs\\Tropical\\TropMarL2_p.pcx",       # s_flics_bldgs_Tropical_TropMarL2_p_004cc434
    "flics\\bldgs\\Tropical\\TropHotelL2.pcx",       # s_flics_bldgs_Tropical_TropHotelL2_004cc408
    "flics\\bldgs\\Tropical\\TROPthemeL2.pcx",       # s_flics_bldgs_Tropical_TROPthemeL2_004cc3dc
    "flics\\bldgs\\Tropical\\TropClubL2_.pcx",       # s_flics_bldgs_Tropical_TropClubL2__004cc3b4
    "flics\\flowers\\DryGrassPal.pcx",              # s_flics_flowers_DryGrassPal_004cc398
    "flics\\tees\\flag\\troppal.pcx",               # s_flics_tees_flag_troppal_004cc380
    "flics\\bldgs\\tropical\\TropHouseCo.pcx",      # s_flics_bldgs_tropical_TropHouseCo_004cc354
    "flics\\homes\\regular\\tropical\\B\\T.pcx",    # s_flics_homes_regular_tropical_B_T_004cc320
]

# ── Links theme palettes (DAT_005a34e0 == 3) ─────────────────────────────────
LINKS_PALETTES: List[str] = [
    "flics\\bldgs\\links\\sign\\links_Pal.pcx",     # s_flics_bldgs_links_sign_links_Pal_004ccb28
    "flics\\bldgs\\links\\driving_rangeL.pcx",      # s_flics_bldgs_links_driving_rangeL_004ccafc
    "flics\\bldgs\\links\\PubPal.pcx",              # s_flics_bldgs_links_PubPal_004ccae0
    "flics\\bldgs\\links\\HotelPal.pcx",            # s_flics_bldgs_links_HotelPal_004ccac4
    "flics\\bldgs\\links\\CastlePal.pcx",           # s_flics_bldgs_links_CastlePal_004ccaa8
    "flics\\bldgs\\links\\ClubL1\\Palette.pcx",     # s_flics_bldgs_links_ClubL1_Palette_004cca84
    "flics\\bldgs\\links\\ChurchPal.pcx",           # s_flics_bldgs_links_ChurchPal_004cca68
    "flics\\bldgs\\links\\Pro_shopPal.pcx",         # s_flics_bldgs_links_Pro_shopPal_004cca48
    "flics\\bldgs\\links\\Cart\\GaragePal.pcx",     # s_flics_bldgs_links_Cart_GaragePal_004cca24
    "flics\\bldgs\\links\\StableL1\\palet.pcx",     # s_flics_bldgs_links_StableL1_palet_004cca00
    "flics\\bldgs\\links\\PG_L1_and_L2_P.pcx",      # s_flics_bldgs_links_PG_L1_and_L2_P_004cc9d8
    "flics\\scenic\\Links\\watersprayPal.pcx",      # s_flics_scenic_Links_watersprayPal_004cc9b4
    "flics\\scenic\\SailboatLinks\\Palet.pcx",      # s_flics_scenic_SailboatLinks_Palet_004cc990
    "flics\\scenic\\DolphinLinks\\Palett.pcx",      # s_flics_scenic_DolphinLinks_Palett_004cc96c
    "flics\\bldgs\\links\\PubL2\\Palette.pcx",      # s_flics_bldgs_links_PubL2_Palette_004cc94c
    "flics\\bldgs\\flowers\\FlowerbedA_I.pcx",      # s_flics_bldgs_flowers_FlowerbedA_I_004ccd1c
    "flics\\bldgs\\links\\DRL2\\palette.pcx",       # s_flics_bldgs_links_DRL2_palette_004cc92c
    "flics\\bldgs\\links\\ProShopL2\\pale.pcx",     # s_flics_bldgs_links_ProShopL2_pale_004cc908
    "flics\\bldgs\\links\\Cart\\GarageL2_.pcx",     # s_flics_bldgs_links_Cart_GarageL2__004cc8e0
    "flics\\bldgs\\links\\StableL2\\palet.pcx",     # s_flics_bldgs_links_StableL2_palet_004cc8bc
    "flics\\bldgs\\links\\ChurchL2\\palet.pcx",     # s_flics_bldgs_links_ChurchL2_palet_004cc898
    "flics\\bldgs\\links\\HotelL2\\palett.pcx",     # s_flics_bldgs_links_HotelL2_palett_004cc874
    "flics\\bldgs\\links\\CastleL2\\palet.pcx",     # s_flics_bldgs_links_CastleL2_palet_004cc850
    "flics\\bldgs\\links\\ClubL2\\Palette.pcx",     # s_flics_bldgs_links_ClubL2_Palette_004cc82c
    "flics\\flowers\\dandelionPal.pcx",             # s_flics_flowers_dandelionPal_004ccbf8
    "flics\\tees\\flag\\linkspal.pcx",              # s_flics_tees_flag_linkspal_004cc810
    "flics\\homes\\regular\\links\\B\\Link.pcx",    # s_flics_homes_regular_links_B_Link_004cc7e0
    "flics\\bldgs\\links\\housecon\\palet.pcx",     # s_flics_bldgs_links_housecon_palet_004cc7bc
    "flics\\bldgs\\links\\house_A\\links_.pcx",     # s_flics_bldgs_links_house_A_links__004cc794
]

# ── Parkland theme palettes (DAT_005a34e0 == 0) ──────────────────────────────
PARKLAND_PALETTES: List[str] = [
    "flics\\bldgs\\park\\signPal.pcx",              # s_flics_bldgs_park_signPal_004ccf0c
    "flics\\bldgs\\park\\DRL1\\palette.pcx",        # s_flics_bldgs_park_DRL1_palette_004cceec
    "flics\\bldgs\\park\\ParkSnackL1\\pal.pcx",     # s_flics_bldgs_park_ParkSnackL1_pal_004ccec4
    "flics\\bldgs\\park\\HotelL1\\palette.pcx",     # s_flics_bldgs_park_HotelL1_palette_004ccea0
    "flics\\bldgs\\park\\AirL1\\Palette.pcx",       # s_flics_bldgs_park_AirL1_Palette_004cce80
    "flics\\bldgs\\park\\ClubL1\\palette.pcx",      # s_flics_bldgs_park_ClubL1_palette_004cce60
    "flics\\bldgs\\park\\MarL1\\Palette.pcx",       # s_flics_bldgs_park_MarL1_Palette_004cce40
    "flics\\bldgs\\park\\ParkProL1\\Palet.pcx",     # s_flics_bldgs_park_ParkProL1_Palet_004cce1c
    "flics\\bldgs\\park\\CartL1\\Palette.pcx",      # s_flics_bldgs_park_CartL1_Palette_004ccdfc
    "flics\\bldgs\\park\\TenL1\\Palette.pcx",       # s_flics_bldgs_park_TenL1_Palette_004ccddc
    "flics\\bldgs\\park\\PuttL1\\Palette.pcx",      # s_flics_bldgs_park_PuttL1_Palette_004ccdbc
    "flics\\scenic\\watersprayPal.pcx",             # s_flics_scenic_watersprayPal_004ccda0
    "flics\\scenic\\Sail\\MovePal.pcx",             # s_flics_scenic_Sail_MovePal_004ccd84
    "flics\\scenic\\DolphinPal.pcx",                # s_flics_scenic_DolphinPal_004ccd6c
    "flics\\bldgs\\park\\ParkSnackL2\\Pal.pcx",     # s_flics_bldgs_park_ParkSnackL2_Pal_004ccd44
    "flics\\bldgs\\flowers\\FlowerbedA_I.pcx",      # s_flics_bldgs_flowers_FlowerbedA_I_004ccd1c
    "flics\\bldgs\\park\\ParkProL2\\palet.pcx",     # s_flics_bldgs_park_ParkProL2_palet_004cccf8
    "flics\\bldgs\\park\\DRL2\\palette.pcx",        # s_flics_bldgs_park_DRL2_palette_004cccd8
    "flics\\bldgs\\park\\CartL2\\palette.pcx",      # s_flics_bldgs_park_CartL2_palette_004cccb8
    "flics\\bldgs\\park\\TenL2\\palette.pcx",       # s_flics_bldgs_park_TenL2_palette_004ccc98
    "flics\\bldgs\\park\\MarL2\\palette.pcx",       # s_flics_bldgs_park_MarL2_palette_004ccc78
    "flics\\bldgs\\park\\HotelL2\\Palette.pcx",     # s_flics_bldgs_park_HotelL2_Palette_004ccc54
    "flics\\bldgs\\park\\AirL2\\Palette.pcx",       # s_flics_bldgs_park_AirL2_Palette_004ccc34
    "flics\\bldgs\\park\\clubL2\\Palette.pcx",      # s_flics_bldgs_park_clubL2_Palette_004ccc14
    "flics\\flowers\\dandelionPal.pcx",             # s_flics_flowers_dandelionPal_004ccbf8
    "flics\\tees\\flag\\parkpal.pcx",               # s_flics_tees_flag_parkpal_004ccbe0
    "flics\\homes\\regular\\parkland\\A\\P.pcx",    # s_flics_homes_regular_parkland_A_P_004ccbac
    "flics\\bldgs\\park\\houseconpal.pcx",          # s_flics_bldgs_park_houseconpal_004ccb8c
    "flics\\bldgs\\park\\houseBpal.pcx",            # s_flics_bldgs_park_houseBpal_004ccb70
]

# ── Terrain button files ─────────────────────────────────────────────────────
TERRAIN_BUTTONS: Dict[int, str] = {
    COURSE_PARKLAND: "interface\\ParklandTerrainButtons",
    COURSE_DESERT: "interface\\DesertTerrainButtons",
    COURSE_TROPICAL: "interface\\TropicalTerrainButtons",
    COURSE_LINKS: "interface\\LinksTerrainButtons",
}

LAYOUT_IMAGES: Dict[int, str] = {
    COURSE_PARKLAND: "interface\\Parklands\\Layout",
    COURSE_DESERT: "interface\\Desert\\Layout",
    COURSE_TROPICAL: "interface\\Trop\\Layout",
    COURSE_LINKS: "interface\\Links\\Layout",
}


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_0043DBE0 — Main asset/terrain/building loader
# ═══════════════════════════════════════════════════════════════════════════════

def load_all_assets() -> None:
    """Main asset loading function.

    Original: FUN_0043dbe0()

    Loads all palettes, animation definitions, and terrain descriptors
    for the currently selected course theme (DAT_005a34e0).
    """
    global course_theme, terrain_name_buf, terrain_noun_buf, body_type_selector

    # ── 1. Initialise offscreen surface ──────────────────────────────────
    FUN_00474ae0()
    FUN_00474dd0(0x400, 800, 0, 1, 0, 0)

    # ── 2. Load theme-specific palette files ─────────────────────────────
    water_pal_path: str = ""

    if course_theme == COURSE_DESERT:
        for pal_path in DESERT_PALETTES:
            FUN_00475840(pal_path, 0, 0, 0x100, 0)
        water_pal_path = "flics\\water\\DesWater\\Palette.pcx"

    elif course_theme == COURSE_TROPICAL:
        for pal_path in TROPICAL_PALETTES:
            FUN_00475840(pal_path, 0, 0, 0x100, 0)
        water_pal_path = "flics\\water\\TropWater\\Palette.pcx"

    elif course_theme == COURSE_LINKS:
        for pal_path in LINKS_PALETTES:
            FUN_00475840(pal_path, 0, 0, 0x100, 0)
        water_pal_path = "flics\\water\\LinksWater\\Palette.pcx"

    else:  # Parkland (0) or default
        for pal_path in PARKLAND_PALETTES:
            FUN_00475840(pal_path, 0, 0, 0x100, 0)
        water_pal_path = "flics\\water\\ParkWater\\Palette.pcx"

    # Load the water palette for any theme
    FUN_00475840(water_pal_path, 0, 0, 0x100, 0)

    # ── 3. Load terrain button image ─────────────────────────────────────
    button_path = TERRAIN_BUTTONS.get(course_theme)
    if button_path:
        FUN_00475840(button_path, 0, 0, 0x100, 2)

    # ── 4. Render terrain palette previews ───────────────────────────────
    # Original renders 4 rows x 7 columns of building thumbnails
    # (DAT_00570cb8 + 0x2c stride per building)
    for row in range(7):
        x_pos = 0xf8  # starting x
        for col in range(4):
            y_pos = (row % 7) * 0x36
            FUN_00473bf0(0, x_pos, y_pos, 0x3e, 0x36, 1, 1)
            x_pos += 0x3e

    # ── 5. Render theme-specific terrain button bars ─────────────────────
    # Each theme renders 3 rows of buttons at different Y offsets
    if course_theme == COURSE_PARKLAND:
        x = 0x208
        while x < 0x2f8:
            FUN_00473bf0(0, x, 0, 0x41, 0x54, 1, 1)
            FUN_00473bf0(0, x, 0x96, 0x3e, 0x46, 1, 1)
            FUN_00473bf0(0, x, 300, 0x3e, 0x58, 1, 1)
            x += 0x50
    elif course_theme == COURSE_DESERT:
        x = 0x208
        while x < 0x2f8:
            FUN_00473bf0(0, x, 0, 0x4b, 0x4a, 1, 1)
            FUN_00473bf0(0, x, 0x96, 0x3e, 0x43, 1, 1)
            FUN_00473bf0(0, x, 300, 0x41, 0x68, 1, 1)
            x += 0x50
    elif course_theme == COURSE_TROPICAL:
        x = 0x208
        while x < 0x2f8:
            FUN_00473bf0(0, x, 0, 0x48, 0x4f, 1, 1)
            FUN_00473bf0(0, x, 0x96, 0x3e, 0x51, 1, 1)
            FUN_00473bf0(0, x, 300, 0x41, 0x68, 1, 1)
            x += 0x50
    elif course_theme == COURSE_LINKS:
        x = 0x208
        while x < 0x2f8:
            FUN_00473bf0(0, x, 0, 0x43, 0x54, 1, 1)
            FUN_00473bf0(0, x, 0x96, 0x3e, 0x58, 1, 1)
            FUN_00473bf0(0, x, 300, 0x43, 0x4c, 1, 1)
            x += 0x50

    # ── 6. Load layout image ─────────────────────────────────────────────
    layout_path = LAYOUT_IMAGES.get(course_theme)
    if layout_path:
        FUN_00475840(layout_path, 0, 0, 0x100, 2)

    # ── 7. Render builder palette blocks ─────────────────────────────────
    # 4 blocks per row, DAT_0053dfb0 stride 0xb0
    for block in range(0x2f8 // 0x4b):  # iterates until DAT_0053dfb0 < 0x53e690
        x = block * 0x4b
        FUN_00473bf0(0, x, 0, 0x4b, 100, 1, 1)
        FUN_00473bf0(0, x, 100, 0x4b, 100, 1, 1)
        FUN_00473bf0(0, x, 200, 0x4b, 100, 1, 1)
        FUN_00473bf0(0, x, 300, 0x4b, 100, 1, 1)

    # ── 8. Reset animation slot registry ─────────────────────────────────
    # First batch: slot 0x1b6..0x22d  (DAT_005a9a48 + 0x22d-0x1b6+1 entries)
    # Second batch: slot 0x22e..0x261 (DAT_005a9c28 + ...)
    _reset_anim_slot_range(0x1b6, 0x22d)
    _reset_anim_slot_range(0x22e, 0x261)

    # ── 9. Register theme-specific building animations ───────────────────
    body_type_selector = 0

    if course_theme == COURSE_TROPICAL:
        _register_tropical_buildings()
    if course_theme == COURSE_DESERT:
        _register_desert_buildings()
    if course_theme == COURSE_LINKS:
        _register_links_buildings()
    if course_theme == COURSE_PARKLAND:
        _register_parkland_buildings()

    # ── 10. Bridges and water features (themed) ──────────────────────────
    _register_bridges_and_water()

    # ── 11. Tree palettes (themed) ───────────────────────────────────────
    _register_tree_palettes()

    # ── 12. Flower palettes (themed) ─────────────────────────────────────
    _register_flower_palettes()

    # ── 13. Secondary tree palettes (pine/palm per theme) ────────────────
    _register_secondary_trees()

    # ── 14. Set up terrain descriptor strings (themed) ───────────────────
    _setup_terrain_strings()

    # ── 15. Reset scenic/landmark animation slots ────────────────────────
    _reset_anim_slot_range(400, 0x1b2)

    # ── 16. Register scenic items (themed: animals, sailboats, flowers) ──
    cvar5 = course_theme
    if cvar5 == COURSE_DESERT:
        _register_desert_scenics()
    elif cvar5 == COURSE_TROPICAL:
        _register_tropical_scenics()
    else:
        _register_generic_scenics()

    # ── 17. Register theme-specific extra trees ──────────────────────────
    _register_extra_trees()

    # ── 18. Cleanup ──────────────────────────────────────────────────────
    FUN_00474c40()


# ── Internal helpers ────────────────────────────────────────────────────────

def _reset_anim_slot_range(start_slot: int, end_slot: int) -> None:
    """Free and reset animation slots from start_slot to end_slot inclusive."""
    for slot in range(start_slot, end_slot + 1):
        if anim_slot_states.get(slot, -1) != -1:
            FUN_0043d670(slot)
        anim_slot_states[slot] = -1
        anim_name_table[slot] = ""


# ═══════════════════════════════════════════════════════════════════════════════
#  Theme-specific building registrations
# ═══════════════════════════════════════════════════════════════════════════════

def _register_tropical_buildings() -> None:
    """Register all Tropical theme building animations (DAT_005a34e0 == 2).

    Buildings: sign, houses (construction, Level A/B), snack bar (L1, L2, ANIM),
    driving range (shop L1, L2, platform, 100/200/300 signs, flag, fence,
    shop L1, L2 platform top/base), putting green (L1, L1, flag, L2, L2 An,
    L2 Scenic), cart rental (L1, L1 Base, L2, L2 Base), clubhouse (L1, L1 anim,
    L2, L2 base, L2 ANIM), marina (L1, L1 underwater, L2, L2 underwater),
    pro shop (L1, L1 base, L1 anim, L2), swim pool (L1, L1 anim, L2, L2 anim),
    theme park (L1, L1 BoatA, L1 Cannon, L2, L2 LoopA, L2 Spray),
    hotel (L1, L1 base, L2, L2 base, L2 ANIM).
    """
    # Sign and houses
    register_animation(0x1c8, "bldgs\\tropical\\tropsign", 4, 1, 1)
    register_animation(0x1c9, "bldgs\\tropical\\TropHouseconst", 4, 1, 1)
    register_animation(0x1ca, "Homes\\Regular\\Tropical\\B\\TropHou", 4, 0x8c, 1)

    # Snack bar
    register_animation(0x1ec, "bldgs\\Tropical\\TropSnackL1", 4, 1, 1)
    register_animation(0x1ee, "bldgs\\Tropical\\TropSnackL2", 4, 1, 1)
    register_animation(0x1ef, "bldgs\\Tropical\\TropSnackL2\\ANIM", 4, 1, 1)

    # Driving range
    register_animation(0x1b6, "bldgs\\tropical\\TropDrivingRShopL", 4, 1, 1)
    register_animation(0x1b7, "bldgs\\tropical\\TropDrivingRShopL", 4, 1, 1)
    register_animation(0x1b8, "bldgs\\tropical\\TropDrivingRL1Pla", 4, 0x28, 1)
    register_animation(0x1b9, "bldgs\\tropical\\TropDrivingRL1Pla", 4, 0x28, 1)
    register_animation(0x1ba, "bldgs\\tropical\\TropDrivingR100L1", 4, 0x28, 1)
    register_animation(0x1bb, "bldgs\\tropical\\TropDrivingR200L1", 4, 0x28, 1)
    register_animation(0x1bc, "bldgs\\tropical\\TropDrivingR300L1", 4, 0x28, 1)
    register_animation(0x1bd, "bldgs\\tropical\\TropDrivingRflagL", 1, 0x28, 1)
    register_animation(0x1be, "bldgs\\tropical\\TropDrivingRfence", 4, 0x28, 1)
    register_animation(0x1bf, "bldgs\\tropical\\TROPDrivingRshopL", 4, 1, 1)
    register_animation(0x1c0, "bldgs\\tropical\\TropDrivingRL2Pla", 4, 0x28, 1)
    register_animation(0x1c1, "bldgs\\tropical\\TropDrivingRL2Pla", 4, 0x28, 1)

    # Putting green
    register_animation(0x1f0, "bldgs\\tropical\\TropPuttingGL1", 4, 0x28, 1)
    register_animation(0x1f1, "bldgs\\tropical\\TropPuttingGL1", 4, 0x28, 1)
    register_animation(0x1f2, "bldgs\\tropical\\TropPuttingGFlagL", 1, 0x28, 1)
    register_animation(499, "bldgs\\tropical\\TropPuttingGL2", 4, 0x28, 1)
    register_animation(500, "bldgs\\tropical\\TropPuttingGL2\\An", 4, 0x28, 1)
    register_animation(0x1f5, "bldgs\\tropical\\TropPuttingGL2\\Sc", 4, 0x28, 1)

    # Cart rental
    register_animation(0x1c2, "bldgs\\tropical\\TropCartL1", 4, 1, 1)
    register_animation(0x1c5, "bldgs\\tropical\\TropCartL1Base", 4, 1, 0)
    register_animation(0x1c3, "bldgs\\tropical\\TropCartL2", 4, 1, 1)
    register_animation(0x1c6, "bldgs\\tropical\\TropCartL2\\Base", 4, 1, 0)

    # Clubhouse
    register_animation(0x1f6, "bldgs\\tropical\\TropclubL1", 4, 1, 1)
    register_animation(0x1fa, "bldgs\\tropical\\TropclubL1anim", 4, 1, 1)
    register_animation(0x1f7, "bldgs\\tropical\\TropclubL2", 4, 1, 1)
    register_animation(0x1f8, "bldgs\\tropical\\TropclubL2\\base", 4, 1, 0)
    register_animation(0x1fb, "bldgs\\tropical\\TropclubL2\\ANIM", 4, 1, 1)

    # Marina
    register_animation(0x1ce, "bldgs\\tropical\\TropMarL1", 4, 1, 1)
    register_animation(0x1d1, "bldgs\\tropical\\TropMarL1\\underwa", 4, 1, 0)
    register_animation(0x1cf, "bldgs\\tropical\\TropMarinaL2", 4, 1, 1)
    register_animation(0x1d2, "bldgs\\tropical\\TropMarinaL2\\unde", 4, 1, 0)

    # Pro shop
    register_animation(0x1e0, "bldgs\\tropical\\TropProshopL1", 4, 1, 1)
    register_animation(0x1e3, "bldgs\\tropical\\TropProshopL1\\bas", 4, 1, 0)
    register_animation(0x1e4, "bldgs\\tropical\\TropProshopL1\\ani", 4, 1, 1)
    register_animation(0x1e1, "bldgs\\tropical\\TropProshopL2", 4, 1, 1)

    # Swim pool
    register_animation(0x1d4, "bldgs\\tropical\\TropSwimL1", 4, 1, 1)
    register_animation(0x1d7, "bldgs\\tropical\\TropSwimL1anim", 4, 1, 0)
    register_animation(0x1d5, "bldgs\\tropical\\TropSwimL2", 4, 1, 1)
    register_animation(0x1d8, "bldgs\\tropical\\TropSwimL2\\anim", 4, 1, 0)

    # Theme park
    register_animation(0x1da, "bldgs\\tropical\\TROPthemeL1", 4, 0xf0, 1)
    register_animation(0x1dc, "bldgs\\tropical\\TROPthemeL1\\BoatA", 4, 0xf0, 0)
    register_animation(0x1de, "bldgs\\tropical\\TROPthemeL1\\Canno", 4, 0xf0, 1)
    register_animation(0x1db, "bldgs\\tropical\\TROPthemeL2", 4, 0xf0, 1)
    register_animation(0x1dd, "bldgs\\tropical\\TROPthemeL2\\LoopA", 4, 0xf0, 0)
    register_animation(0x1df, "bldgs\\tropical\\TROPthemeL2\\Spray", 4, 0xf0, 1)

    # Hotel
    register_animation(0x1e6, "bldgs\\Tropical\\TropHotelL1", 4, 0xf0, 1)
    register_animation(0x1e9, "bldgs\\Tropical\\TropHotelL1base", 4, 0xf0, 0)
    register_animation(0x1e7, "bldgs\\Tropical\\TropHotelL2", 4, 0xf0, 1)
    register_animation(0x1ea, "bldgs\\Tropical\\TropHotelL2\\base", 4, 0xf0, 0)
    register_animation(0x1eb, "bldgs\\Tropical\\TropHotelL2\\ANIM", 4, 0xf0, 1)


def _register_desert_buildings() -> None:
    """Register all Desert theme building animations (DAT_005a34e0 == 1).

    Buildings: sign, houses, snack bar (L1, base, L2), driving range
    (DRL1 build, DRL2 house, platform, 100/200/300, flag, wall,
    DRL2 plattop/base), putting green (L1, L1 base, shortflag, L2, L2scenic),
    cart rental (L1, L1 base, L2, L2 base, L2 anim), clubhouse (L1, L1 base,
    L2), helipad (L1, L1 base, L2, L2 base, AnimLites, AnimElev),
    pro shop (L1, L1 base, L2, L2 anim), spa (L1, L1 base, L2),
    casino (L1, L1 base, L1 anim, L2, L2 base, L2 status),
    hotel (L1, L1 base, L1 anim, L2, L2 status, L2 elev).
    """
    # Sign and houses
    register_animation(0x1c8, "bldgs\\desert\\DESsign", 4, 1, 1)
    register_animation(0x1c9, "bldgs\\desert\\DESHouseconst", 4, 1, 1)
    register_animation(0x1ca, "Homes\\Regular\\Desert\\A\\DesHouseA", 4, 0x8c, 1)

    # Snack bar
    register_animation(0x1ec, "bldgs\\Desert\\DESSnack", 4, 1, 1)
    register_animation(0x1ed, "bldgs\\Desert\\DESSnackBase", 4, 1, 1)
    register_animation(0x1ee, "bldgs\\Desert\\DESSnackL2", 4, 1, 1)

    # Driving range
    register_animation(0x1b6, "bldgs\\desert\\dbuildDRL1", 4, 1, 1)
    register_animation(0x1b7, "bldgs\\desert\\desDRL2house", 4, 1, 1)
    register_animation(0x1b8, "bldgs\\desert\\dplatDRL1", 4, 0x28, 1)
    register_animation(0x1b9, "bldgs\\desert\\dplatDRL1base", 4, 0x28, 1)
    register_animation(0x1ba, "bldgs\\desert\\d100DRL1", 4, 0x28, 1)
    register_animation(0x1bb, "bldgs\\desert\\d200DRL1", 4, 0x28, 1)
    register_animation(0x1bc, "bldgs\\desert\\d300DRL1", 4, 0x28, 1)
    register_animation(0x1bd, "bldgs\\desert\\dflagDRL1", 1, 0x28, 1)
    register_animation(0x1be, "bldgs\\desert\\dwallDRL1", 4, 0x28, 1)
    register_animation(0x1c0, "bldgs\\desert\\desDRL2plattop", 4, 0x28, 1)
    register_animation(0x1c1, "bldgs\\desert\\desDRL2plat", 4, 0x28, 1)

    # Putting green
    register_animation(0x1f0, "bldgs\\desert\\dputtL1", 4, 0x28, 1)
    register_animation(0x1f1, "bldgs\\desert\\dputtL1base", 4, 0x28, 1)
    register_animation(0x1f2, "bldgs\\desert\\dshortflagL1", 1, 0x28, 1)
    register_animation(499, "bldgs\\desert\\desputtL2", 4, 0x28, 1)
    register_animation(500, "bldgs\\desert\\desputtL2", 4, 0x28, 1)
    register_animation(0x1f5, "bldgs\\desert\\desputtL2scenic", 4, 0x78, 1)

    # Cart rental
    register_animation(0x1c2, "bldgs\\Desert\\DESCartL1", 4, 1, 1)
    register_animation(0x1c5, "bldgs\\Desert\\DESCartL1Base", 4, 1, 1)
    register_animation(0x1c3, "bldgs\\Desert\\DESCartL2", 4, 1, 1)
    register_animation(0x1c6, "bldgs\\Desert\\DESCartL2Base", 4, 1, 1)
    register_animation(0x1c7, "bldgs\\Desert\\DESCartL2Anim", 4, 1, 0)

    # Clubhouse
    register_animation(0x1f6, "bldgs\\Desert\\DESclubL1", 4, 1, 1)
    register_animation(0x1f9, "bldgs\\Desert\\DESclubL1base", 4, 1, 1)
    register_animation(0x1f7, "bldgs\\Desert\\DESclubL2", 4, 1, 1)

    # Helipad
    register_animation(0x1ce, "bldgs\\Desert\\HeliL1", 4, 1, 1)
    register_animation(0x1d1, "bldgs\\Desert\\HeliL1\\Base", 4, 1, 1)
    register_animation(0x1cf, "bldgs\\Desert\\HelL2", 4, 1, 1)
    register_animation(0x1d2, "bldgs\\Desert\\HelL2Base", 4, 1, 1)
    register_animation(0x1d0, "bldgs\\Desert\\HelAnimLites", 4, 1, 0)
    register_animation(0x1d3, "bldgs\\Desert\\HelAnimElev", 4, 1, 1)

    # Pro shop
    register_animation(0x1e0, "bldgs\\Desert\\dproL1", 4, 1, 1)
    register_animation(0x1e3, "bldgs\\Desert\\dproL1Base", 4, 1, 1)
    register_animation(0x1e1, "bldgs\\Desert\\desproL2", 4, 1, 1)
    register_animation(0x1e4, "bldgs\\Desert\\desproL2Anim", 4, 1, 0)

    # Spa
    register_animation(0x1d4, "bldgs\\Desert\\spaL1", 4, 1, 1)
    register_animation(0x1d7, "bldgs\\Desert\\spaL1\\Base", 4, 1, 1)
    register_animation(0x1d5, "bldgs\\Desert\\spaL2", 4, 1, 1)

    # Casino
    register_animation(0x1d9, "bldgs\\Desert\\DESCASL2Wheel", 4, 0xf0, 0)
    register_animation(0x1da, "bldgs\\Desert\\DESCASL1", 4, 0xf0, 1)
    register_animation(0x1dd, "bldgs\\Desert\\DESCASL1Base", 4, 0xf0, 1)
    register_animation(0x1dc, "bldgs\\Desert\\DESCASL1Anim", 4, 0xf0, 1)
    register_animation(0x1db, "bldgs\\Desert\\DESCASL2", 4, 0xf0, 1)
    register_animation(0x1de, "bldgs\\Desert\\DESCASL2Base", 4, 0xf0, 0)
    register_animation(0x1df, "bldgs\\Desert\\DESCASL2Status", 4, 0xf0, 0)

    # Hotel
    register_animation(0x1e6, "bldgs\\Desert\\DESHotelL1", 4, 0xf0, 1)
    register_animation(0x1e9, "bldgs\\Desert\\DESHotelL1base", 4, 0xf0, 1)
    register_animation(0x1e8, "bldgs\\Desert\\DESHotelL1Anim", 4, 0xf0, 1)
    register_animation(0x1e7, "bldgs\\Desert\\DESHoL2", 4, 0xf0, 1)
    register_animation(0x1ea, "bldgs\\Desert\\DESHoL2Status", 4, 0xf0, 0)
    register_animation(0x1eb, "bldgs\\Desert\\DESHoL2elev", 4, 0xf0, 1)


def _register_links_buildings() -> None:
    """Register all Links theme building animations (DAT_005a34e0 == 3).

    Buildings: sign, houses, pub (SQ, SQ_dirt, L2, L2_dirt),
    driving range (shop, L2 shop, platform, plat_dirt, 100/200/300 signs,
    flag, rockwall, L2 shop ANIM, L2 platform, L2 platform base),
    putting green (hut L1, hut L1 dirt, pflag, hut L2, hut L2 dirt, scenic L2),
    cart garage (L1, L1 dirt, L2, L2 dirt),
    pro shop (L1, L1 dirt, L1 anim, L2, L2 dirt, L2 anim),
    clubhouse (L1, L1 dirt, L1 ANIM, L2, L2 dirt, L2 ANIM),
    stable (L1, L1 dirt, L2, L2 dirt, L2 anim),
    church (L1, L1 dirt, L2, L2 dirt),
    hotel (L1, L1 dirt, L1 anim, L2, L2 dirt, L2 anim),
    castle (L1, L1 dirt, L2, L2 dirt, L2 ANIM).
    """
    # Sign and houses
    register_animation(0x1c8, "bldgs\\links\\sign\\links", 4, 1, 1)
    register_animation(0x1c9, "bldgs\\links\\Houseconst\\links", 4, 1, 1)
    register_animation(0x1ca, "Homes\\Regular\\Links\\B\\LinksHouse", 4, 0x8c, 1)

    # Pub
    register_animation(0x1ec, "bldgs\\links\\Pub\\SQ", 4, 1, 1)
    register_animation(0x1ed, "bldgs\\links\\Pub\\SQ\\dirt", 4, 1, 1)
    register_animation(0x1ee, "bldgs\\links\\PubL2", 4, 1, 1)
    register_animation(0x1ef, "bldgs\\links\\PubL2\\dirt", 4, 1, 1)

    # Driving range
    register_animation(0x1b6, "bldgs\\links\\DR\\shop", 4, 1, 1)
    register_animation(0x1b7, "bldgs\\links\\DRL2\\shop", 4, 1, 1)
    register_animation(0x1b8, "bldgs\\links\\DR\\platform", 4, 0x28, 1)
    register_animation(0x1b9, "bldgs\\links\\DR\\platform\\dirt", 4, 0x28, 1)
    register_animation(0x1ba, "bldgs\\links\\DR\\100sign", 4, 0x28, 1)
    register_animation(0x1bb, "bldgs\\links\\DR\\200sign", 4, 0x28, 1)
    register_animation(0x1bc, "bldgs\\links\\DR\\300sign", 4, 0x28, 1)
    register_animation(0x1bd, "bldgs\\links\\DR\\flag", 1, 0x28, 1)
    register_animation(0x1be, "bldgs\\links\\rockwall01", 4, 0x28, 1)
    register_animation(0x1bf, "bldgs\\links\\DRL2\\shop\\ANIM", 4, 1, 1)
    register_animation(0x1c0, "bldgs\\links\\DRL2\\platform", 4, 0x28, 1)
    register_animation(0x1c1, "bldgs\\links\\DRL2\\platform\\base", 4, 0x28, 1)

    # Putting green
    register_animation(0x1f0, "bldgs\\links\\PG\\hutL1", 4, 0x28, 1)
    register_animation(0x1f1, "bldgs\\links\\PG\\hutL1\\dirt", 4, 0x28, 1)
    register_animation(0x1f2, "bldgs\\links\\PG\\pflag", 1, 0x28, 1)
    register_animation(499, "bldgs\\links\\PG\\hutL2", 4, 0x28, 1)
    register_animation(500, "bldgs\\links\\PG\\hutL2\\dirt", 4, 0x28, 1)
    register_animation(0x1f5, "bldgs\\links\\PG\\scenicL2", 4, 0x28, 1)

    # Cart garage
    register_animation(0x1c2, "bldgs\\links\\Cart\\garageL1", 4, 1, 1)
    register_animation(0x1c5, "bldgs\\links\\Cart\\garageL1\\dirt", 4, 1, 1)
    register_animation(0x1c3, "bldgs\\links\\Cart\\garageL2", 4, 1, 1)
    register_animation(0x1c6, "bldgs\\links\\Cart\\garageL2\\dirt", 4, 1, 1)

    # Pro shop
    register_animation(0x1e0, "bldgs\\links\\Pro\\shop", 4, 1, 1)
    register_animation(0x1e3, "bldgs\\links\\Pro\\shop\\dirt", 4, 1, 1)
    register_animation(0x1e2, "bldgs\\links\\Pro\\shop\\anim", 4, 1, 1)
    register_animation(0x1e1, "bldgs\\links\\Links\\ProshopL2", 4, 1, 1)
    register_animation(0x1e4, "bldgs\\links\\Links\\ProshopL2\\dirt", 4, 1, 1)
    register_animation(0x1e5, "bldgs\\links\\Links\\ProshopL2\\anim", 4, 1, 1)

    # Clubhouse
    register_animation(0x1f6, "bldgs\\links\\clubL1", 4, 1, 1)
    register_animation(0x1f9, "bldgs\\links\\clubL1\\dirt", 4, 1, 1)
    register_animation(0x1fa, "bldgs\\links\\clubL1\\ANIM", 4, 1, 1)
    register_animation(0x1f7, "bldgs\\links\\clubL2", 4, 1, 1)
    register_animation(0x1f8, "bldgs\\links\\clubL2\\dirt", 4, 1, 1)
    register_animation(0x1fb, "bldgs\\links\\clubL2\\ANIM", 4, 1, 1)

    # Stable
    register_animation(0x1d4, "bldgs\\links\\StableL1", 4, 1, 1)
    register_animation(0x1d7, "bldgs\\links\\StableL1\\dirt", 4, 1, 1)
    register_animation(0x1d5, "bldgs\\links\\StableL2", 4, 1, 1)
    register_animation(0x1d8, "bldgs\\links\\StableL2\\dirt", 4, 1, 1)
    register_animation(0x1d9, "bldgs\\links\\StableL2\\anim", 4, 1, 1)

    # Church
    register_animation(0x1ce, "bldgs\\links\\ChurchL1", 4, 1, 1)
    register_animation(0x1d1, "bldgs\\links\\ChurchL1\\dirt", 4, 1, 1)
    register_animation(0x1cf, "bldgs\\links\\ChurchL2", 4, 1, 1)
    register_animation(0x1d2, "bldgs\\links\\ChurchL2\\dirt", 4, 1, 1)

    # Hotel
    register_animation(0x1e6, "bldgs\\links\\HotelL1", 4, 0xf0, 1)
    register_animation(0x1e9, "bldgs\\links\\HotelL1\\dirt", 4, 0xf0, 1)
    register_animation(0x1e8, "bldgs\\links\\HotelL1\\anim", 4, 0xf0, 1)
    register_animation(0x1e7, "bldgs\\links\\HotelL2", 4, 0xf0, 1)
    register_animation(0x1ea, "bldgs\\links\\HotelL2\\dirt", 4, 0xf0, 1)
    register_animation(0x1eb, "bldgs\\links\\HotelL2\\anim", 4, 0xf0, 1)

    # Castle
    register_animation(0x1da, "bldgs\\links\\CastleL1", 4, 0xf0, 1)
    register_animation(0x1dd, "bldgs\\links\\CastleL1\\dirt", 4, 0xf0, 1)
    register_animation(0x1db, "bldgs\\links\\CastleL2", 4, 0xf0, 1)
    register_animation(0x1de, "bldgs\\links\\CastleL2\\dirt", 4, 0xf0, 1)
    register_animation(0x1dc, "bldgs\\links\\CastleL2\\ANIM", 4, 0xf0, 1)


def _register_parkland_buildings() -> None:
    """Register all Parkland theme building animations (DAT_005a34e0 == 0).

    Buildings: sign, houses, snack bar (L1, L1 base, L1 ANIM, L2, L2 base,
    L2 ANIM), clubhouse (L1, L1 base, L1 ANIM, L2, L2 base, L2 ANIM),
    driving range (DRL1 build, DRL2 build, plat top/base, 100/200/300 signs,
    flag, wall, DRL2 ANIM, plat top/base DRL2), putting green (L1, L1, flag,
    L2, L2 ANIM, scenic L2), marina (L1, L1 water ANIM, L2, L2 water ANIM),
    hotel (L1, L1 base, L1 ANIM, L2, L2 base, L2 ANIM),
    airstrip (L1, L1 base, L1 ANIM, L2, L2 base, L2 ANIM),
    cart rental (L1, L1 base, L1 ANIM, L2, L2 base, L2 ANIM),
    pro shop (L1, L1 base, L2, L2 ANIM01, ANIM02),
    tennis court (L1, L2).
    """
    # Sign and houses
    register_animation(0x1c8, "bldgs\\park\\sign", 4, 1, 1)
    register_animation(0x1c9, "bldgs\\park\\Houseconst", 4, 1, 1)
    register_animation(0x1ca, "Homes\\Regular\\Parkland\\A\\ParkHou", 4, 0x8c, 1)

    # Snack bar
    register_animation(0x1ec, "bldgs\\park\\parksnackL1", 4, 1, 1)
    register_animation(0x1ed, "bldgs\\park\\parksnackL1\\base", 4, 1, 0)
    register_animation(0x1d3, "bldgs\\park\\parksnackL1\\ANIM", 4, 1, 0)
    register_animation(0x1ee, "bldgs\\park\\ParkSnackL2", 4, 1, 1)
    register_animation(0x1ef, "bldgs\\park\\ParkSnackL2\\base", 4, 1, 1)
    register_animation(0x1d0, "bldgs\\park\\parksnackL2\\ANIM", 4, 1, 1)

    # Clubhouse
    register_animation(0x1f6, "bldgs\\park\\clubL1", 4, 1, 1)
    register_animation(0x1f9, "bldgs\\park\\clubL1\\base", 4, 1, 1)
    register_animation(0x1fa, "bldgs\\park\\clubL1\\ANIM", 4, 1, 1)
    register_animation(0x1f7, "bldgs\\park\\clubL2", 4, 1, 1)
    register_animation(0x1f8, "bldgs\\park\\clubL2\\base", 4, 1, 1)
    register_animation(0x1fb, "bldgs\\park\\clubL2\\ANIM", 4, 1, 1)

    # Driving range
    register_animation(0x1b6, "bldgs\\park\\buildDRL1", 4, 1, 1)
    register_animation(0x1b7, "bldgs\\park\\buildDRL2", 4, 1, 1)
    register_animation(0x1b8, "bldgs\\park\\plat\\topDRL1", 4, 0x28, 1)
    register_animation(0x1b9, "bldgs\\park\\plat\\baseDRL1", 4, 0x28, 1)
    register_animation(0x1ba, "bldgs\\park\\100DRL1", 4, 0x28, 1)
    register_animation(0x1bb, "bldgs\\park\\200DRL1", 4, 0x28, 1)
    register_animation(0x1bc, "bldgs\\park\\300DRL1", 4, 0x28, 1)
    register_animation(0x1bd, "bldgs\\park\\flag\\DRL1", 1, 0x28, 1)
    register_animation(0x1be, "bldgs\\park\\wall\\DRL1", 4, 0x28, 1)
    register_animation(0x1bf, "bldgs\\park\\buildDRL2\\ANIM", 4, 1, 1)
    register_animation(0x1c0, "bldgs\\park\\plat\\topDRL2", 4, 0x28, 1)
    register_animation(0x1c1, "bldgs\\park\\plat\\baseDRL2", 4, 0x28, 1)

    # Putting green
    register_animation(0x1f0, "bldgs\\park\\puttL1", 4, 0x28, 1)
    register_animation(0x1f1, "bldgs\\park\\puttL1", 4, 0x28, 1)
    register_animation(0x1f2, "bldgs\\park\\shortflagL1", 1, 0x28, 1)
    register_animation(499, "bldgs\\park\\puttL2", 4, 0x28, 1)
    register_animation(500, "bldgs\\park\\puttL2\\ANIM", 4, 0x28, 1)
    register_animation(0x1f5, "bldgs\\park\\puttscenic", 4, 0x28, 1)

    # Marina
    register_animation(0x1ce, "bldgs\\park\\marL1", 4, 1, 1)
    register_animation(0x1d1, "bldgs\\park\\marL1\\waterANIM", 4, 1, 1)
    register_animation(0x1cf, "bldgs\\park\\marL2", 4, 1, 1)
    register_animation(0x1d2, "bldgs\\park\\marL2\\waterANIM", 4, 1, 1)

    # Hotel
    register_animation(0x1e6, "bldgs\\park\\HotelL1", 4, 0xf0, 1)
    register_animation(0x1e9, "bldgs\\park\\HotelL1\\base", 4, 0xf0, 0)
    register_animation(0x1e8, "bldgs\\park\\HotelL1\\ANIM", 4, 0xf0, 1)
    register_animation(0x1e7, "bldgs\\park\\HotelL2", 4, 0xf0, 1)
    register_animation(0x1ea, "bldgs\\park\\HotelL2\\base", 4, 0xf0, 0)
    register_animation(0x1eb, "bldgs\\park\\HotelL2\\ANIM", 4, 0xf0, 1)

    # Airstrip
    register_animation(0x1da, "bldgs\\park\\airL1", 4, 0xf0, 1)
    register_animation(0x1dd, "bldgs\\park\\airL1\\base", 4, 0xf0, 1)
    register_animation(0x1dc, "bldgs\\park\\airL1\\ANIM", 4, 0xf0, 1)
    register_animation(0x1db, "bldgs\\park\\airL2", 4, 0xf0, 1)
    register_animation(0x1de, "bldgs\\park\\airL2\\base", 4, 0xf0, 1)
    register_animation(0x1df, "bldgs\\park\\airL2\\ANIM", 4, 0xf0, 1)

    # Cart rental
    register_animation(0x1c2, "bldgs\\park\\CartL1", 4, 1, 1)
    register_animation(0x1c5, "bldgs\\park\\CartL1\\base", 4, 1, 1)
    register_animation(0x1c4, "bldgs\\park\\CartL1\\ANIM", 4, 1, 1)
    register_animation(0x1c3, "bldgs\\park\\CartL2", 4, 1, 1)
    register_animation(0x1c6, "bldgs\\park\\CartL2\\base", 4, 1, 1)
    register_animation(0x1c7, "bldgs\\park\\CartL2\\ANIM", 4, 1, 1)

    # Pro shop
    register_animation(0x1e0, "bldgs\\park\\ProsL1", 4, 1, 1)
    register_animation(0x1e3, "bldgs\\park\\ProSL1\\base", 4, 1, 0)
    register_animation(0x1e1, "bldgs\\park\\ProsL2", 4, 1, 1)
    register_animation(0x1e2, "bldgs\\park\\ProsL2\\ANIM01", 4, 1, 1)
    register_animation(0x1e5, "bldgs\\park\\ProsL2\\ANIM02", 4, 1, 0)

    # Tennis court
    register_animation(0x1d4, "bldgs\\park\\tenL1", 4, 1, 1)
    register_animation(0x1d5, "bldgs\\park\\tenL2", 4, 1, 1)


# ═══════════════════════════════════════════════════════════════════════════════
#  Bridges, water features, animals per theme
# ═══════════════════════════════════════════════════════════════════════════════

def _register_bridges_and_water() -> None:
    """Register bridge palettes, bridge animations, water rocks/ripples/falls,
    and theme-specific birds (eagle, vulture, pelican, hawk)."""
    global course_theme

    waterfall_top: str = ""

    if course_theme == COURSE_PARKLAND:
        # Parkland bridges
        FUN_00475840("flics\\Bridges\\ParkBridgePal", 0, 0, 0x100, 0)
        register_animation(0x1fe, "Bridges\\BridgeTILE", 2, 0x3c, 1)
        register_animation(0x1ff, "Bridges\\BridgeCap", 4, 0x3c, 1)
        register_animation(0x200, "Bridges\\BridgeL", 4, 0x3c, 1)
        register_animation(0x201, "Bridges\\BridgeT", 4, 0x3c, 1)
        register_animation(0x202, "Bridges\\BridgeX", 1, 0x3c, 1)
        register_animation(0x204, "Bridges\\BridgeReflect", 2, 0x3c, 0)
        register_animation(0x205, "Bridges\\BridgeXtra", 4, 0x3c, 1)
        # Scenic bridge
        FUN_00475840("flics\\Bridges\\DESScenicBridgePal", 0, 0, 0x100, 0)
        register_animation(0x203, "Bridges\\DESBridgeScenic", 2, 0x3c, 1)
        # Eagle
        FUN_00475840("flics\\scenic\\EaglePalette", 0, 0, 0x100, 0)
        register_animation(0x206, "Scenic\\Eagle\\SQ", 4, 0x8c, 1)
        register_animation(0x207, "Scenic\\Eagle\\Fidget", 4, 0x8c, 1)
        # Water rocks & ripples
        register_animation(0x22e, "Water\\ASParkRockA", 4, 0x3c, 0)
        register_animation(0x22f, "Water\\ASParkRockB", 4, 0x3c, 0)
        register_animation(0x230, "Water\\UWParkRockA", 4, 0x3c, 0)
        register_animation(0x231, "Water\\UWParkRockB", 4, 0x3c, 0)
        register_animation(0x232, "Water\\UWParkRockC", 4, 0x3c, 0)
        register_animation(0x233, "Water\\RippleParkA", 4, 0x3c, 0)
        register_animation(0x234, "Water\\RippleParkB", 4, 0x3c, 0)
        register_animation(0x235, "Water\\RippleParkC", 4, 0x3c, 0)
        register_animation(0x237, "Water\\WaterFallShortA", 4, 0x3c, 0)
        register_animation(0x238, "Water\\WaterFallTallA", 4, 0x3c, 0)
        register_animation(0x23b, "Water\\SprayShortA", 2, 0x3c, 0)
        register_animation(0x23c, "Water\\SprayTallA", 2, 0x3c, 0)
        waterfall_top = "Water\\ParkWaterfallTallTopA"

    elif course_theme == COURSE_DESERT:
        # Desert bridges
        FUN_00475840("flics\\Bridges\\DesBridgePal", 0, 0, 0x100, 0)
        register_animation(0x1fe, "Bridges\\DESBridgeTILE", 2, 0x3c, 1)
        register_animation(0x1ff, "Bridges\\DESBridgeCap", 4, 0x3c, 1)
        register_animation(0x200, "Bridges\\DESBridgeL", 4, 0x3c, 1)
        register_animation(0x201, "Bridges\\DESBridgeT", 4, 0x3c, 1)
        register_animation(0x202, "Bridges\\DESBridgeX", 1, 0x3c, 1)
        register_animation(0x204, "Bridges\\DESBridgeReflect", 2, 0x3c, 0)
        register_animation(0x205, "Bridges\\DESBridgeXtra", 4, 0x3c, 1)
        FUN_00475840("flics\\Bridges\\DESScenicBridgePal", 0, 0, 0x100, 0)
        register_animation(0x203, "Bridges\\DESBridgeScenic", 2, 0x3c, 1)
        # Vulture
        FUN_00475840("flics\\scenic\\Vulture\\Palette", 0, 0, 0x100, 0)
        register_animation(0x206, "Scenic\\Vulture\\SQ", 4, 0x8c, 1)
        register_animation(0x207, "Scenic\\Vulture\\Fidget", 4, 0x8c, 1)
        # Water
        register_animation(0x22e, "Water\\ASDesRockA", 4, 0x3c, 0)
        register_animation(0x22f, "Water\\ASDesRockB", 4, 0x3c, 0)
        register_animation(0x230, "Water\\UWDesRockA", 4, 0x3c, 0)
        register_animation(0x231, "Water\\UWDesRockB", 4, 0x3c, 0)
        register_animation(0x232, "Water\\UWDesRockC", 4, 0x3c, 0)
        register_animation(0x233, "Water\\RippleDesA", 4, 0x3c, 0)
        register_animation(0x234, "Water\\RippleDesB", 4, 0x3c, 0)
        register_animation(0x235, "Water\\RippleDesC", 4, 0x3c, 0)
        register_animation(0x237, "Water\\DesWaterFallShortA", 4, 0x3c, 0)
        register_animation(0x238, "Water\\DesWaterFallTallA", 4, 0x3c, 0)
        register_animation(0x23b, "Water\\DesSprayShortA", 2, 0x3c, 0)
        register_animation(0x23c, "Water\\DesSprayTallA", 2, 0x3c, 0)
        waterfall_top = "Water\\DesWaterfallTallTopA"

    elif course_theme == COURSE_TROPICAL:
        # Tropical bridges
        FUN_00475840("flics\\Bridges\\TRopBridgePal", 0, 0, 0x100, 0)
        register_animation(0x1fe, "Bridges\\TROPBridgeTILE", 2, 0x3c, 1)
        register_animation(0x1ff, "Bridges\\TROPBridgeCap", 4, 0x3c, 1)
        register_animation(0x200, "Bridges\\TROPBridgeL", 4, 0x3c, 1)
        register_animation(0x201, "Bridges\\TROPBridgeT", 4, 0x3c, 1)
        register_animation(0x202, "Bridges\\TROPBridgeX", 1, 0x3c, 1)
        register_animation(0x204, "Bridges\\TROPBridgeReflect", 2, 0x3c, 0)
        register_animation(0x205, "Bridges\\TROPBridgeXtra", 4, 0x3c, 1)
        FUN_00475840("flics\\Bridges\\DESScenicBridgePal", 0, 0, 0x100, 0)
        register_animation(0x203, "Bridges\\DESBridgeScenic", 2, 0x3c, 1)
        # Pelican
        FUN_00475840("flics\\scenic\\Pelican\\Palette", 0, 0, 0x100, 0)
        register_animation(0x206, "Scenic\\Pelican\\SQ", 4, 0x8c, 1)
        register_animation(0x207, "Scenic\\Pelican\\Fidget", 4, 0x8c, 1)
        # Water
        register_animation(0x22e, "Water\\ASTropSandA", 4, 0x3c, 0)
        register_animation(0x22f, "Water\\ASTropSandB", 4, 0x3c, 0)
        register_animation(0x230, "Water\\UWTropCoralA", 4, 0x3c, 0)
        register_animation(0x231, "Water\\UWTropCoralB", 4, 0x3c, 0)
        register_animation(0x232, "Water\\UWTropCoralC", 4, 0x3c, 0)
        register_animation(0x233, "Water\\WaveTropA", 4, 0x3c, 0)
        register_animation(0x234, "Water\\WaveTropA", 4, 0x3c, 0)
        register_animation(0x235, "Water\\WaveTropA", 4, 0x3c, 0)
        register_animation(0x237, "Water\\TropWaterFallShortA", 4, 0x3c, 0)
        register_animation(0x238, "Water\\TropWaterFallTallA", 4, 0x3c, 0)
        register_animation(0x23b, "Water\\TropSprayShortA", 2, 0x3c, 0)
        register_animation(0x23c, "Water\\TropSprayTallA", 2, 0x3c, 0)
        waterfall_top = "Water\\TropWaterfallTallTopA"

    elif course_theme == COURSE_LINKS:
        # Links bridges
        FUN_00475840("flics\\Bridges\\LinksBridgePalette", 0, 0, 0x100, 0)
        register_animation(0x1fe, "Bridges\\LinksBridgeTILE", 2, 0x3c, 1)
        register_animation(0x1ff, "Bridges\\LinksBridgeCap", 4, 0x3c, 1)
        register_animation(0x200, "Bridges\\LinksBridgeL", 4, 0x3c, 1)
        register_animation(0x201, "Bridges\\LinksBridgeT", 4, 0x3c, 1)
        register_animation(0x202, "Bridges\\LinksBridgeX", 1, 0x3c, 1)
        register_animation(0x204, "Bridges\\LinksBridgeReflect", 2, 0x3c, 0)
        register_animation(0x205, "Bridges\\LinksBridgeXtra", 4, 0x3c, 1)
        FUN_00475840("flics\\Bridges\\DESScenicBridgePal", 0, 0, 0x100, 0)
        register_animation(0x203, "Bridges\\DESBridgeScenic", 2, 0x3c, 1)
        # Hawk
        FUN_00475840("flics\\scenic\\Hawk\\Palette", 0, 0, 0x100, 0)
        register_animation(0x206, "Scenic\\Hawk\\SQ", 4, 0x8c, 1)
        register_animation(0x207, "Scenic\\Hawk\\Fidget", 4, 0x8c, 1)
        # Water
        register_animation(0x22e, "Water\\ASLinksRockA", 4, 0x3c, 0)
        register_animation(0x22f, "Water\\ASLinksRockB", 4, 0x3c, 0)
        register_animation(0x230, "Water\\UWLinksRockA", 4, 0x3c, 0)
        register_animation(0x231, "Water\\UWLinksRockB", 4, 0x3c, 0)
        register_animation(0x232, "Water\\UWLinksRockC", 4, 0x3c, 0)
        register_animation(0x233, "Water\\WaveLinksA", 4, 0x3c, 0)
        register_animation(0x234, "Water\\WaveLinksA", 4, 0x3c, 0)
        register_animation(0x235, "Water\\WaveLinksA", 4, 0x3c, 0)
        register_animation(0x237, "Water\\LinksWaterFallShortA", 4, 0x3c, 0)
        register_animation(0x238, "Water\\LinksWaterFallTallA", 4, 0x3c, 0)
        register_animation(0x23b, "Water\\LinksSprayShortA", 2, 0x3c, 0)
        register_animation(0x23c, "Water\\LinksSprayTallA", 2, 0x3c, 0)
        waterfall_top = "Water\\LinksWaterfallTallTopA"

    # Register waterfall top for all themes
    register_animation(0x239, waterfall_top, 2, 0x3c, 0)


# ═══════════════════════════════════════════════════════════════════════════════
#  Tree palette loading
# ═══════════════════════════════════════════════════════════════════════════════

def _register_tree_palettes() -> None:
    """Load tree palette files based on course theme."""
    global course_theme

    tree_pal_path: str = ""

    if course_theme == COURSE_DESERT:
        FUN_00475840("flics\\trees\\Desert\\JoshuaTreePal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Desert\\JoshuaTreePal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Desert\\JoshuaTreePal", 0, 0, 0x100, 0)
        tree_pal_path = "flics\\trees\\Desert\\JoshuaTreePal"
    elif course_theme == COURSE_TROPICAL:
        FUN_00475840("flics\\trees\\Tropic\\TropBrushPal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Tropic\\TropBrushPal2", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Tropic\\TropBrushPal3", 0, 0, 0x100, 0)
        tree_pal_path = "flics\\trees\\Tropic\\TropBrushPal"
    else:
        FUN_00475840("flics\\trees\\PalGreenMaple", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalRedMaple", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalBrownMaple", 0, 0, 0x100, 0)
        tree_pal_path = "flics\\trees\\PalBlueMaple"

    FUN_00475840(tree_pal_path, 0, 0, 0x100, 0)

    # Extra tropical tree palettes
    if course_theme == COURSE_TROPICAL:
        FUN_00475840("flics\\trees\\Tropic\\Tree\\Cerc\\Pal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Tropic\\Tree\\Drac\\Pal", 0, 0, 0x100, 0)

    # Parkland pines
    if course_theme == COURSE_PARKLAND:
        FUN_00475840("flics\\trees\\PalPineBlue", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalPineDarkGreen", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalPineOriginal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalPineYellow", 0, 0, 0x100, 0)

    # Desert cactus & flowers
    if course_theme == COURSE_DESERT:
        FUN_00475840("flics\\trees\\Desert\\CactusAPal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Desert\\CactusCPal", 0, 0, 0x100, 0)


def _register_flower_palettes() -> None:
    """Load flower palette files based on course theme."""
    global course_theme

    flower_pal_path: str = ""

    if course_theme == COURSE_DESERT:
        FUN_00475840("flics\\flowers\\DesertFlowersRedPa", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\DesertFlowersOrgPa", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\DesertFlowersPurpP", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\DesertFlowersBlueP", 0, 0, 0x100, 0)
        flower_pal_path = "flics\\flowers\\DesertFlowersPinkP"
    elif course_theme == COURSE_TROPICAL:
        FUN_00475840("flics\\flowers\\TropicalFlowers\\Aq", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\TropicalFlowers\\Or", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\TropicalFlowers\\Pu", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\TropicalFlowers\\Bl", 0, 0, 0x100, 0)
        flower_pal_path = "flics\\flowers\\TropicalFlowers\\Re"
    else:
        FUN_00475840("flics\\flowers\\FlowerBedA\\YelPal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\FlowerBedA\\OrgPal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\FlowerBedA\\PurpPal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\flowers\\FlowerBedA\\WhitePa", 0, 0, 0x100, 0)
        flower_pal_path = "flics\\flowers\\FlowerBedA\\RedPal"

    FUN_00475840(flower_pal_path, 0, 0, 0x100, 0)

    # Links pines
    if course_theme == COURSE_LINKS:
        FUN_00475840("flics\\trees\\Links\\LinksPinePal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Links\\LinksPinePal2", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Links\\LinksPinePal3", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Links\\LinksPinePal4", 0, 0, 0x100, 0)


def _register_secondary_trees() -> None:
    """Register secondary tree palettes (Scots pines for Links,
    tall palms for Desert/Tropical, generic palms for others)."""
    global course_theme

    second_tree_pal: str = ""

    if course_theme == COURSE_LINKS:
        # Links gets Scots pines
        FUN_00475840("flics\\trees\\Links\\ScotsPinePal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Links\\ScotsPinePal2", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\Links\\ScotsPinePal3", 0, 0, 0x100, 0)
        second_tree_pal = "flics\\trees\\Links\\ScotsPinePal4"
    elif course_theme == COURSE_DESERT:
        FUN_00475840("flics\\trees\\desert\\tallpalmdeser", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\desert\\tallpalmdeser", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\desert\\tallpalmdeser", 0, 0, 0x100, 0)
        second_tree_pal = "flics\\trees\\desert\\tallpalmdeser"
    elif course_theme == COURSE_TROPICAL:
        FUN_00475840("flics\\trees\\tropic\\tree\\tall\\pal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\tropic\\tree\\tall\\pal", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\tropic\\tree\\tall\\pal", 0, 0, 0x100, 0)
        second_tree_pal = "flics\\trees\\tropic\\tree\\tall\\pal"
    else:
        FUN_00475840("flics\\trees\\PalOrangePalm", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalOriginalPalm", 0, 0, 0x100, 0)
        FUN_00475840("flics\\trees\\PalPlumPalm", 0, 0, 0x100, 0)
        second_tree_pal = "flics\\trees\\PalGreenPalm"

    FUN_00475840(second_tree_pal, 0, 0, 0x100, 0)


# ═══════════════════════════════════════════════════════════════════════════════
#  Terrain descriptor strings (theme-specific)
# ═══════════════════════════════════════════════════════════════════════════════

def _setup_terrain_strings() -> None:
    """Set up terrain descriptor strings (terrain names, building names,
    scenery descriptors) used by the course editor UI.

    For each theme, the original code copies string constants into
    global buffers (DAT_00578350..DAT_005786b0).
    """
    global course_theme, terrain_name_buf, terrain_noun_buf

    # Common: copy the 0x114 dwords from DAT_004c1a40 to DAT_00578350
    # (shared base terrain descriptor array)
    # — Simplified: just set the base string

    if course_theme == COURSE_PARKLAND:
        # Stream descriptor → DAT_00578530
        terrain_noun_buf[0x530] = "stream"
        # Brush descriptor → DAT_00578560
        terrain_noun_buf[0x560] = "brush"
        # Wetlands → DAT_005786b0
        terrain_noun_buf[0x6b0] = "wetlands"
        # Building names (used for builder UI)
        # "Snack Bar" → s_Snack_Bar_004c273c
        # "Airstrip" → s_Airstrip_004c27c7
        # "Tennis Court" → s_Swim_Club_004c2764 (reused name buffer)
        # "Marina" → s_Marina_004c27a0
        terrain_noun_buf[0x273c] = "Snack Bar"
        terrain_noun_buf[0x27c7] = "Airstrip"
        terrain_noun_buf[0x2764] = "Swim Club"

    elif course_theme == COURSE_DESERT:
        # Desert theme strings
        terrain_noun_buf[0x410] = "desert"
        terrain_noun_buf[0x440] = "rough"
        terrain_noun_buf[0x560] = "ravine"
        terrain_noun_buf[0x530] = "brush"
        terrain_noun_buf[0x5f0] = "cactus"
        terrain_noun_buf[0x600] = "cacti"
        terrain_noun_buf[0x5c0] = "joshua tree"
        terrain_noun_buf[0x5d0] = "joshua trees"
        terrain_noun_buf[0x620] = "palm tree"
        terrain_noun_buf[0x630] = "palm trees"
        terrain_noun_buf[0x6b0] = "canyon"
        # Marker values
        terrain_noun_buf[0x432] = 1   # DAT_00578432
        terrain_noun_buf[0x466] = 5   # DAT_00578466
        terrain_noun_buf[0x6d8] = 0   # DAT_005786d8
        terrain_noun_buf[0x6dc] = 0   # DAT_005786dc
        # Building names
        terrain_noun_buf[0x273c] = "Snack Bar"
        terrain_noun_buf[0x27c7] = "Casino"
        terrain_noun_buf[0x2764] = "Swim Club"
        terrain_noun_buf[0x27a0] = "Helipad"

    elif course_theme == COURSE_TROPICAL:
        terrain_noun_buf[0x530] = "stream"
        terrain_noun_buf[0x560] = "brush"
        terrain_noun_buf[0x5c0] = "tropical bush"
        terrain_noun_buf[0x5d0] = "tropical bushes"
        terrain_noun_buf[0x5f0] = "tropical tree"
        terrain_noun_buf[0x600] = "tropical trees"
        terrain_noun_buf[0x620] = "palm tree"
        terrain_noun_buf[0x630] = "palm trees"
        terrain_noun_buf[0x6b0] = "wetlands"
        # Building names
        terrain_noun_buf[0x273c] = "Snack Bar"
        terrain_noun_buf[0x27c7] = "Theme Park"
        terrain_noun_buf[0x2764] = "Swim Club"
        terrain_noun_buf[0x27a0] = "Marina"

    elif course_theme == COURSE_LINKS:
        terrain_noun_buf[0x530] = ""       # &DAT_004c963c (empty/NUL)
        terrain_noun_buf[0x560] = "gorse"
        terrain_noun_buf[0x5f0] = ""       # &DAT_004c962c
        terrain_noun_buf[0x600] = "pines"
        terrain_noun_buf[0x5c0] = "maple tree"
        terrain_noun_buf[0x5d0] = "maple trees"
        terrain_noun_buf[0x620] = "scots pine"
        terrain_noun_buf[0x630] = "scots pines"
        terrain_noun_buf[0x273c] = "Snack Bar"
        terrain_noun_buf[0x2764] = "Swim Club"
        terrain_noun_buf[0x27a0] = "Helipad"
        terrain_noun_buf[0x27c7] = "Castle"
        # Theme-specific: Stable
        terrain_noun_buf[0x2764] = "Stable"
        # Theme-specific: Church
        terrain_noun_buf[0x27a0] = "Church"

    # Copy the final Marina string (after switch)
    # s_Marina_004c27a0 = "Marina"


# ═══════════════════════════════════════════════════════════════════════════════
#  Scenic item registrations (themed)
# ═══════════════════════════════════════════════════════════════════════════════

def _register_desert_scenics() -> None:
    """Register Desert-specific scenic items: white flag, oil slick,
    sailboat, dolphin, water spray, Joshua trees, desert flowers."""
    register_animation(0x191, "bldgs\\desert\\dputt\\whiteflag", 1, 0, 1)
    register_animation(400, "flowers\\OilSlick", 4, 0, 1)
    register_animation(0x1a1, "Scenic\\SailboatDesert", 8, 0x50, 1)
    register_animation(0x19f, "Scenic\\DolphinDesert", 4, 0x3c, 1)
    register_animation(0x1a0, "Scenic\\Desert\\waterspray", 1, 0x28, 1)
    # Joshua trees
    register_animation(0x19b, "trees\\Desert\\JoshuaTree\\Sm", 4, 1, 1)
    register_animation(0x19c, "trees\\Desert\\JoshuaTree\\Md", 4, 1, 1)
    register_animation(0x19d, "trees\\Desert\\JoshuaTree\\Lg", 4, 1, 1)
    # Desert flowers
    register_animation(0x1a2, "flowers\\DesFlowers\\Single", 4, 0x28, 1)
    register_animation(0x1a3, "flowers\\DesFlowers\\1Side", 4, 0x28, 1)
    register_animation(0x1a4, "flowers\\DesFlowers\\2Side", 4, 0x28, 1)
    register_animation(0x1a5, "flowers\\DesFlowers\\3Side", 4, 0x28, 1)
    register_animation(0x1a6, "flowers\\DesFlowers\\4Side", 4, 0x28, 1)
    register_animation(0x1a7, "flowers\\DesFlowers\\Corner", 4, 0x28, 1)
    # Desert single flowers
    register_animation(0x1a8, "flowers\\DesSin\\Single", 4, 0x28, 1)
    register_animation(0x1a9, "flowers\\DesSin\\1Side", 4, 0x28, 1)
    register_animation(0x1aa, "flowers\\DesSin\\2Side", 4, 0x28, 1)
    register_animation(0x1ab, "flowers\\DesSin\\3Side", 4, 0x28, 1)
    register_animation(0x1ac, "flowers\\DesSin\\4Side", 4, 0x28, 1)
    register_animation(0x1ad, "flowers\\DesSin\\Corner", 4, 0x28, 1)
    # Wall flowers
    register_animation(0x1ae, "flowers\\DesFlowers\\Single\\Wall", 4, 0x28, 1)
    register_animation(0x1af, "flowers\\DesFlowers\\1Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b0, "flowers\\DesFlowers\\2Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b1, "flowers\\DesFlowers\\3Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b2, "flowers\\DesFlowers\\4Side", 4, 0x28, 1)
    register_animation(0x1b3, "flowers\\DesFlowers\\Corner\\Wall", 4, 0x28, 1)


def _register_tropical_scenics() -> None:
    """Register Tropical-specific scenic items: dry grass, white flag,
    sailboat, dolphin, water spray, tropical brush, tropical flowers."""
    register_animation(400, "flowers\\DryGrass", 4, 0, 1)
    register_animation(0x191, "bldgs\\tropical\\TROPPuttingG\\whit", 1, 0, 1)
    register_animation(0x1a1, "Scenic\\SailboatTropical", 8, 0x50, 1)
    register_animation(0x19f, "Scenic\\DolphinTropical", 4, 0x3c, 1)
    register_animation(0x1a0, "Scenic\\Trop\\waterspray", 1, 0x28, 1)
    # Tropical brush
    register_animation(0x19b, "trees\\Tropic\\TropicalBrush\\Sm", 4, 1, 1)
    register_animation(0x19c, "trees\\Tropic\\TropicalBrush\\Med", 4, 1, 1)
    register_animation(0x19d, "trees\\Tropic\\TropicalBrush\\Lg", 4, 1, 1)
    # Tropical flowers
    register_animation(0x1a2, "flowers\\TropFlowers\\Single", 4, 0x28, 1)
    register_animation(0x1a3, "flowers\\TropFlowers\\1Side", 4, 0x28, 1)
    register_animation(0x1a4, "flowers\\TropFlowers\\2Side", 4, 0x28, 1)
    register_animation(0x1a5, "flowers\\TropFlowers\\3Side", 4, 0x28, 1)
    register_animation(0x1a6, "flowers\\TropFlowers\\4Side", 4, 0x28, 1)
    register_animation(0x1a7, "flowers\\TropFlowers\\Corner", 4, 0x28, 1)
    # Single tropical flowers
    register_animation(0x1a8, "flowers\\SinTrop\\Single", 4, 0x28, 1)
    register_animation(0x1a9, "flowers\\SinTrop\\1Side", 4, 0x28, 1)
    register_animation(0x1aa, "flowers\\SinTrop\\2Side", 4, 0x28, 1)
    register_animation(0x1ab, "flowers\\SinTrop\\3Side", 4, 0x28, 1)
    register_animation(0x1ac, "flowers\\SinTrop\\4Side", 4, 0x28, 1)
    register_animation(0x1ad, "flowers\\SinTrop\\Corner", 4, 0x28, 1)
    # Wall flowers
    register_animation(0x1ae, "flowers\\TropFlowers\\Single\\Wall", 4, 0x28, 1)
    register_animation(0x1af, "flowers\\TropFlowers\\1Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b0, "flowers\\TropFlowers\\2Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b1, "flowers\\TropFlowers\\3Side\\Wall", 4, 0x28, 1)
    register_animation(0x1b2, "flowers\\TropFlowers\\4Side", 4, 0x28, 1)
    register_animation(0x1b3, "flowers\\TropFlowers\\Corner\\Wall", 4, 0x28, 1)


def _register_generic_scenics() -> None:
    """Register non-Desert/non-Tropical scenic items (Parkland or Links).

    Includes: white flag, dolphin, water spray, sailboat, dandelion,
    maple trees, and walled flowers.
    """
    global course_theme

    if course_theme == COURSE_PARKLAND:
        register_animation(0x191, "bldgs\\park\\putt\\whiteflag", 1, 0, 1)
        register_animation(0x19f, "Scenic\\Dolphin", 4, 0x3c, 1)
        register_animation(0x1a0, "Scenic\\waterspray", 1, 0x28, 1)
        sailboat_path = "Scenic\\Sailboat\\Move"
        register_animation(0x1a1, sailboat_path, 8, 0x50, 1)
    else:  # Links
        register_animation(0x191, "bldgs\\links\\pg\\whiteflag", 1, 0, 1)
        register_animation(0x19f, "Scenic\\DolphinLinks", 4, 0x3c, 1)
        register_animation(0x1a0, "Scenic\\Links\\waterspray", 1, 0x28, 1)
        sailboat_path = "Scenic\\SailboatLinks"
        register_animation(0x1a1, sailboat_path, 8, 0x50, 1)

    # Common for non-desert/non-tropical
    register_animation(400, "flowers\\dandelion\\01", 4, 0, 1)

    # Maple trees
    register_animation(0x19b, "trees\\TreeMapleSmall", 4, 1, 1)
    register_animation(0x19c, "trees\\TreeMapleMedium", 4, 1, 1)
    register_animation(0x19d, "trees\\TreeMapleLarge", 4, 1, 1)

    # Generic flowers
    register_animation(0x1a2, "flowers\\Flowers\\Single", 4, 0x28, 1)
    register_animation(0x1a3, "flowers\\Flowers\\1Side", 4, 0x28, 1)
    register_animation(0x1a4, "flowers\\Flowers\\2Side", 4, 0x28, 1)
    register_animation(0x1a5, "flowers\\Flowers\\3Side", 4, 0x28, 1)
    register_animation(0x1a6, "flowers\\Flowers\\4Side", 4, 0x28, 1)
    register_animation(0x1a7, "flowers\\Flowers\\Corner", 4, 0x28, 1)
    # Single flowers
    register_animation(0x1a8, "flowers\\SinFlowers\\Single", 4, 0x28, 1)
    register_animation(0x1a9, "flowers\\SinFlowers\\1Side", 4, 0x28, 1)
    register_animation(0x1aa, "flowers\\SinFlowers\\2Side", 4, 0x28, 1)
    register_animation(0x1ab, "flowers\\SinFlowers\\3Side", 4, 0x28, 1)
    register_animation(0x1ac, "flowers\\SinFlowers\\4Side", 4, 0x28, 1)
    register_animation(0x1ad, "flowers\\SinFlowers\\Corner", 4, 0x28, 1)
    # Walled flowers
    register_animation(0x1ae, "flowers\\WalledFlowers\\Single", 4, 0x28, 1)
    register_animation(0x1af, "flowers\\WalledFlowers\\1Side", 4, 0x28, 1)
    register_animation(0x1b0, "flowers\\WalledFlowers\\2Side", 4, 0x28, 1)
    register_animation(0x1b1, "flowers\\WalledFlowers\\3Side", 4, 0x28, 1)
    register_animation(0x1b2, "flowers\\Flowers\\4Side", 4, 0x28, 1)
    register_animation(0x1b3, "flowers\\WalledFlowers\\Corner", 4, 0x28, 1)


# ═══════════════════════════════════════════════════════════════════════════════
#  Extra tree registrations (theme-specific)
# ═══════════════════════════════════════════════════════════════════════════════

def _register_extra_trees() -> None:
    """Register extra tree animations based on course theme."""
    global course_theme

    if course_theme == COURSE_TROPICAL:
        # Cercus and Dracena trees
        register_animation(0x192, "trees\\Tropic\\Tree\\Cerc\\Cerc\\Smal", 4, 1, 1)
        register_animation(0x193, "trees\\Tropic\\Tree\\Cerc\\Cerc\\Med", 4, 1, 1)
        register_animation(0x194, "trees\\Tropic\\Tree\\Cerc\\Cerc\\Larg", 4, 1, 1)
        register_animation(0x198, "trees\\Tropic\\Tree\\Drac\\Drac\\Smal", 4, 1, 1)
        register_animation(0x199, "trees\\Tropic\\Tree\\Drac\\Drac\\Med", 4, 1, 1)
        register_animation(0x19a, "trees\\Tropic\\Tree\\Drac\\Drac\\Larg", 4, 1, 1)

    if course_theme == COURSE_PARKLAND:
        # Pine and spruce trees
        register_animation(0x192, "trees\\TreePineSpruceSm", 4, 1, 1)
        register_animation(0x193, "trees\\TreePineSpruceMed", 4, 1, 1)
        register_animation(0x194, "trees\\TreePineSpruceLg", 4, 1, 1)
        register_animation(0x198, "trees\\TreePineFirSm", 4, 1, 1)
        register_animation(0x199, "trees\\TreePineFirMed", 4, 1, 1)
        register_animation(0x19a, "trees\\TreePineFirLg", 4, 1, 1)

    if course_theme == COURSE_DESERT:
        # Cactus trees
        register_animation(0x192, "trees\\Desert\\CactusA\\Sm", 4, 1, 1)
        register_animation(0x193, "trees\\Desert\\CactusA\\Md", 4, 1, 1)
        register_animation(0x194, "trees\\Desert\\CactusA\\Lg", 4, 1, 1)
        register_animation(0x198, "trees\\Desert\\CactusC\\Sm", 4, 1, 1)
        register_animation(0x199, "trees\\Desert\\CactusC\\Md", 4, 1, 1)
        register_animation(0x19a, "trees\\Desert\\CactusC\\Lg", 4, 1, 1)

    if course_theme == COURSE_LINKS:
        # Links pines
        register_animation(0x192, "trees\\Links\\LinksPine\\Small", 4, 1, 1)
        register_animation(0x193, "trees\\Links\\LinksPine\\Med", 4, 1, 1)
        register_animation(0x194, "trees\\Links\\LinksPine\\Tall", 4, 1, 1)
        register_animation(0x198, "trees\\Links\\LinksPine\\Small", 4, 1, 1)
        register_animation(0x199, "trees\\Links\\LinksPine\\Med", 4, 1, 1)
        register_animation(0x19a, "trees\\Links\\LinksPine\\Tall", 4, 1, 1)
        # Scots pines
        register_animation(0x195, "trees\\Links\\ScotsPine\\Small", 4, 1, 1)
        register_animation(0x196, "trees\\Links\\ScotsPine\\Med", 4, 1, 1)
        register_animation(0x197, "trees\\Links\\ScotsPine\\Lg", 4, 1, 1)

    # Tall palms for Desert and Tropical
    if course_theme in (COURSE_DESERT, COURSE_TROPICAL):
        register_animation(0x195, "trees\\desert\\TallPalm\\small", 4, 1, 1)
        register_animation(0x196, "trees\\desert\\TallPalm\\med", 4, 1, 1)
        register_animation(0x197, "trees\\desert\\TallPalm\\large", 4, 1, 1)
    else:
        # Generic palms
        register_animation(0x195, "trees\\TreePalmSm", 4, 1, 1)
        register_animation(0x196, "trees\\TreePalmMed", 4, 1, 1)
        register_animation(0x197, "trees\\TreePalmLg", 4, 1, 1)

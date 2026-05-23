#!/usr/bin/env python3
"""
Renomme et organise les 5 516 fichiers Ghidra en sous-dossiers par module.
Exécution réelle (mv/cp). Sauvegarde dans rename_log.
"""

import os, re, shutil
from pathlib import Path

GHIDRA_DIR = Path("/home/roden/simgolf-re/ref/decompiled/ghidra")
LOG_FILE   = Path("/home/roden/simgolf-re/logs/rename_ghidra.log")

# Mapping des adresses connues
TERRAIN_KNOWN = {
    0x10001014: "thunk_setWall",
    0x1000104b: "thunk_render",
    0x1000108c: "thunk_tileAt",
    0x1000109b: "thunk_tileHit",
    0x100010a0: "thunk_resetTerrain",
    0x100010b4: "thunk_passCollarInfo",
    0x100010d2: "thunk_calcAllNormals",
    0x10001127: "thunk_lowerCorner",
    0x10001136: "thunk_getInstance",
    0x10001154: "thunk_lowerEdgeCorner",
    0x1000117c: "thunk_localRender",
    0x10001186: "thunk_drawCircle",
    0x100011b3: "thunk_drawLine",
    0x100011c2: "thunk_changeLighting",
    0x100011e0: "thunk_pathUpdateRender",
    0x100011ea: "thunk_renderTile",
    0x10001217: "thunk_closeSystem",
    0x1000121c: "thunk_setType",
    0x10001244: "thunk_drawCardinalSpline",
    0x1000124e: "thunk_getType",
    0x1000125d: "thunk_updatePath",
    0x10001294: "thunk_setZoomLevel",
    0x10001299: "thunk_stripRender",
    0x100012bc: "thunk_getWall",
    0x100012c1: "thunk_layPath",
    0x100012cb: "thunk_initTerrain",
    0x100012e4: "thunk_initSystem",
    0x100012f8: "thunk_resize",
    0x10001302: "thunk_destructor",
    0x10001307: "thunk_calcNormals",
    0x10001339: "thunk_setSplineHeight",
    0x1000133e: "thunk_elevateCorner",
    0x10001343: "thunk_getElevation",
    0x1000105a: "thunk_getVariation",
    0x1000107d: "thunk_hasPath",
    0x10001023: "thunk_hasConnectedPath",
    0x10001032: "thunk_loadNewCourseType",
    0x100010a5: "thunk_drawBezierSpline",
    0x10002f80: "tile_set_texture_offset",
    0x1000e6c0: "render_single_tile",
    0x10005990: "terrain_render_main",
    0x1000c7b0: "elevate_corner_impl",
    0x1000ccc0: "lower_corner_impl",
    0x10015460: "tile_is_skipped",
    0x10015400: "tile_set_wall_impl",
    0x10012cf0: "tile_calc_normal",
    0x1000a740: "terrain_calc_all_normals_impl",
    0x1000a6f0: "terrain_calc_normals_impl",
    0x10009c80: "terrain_init_system_impl",
    0x1000aa10: "terrain_reset_impl",
    0x1000a560: "terrain_set_wall_impl",
    0x1000a510: "terrain_has_path_impl",
    0x1000a450: "terrain_has_connected_path_impl",
    0x10013400: "path_place_tile_impl",
    0x100133a0: "path_update_tile_impl",
    0x100108f0: "render_tile_overlay",
    0x1000f7f0: "render_tile_postprocess",
    0x1000ea30: "render_tile_finalize",
    0x1000adc0: "render_prerender_setup",
    0x10006810: "tile_get_screen_y",
    0x10005960: "tile_get_screen_x",
    0x10006850: "tile_is_visible_in_view",
    0x1000b930: "render_queue_iterator_next",
    0x1000af70: "render_queue_begin",
    0x1000afe0: "render_queue_current",
    0x1000b2d0: "render_queue_pop",
    0x1000b320: "render_queue_advance",
    0x1000b210: "render_queue_end",
    0x100380a0: "terrain_free_internals",
    0x100033e0: "terrain_init_buffers",
    0x100037e0: "terrain_init_textures",
    0x100076e0: "terrain_init_alloc_tiles",
    0x10009ed0: "terrain_resize_impl",
    0x10001af0: "terrain_load_course_type_impl",
    0x10003390: "terrain_get_variation_impl",
    0x10015340: "tile_get_texture_offset_impl",
    0x10015380: "tile_set_type_effect",
    0x10014020: "tile_set_terrain_type",
    0x10001f60: "tile_get_terrain_type",
    0x1000c2c0: "tile_init_default",
    0x1000ab30: "tile_hit_test",
    0x10008fc0: "terrain_set_zoom_impl",
    0x1000a840: "terrain_set_spline_height_impl",
    0x1000b750: "terrain_get_wall_impl",
    0x1000b600: "terrain_unknown_b600",
    0x1000bba0: "terrain_unknown_bba0",
    0x1000cd80: "lower_corner_adjust",
    0x1000d0d0: "terrain_unknown_d0d0",
    0x1000dc50: "terrain_unknown_dc50",
    0x1000ed70: "terrain_unknown_ed70",
    0x1000f6e0: "terrain_unknown_f6e0",
    0x1000f950: "terrain_unknown_f950",
    0x1000e920: "terrain_unknown_e920",
}

GOLF_KNOWN = {
    0x004490d0: "Terrain_tileAt",
    0x00449150: "Terrain_getType",
    0x00449110: "Terrain_getElevation",
    0x00449130: "Terrain_getWall",
}

CATEGORIES_CRT = ["Unwind", "FID_conflict", "__", "_"]

def classify_file(filepath):
    with open(filepath) as f:
        first_line = f.readline().strip()
    if "Terrain.dll" in first_line: return "terrain"
    elif "golf.exe" in first_line: return "golf"
    elif "sound.dll" in first_line: return "sound"
    elif "jgld.dll" in first_line: return "jgld"
    elif "jgl.dll" in first_line: return "jgl"
    return "unknown"

def extract_addr(filename):
    m = re.search(r'FUN_([0-9A-Fa-f]+)\.c', filename)
    if m: return int(m.group(1), 16)
    return None

def is_crt(name):
    for prefix in CATEGORIES_CRT:
        if name.startswith(prefix):
            return True
    return False

def main():
    LOG_FILE.parent.mkdir(parents=True, exist_ok=True)
    log = []

    # Créer les dossiers cibles
    for m in ["golf", "terrain", "sound", "jgld", "jgl", "crt"]:
        (GHIDRA_DIR / m).mkdir(exist_ok=True)

    all_files = sorted(GHIDRA_DIR.glob("*.c"))
    total = len(all_files)
    moved = 0
    renamed = 0

    print(f"Organisation de {total} fichiers...")

    for f in all_files:
        name = f.name
        
        # Déterminer la destination
        if is_crt(name):
            dest_dir = GHIDRA_DIR / "crt"
            dest_name = name
        else:
            module = classify_file(f)
            if module == "unknown":
                dest_dir = GHIDRA_DIR / "crt"
                dest_name = name
            else:
                dest_dir = GHIDRA_DIR / module
                # Vérifier si on a un renommage
                addr = extract_addr(name)
                new_name = None
                if module == "terrain" and addr and addr in TERRAIN_KNOWN:
                    new_name = TERRAIN_KNOWN[addr]
                elif module == "golf" and addr and addr in GOLF_KNOWN:
                    new_name = GOLF_KNOWN[addr]

                if new_name:
                    dest_name = new_name + ".c"
                    renamed += 1
                else:
                    dest_name = name  # garde FUN_XXXXX.c

        dest_path = dest_dir / dest_name
        
        # Éviter d'écraser
        if dest_path.exists():
            # Conflit — ajouter suffixe
            base = dest_path.stem
            dest_path = dest_dir / f"{base}_dup.c"

        # Déplacer
        shutil.move(str(f), str(dest_path))
        moved += 1
        log.append(f"{name:45s} → {dest_path.relative_to(GHIDRA_DIR.parent)}")

        if moved % 1000 == 0:
            print(f"  {moved}/{total}...")

    print(f"\nTerminé: {moved} fichiers déplacés, {renamed} renommés")

    # Écrire le log
    with open(LOG_FILE, "w") as lp:
        lp.write(f"Renommage Ghidra: {moved} déplacés, {renamed} renommés\n\n")
        for line in log:
            lp.write(line + "\n")

    print(f"Log: {LOG_FILE}")

if __name__ == "__main__":
    main()

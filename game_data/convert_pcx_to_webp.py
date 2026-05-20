#!/usr/bin/env python3
"""
Convertisseur PCX SimGolf → WebP.

Convertit tous les fichiers .pcx du dossier extracted/ en WebP,
en préservant l'arborescence. Gère :
  - Les planches de textures (Data/*.pcx) : extraction des tuiles 64×64
  - Les palettes (Flics/ palettes) : conversion directe
  - L'interface (Interface/*.pcx) : conversion directe
  - Tous les autres PCX (Bodies, Heads, etc.)

Usage :
  python3 convert_pcx_to_webp.py [--all] [--atlas] [--tiles]

Options :
  --all       Convertir TOUS les PCX en WebP (défaut)
  --atlas     Extraire les tuiles 64×64 des planches Data/*.pcx
  --check     Vérifier les conversions manquantes
  --dry-run   Simuler sans écrire
"""

import os, sys
from PIL import Image

EXTRACTED = os.path.expanduser("~/simgolf-re/game_data/extracted")
OUT_DIR = os.path.expanduser("~/simgolf-re/game_data/converted/webp")

# Taille des tuiles dans les atlas de terrain (constante dans tout le code ASM)
TILE_SIZE = 64


def convert_pcx_to_webp(src_path, dst_path, lossless=True, quality=90):
    """Convertit un PCX en WebP, gestion transparente de la palette."""
    try:
        img = Image.open(src_path).convert('RGBA')

        # Chroma key : noir pur (0,0,0) et magenta (255,0,255) → transparent
        data = list(img.getdata())
        new_data = []
        has_transparency = False
        for r, g, b, a in data:
            if (r == 0 and g == 0 and b == 0) or (r == 255 and g == 0 and b == 255):
                new_data.append((0, 0, 0, 0))
                has_transparency = True
            else:
                new_data.append((r, g, b, a))
        if has_transparency:
            img.putdata(new_data)

        os.makedirs(os.path.dirname(dst_path), exist_ok=True)
        img.save(dst_path, 'WEBP', lossless=lossless, quality=quality, method=6)
        return True
    except Exception as e:
        print(f"  ERREUR {src_path}: {e}")
        return False


def extract_atlas_tiles(src_path, tiles_dir):
    """
    Extrait chaque tuile 64×64 d'une planche de textures en WebP individuel.
    Les planches font 800×600 → 12×9 = 108 tuiles.
    """
    try:
        img = Image.open(src_path)
    except Exception as e:
        print(f"  ERREUR chargement atlas {src_path}: {e}")
        return 0

    os.makedirs(tiles_dir, exist_ok=True)
    base = os.path.splitext(os.path.basename(src_path))[0]
    count = 0

    # Créer une palette globale pour le mode 'P' (évite la conversion RGB brutale)
    palette_mode = img.mode == 'P' and img.palette is not None

    for row in range(img.height // TILE_SIZE):
        for col in range(img.width // TILE_SIZE):
            x, y = col * TILE_SIZE, row * TILE_SIZE
            tile = img.crop((x, y, x + TILE_SIZE, y + TILE_SIZE))

            # Nom de tuile : {atlas}_{row:02d}_{col:02d}.webp
            tile_name = f"{base}_{row:02d}_{col:02d}.webp"
            tile_path = os.path.join(tiles_dir, tile_name)

            # Conversion RGBA + chroma key
            tile = tile.convert('RGBA')
            data = list(tile.getdata())
            new_data = []
            for px in data:
                r, g, b, a = px
                if (r == 0 and g == 0 and b == 0) or (r == 255 and g == 0 and b == 255):
                    new_data.append((0, 0, 0, 0))
                else:
                    new_data.append(px)
            tile.putdata(new_data)

            tile.save(tile_path, 'WEBP', lossless=True, quality=100, method=6)
            count += 1

    return count


def get_all_pcx_files():
    """Liste tous les fichiers PCX dans le dossier extracted."""
    pcx_files = []
    for root, dirs, files in os.walk(EXTRACTED):
        for f in files:
            if f.lower().endswith('.pcx'):
                pcx_files.append(os.path.relpath(os.path.join(root, f), EXTRACTED))
    return sorted(pcx_files)


def convert_all(do_atlas=True, do_tiles=True):
    """Convertit tous les PCX en WebP."""
    all_pcx = get_all_pcx_files()
    total = len(all_pcx)
    done = 0
    errors = 0
    tiles_total = 0

    print(f"Conversion de {total} fichiers PCX → WebP...\n")

    for i, rel_path in enumerate(all_pcx):
        src = os.path.join(EXTRACTED, rel_path)
        base, _ = os.path.splitext(rel_path)
        dst = os.path.join(OUT_DIR, base + '.webp')

        if i % 100 == 0 and i > 0:
            print(f"  Progression : {i}/{total}...")

        # Conversion du PCX lui-même
        ok = convert_pcx_to_webp(src, dst)
        if ok:
            done += 1
        else:
            errors += 1

        # Extraction des tuiles pour les atlas de Data/
        if do_tiles and rel_path.startswith('Data/') and rel_path.endswith('.pcx'):
            tiles_dir = os.path.join(OUT_DIR, 'tiles', base)
            n = extract_atlas_tiles(src, tiles_dir)
            tiles_total += n
            if n > 0:
                print(f"  → {n} tuiles extraites de {rel_path}")

    print(f"\n=== Bilan ===")
    print(f"  PCX convertis   : {done}/{total}")
    print(f"  Erreurs         : {errors}")
    if tiles_total:
        print(f"  Tuiles extraites : {tiles_total}")
    return done, errors, tiles_total


def check_missing():
    """Vérifie quels PCX n'ont pas encore de correspondant WebP."""
    missing = []
    all_pcx = get_all_pcx_files()
    for rel_path in all_pcx:
        base, _ = os.path.splitext(rel_path)
        dst = os.path.join(OUT_DIR, base + '.webp')
        if not os.path.exists(dst):
            missing.append(rel_path)
    return missing


def print_stats():
    """Affiche les statistiques des atlas de terrain."""
    print("=== Statistiques des atlas de terrain ===")
    for f in sorted(os.listdir(os.path.join(EXTRACTED, 'Data'))):
        if f.endswith('.pcx'):
            path = os.path.join(EXTRACTED, 'Data', f)
            img = Image.open(path)
            cols = img.width // TILE_SIZE
            rows = img.height // TILE_SIZE
            size_kb = os.path.getsize(path) // 1024
            print(f"  {f:25s}  {img.width:4d}×{img.height:<4d}  "
                  f"{rows}×{cols}={rows*cols} tuiles  {size_kb}K PCX")


if __name__ == '__main__':
    if '--stats' in sys.argv:
        print_stats()
    elif '--check' in sys.argv:
        missing = check_missing()
        if missing:
            print(f"{len(missing)} PCX non convertis :")
            for m in missing:
                print(f"  {m}")
        else:
            print("Tous les PCX sont convertis en WebP.")
    elif '--dry-run' in sys.argv:
        all_pcx = get_all_pcx_files()
        print(f"{len(all_pcx)} fichiers PCX trouvés :")
        for p in all_pcx:
            print(f"  {p}")
    else:
        do_atlas = '--atlas' in sys.argv or '--all' in sys.argv or not any(a in sys.argv for a in ['--tiles-only', '--webp-only'])
        do_tiles = '--tiles' in sys.argv or '--all' in sys.argv

        # Par défaut : tout faire
        if not any(a in sys.argv for a in ['--atlas', '--tiles', '--all', '--tiles-only', '--webp-only']):
            do_atlas = True
            do_tiles = True
        elif '--tiles-only' in sys.argv:
            do_atlas = False
            do_tiles = True
        elif '--webp-only' in sys.argv:
            do_atlas = True
            do_tiles = False

        convert_all(do_atlas=do_atlas, do_tiles=do_tiles)

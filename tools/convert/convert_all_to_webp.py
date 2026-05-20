#!/usr/bin/env python3
"""
Convertisseur unifié SimGolf → WebP.

Convertit TOUS les assets du jeu vers WebP :
  - PCX  → WebP (images fixes)
  - BMP  → WebP (images fixes)
  - FLC  → Animated WebP (animations)

Préserve l'arborescence `extracted/` dans `converted/webp/`.
Les animations FLC vont dans `converted/animations/`.

Usage :
  python3 tools/convert/convert_all_to_webp.py [--all] [--pcx] [--bmp] [--flc]
  python3 tools/convert/convert_all_to_webp.py --check    # fichiers manquants
  python3 tools/convert/convert_all_to_webp.py --stats    # stats

Options :
  --all     Convertir tout (défaut)
  --pcx     PCX uniquement
  --bmp     BMP uniquement
  --flc     FLC → Animated WebP uniquement
  --check   Lister les fichiers non convertis
  --stats   Stats des assets
  --dry-run Simuler sans écrire
"""

import os, sys, struct
from PIL import Image

# Ajouter le dossier tools/convert au path pour importer decode_flc
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from decode_flc import FLCDecoder

EXTRACTED = os.path.expanduser("~/simgolf-re/data/raw")
OUT_WEBP = os.path.expanduser("~/simgolf-re/data/converted/webp")
OUT_ANIM = os.path.expanduser("~/simgolf-re/data/converted/animations")
FLC_DIR = os.path.join(EXTRACTED, "Flics")
TILE_SIZE = 64


# ── Conversion image fixe (PCX / BMP) ──────────────────────────────

def convert_image_to_webp(src_path, dst_path, lossless=True, quality=90):
    """Convertit une image (PCX/BMP) en WebP avec chroma key."""
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
    """Extrait les tuiles 64×64 d'une planche de textures (PCX)."""
    try:
        img = Image.open(src_path)
    except Exception as e:
        print(f"  ERREUR atlas {src_path}: {e}")
        return 0

    os.makedirs(tiles_dir, exist_ok=True)
    base = os.path.splitext(os.path.basename(src_path))[0]
    count = 0

    for row in range(img.height // TILE_SIZE):
        for col in range(img.width // TILE_SIZE):
            x, y = col * TILE_SIZE, row * TILE_SIZE
            tile = img.crop((x, y, x + TILE_SIZE, y + TILE_SIZE))
            tile_name = f"{base}_{row:02d}_{col:02d}.webp"
            tile_path = os.path.join(tiles_dir, tile_name)

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


# ── Scan des fichiers source ───────────────────────────────────────

def get_all_images(extensions=('.pcx', '.PCX', '.bmp', '.BMP')):
    """Liste tous les fichiers image par extension."""
    files = []
    for root, dirs, dirfiles in os.walk(EXTRACTED):
        # Ignorer Flics/ qui sera traité via FLC decoder
        rel_root = os.path.relpath(root, EXTRACTED)
        if rel_root.startswith('Flics'):
            continue
        for f in sorted(dirfiles):
            if f.endswith(extensions):
                files.append(os.path.relpath(os.path.join(root, f), EXTRACTED))
    return sorted(files)


def get_all_flcs():
    """Liste tous les FLC."""
    files = []
    for root, dirs, dirfiles in os.walk(FLC_DIR):
        for f in sorted(dirfiles):
            if f.lower().endswith('.flc'):
                files.append(os.path.relpath(os.path.join(root, f), FLC_DIR))
    return sorted(files)


def check_missing_images():
    """Vérifie les images PCX/BMP pas encore converties."""
    missing = []
    for rel_path in get_all_images():
        base, _ = os.path.splitext(rel_path)
        dst = os.path.join(OUT_WEBP, base + '.webp')
        if not os.path.exists(dst):
            missing.append(rel_path)
    return missing


def check_missing_flcs():
    """Vérifie les FLC pas encore convertis en animated WebP."""
    missing = []
    for rel_path in get_all_flcs():
        base, _ = os.path.splitext(rel_path)
        dst = os.path.join(OUT_ANIM, rel_path.replace('.flc', '.webp'))
        if not os.path.exists(dst):
            missing.append(rel_path)
    return missing


# ── Convertisseurs ─────────────────────────────────────────────────

def convert_pcx_bmp(do_tiles=True):
    """Convertit tous les PCX/BMP en WebP."""
    all_images = get_all_images()
    total = len(all_images)
    done = 0
    errors = 0
    tiles_total = 0

    print(f"Conversion de {total} images (PCX/BMP) → WebP...\n")

    for i, rel_path in enumerate(all_images):
        src = os.path.join(EXTRACTED, rel_path)
        base, _ = os.path.splitext(rel_path)
        dst = os.path.join(OUT_WEBP, base + '.webp')

        if i % 200 == 0 and i > 0:
            print(f"  Progression : {i}/{total}...")

        ok = convert_image_to_webp(src, dst)
        if ok:
            done += 1
        else:
            errors += 1

        # Extraction des tuiles pour les atlas de Data/*.pcx
        if do_tiles and rel_path.startswith('Data/') and rel_path.lower().endswith('.pcx'):
            tiles_dir = os.path.join(OUT_WEBP, 'tiles', base)
            n = extract_atlas_tiles(src, tiles_dir)
            tiles_total += n

    print(f"\n--- Images ---")
    print(f"  Convertis : {done}/{total}")
    print(f"  Erreurs   : {errors}")
    if tiles_total:
        print(f"  Tuiles    : {tiles_total}")
    return done, errors, tiles_total


def convert_flcs():
    """Convertit tous les FLC en animated WebP."""
    all_flcs = get_all_flcs()
    total = len(all_flcs)
    done = 0
    errors = 0

    print(f"\nConversion de {total} FLC → Animated WebP...\n")

    for i, rel_path in enumerate(all_flcs):
        src = os.path.join(FLC_DIR, rel_path)
        base = os.path.splitext(rel_path)[0]
        dst = os.path.join(OUT_ANIM, base + '.webp')

        if i % 100 == 0 and i > 0:
            print(f"  Progression : {i}/{total}...")

        os.makedirs(os.path.dirname(dst), exist_ok=True)
        try:
            dec = FLCDecoder(src)
            dec.save_animated_webp(dst)
            done += 1
        except Exception as e:
            print(f"  ERREUR {rel_path}: {e}")
            errors += 1

    print(f"\n--- Animations FLC ---")
    print(f"  Convertis : {done}/{total}")
    print(f"  Erreurs   : {errors}")
    return done, errors


# ── Stats ──────────────────────────────────────────────────────────

def print_stats():
    """Affiche les statistiques complètes des assets."""
    print("=== Statistiques des assets SimGolf ===\n")

    # Images
    all_img = get_all_images()
    pcx = [f for f in all_img if f.lower().endswith('.pcx')]
    bmp = [f for f in all_img if f.lower().endswith('.bmp')]
    print(f"Images source :")
    print(f"  PCX : {len(pcx)}")
    print(f"  BMP : {len(bmp)}")

    # FLC
    flcs = get_all_flcs()
    print(f"Animations FLC : {len(flcs)}")

    # Atlas de terrain
    from PIL import Image
    print(f"\nAtlas de terrain (Data/*.pcx) :")
    for f in sorted(os.listdir(os.path.join(EXTRACTED, 'Data'))):
        if f.endswith('.pcx'):
            path = os.path.join(EXTRACTED, 'Data', f)
            img = Image.open(path)
            cols = img.width // TILE_SIZE
            rows = img.height // TILE_SIZE
            print(f"  {f:25s}  {img.width:4d}x{img.height:<4d}  "
                  f"{rows}x{cols}={rows*cols} tuiles")

    # Déjà convertis
    converted_webp = sum(1 for _, _, f in os.walk(OUT_WEBP) for _ in f) if os.path.exists(OUT_WEBP) else 0
    converted_anim = sum(1 for _, _, f in os.walk(OUT_ANIM) for _ in f) if os.path.exists(OUT_ANIM) else 0
    print(f"\nDéjà convertis :")
    print(f"  WebP (images)      : {converted_webp}")
    print(f"  Animated WebP (FLC): {converted_anim}")

    # Tailles
    src_size = sum(os.path.getsize(os.path.join(EXTRACTED, f)) if not os.path.isdir(os.path.join(EXTRACTED, f)) else 0
                   for f in os.listdir(EXTRACTED))  # approximation
    total_extracted = 0
    for root, dirs, files in os.walk(EXTRACTED):
        for f in files:
            try:
                total_extracted += os.path.getsize(os.path.join(root, f))
            except:
                pass
    webp_size = sum(os.path.getsize(os.path.join(dp, f)) for dp, dn, fn in os.walk(OUT_WEBP) for f in fn) if os.path.exists(OUT_WEBP) else 0
    anim_size = sum(os.path.getsize(os.path.join(dp, f)) for dp, dn, fn in os.walk(OUT_ANIM) for f in fn) if os.path.exists(OUT_ANIM) else 0

    print(f"\nTailles :")
    print(f"  Source (extracted/) : {total_extracted/1024/1024:.0f} Mo")
    print(f"  WebP images         : {webp_size/1024/1024:.0f} Mo")
    print(f"  Animated WebP       : {anim_size/1024/1024:.0f} Mo")


# ── Main ───────────────────────────────────────────────────────────

if __name__ == '__main__':
    if '--stats' in sys.argv:
        print_stats()
    elif '--check' in sys.argv:
        missing_img = check_missing_images()
        missing_flc = check_missing_flcs()
        if not missing_img and not missing_flc:
            print("Tout est converti en WebP !")
        else:
            if missing_img:
                print(f"{len(missing_img)} images non converties :")
                for m in missing_img[:10]:
                    print(f"  {m}")
                if len(missing_img) > 10:
                    print(f"  ... et {len(missing_img)-10} autres")
            if missing_flc:
                print(f"{len(missing_flc)} animations FLC non converties :")
                for m in missing_flc[:10]:
                    print(f"  {m}")
                if len(missing_flc) > 10:
                    print(f"  ... et {len(missing_flc)-10} autres")
    elif '--dry-run' in sys.argv:
        img_files = get_all_images()
        flc_files = get_all_flcs()
        print(f"{len(img_files)} images (PCX/BMP) à convertir")
        print(f"{len(flc_files)} animations FLC à convertir")
    else:
        do_pcx_bmp = any(a in sys.argv for a in ['--all', '--pcx', '--bmp'])
        do_flc = any(a in sys.argv for a in ['--all', '--flc'])

        # Par défaut : tout faire
        if not any(a in sys.argv for a in ['--all', '--pcx', '--bmp', '--flc']):
            do_pcx_bmp = True
            do_flc = True

        if do_pcx_bmp:
            convert_pcx_bmp(do_tiles=True)
        if do_flc:
            convert_flcs()

        print("\n✓ Terminé !")

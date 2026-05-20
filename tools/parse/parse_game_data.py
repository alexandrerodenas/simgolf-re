#!/usr/bin/env python3
"""
Parseur de données SimGolf.
Extrait et affiche le contenu de tous les formats de données :
  .dta  → CSV avec commentaires
  .chr  → Binaire (strings + PCX)
  .glf  → Binaire (golfeur)
  .pro  → Binaire (profil pro)
  .txt  → UTF-16LE (histoires)
  .sve  → Sauvegardes
  Lighting.txt → Paramètres éclairage

Usage : python3 parse_game_data.py [fichier|--all]
"""

import os, sys, struct, json

BASE = os.path.expanduser("~/simgolf-re/data/raw")

# ================================================================
# .dta parser (CSV avec commentaires)
# ================================================================

def parse_dta(path):
    """Parse un fichier .dta (CSV avec lignes * = commentaires)."""
    records = []
    with open(path, 'r', encoding='latin-1') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('*'):
                continue
            # Split CSV (gère les guillemets simples)
            fields = [f.strip() for f in line.split(',')]
            records.append(fields)
    return records

def show_pro_golfers():
    """Affiche les golfeurs pros depuis progolfers.dta."""
    path = os.path.join(BASE, 'Themes', 'Standard', 'progolfers.dta')
    if not os.path.exists(path):
        print("[!] progolfers.dta non trouvé")
        return
    
    print("=" * 70)
    print("🏌️  GOLFEURS PROS (progolfers.dta)")
    print("=" * 70)
    print(f"{'Nom':25s} {'Body':4s} {'Skin':4s} {'Hat':4s} {'Shirt':5s} {'Pants':5s}  Skills (SGA)")
    print("-" * 70)
    
    records = parse_dta(path)
    for r in records:
        if len(r) >= 6:
            name = r[0][:24]
            body = r[1]
            skin = r[2]
            hat = r[3]
            shirt = r[4]
            pants = r[5]
            skills = ','.join(r[6:]) if len(r) > 6 else ''
            print(f"{name:25s} {body:4s} {skin:4s} {hat:4s} {shirt:5s} {pants:5s}  [{skills}]")

def show_celebrities():
    """Affiche les célébrités depuis celebrities.dta."""
    path = os.path.join(BASE, 'Themes', 'Standard', 'celebrities.dta')
    if not os.path.exists(path):
        print("[!] celebrities.dta non trouvé")
        return
    
    types = {'A': 'Action Star', 'B': 'Pop Star', 'C': 'Politician',
             'D': 'Comedian M', 'E': 'Supermodel', 'F': 'Fitness',
             'G': 'Comedian F', 'H': 'Leading Man', 'I': 'Movie Star F',
             'J': 'Rock Star', 'K': 'Athlete'}
    
    print("\n" + "=" * 70)
    print("🌟 CÉLÉBRITÉS (celebrities.dta)")
    print("=" * 70)
    print(f"{'Nom parodique':30s} {'Type':15s} {'Skin':5s} {'Hair':5s} {'Shirt':5s} {'Pants':5s}")
    print("-" * 70)
    
    records = parse_dta(path)
    for r in records:
        if len(r) >= 6:
            name = r[0][:29]
            typ = types.get(r[1], r[1])
            print(f"{name:30s} {typ:15s} {r[2]:5s} {r[3]:5s} {r[4]:5s} {r[5]:5s}")

# ================================================================
# .chr parser (binaire avec strings + PCX)
# ================================================================

def extract_chr_strings(path):
    """Extrait les chaînes ASCII d'un fichier .chr."""
    with open(path, 'rb') as f:
        data = f.read()
    
    strings = []
    current = []
    for byte in data:
        if 32 <= byte < 127:
            current.append(chr(byte))
        else:
            if len(current) >= 4:
                s = ''.join(current)
                strings.append(s)
            current = []
    if len(current) >= 4:
        strings.append(''.join(current))
    
    return strings

def show_chr_file(path):
    """Analyse un fichier .chr et affiche son contenu."""
    name = os.path.basename(path)
    size = os.path.getsize(path)
    
    strings = extract_chr_strings(path)
    
    print(f"\n{'='*70}")
    print(f"👤 {name} ({size:,} bytes)")
    print(f"{'='*70}")
    
    # Cherche les strings intéressantes
    for s in strings:
        if 5 <= len(s) <= 60 and not s.startswith('*PCXFILE'):
            # Skip les données PCX (lignes hex/codes couleur)
            if any(c in s for c in '\\/;:<>') and len(s) > 30:
                continue
            # Affiche
            print(f"  {s}")

def show_all_chr():
    """Analyse tous les fichiers .chr."""
    for root, dirs, files in os.walk(BASE):
        for f in sorted(files):
            if f.endswith('.chr'):
                path = os.path.join(root, f)
                show_chr_file(path)

# ================================================================
# Lighting.txt parser
# ================================================================

def parse_lighting(path):
    """Parse un fichier Lighting.txt."""
    params = {}
    with open(path, 'r', encoding='latin-1') as f:
        for line in f:
            line = line.strip()
            if line.startswith('#'):
                key = line[1:].strip()
            elif line and not line.startswith('x'):
                parts = line.split()
                if len(parts) == 3:
                    try:
                        params[key] = tuple(int(p) for p in parts[:3])
                    except:
                        pass
    return params

def show_lighting():
    """Affiche les paramètres d'éclairage."""
    themes = ['Desert', 'Links', 'Parkland', 'Tropical']
    print("\n" + "=" * 70)
    print("☀️  PARAMÈTRES D'ÉCLAIRAGE")
    print("=" * 70)
    
    for theme in themes:
        path = os.path.join(BASE, f'{theme}Lighting.txt')
        if os.path.exists(path):
            params = parse_lighting(path)
            print(f"\n  {theme}:")
            for k, v in params.items():
                print(f"    {k:15s} RGB({v[0]}, {v[1]}, {v[2]})")

# ================================================================
# .txt dialogue parser (UTF-16LE)
# ================================================================

def show_dialogues():
    """Affiche les dialogues/stories."""
    count = 0
    for root, dirs, files in os.walk(BASE):
        for f in sorted(files):
            if f.endswith('.txt') and not f.startswith('credits'):
                path = os.path.join(root, f)
                size = os.path.getsize(path)
                if size > 10000:  # Trop gros = probablement binaire
                    continue
                try:
                    with open(path, 'r', encoding='utf-16-le') as fh:
                        content = fh.read(300)
                    if content.strip():
                        print(f"\n{'='*70}")
                        print(f"📖 {f} ({size:,} bytes)")
                        print(f"{'='*70}")
                        print(content[:200])
                        count += 1
                        if count >= 8:
                            break
                except:
                    pass

# ================================================================
# Main
# ================================================================

def main():
    if len(sys.argv) > 1 and sys.argv[1] == '--all':
        show_pro_golfers()
        show_celebrities()
        show_lighting()
        show_all_chr()
        show_dialogues()
    elif len(sys.argv) > 1:
        path = sys.argv[1]
        if os.path.isfile(path):
            if path.endswith('.dta'):
                records = parse_dta(path)
                for r in records:
                    print(','.join(r))
            elif path.endswith('.chr'):
                show_chr_file(path)
            elif path.endswith('Lighting.txt'):
                params = parse_lighting(path)
                for k, v in params.items():
                    print(f"{k}: RGB{v}")
        else:
            print(f"[!] Fichier non trouvé: {path}")
    else:
        # Mode découverte : montre un aperçu de chaque type
        show_pro_golfers()
        show_celebrities()
        show_lighting()

if __name__ == '__main__':
    main()

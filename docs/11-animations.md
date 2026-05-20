# Animations FLC

> **Confiance :** ✅ Élevée — 1 892 fichiers FLC convertis en PNG, format analysé

---

## 1. Format FLC Propriétaire

SimGolf utilise **Autodesk Animator FLIC** (.flc) avec un header modifié de 4 bytes.

### Différence avec le standard FLIC

Le format standard FLC a le magic number `0xAF12` au début du fichier. SimGolf le décale de 4 bytes :

```
Standard FLC :   [magic 0xAF12 @ +0]
SimGolf FLC :    [??? 4 bytes] [magic 0xAF12 @ +4]
```

La **ring frame** (frame de bouclage) est standard.

### Compression

Les frames sont stockées en **delta compression** — chaque frame ne contient que les pixels qui changent par rapport à la frame précédente. Pas de compression complexe.

### Opcodes FLIC

Le format FLIC utilise des **opcodes** (codes opératoires) qui définissent comment chaque frame est décodée. Les opcodes essentiels pour SimGolf :

| Opcode | Hex | Nom | Description |
|:------:|:---:|-----|-------------|
| 11 | `0x0B` | **FLI_COLOR** | Modification de la palette de couleurs indexée. Crucial pour les effets de cycle de palette (color cycling) utilisés pour animer l'eau ou l'interface. |
| 12 | `0x0C` | **FLI_LC** | Compression par ligne. Spécifie exactement quels pixels d'une ligne donnée sont modifiés par rapport à la frame précédente. |
| 13 | `0x0D` | **FLI_BLACK** | Remplit la frame entière en noir (frame vide / reset). |
| 15 | `0x0F` | **FLI_BRUN** | Compression par codage par plages (Run-Length Encoding) sur les octets. Efficace pour les grandes zones de couleur unie (herbe, ciel). |
| 16 | `0x10` | **FLI_COPY** | Copie la frame entière sans compression (keyframe / image clé). |

**Stratégie de décodage pour un portage :**
1. Charger tout le fichier `.flc` en mémoire
2. Itérer sur les frames, appliquer les opcodes séquentiellement
3. Maintenir un framebuffer delta entre les frames
4. Transcodage vers une spritesheet PNG (pour éviter le décodage en temps réel)
5. Libérer le fichier FLC original

> Bibliothèque recommandée pour le décodage : `libflic` (Rust/C, bindings disponibles). Alternative : FFMPEG (flicvideo.c).

---

## 2. Inventaire des Animations (1 892 fichiers)

| Catégorie | Nombre | Dossier | Contenu |
|:---------:|:------:|---------|---------|
| **Golfeurs (Male)** | ~500 | `Male/` | 30+ animations × 8 directions |
| **Golfeuses (Female)** | ~400 | `Female/` | 30+ animations × 8 directions |
| **Arbres** | ~200 | `Trees/` | 4 thèmes : Desert, Links, Parkland, Tropic |
| **Fleurs** | ~50 | `Flowers/` | Parterres, topiaires |
| **Eau** | ~50 | `Water/` | Fontaines, cascades |
| **Bâtiments** | ~100 | `Bldgs/` | Clubhouse, pro shop, cabanes |
| **Ponts** | ~30 | `Bridges/` | 4 thèmes |
| **Décorations** | ~50 | `Scenic/` | Drapeaux, bancs, etc. |
| **Animaux** | ~30 | `Animals/` | Oiseaux, canards, crocodiles |
| **Employés** | ~30 | `Employee/` | Groundskeeper, marshall, etc. |
| **Célébrités** | ~30 | `Celebs/` | Personnages Sim-ish |
| **Maisons** | ~100 | `Homes/` | 4 thèmes |
| **Départs** | ~20 | `Tees/` | Drapeaux de trou |
| **Landmarks** | ~10 | `Landmarks/` | Points de repère |
| **Ombre** | 1 | `Shadow.flc` | Ombre générique |

---

## 3. Animations des Golfeurs

Chaque golfeur a environ **30 animations**, disponibles dans 8 directions (sauf indications) :

### Liste des animations

| Nom | Description | Directions |
|-----|-------------|:----------:|
| `NormalAddress` | Position de départ (stance) | 8 |
| `NormalSwing` | Swing normal | 8 |
| `NormalFollowThru` | Suivi du swing | 8 |
| `NormalWalk` | Marche | 8 |
| `TiredWalk` | Marche fatiguée | 8 |
| `PuttAddress` | Position de putt | 8 |
| `PuttSwing` | Swing de putt | 4 |
| `PuttFollowThru` | Suivi du putt | 4 |
| `LineUpPutt` | Alignement du putt | 4 |
| `PitchSwing` | Swing de pitch/chip | 8 |
| `PitchFollowThru` | Suivi du pitch | 8 |
| `SandSwing` | Swing de bunker | 8 |
| `SandFollowThru` | Suivi bunker | 8 |
| `SuccessA` | Célébration A | 4 |
| `SuccessB` | Célébration B | 4 |
| `Sad` | Déception | 4 |
| `Sitting` | Assis | 1 |
| `LeanLeft` | Penché à gauche | 1 |
| `LeanRight` | Penché à droite | 1 |
| `LookAtShot` | Regarde le tir | 4 |
| `TipHat` | Salue (chapeau) | 1 |
| `ThrowClub` | Lance le club (colère) | 1 |
| `KickBag` | Donne un coup dans le sac | 1 |
| `Shadow` | Ombre (suivi du personnage) | 1 |

### Convention de nommage

```
MaleNormalSwing_000.flc    → Direction 0 (face)
MaleNormalSwing_045.flc    → Direction 45° (diagonale)
MaleNormalSwing_090.flc    → Direction 90° (profil)
MaleNormalSwing_135.flc    → Direction 135°
MaleNormalSwing_180.flc    → Direction 180° (dos)
MaleNormalSwing_225.flc    → Direction 225°
MaleNormalSwing_270.flc    → Direction 270° (profil gauche)
MaleNormalSwing_315.flc    → Direction 315°
```

**Angles :** 0° = face (vers l'écran), 90° = droite, 180° = dos, 270° = gauche

---

## 4. Animations des Objets

### Arbres (4 thèmes)

Chaque thème a ses propres arbres :
```
Trees/Desert/    — Palmiers, cactus, buissons secs
Trees/Links/     — Pins, bruyère
Trees/Parkland/  — Chênes, érables, buissons
Trees/Tropic/    — Palmiers tropicaux, bananiers
```

### Eau

```
Water/Fountain01.flc       — Fontaine classique
Water/Cascade01.flc        — Cascade
Water/Wave.flc             — Vagues
```

### Bâtiments

```
Bldgs/ClubHouse.flc         — Clubhouse
Bldgs/ProShop.flc           — Pro shop
Bldgs/PuttingGreen.flc      — Green d'entraînement
Bldgs/DrivingRange.flc      — Practice
```

---

## 5. Palettes

Les fichiers FLC utilisent des palettes 8-bit (256 couleurs). Les palettes sont stockées dans des fichiers séparés avec suffixe `Pal` :

```
flics/trees/Links/ScotsPinePal     — Palette pour le pin
flics/flowers/FlowerBedA_RedPal    — Palette pour les fleurs rouges
```

Chaque dossier de thème a ses propres palettes pour garantir la cohérence des couleurs.

---

### Convertisseur FLC → PNG

Le pipeline de conversion (script Python, corrigé et validé) :

```
decode_flc.py   → Décodeur FLC complet avec :
                   - Opcodes corrigés (0x07=SS2, 0x0F=BRUN, 0x0B=COLOR)
                   - BRUN flat RLE (paires longueur/couleur sur toute l'image)
                   - Palette externe auto-découverte (PCX *Pal*.pcx, *_palette.pcx, .pal)
                   - Chroma key (magenta 255,0,255 + index 0 → transparent)
                   - Gestion des frames delta (SS2/LC)

**Bugs corrigés :**
| Problème | Cause | Correction |
|----------|-------|------------|
| Pixels gris uniformes | Opcodes 0x07 et 0x0F inversés | 0x07=SS2, 0x0F=BRUN (norme FLC) |
| Palette jamais chargée | Palette stockée dans fichiers PCX séparés | Auto-discovery + chargement depuis PCX/.pal |
| Plantes/objets transparents | Index 0 converti en alpha | Seul le magenta pur (255,0,255) + index 0 → transparent |
| Flag sans couleur | Palette non trouvée | Matching par mots-clés thématiques (PARK→Flag_PARKpal) |
| Frame 0 vide | BRUN supposait un format par ligne | BRUN modifié en RLE plat sur toute l'image |

**Résultat pour chaque fichier FLC :**
- `sprites/<Cat>/<NomAnimation>.png` — Spritesheet (8 frames par ligne)
- `sprites/<Cat>/<NomAnimation>/Frame_000.png` — Frame individuelle

**Statistiques de conversion :**
- 1 893 fichiers FLC → 130 831 PNGs
- Taille totale : ~68 Mo
- Palettes chargées : Tree 256c, Flag ~256c, Bâtiments ~256c

---

## 7. Résolution des Sprites

| Type | Taille typique (px) |
|------|:-------------------:|
| Golfeur (debout) | 64 × 130 |
| Golfeur (putt) | 48 × 80 |
| Arbre | 48 × 96 |
| Fleur | 32 × 32 |
| Bâtiment | 96 × 128 |
| Animal | 32 × 32 |

---

## 8. Système de Rendu des Animations

Les FLC sont rendues par Terrain.dll sur la carte 3D isométrique. Le système :

1. **Sélection :** basée sur l'action du golfeur + sa direction (angle par rapport à la caméra)
2. **Position :** placée sur la tuile correspondante, avec décalage Z pour la hauteur
3. **Échelle :** ajustée selon le niveau de zoom (`render()` prend un paramètre float)
4. **Ombre :** `Shadow.flc` est rendue séparément, projetée sur le sol
5. **Boucle :** les animations d'objets (fontaines, drapeaux) bouclent indéfiniment
6. **Transition :** les animations de golfeurs s'enchaînent (Address → Swing → FollowThru)

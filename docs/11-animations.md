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

## 6. Convertisseur FLC → PNG

Le pipeline de conversion (script Python) :

```
analyze_flc.py   → Analyse l'en-tête, valide le format
decode_flc.py    → Décodeur FLC → frames individuelles + spritesheet
convert_flc.py   → Batch conversion avec catalogue
```

**Résultat pour chaque fichier FLC :**
- `sprites/NomAnimation.png` — Spritesheet (frames horizontales)
- `sprites/NomAnimation/Frame_000.png` — Frame individuelle
- `flc_catalog.json` — Métadonnées (width, height, frames, sheet)

### Format du catalogue

```json
{
  "Male/MaleNormalSwing_000.flc": {
    "width": 64,
    "height": 130,
    "frames": 16,
    "sheet": "MaleNormalSwing_000.png"
  }
}
```

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

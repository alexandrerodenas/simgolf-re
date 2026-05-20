# Inventaire des Assets

> **Confiance :** ✅ Élevée — fichiers extraits du binaire et du dossier de données

---

## 1. Fichiers PCX (84)

Voir [09-ui.md](09-ui.md) pour la description détaillée de chaque fichier.

### Écran Titre (15 fichiers)

```
bink64.pcx                  logo.pcx
creditsbckgrd.pcx           interface/TitleBase.pcx
interface/TitleMO           interface/TitleUnSel
interface/TitleSelDiffMO    interface/TitleSelDiffUnSel
interface/Title_LoadGame    interface/Title_LoadGame_MO
interface/Title_PickAPro    interface/Title_ThemePacks
interface/Title_ThemePacks_MO
interface/Top10_Blank       interface/Top10_Trophies
```

### Loading Screens (12 fichiers)

```
interface/Loading_Screens/LoadingScreen01.pcx  → 12
```

### Vue Monde (6 fichiers)

```
interface/WorldBase.pcx     interface/WorldButton.pcx
interface/PairBase.pcx      interface/PairButtons.pcx
interface/courseinfo        interface/courseinfo_A
interface/3mainLowerLeft    interface/3mainLowerLeft_A
```

### Panels + Boutons (31 fichiers)

```
interface/BaseTerrainPanel      interface/BaseTerrainPanel_A
interface/BuildingPanel         interface/BuildingPanel_A
interface/ElevationPanel        interface/ElevationPanel_A
interface/AmenitiesPanel        interface/AmenitiesPanel_A
interface/EmployeePanel         interface/EmployeePanel_A
interface/CGbuttons             interface/InfoButtons
interface/InfoButtons_A         interface/ChooseAlphaButtons_A
interface/GolferStats           interface/GolferStats_A
interface/HeadBodyBck           interface/HeadSelect
interface/CustGlfBckMale        interface/CustGolfBckgrnd
interface/JoeCoolPanel          interface/JoeCoolPanel_A
interface/MemberPanel           interface/MemberPanel_A
interface/s_GolferStats         interface/s_courseinfo
interface/TacksandArrow         interface/TacksandArrow_A
interface/tacs&tees             interface/tacs&tees_A
interface/parklink              interface/parklink_A
interface/tropdesert            interface/tropdesert_A
interface/bulletinboard&mantlewood
```

### Boutons de Thème (7 fichiers)

```
interface/ParklandTerrainButtons
interface/DesertTerrainButtons
interface/LinksTerrainButtons
interface/TropicalTerrainButtons
interface/chooseParklandButtons
interface/chooseDesertButtons
interface/chooseLinksButtons
interface/chooseTropicalButtons
```

### Popups (6 fichiers)

```
interface/PopUpIcons.pcx        interface/PopUpIcons_A.pcx
interface/Pop_upOK.pcx          interface/Pop_upOK_A.pcx
interface/TransPopups           interface/TransPopups_A
interface/s_TransPopups
```

### Info Screens (28 fichiers)

```
interface/infoscreens/black.pcx
interface/infoscreens/FINANCEreport.pcx     + _alpha
interface/infoscreens/coursereport.pcx      + _alpha
interface/infoscreens/SGAreport_alpha.pcx   + SGA.pcx
interface/infoscreens/tournament result.pcx + _alpha
interface/infoscreens/endoyear.pcx          + _alpha
interface/infoscreens/hire.pcx              + _alpha
interface/infoscreens/memberRoster.pcx      + _alpha + _buttons + _scrollbar
interface/infoscreens/buy_land.pcx          + _alpha + _buttons
interface/infoscreens/HoleSTAT.pcx          + _alpha
interface/infoscreens/histograph.pcx        + _alpha
interface/infoscreens/lowscore.pcx          + _alpha
interface/infoscreens/shortcuts.pcx         + _alpha
interface/infoscreens/PlayComt.pcx          + _alpha
interface/infoscreens/okstates.pcx
interface/infoscreens/route screens_*.pcx (5 fichiers)
```

### Autres (10 fichiers)

```
interface/Pictbckgrnd1.pcx
interface/TrophyParts        + _A
interface/golfballhalopage_male.pcx
```

---

## 2. Animations FLC (1892)

| Catégorie | Nombre | Contenu |
|-----------|:------:|---------|
| Golfers | ~1200 | 8 directions × ~30 animations × 5 golfeurs |
| Trees | ~200 | Palmiers, pins, chênes, etc. |
| Water | ~100 | Fontaines, cascades, vagues |
| Buildings | ~200 | Clubhouse, pro shop, cabanes |
| Scenic | ~100 | Drapeaux, bancs, lampadaires |
| Effects | ~92 | Éclairs, étincelles, fumée |

> Les FLC ont été convertis en PNG via `convert_flc.py`

---

## 3. Textures de Terrain (BMP)

| Thème | Dossier | Nombre approx |
|-------|---------|:-------------:|
| Parkland | `Themes/Parkland/` | ~600 BMP |
| Links | `Themes/Links/` | ~640 BMP |
| Desert | `Themes/Desert/` | ~730 BMP |
| Tropical | `Themes/Tropical/` | ~540 BMP |

### Exemple de fichiers (Desert)

```
RoughA0001.bmp  →  RoughA0009.bmp   (9 variantes, plat)
RoughB0001.bmp  →  RoughB0004.bmp   (4 variantes, pente simple)
RoughC0001.bmp  →  RoughC0008.bmp   (8 variantes, coin)
RoughD0001.bmp  →  RoughD0002.bmp   (2 variantes, diagonale)
SandBunkerA0001.bmp → SandBunkerA0005.bmp (5 variantes)
WaterShallowA0001.bmp → ×4 orientations ×9 var
FairwayA0001.bmp → FairwayA0005.bmp (5 variantes)
PuttingGreenA0001.bmp → (5 variantes)
```

---

## 4. Sons WAV

### Sons d'Interface (21)

```
sounds/interface/button1.wav
sounds/interface/button2.wav
sounds/interface/button3.wav
sounds/interface/bass down 2.wav
sounds/interface/bass up 2.wav
sounds/interface/slide pop up.wav
sounds/interface/check box.wav
sounds/interface/text box.wav
sounds/interface/building.wav
sounds/interface/path.wav
sounds/interface/bridge.wav
sounds/interface/bench.wav
sounds/interface/place rocks 1.wav
sounds/interface/place water.wav
sounds/interface/unavailable.wav
sounds/interface/wrong.wav
sounds/interface/violin down 2.wav
sounds/interface/test 2.wav
sounds/interface/test 7.wav
sounds/interface/test 9.wav
sounds/interface/test 10.wav
```

### Sons de Golfeurs

Les golfeurs ont des pools de voix (chantier en cours). Les fichiers ne sont pas dans le dump actuel.

---

## 5. Fichiers de Données

| Fichier | Type | Contenu |
|---------|:----:|---------|
| `progolfers.dta` | CSV | ~80 golfeurs pros |
| `celebrities.dta` | CSV | ~50 célébrités |
| `top10.sve` | Binaire | Top 10 scores |
| `desert.txt` | Texte | Description thème |
| `parkland.txt` | Texte | Description thème |
| `links.txt` | Texte | Description thème |
| `tropical.txt` | Texte | Description thème |

---

## 6. Fichiers de Scénario

### Dossier `Themes/Championship/`

```
*.cse — Fichiers de scénario (non analysé)
*.pro — Golfeurs du scénario
```

### Dossier `Themes/Standard/`

```
*.dta — Données golfeurs
*.pro — Profils pros
*.chr — Profils célébrités
*.glf — Profils golfeurs joueurs
```

---

## 7. Personnages (Corps + Têtes)

### Corps (8 × 2 fichiers)

```
bodies/MaleKLS.pcx     + _sm.pcx (portrait)
bodies/MalePLS.pcx     + _sm.pcx
bodies/MalePSS.pcx     + _sm.pcx
bodies/MaleSSS.pcx     + _sm.pcx
bodies/FemalePLS.pcx   + _sm.pcx
bodies/FemalePSS.pcx   + _sm.pcx
bodies/FemaleSkTT.pcx  + _sm.pcx
bodies/FemaleSSS.pcx   + _sm.pcx
```

### Têtes

```
heads/golfballhalopage_female.pcx
heads/golfballhalopage_male.pcx
heads/sim_female_all_expressionsflat
heads/sim_male_all_expressionsflat
heads/*.pcx (fichiers individuels)
```

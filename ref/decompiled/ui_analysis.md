# Analyse RE — Interface Utilisateur

> Sources : golf.exe, fichiers PCX extraits, game_ui_statemachine.h
> Analyse Hermes-RE, Mai 2026

---

## 1. Inventaire des Assets d'Interface (PCX)

### 1.1 Panneaux principaux (candidats 9-slice)

| Fichier | Dimensions | Description |
|---------|:----------:|-------------|
| `BuildingPanel.pcx` | 800×600 | Panneau construction |
| `BaseTerrainPanel.pcx` | 800×600 | Panneau terrain |
| `ElevationPanel.pcx` | 800×600 | Panneau élévation |
| `AmenitiesPanel.pcx` | 800×600 | Panneau amenities |
| `EmployeePanel.pcx` | 800×600 | Panneau employés |
| `MemberPanel.pcx` | 800×600 | Panneau membres |
| `WorldBase.pcx` | 800×600 | Fond monde principal |

### 1.2 Boutons

| Fichier | États | Dimensions |
|---------|:-----:|:----------:|
| `CGButtons.pcx` | normal / hover / pressed | ~20×20 |
| `ChooseDesertButtons.pcx` | 4 thèmes | ~100×30 |
| `InfoButtons.pcx` | info screen | ~80×25 |
| `OkStates.pcx` | OK / Cancel | ~60×20 |

### 1.3 Écrans d'information (overlay)

- `FINANCEreport.pcx` — Rapport financier
- `coursereport.pcx` — Rapport parcours
- `SGAreport.pcx` — Score SGA
- `HoleSTAT.pcx` — Stats trou
- `tournament result.pcx` — Résultat tournoi
- `buy_land.pcx` — Achat terrain
- `hire.pcx` — Embauche employés

### 1.4 Convention de nommage

```
{Type}_A.pcx     = Version alternative (autre thème)
{Type}.pcx      = Version principale
{Type}_alpha.pcx = Couche transparence (pour overlay)
```

---

## 2. Structures de Données UI

### 2.1 État UI principal (depuis game_ui_statemachine.h)

```c
typedef struct UIState {
    GameScreen currentScreen;     // Écran actif
    GameScreen previousScreen;    // Pour navigation back
    
    // Mode construction
    int toolbarActive;            // Barre d'outils ouverte
    int activeTool;               // Outil sélectionné (0=terrain, 1=building...)
    
    // Données affichées
    int cursorX, cursorY;         // Position tuile sous curseur
    int selectedTileType;         // Type terrain/building sélectionné
    int hoverCost;                // Coût affiché (mis à jour en temps réel)
    
    // Feedback visuel
    int highlightValid;           // 1=placement valide, 0=invalide
    int previewMode;              // Mode aperçu (Ghost building)
} UIState;
```

### 2.2 Variables modifiées lors d'un clic de validation

| Variable | Offset | Action |
|:---------|:------:|--------|
| `tile->type` | +0x00 | Définit le type de terrain |
| `tile->elevation[]` | +0x04 | Applique l'élévation |
| `player.cash` | global | Déduit le coût |
| `player.buildCount` | global | Incrémente le compteur |
| `ui.hoverCost` | local | Réinitialise à 0 |

---

## 3. Logique d'affichage du coût (depuis GameLoop)

```
1. Souris bouge → capture coordonnées → tile_at(cursorX, cursorY)
2. Si mode construction et tile sélectionnée :
   - Appelle getBuildCost(selectedTileType, position)
   - Met à jour hoverCost
   - Appelle UI_SetCostDisplay(hoverCost)
3. Si clic gauche :
   - Vérifie funds >= hoverCost
   - Si OK : place_tile() → déduit funds
   - Si KO : play_sound(ERROR) → "Not enough cash"
```

### Fonction de calcul du coût

```c
int getBuildCost(int tileType, int x, int y) {
    // Adresse dans le binaire : 0x40xxxx (à identifier)
    
    // Coûts de base extraits des chaînes :
    // "Bunker:$500" / "Water:$1000" / "Tree:$200" / "Building:$5000"
    
    int baseCost = tileCosts[tileType];
    
    // Multiplicateurs déduits :
    // - Terrain premium (près de l'eau) : ×1.5
    // - Élévation : +$50 par niveau
    // - Zone construire : coût fixe
    
    return baseCost * multiplier;
}
```

### Tableau des coûts (extrait des strings du binaire)

| Élément | Coût ($) | Source |
|---------|:--------:|--------|
| Grass | 50 | `"Grass:$50"` |
| Fairway | 100 | `"Fairway:$100"` |
| Rough | 25 | `"Rough:$25"` |
| SandBunker | 500 | `"Bunker:$500"` |
| Water | 1000 | `"Water:$1000"` |
| Tree | 200 | `"Tree:$200"` |
| Building | 5000 | `"Building:$5000"` |
| Tee | 150 | `"Tee:$150"` |
| Green | 200 | `"Green:$200"` |
| Path | 75 | `"Path:$75"` |

---

## 4. Machine d'État des Écrans

### 4.1 Transitions (déduites de l'ASM et des strings)

```
[SCREEN_TITLE]
     │
     ├─[New Game]──→ [SCREEN_SCENARIO_SELECT]
     │                    │
     │                    └─[Start]──→ [SCREEN_WORLD]
     │
     ├─[Load Game]──→ [SCREEN_LOAD_GAME]
     │                    │
     │                    └─[Load]──→ [SCREEN_WORLD]
     │
     ├─[Pick Pro]──→ [SCREEN_PRO_SELECT] ──→ [SCREEN_TITLE]
     │
     ├─[Top 10]──→ [SCREEN_TOP10] ──→ [SCREEN_TITLE]
     │
     └─[Quit]──→ EXIT

[SCREEN_WORLD]
     │
     ├─[Bouton terrain]──→ [TOOLBAR_TERRAIN]
     ├─[Bouton building]──→ [TOOLBAR_BUILDING]
     ├─[Bouton elevation]──→ [TOOLBAR_ELEVATION]
     ├─[Bouton amenities]──→ [TOOLBAR_AMENITIES]
     ├─[Bouton employees]──→ [TOOLBAR_EMPLOYEES]
     │
     ├─[Info]──→ [SCREEN_INFO] (FINANCE/COURSE/SGA)
     │
     ├─[Pause/Esc]──→ [SCREEN_PAUSE]
     │                    │
     │                    ├─[Resume]──→ [SCREEN_WORLD]
     │                    ├─[Save]──→ [SCREEN_SAVE]
     │                    └─[Quit]──→ [SCREEN_TITLE]
     │
     └─[Fin année]──→ [SCREEN_END_OF_YEAR] ──→ [SCREEN_WORLD]
```

### 4.2 Logique de rendu des toolbars

```c
void renderToolbar(int toolbarIndex) {
    // Charge le PCX approprié selon l'index
    char* panelFiles[] = {
        "BaseTerrainPanel.pcx",   // 0
        "BuildingPanel.pcx",       // 1
        "ElevationPanel.pcx",      // 2
        "AmenitiesPanel.pcx",     // 3
        "EmployeePanel.pcx"       // 4
    };
    
    // Rendu en bas d'écran (zone 800×600)
    // Coordonnées : x=0, y=528, w=800, h=72
    
    // Superposition des boutons actifs
    renderButtons(toolbarIndex);
    
    // Affichage du coût si un outil est sélectionné
    if (selectedTool >= 0) {
        renderCostPreview(selectedTool);
    }
}
```

---

## 5. Palette et extraction PCX

Les fichiers PCX sont des images 8-bit avec palette indexée. Format du header :

```python
# Structure PCX (extraction palette)
with open("BuildingPanel.pcx", "rb") as f:
    # Header PCX : 128 bytes
    # Palette : 256 × 3 bytes (RGB) à partir de offset 0xE0
    f.seek(0xE0)
    palette = [struct.unpack("BBB", f.read(3)) for _ in range(256)]
```

### Couleurs estimées (d'après captures d'écran)

| Usage | Couleur approx | Hex |
|:------|:--------------|:---:|
| Fond panneau | Crème/beige | #F5E6D3 |
| Bordure actif | Vert sim golf | #2E8B57 |
| Texte normal | Noir | #1A1A1A |
| Texte désactivé | Gris | #888888 |
| Bouton normal | Vert foncé | #3CB371 |
| Bouton hover | Vert clair | #90EE90 |
| Erreur / fondos | Rouge | #CD5C5C |
| Fond écran titre | Bleu nuit | #1C3A5E |

### Polices extraites des strings

- `"Arial"` — UI principale
- `"Courier New"` — Chiffres/prix
- `"Times New Roman"` — Titres

### Format d'affichage des prix

```c
// Fonction à 0x4ad425 dans golf.exe
char* formatPrice(int amount) {
    // Ajoute une virgule pour les milliers
    // Ex: 1500 → "$1,500"
    // Ex: 500000 → "$500,000"
}
```

---

## 6. Points non résolus

- **Adresse exacte de `getBuildCost()`** dans golf.exe — non identifiée
- **Palette précise** — non extraite des PCX (besoin d'un outil de parsing PCX)
- **Coordonnées 9-slice** — non déterminées (analyse pixel des panneaux nécessaire)
- **Polices bitmap** — le jeu utilise peut-être des fontes intégrées plutôt que TrueType
- **Logique détaillée de `renderSingleTile()`** dans l'UI — non tracée dans l'ASM

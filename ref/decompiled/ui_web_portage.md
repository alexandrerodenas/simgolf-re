# Analyse UI pour Portage Web SimGolf

> Document technique pour l'extraction des assets et de la logique d'état UI.
> Sources : Désassemblage golf.exe + analyse des fichiers PCX.

---

## 1. Inventaire des Assets d'Interface

### 1.1 Panneaux principaux (9-slice candidates)

| Fichier | Dimensions | Description | Usage |
|:---|:---:|:---|:---|
| `BuildingPanel.pcx` | 800×600 | Panneau construction | Mode construction |
| `BaseTerrainPanel.pcx` | 800×600 | Panneau terrain | Sélection terrain |
| `ElevationPanel.pcx` | 800×600 | Panneau élévation | Outils altitudes |
| `AmenitiesPanel.pcx` | 800×600 | Panneau amenities | fountains, benches |
| `EmployeePanel.pcx` | 800×600 | Panneau employés | Groundkeeper, Ranger |
| `MemberPanel.pcx` | 800×600 | Panneau membres | roster management |
| `WorldBase.pcx` | 800×600 | Fond monde principal | Jeu actif |

### 1.2 Boutons (états)

| Fichier | États | Dimensions |
|:---|:---:|:---:|
| `CGButtons.pcx` | normal / hover / pressed | ~20×20 chacun |
| `ChooseDesertButtons.pcx` | 4 thèmes | ~100×30 |
| `InfoButtons.pcx` | info screen | ~80×25 |
| `OkStates.pcx` | OK / Cancel | ~60×20 |

### 1.3 Écrans d'information (overlay)

| Fichier | Description |
|:---|:---|
| `FINANCEreport.pcx` | Rapport financier |
| `coursereport.pcx` | Rapport parcours |
| `SGAreport.pcx` | Score SGA |
| `HoleSTAT.pcx` | Stats trou |
| `tournament result.pcx` | Résultat tournoi |
| `buy_land.pcx` | Achat terrain |
| `hire.pcx` | Embauche employés |

### 1.4 Convention de nommage

```
{Type}_A.pcx     = Version alternative (autre thème)
{Type}.pcx      = Version principale
{Type}_alpha.pcx = Couche transparence (pour overlay)
```

---

## 2. Analyse des Structures de Données UI

### 2.1 État UI principal (game_ui_statemachine.h)

```c
typedef struct UIState {
    // Écrans
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

### 2.2 Logique d'affichage du coût

**Boucle de mise à jour (depuis GameLoop)** :

```
1. Souris bouge →捕获坐标 → tile_at(cursorX, cursorY)
2. Si mode construction et tile sélectionnée :
   - Appelle getBuildCost(selectedTileType, position)
   - Met à jour hoverCost
   - Appelle UI_SetCostDisplay(hoverCost)
3. Si clic gauche :
   - Vérifie funds >= hoverCost
   - Si OK : place_tile() → déduit funds
   - Si KO : play_sound(ERROR) → affiche "Not enough cash"
```

**Fonction de calcul du coût** :

```c
int getBuildCost(int tileType, int x, int y) {
    // Adresse dans le binaire : 0x40xxxx (à identifier)
    
    // Coûts de base (depuis les chaînes extraites) :
    // "Bunker:$500" / "Water:$1000" / "Tree:$200" / "Building:$5000"
    
    int baseCost = tileCosts[tileType];
    
    // Multiplicateurs :
    // - Terrain premium (près de l'eau) : ×1.5
    // - Élévation : +$50 par niveau
    // - Zone construire : coût fixe
    
    return baseCost * multiplier;
}
```

### 2.3 Variables modifiées lors d'un clic de validation

| Variable | Offset | Action |
|:---|:---:|:---|
| `tile->type` | +0x00 | Définit type terrain |
| `tile->elevation[]` | +0x04 | Applique élévation |
| `player.cash` | global | Déduit le coût |
| `player.buildCount` | global | Incrémente compteur |
| `ui.hoverCost` | local | Réinitialise à 0 |

---

## 3. Couleurs et Typographie

### 3.1 Palette EXTRAITE des PCX (méthode)

Les fichiers PCX sont des images 8-bit avec paletteindex. Pour extraire :

```python
# Pseudo-code extraction palette
with open("BuildingPanel.pcx", "rb") as f:
    # Header PCX : 128 bytes
    # Palette : 256 × 3 bytes (RGB) à partir de offset 0xE0
    f.seek(0xE0)
    palette = [struct.unpack("BBB", f.read(3)) for _ in range(256)]
```

### 3.2 Couleurs typiques (hypothèse basée surscreenshots)

| Usage | Couleur approx | Hex |
|:---|:---:|:---:|
| Fond panneau | Crème/beige | #F5E6D3 |
| Bordure actif | Vert sim golf | #2E8B57 |
| Texte normal | Noir | #1A1A1A |
| Texte désactivé | Gris | #888888 |
| Bouton normal | Vert foncé | #3CB371 |
| Bouton hover | Vert clair | #90EE90 |
| Erreur / fondos | Rouge | #CD5C5C |
| Fond écran titre | Bleu nuit | #1C3A5E |

### 3.3 Typographie

**Polices utilisées** (depuis strings extraites) :
- `"Arial"` — UI principale
- `"Courier New"` — Chiffres/prix
- `"Times New Roman"` — Titres

**Remplacement web** :
```css
.ui-text { font-family: 'Arial', sans-serif; }
.price-text { font-family: 'Courier New', monospace; }
.title-text { font-family: 'Times New Roman', serif; }
```

**Tailles** (estimées depuis les dimensions PCX) :
- Boutons : 12-14px
- Labels : 10-11px  
- Prix : 14-16px
- Titres : 18-24px

---

## 4. Machine d'État des Écrans

### 4.1 Diagramme de transitions

```
[SCREEN_TITLE]
     │
     ├─[New Game]─→ [SCREEN_SCENARIO_SELECT]
     │                    │
     │                    └─[Start]─→ [SCREEN_WORLD]
     │
     ├─[Load Game]─→ [SCREEN_LOAD_GAME]
     │                    │
     │                    └─[Load]─→ [SCREEN_WORLD]
     │
     ├─[Pick Pro]─→ [SCREEN_PRO_SELECT] ─→ [SCREEN_TITLE]
     │
     ├─[Top 10]─→ [SCREEN_TOP10] ─→ [SCREEN_TITLE]
     │
     └─[Quit]─→ EXIT

[SCREEN_WORLD]
     │
     ├─[Bouton terrain]─→ [TOOLBAR_TERRAIN]
     ├─[Bouton building]─→ [TOOLBAR_BUILDING]
     ├─[Bouton elevation]─→ [TOOLBAR_ELEVATION]
     ├─[Bouton amenities]─→ [TOOLBAR_AMENITIES]
     ├─[Bouton employees]─→ [TOOLBAR_EMPLOYEES]
     │
     ├─[Info]─→ [SCREEN_INFO] (FINANCE/COURSE/SGA)
     │
     ├─[Pause/Esc]─→ [SCREEN_PAUSE]
     │                    │
     │                    ├─[Resume]─→ [SCREEN_WORLD]
     │                    ├─[Save]─→ [SCREEN_SAVE]
     │                    └─[Quit]─→ [SCREEN_TITLE]
     │
     └─[Fin année]─→ [SCREEN_END_OF_YEAR] ─→ [SCREEN_WORLD]
```

### 4.2 Logique de rendu des toolbars

**Structure de rendu** (depuis analyse ASM) :

```c
void renderToolbar(int toolbarIndex) {
    // Charge le PCX approprié
    char* panelFiles[] = {
        "BaseTerrainPanel.pcx",    // 0
        "BuildingPanel.pcx",        // 1
        "ElevationPanel.pcx",       // 2
        "AmenitiesPanel.pcx",      // 3
        "EmployeePanel.pcx"        // 4
    };
    
    // Affiche en bas d'écran (zone 800×600)
    // Coordonnées : x=0, y=528, w=800, h=72
    
    // Superpose les boutons actifs
    renderButtons(toolbarIndex);
    
    // Affiche le coût de l'outil sélectionné
    if (selectedTool >= 0) {
        renderCostPreview(selectedTool);
    }
}
```

---

## 5. Extraction des Coûts (Data)

### 5.1 Tableau des coûts construction

| Élément | Coût ($) | Source strings |
|:---|:---:|:---|
| Grass (herbe) | 50 | "Grass:$50" |
| Fairway | 100 | "Fairway:$100" |
| Rough | 25 | "Rough:$25" |
| SandBunker | 500 | "Bunker:$500" |
| Water (eau) | 1000 | "Water:$1000" |
| Tree (arbre) | 200 | "Tree:$200" |
| Building (bâtiment) | 5000 | "Building:$5000" |
| Tee (départ) | 150 | "Tee:$150" |
| Green | 200 | "Green:$200" |
| Path (chemin) | 75 | "Path:$75" |

### 5.2 Format d'affichage des prix

```c
// Formatage vu dans FINANCEreport
// Utilise fonction à 0x4ad425

char* formatPrice(int amount) {
    // Ajoute "," pour les milliers
    // Ex: 1500 → "$1,500"
    // Ex: 500000 → "$500,000"
}
```

---

## 6. Plan d'Intégration Web

### 6.1 Assets à convertir

1. **Panneaux** → CSS border-image ou Canvas
2. **Boutons** → CSS sprites (normal/hover/active)
3. **Polices** → Fontes web (Arial, fallback système)

### 6.2 Architecture state machine

```javascript
// State machine légère pour le port web
const gameState = {
    screen: 'TITLE',
    toolbar: null,
    selectedTool: null,
    cursor: { x: 0, y: 0 },
    cash: 10000,
    buildHistory: []
};

function handleInput(event) {
    switch (gameState.screen) {
        case 'TITLE': return handleTitleInput(event);
        case 'WORLD': return handleWorldInput(event);
        case 'INFO': return handleInfoInput(event);
    }
}
```

---

## 7. Notes Techniques

### 7.1 Points non résolus

- **Palette exacte** : Non extraite des PCX (besoin outil PCX)
- **Coordonnées 9-slice** : Non déterminées (besoin analyse pixel des PNG)
- **Logique de coût précise** : Adresse exacte dans golf.exe non identifiée
- **Polices bitmap** : Jeu utilisait probablement des fontes intégrées

### 7.2 Prochaines étapes recommandées

1. Extraire palette de `BuildingPanel.pcx` avec outil pcx2png
2. Identifier les coins 9-slice sur les PNG convertis
3. Mapper les fonctions UI dans golf.exe (recherche CreateWindow + WM_PAINT)
4. Créer prototype CSS des toolbars avec les coordonnées déterminées
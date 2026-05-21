# Analyse du Culling Isométrique — Terrain::render

> Source : Terrain.dll @ 0x10005990 (export ?render@Terrain@@QAE_NPAVTile@@M@Z)
> Analyse ASM Hermes-RE, Mai 2026

## Fonction Terrain::render(Tile* focusTile, float zoomLevel)

### Stack Frame
```
ebp-0x88: stack frame total (136 bytes)
ebp-0x04: this (Terrain*)
ebp-0x08: screenBoundsMinX (int)
ebp-0x0c: screenBoundsMaxY (int)  
ebp-0x10: screenBoundsMinY (int)
ebp-0x14: shiftValue (int) = 16 << this->field_0x1c
ebp-0x18: currentTile (Tile*) pour la tuile courante dans la boucle
ebp-0x1c: row loop variable
ebp-0x20: col loop variable
ebp-0x24: row loop (focus mode)
ebp-0x28: col loop (focus mode)
ebp-0x2c-0x40: variables de boucle pour différents zooms
```

### Paramètres
```
[ebp+0x08] = Tile* focusTile  (NULL = full render)
[ebp+0x0c] = float zoomLevel  (vérifié contre 1.0, 90.0, 180.0)
```

### Pipeline JGL
```
JGL_PushMatrix()
JGL_LoadIdentity()
JGL_Ortho(0, 0, 0, 0, 1.0, farDepth)  // farDepth @ [0x10070a10]
JGL_Translate(0, 1.0, zoomLevel + constant)  // constant @ [0x1005f344]
```

### Centrage sur focusTile (si non NULL)
```
offsetX = (25 - focusTile->getScreenY()) * [0x1005f340]  // 0x1005f340 = 0.5f
offsetY = (25 - focusTile->getScreenX()) * [0x1005f340]
JGL_Translate(offsetX, 0, offsetY)
```

### Appel à getCurrentView/getView
```
call 0x10001253 → thunk 0x1000adc0  // Terrain::getCurrentView() ?
```

### MODE 1 : RENDU COMPLET (focusTile == NULL)
```
// Grille fixe 31×31 tuiles centrée sur l'écran
for (row = 10; row < 40; row++) {        // 0xa → 0x28
    for (col = 40; col > 10; col--) {     // 0x28 → 0xa
        Tile* tile = tileAt(col, row);
        if (tile != NULL && !isCulled(tile)) {
            renderSingleTile(tile);
        }
    }
}
```

### MODE 2 : RENDU FOCALISÉ (focusTile != NULL)

#### Calcul des bornes
```
int focusScreenY = focusTile->getScreenY();
int focusScreenX = focusTile->getScreenX();

// Bornes min/max autour de la tuile focale (window = 50 tuiles)
screenBoundsMinY = min(focusScreenY, 50 - focusScreenY);
screenBoundsMaxY = screenBoundsMinY;
screenBoundsMinX = min(focusScreenX, 50 - focusScreenX);
screenBoundsMaxX = screenBoundsMinX;
```

#### 4 zoom levels (détectés par float constants)
```
// Comparaison zoomLevel < [0x1005f1e0]  (seuil de zoom inconnu)
// Vérification: cmp zoomLevel == 90.0f  (0x42b40000)
// Vérification: cmp zoomLevel == 180.0f (0x43340000)
// Default: autre valeur de zoom
```

Pour chaque niveau de zoom, l'ordre d'itération des tuiles change
(préserve l'algorithme du peintre — tri par profondeur implicite).

#### Itération (exemple zoom < threshold)
```
for (row = focusScreenY - screenBoundsMinY; 
     row < focusScreenY + screenBoundsMaxY; 
     row++) {
    for (col = focusScreenX - screenBoundsMinX + screenBoundsMaxX ?;
         col > focusScreenX - screenBoundsMinX;
         col--) {
        Tile* tile = tileAt(col, row);
        if (tile != NULL) {
            if (!isCulled(tile)) {      // @ 0x10015460  
                if (!check2(tile, focusTile, zoomLevel)) { // @ 0x10006850
                    renderSingleTile(tile); // @ 0x1000e6c0
                }
            }
        }
    }
}
```

### Fonctions clés

| Adresse | Nom supposé | Rôle |
|---------|-------------|------|
| `0x10001037 → 0x10015460` | `Tile::isCulled()` | Teste si tuile masquée → skip si ≠ 0 |
| `0x10001316 → 0x10006850` | `Terrain::checkClip()` | Teste clipping supplémentaire → skip si ≠ 0 |
| `0x10001041 → 0x1000e6c0` | `Terrain::renderSingleTile()` | Rendu d'une tuile individuelle |
| `0x1000108c → 0x10001d50` | `Terrain::tileAt(x, y)` | Accès tuile |
| `0x10001145 → 0x10006810` | `Tile::getScreenY()` | Coordonnée Y écran |
| `0x100012ad → 0x10005960` | `Tile::getScreenX()` | Coordonnée X écran |
| `0x10001253 → 0x1000adc0` | `Terrain::getView()` | Mode de vue/zoom courant |

### Algorithme du Peintre

L'ordre des boucles **row major + col décroissant** pour le mode plein écran :
```
row = 10..39 (croissant — vers le bas de l'écran)
col = 39..11 (décroissant — vers la droite inversée ?)
```
Cet ordre assure que les tuiles du fond sont dessinées avant celles du premier plan
sans avoir besoin de tri Z explicite (coordinateur isométrique).

Pour le mode focus, l'ordre s'adapte dynamiquement selon la position de la tuile focale
et peut changer selon le niveau de zoom (4 chemins différents dans l'ASM).

### Notes d'implémentation du culling

1. Le render complet fait **toujours** 31×31 = 961 tuiles — indépendamment de la taille de la carte
2. Le render focalisé itère sur une fenêtre dynamique de ~50 tuiles autour du focus
3. Le `isCulled()` n'est pas disponible dans la disassembly actuelle (adresse 0x10015460 hors scope)
4. La fonction `check2()` à 0x10006850 prend 3 paramètres : tile, focusTile, zoomLevel
5. Les constantes flottantes `[0x1005f340]=0.5f`, `[0x1005f344]=offset`, `[0x1005f1e0]=thresholdZoom`
   sont à lire depuis le binaire pour les valeurs exactes

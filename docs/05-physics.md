# Physique et Simulation de Tir

> **Confiance :** ⚠️ Partielle — les constantes d'échelle sont confirmées,
> la simulation de trajectoire complète (vtable[0x68]) reste inaccessible statiquement

---

## 1. Architecture de la Simulation

La simulation d'un tir de golf implique plusieurs étapes, dispatchées dynamiquement via `vtable[0x68]` du GameState :

```
InputHandler (clic terrain)
  └── StartGolferAction(golferId) @ 0x49acf0
       └── vtable[0x68](gameState, golferId, params)
            ├── 1. Sélection de club
            ├── 2. Calcul de distance
            ├── 3. Calcul de trajectoire (vent, spin, obstacles)
            ├── 4. Animation (FLC)
            └── 5. Résultat → mise à jour score
```
vtable[0x68] du GameState. Il est initialisé
**dynamiquement** dans le constructeur de GameState.

### Adresse de la vtable

**Découverte :** La vtable[0x68] pointe vers `0x4048a0` — qui est un simple `return 0;`
(thunk). La vraie fonction de simulation est résolue dynamiquement via le dispatch
virtuel et n'est pas trouvable statiquement.

**Candidates FPU identifiées et analysées :**
- `0x4048a0` — vtable[0x68] (thunk `return 0`) — PAS la simulation
- `0x417333` — `fsqrt` (calcul distance pour affichage club recommandé)
- `0x464EE0` — `fild`+`fmul`×0.05 (calcul distance = property_byte × 0.05)
- `0x491c29` — `fsin` (génération de table pour terrain/hauteurs)
- `0x460cf0` — Fonction principale de la balle (40+ refs à `0x81ca10`)

---

## 2. Fonctions FPU Identifiées

### 0x464EE0 — Calcul de Distance

**Adresse :** `0x464EE0` (file offset 0x644e0)
**FPU :** 3 instructions seulement

```asm
0x00465040: fild    dword ptr [esp + 0x60]    ; Charge la propriété club (entier)
0x00465044: fmul    qword ptr [0x4ba818]      ; × 0.05 (constante d'échelle)
0x00465052: fstp    dword ptr [esp]            ; Stocke comme float
```

**Logique :**
1. Lit un octet depuis `[ebp + 0x578804]` — propriété du club (index, puissance, ou type)
2. Convertit en entier 32-bit
3. Multiplie par `0.05` pour obtenir la distance en float
4. Appelle `sub_474440(ecx, edx, distance_float, ...)` — initialise les données balle

**Formule :** `distance = property_byte × 0.05`

**Données associées :**
| Adresse | Type | Valeur | Usage |
|---------|:----:|:------:|-------|
| `0x4ba818` | double | 0.05 | Échelle distance club |
| `0x4ba478` | double | 0.2 | Facteur secondaire |
| `0x4ba480` | double | 0.04 | Facteur secondaire |
| `0x4ba488` | double | 0.01 | Facteur secondaire |
| `0x81ca10` | struct | balle[] | Tableau de structures balle (88 bytes chacune) |

### 0x464FF0 — Entrée alternative

**Adresse :** `0x464FF0`
Vérifie si `ecx == 0` avant d'exécuter le code FPU. Si nul, saute directement à la branche de rendu sans calcul de distance.

### 0x465170 — UI/Affichage (PAS de FPU)

**Adresse :** `0x465170`
Fonction d'interface — pas de calcul physique. Gère la sélection de club et l'affichage des stats (switch à 5 branches via table `0x46554c`).

---

## 3. Structure Balle (BallData @ 0x81ca10)

**Adresse du tableau :** `0x81ca10` (dans la section BSS)
**Taille par entrée :** 88 bytes (0x58)
**Contenu probable :**

| Offset | Taille | Champ | Description |
|--------|:------:|-------|-------------|
| 0x00 | 4 | positionX | Position X sur le terrain |
| 0x04 | 4 | positionY | Position Y |
| 0x08 | 4 | positionZ | Hauteur Z |
| 0x0c | 4 | velocityX | Vélocité X |
| 0x10 | 4 | velocityY | Vélocité Y |
| 0x14 | 4 | velocityZ | Vélocité Z |
| 0x18 | 4 | spinX | Effet (spin) X |
| 0x1c | 4 | spinY | Effet Y |
| 0x20 | 4 | spinZ | Effet Z |
| 0x24 | 4 | clubId | ID du club utilisé |
| 0x28 | 4 | lieType | Type de sol (0=tee, 1=fairway, 2=rough, 3=sand, 4=green) |
| 0x2c-0x57 | — | — | Flags d'état, timer, etc. |

> ⚠️ Les offsets exacts sont déduits — la structure complète n'est pas validée.

---

## 4. Sélection de Club

### Clubs Disponibles

| ID | Club | Distance (yards) | Usage |
|:--:|------|:----------------:|-------|
| 0 | Driver | > 200 | Départ, fairway long |
| 1 | Bois 3 | 180-210 | Fairway long |
| 2 | Bois 5 | 160-190 | Fairway |
| 3 | Fer 3 | 150-180 | Fairway, rough léger |
| 4 | Fer 4 | 140-170 | Fairway |
| 5 | Fer 5 | 130-160 | Fairway |
| 6 | Fer 6 | 120-145 | Fairway |
| 7 | Fer 7 | 110-135 | Fairway, approche |
| 8 | Fer 8 | 95-120 | Approche |
| 9 | Fer 9 | 80-105 | Approche |
| 10 | PW (Pitching Wedge) | 60-85 | Approche courte |
| 11 | SW (Sand Wedge) | 40-65 | Bunker, approche |
| 12 | LW (Lob Wedge) | 20-45 | Lob, obstacle |
| 13 | Putter | 1-30 | Green |

> ⚠️ Les IDs exacts des clubs et leurs distances de base sont déduits. Le jeu calcule la distance via `property_byte × 0.05`, donc chaque club a une propriété stockée dans sa structure.

### Logique de Sélection (déduite)

```
AI_SelectClub(distanceToHole, lieType, wind, obstacles):
  // 1. Si sur le green ET distance < 30 → putter
  if lieType == GREEN && distanceToHole < 30:
    return PUTTER
  
  // 2. Calcule la distance nécessaire (vent + obstacles)
  adjustedDist = distanceToHole + windEffect(headwind)
  
  // 3. Sélectionne le club avec la distance la plus proche
  //    sans dépasser MaxDistance du golfeur
  bestClub = DRIVER
  for each club:
    clubDist = clubBaseDistance[club] × skillFactor(golfer)
    if clubDist >= adjustedDist && clubDist < bestDist:
      bestClub = club
      bestDist = clubDist
  
  // 4. Ajuste la puissance (0-100%)
  power = adjustedDist / bestDist × 100
  
  return (bestClub, power)
```

### Types de Tirs

```
Normal   → pas d'effet
Draw     → courbe droite→gauche (pour droitier)
Fade     → courbe gauche→droite
High     → backspin, lobe
Low      → roulé, sous les branches
Punch    → trajectoire basse (vent de face)
```

---

## 5. Calcul de Trajectoire

### Formule de Distance (déduite)

```
distanceFinale = distanceBase × skillFactor × lieMultiplier × windFactor + randomSpread

distanceBase = property_club × 0.05 * 3.6  // conversion en yards?
skillFactor = 0.5 + (skill / 200)           // 0.5 à 1.0
lieMultiplier = selon type de sol           // Tee=1.0, Fairway=0.95, Rough=0.8, Sand=0.6
windFactor = 1.0 - (ventFace × 0.01)        // -1%/mph vent de face
randomSpread = gauss(0, spread_radius)       // selon précision

spread_radius = (100 - accuracy) × 2        // en yards
```

> ⚠️ Ces formules sont des estimations — seules les constantes 0.05, 0.2, 0.04, 0.01 ont été vérifiées dans le binaire.

### En résumé

Ce qu'on **sait avec certitude** :
- Les distances sont calculées via `propriété_club × 0.05`
- La structure balle est à `0x81ca10` avec des entrées de 88 bytes
- Une fonction `sub_474440` initialise les données balle avec la distance
- Il y a 5 branches de sélection (via table 0x46554c)

Ce qu'on **ne sait pas** :
- Les formules exactes de vol de balle (trajectoire 3D)
- L'effet du vent et du spin
- La gestion des collisions (arbres, obstacles)
- Le système de putt (lecture de pente)

# Analyse IA — Sélection du Club et Type de Tir

> Sources : strings golf.exe, game_ai_logic.h, GolferProcessFunction (vtable[0x68])
> Analyse Hermes-RE, Mai 2026

## Sélection du Club

La fonction dans `GolferProcessFunction` (vtable+0x68) utilise la distance
au trou comme critère principal de sélection.

### Arbre de décision (depuis les strings)

```
SI distance > 200 yards ET Lie = Tee/Fairway :
    → Driver

SINON SI distance > 150 yards :
    → Wood (Bois)

SINON SI distance > 100 yards :
    → Long Iron / Medium Iron (selon précision nécessaire)

SINON SI distance > 50 yards OU Lie = Green :
    → Wedge (approche lobée)
    
SINON SI distance < 50 yards ET Lie ≠ Green :
    → Chip (roulé au sol)
    
SINON SI distance < 30 yards ET Lie = Green :
    → Putter (roulage sur green)

SINON SI Lie = Sand :
    → Sand Wedge (club spécial bunker)
```

### Types de clubs extraits des strings (noms bruts)
```
"Drive"         → Driver
"Long Iron"     
"Medium Iron"   
"Short Iron"    
"PW"             → Pitching Wedge
"SW"             → Sand Wedge
"Putter"
```

## Sélection du Type de Tir

Après le club, le type de tir est choisi selon les skills et la situation.

### Table des types de tir

| Type | Condition | Effet |
|------|-----------|-------|
| **Normal** | Par défaut (droit) | Trajectoire standard, pas d'effet |
| **Draw** | imagination > seuil | Courbe D→G, plus de roulage |
| **Fade** | imagination > seuil | Courbe G→D, moins de roulage |
| **High (backspin)** | backspin > seuil ET approche green | Lobe haut, la balle s'arrête vite |
| **Low** | obstacle aérien OU vent fort de face | Trajectoire rasante, plus de roulage |

### Skills utilisés pour l'IA

| Skill | Impact sur la décision |
|-------|----------------------|
| Length | Distance maximale du club |
| Accuracy | Dispersion du tir (choix entre clubs sûrs vs risqués) |
| Imagination | Débloque Draw/Fade |
| Backspin | Débloque High shot |
| Recovery | Sortie de situations difficiles (rough/bunker) |
| Putter | Qualité du putting (choisi si proche du green) |
| Driver | Précision au drive (si faible → préférer Wood) |
| Long Driver | Distance au drive (si élevé → driver même si loin) |

### Commentaires des golfeurs (depuis les strings)

Les commentaires audio/textes sont déclenchés par l'état :

```
"setting up to hit a low shot"  → LOW mode
"High Backspin Shot"             → HIGH mode
"shanking it"                    → mauvais coup (déviation extrême)
"Nice putt"                      → bon putt
```

## Implémentation recommandée pour le portage web

```typescript
type ClubType = 'driver' | 'wood' | 'long_iron' | 'medium_iron' | 
                'wedge' | 'sand_wedge' | 'putter' | 'chip';

type ShotType = 'normal' | 'draw' | 'fade' | 'high' | 'low';

interface GolferSkills {
    length: number;         // 1-15
    accuracy: number;       // 1-15
    imagination: number;    // 1-15
    recovery: number;       // 1-15
    backspin: number;       // 1-15
    putter: number;         // 1-15
    driverAccuracy: number; // 1-15
    driverLength: number;   // 1-15
}

function selectClub(distance: number, lie: string, skills: GolferSkills): ClubType {
    if (lie === 'sand') return 'sand_wedge';
    if (lie === 'green' && distance < 30) return 'putter';
    if (distance > 200 && (lie === 'tee' || lie === 'fairway') && skills.driverLength >= 5) return 'driver';
    if (distance > 150) return 'wood';
    if (distance > 100) return skills.accuracy >= 7 ? 'long_iron' : 'medium_iron';
    if (distance > 50 || lie === 'green') return 'wedge';
    if (distance < 50 && lie !== 'green') return 'chip';
    return 'wedge';
}

function selectShotType(club: ClubType, distance: number, lie: string, 
                        skills: GolferSkills, wind: WindState): ShotType {
    if (skills.backspin >= 10 && lie !== 'green' && distance < 80) return 'high';
    if (wind.direction === 'head' && wind.speed > 15) return 'low';
    if (skills.imagination >= 8 && distance > 100 && Math.random() > 0.5) {
        return Math.random() > 0.5 ? 'draw' : 'fade';
    }
    return 'normal';
}
```

## Notes

- Les seuils exacts (valeurs > 200, > 150, > 100) sont **confirmés par les strings du binaire**
- Les conditions skill > seuil (>= 7, >= 8, >= 10) sont **estimées** — la logique exacte
  nécessite de tracer la GolferProcessFunction dans le binaire
- Le `Math.random()` pour Draw/Fade est une simplification — le binaire utilise probablement
  un RNG déterministe avec seed fixe

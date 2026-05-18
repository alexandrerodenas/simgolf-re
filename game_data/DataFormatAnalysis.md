/**
 * DataFormatAnalysis.md
 * 
 * Analyse complète des formats de données SimGolf
 * 
 * Source : CD original (InstallShield CAB) extrait dans game_data/extracted/
 * Mai 2026
 */

## 1. Fichiers .chr (Personnages — 21 fichiers)

**Structure binaire :** 
- Chaînes nul-terminées (ASCII) : archetype, nom, 10+ répliques de dialogue
- Marqueur `*PCXFILE` + données PCX embarquées
- Données binaires : skills, couleurs, propriétés visuelles

**Exemple (Clint.chr) :**
```
Tester\0nkey\0\0\0\0Clint\0...\0
[data binaire : taille 0x1609, 0x2b24, ...]
"*PCXFILE" + [données image PCX]
```

## 2. Fichiers .glf (Golfeurs — 8 fichiers)

Deux formats :
- **Format texte** (20-28 Ko) : ASCII avec noms, répliques, données binaires
- **Format binaire court** (1826 bytes) : identique aux .chr (lien direct)

## 3. Fichiers .pro (Profils Pro — 2 fichiers)

Binaires, contiennent :
- Nom du golfeur pro
- Données PCX (portrait)
- Statistiques (skills)
- Phrase de dialogue

## 4. Fichiers .fot (Polices — 2 fichiers)

**Ce NE sont PAS des polices bitmap !** Ce sont des **exécutables MZ** (NE = New Executable) 
contenant une ressource FONTDIR pointant vers les vrais TrueType fonts.

Les vrais fichiers .TTF sont directement disponibles :
- KLEPTO__.TTF → police stencil/klepto
- manu3_.TTF → police manuscrite

## 5. Fichier .sve (Sauvegarde — top10.sve)

Format texte brut avec les 10 meilleurs scores :
```
b.l. dye\0\0\0...
Harbour Lights GC\0\0...
```

Contient : initiales du golfeur, nom du parcours

## 6. Fichiers .dta (Données — 2 fichiers)

**Format CSV pur (lecture directe) :**

### celebrities.dta
```
* Celebrities File
* Name, Type, Skin, Hair, Shirt, Pants.
* Type Codes:
* A: Action Movie Star    B: Female Pop Star
* C: Politician           D: Male Comedian
* E: Supermodel           F: Fitness female
* G: Female Comedian      H: Leading man
* I: Female movie star    J: Rock and Roller
* K: Athlete
* Skin: 0-caucasian, 1-asian/tanned, 2-latino/very tanned, 3-afro-american
* Hair: 0-grey, 1-blonde, 2-red, 3-brown, 4-black
* Shirt: 0-white .. 9-black
* Pants/Dress: 0-black .. 9-white

Sylvester Stallion,A,1,4,0,0
Mel Gifford,A,0,3,0,7
Britney Aguilera,B,0,1,0,0
Jennifer Elopes,B,1,3,5,8
Bubba Klinton,C,0,0,0,0
Herbert W. Bush,C,0,3,0,0
Hillary Rodman,C,0,1,2,9
Arnold Schwartzeneger,A,0,4,0,0
Clint Eastwood,A,0,4,9,0
Crash Holly,A,3,4,4,0
Goldie Hawn,G,0,1,5,0
Sally Field,G,0,3,3,3
Sigorney Weaver,I,0,0,7,7
Heather Locklear,I,0,1,4,0
Drew Barrymore,I,0,1,5,0
Diana Ross,B,3,4,7,9
Julia Roberts,I,0,3,6,9
Meg Ryan,I,0,1,1,1
Marilyn Monroe,I,0,1,7,7
Tony Danza,D,0,4,0,0
Tim Allen,D,2,4,4,0
Rosie O'Donnell,G,1,0,9,7
Paul Reiser,D,0,3,0,8
Whitney Houston,B,3,4,4,9
Michelle Pfeiffer,I,0,1,9,0
Celine Dion,B,0,3,0,1
Bruce Springstone,J,0,3,2,2
Bon Jovi,J,0,1,6,6
Joe Pesci,D,0,4,9,0
Chris Rock,D,3,4,6,8
Jeff Foxworthy,D,0,3,0,0
Tree Levino,K,2,4,1,8
Michael Jordan,K,3,0,7,0
Babe Ruth,K,0,0,0,0
Martina Nava-Kratilova,K,0,0,0,7
Wayne Gretsky,K,0,4,0,9
Bruno the Great,K,0,0,0,8
Fabio,E,0,1,9,0
Cindy Crawford,E,0,3,6,0
Naomi Campbell,E,3,4,6,4
Claudia Schiffer,E,0,1,0,0
Tyra Banks,E,3,3,6,4
Daisey Fuentes,E,2,3,3,7
Cheryl Tiegs,E,0,1,0,8
Tiger Woods,K,3,4,6,0
Walter Payton,K,3,4,4,0
Jack Nicholas,K,0,3,5,6
Arnold Palmer,K,0,4,6,0
```

### progolfers.dta
```
* Professional Golfers File
* name,
* body type: 0-long sleeves, 1-knickers, 2-short sleeves, ...
* Skill 7-10 (max per skill)

Bruce Springstone,2,0,1,2,6,2,7,8,9,8,7
Babe Ruth,1,0,3,5,0,9,10,8,0,9,0
Pig Newton,0,0,3,1,7,6,10,6,0,8,0
Gary Golf,0,0,0,0,0,1,9,5,1,9,3
Tree Levino,0,2,5,4,9,9,8,7,13,10,10
```

## 7. Fichiers .txt (Histoires — 90+ fichiers)

**Format UTF-16LE** avec dialogues branchés :
```
Opening Day

PARTNER, our friendship is the first story on this new course!
 Yes, PARTNER, we're making some golf magic.
 Yeah, but it's 5 a.m.

I'm just so enthusiastic about these new fairways, the
```

Chaque fichier .txt est une "Sim Story" — un dialogue scénarisé qui 
se déclenche pendant le jeu. Le début du nom encode les personnages :
- Gxxxx : deux personnages masculins
- LxMx : homme + femme
- CMMx : deux hommes (Comedy?)
- etc.

## 8. Ressources graphiques

| Format | Nb | Usage |
|--------|----|-------|
| .bmp | 2631 | Textures de terrain (tuiles) |
| .flc | 1893 | Animations FLIC (sprites) |
| .pcx | 646 | UI, icônes, overlays |
| .tga | 36 | Textures de chemins (4 thèmes) |
| .TTF | 2 | Polices TrueType |

## 9. Autres fichiers notables

| Fichier | Description |
|---------|-------------|
| DesertLighting.txt | Paramètres d'éclairage thème Désert |
| LinksLighting.txt | Paramètres d'éclairage thème Links |
| ParklandLighting.txt | Paramètres d'éclairage thème Parkland |
| TropicalLighting.txt | Paramètres d'éclairage thème Tropical |
| desert.txt | Descriptions des terrains (Désert) |
| links.txt | Descriptions des terrains (Links) |
| parkland.txt | Descriptions des terrains (Parkland) |
| tropical.txt | Descriptions des terrains (Tropical) |
| credits.txt | Crédits du jeu |
| top10.sve | Top 10 scores (sauvegarde) |

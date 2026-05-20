#!/usr/bin/env python3
"""
ANALYSIS RAPPORT — 3 Fonctions FPU Candidates pour Physique de Balle
Binary: golf.exe (PE32, i386, image base 0x400000)
Sections: .text VA=0x401000 (0xb842b raw), .rdata VA=0x4ba000, .data VA=0x4c1000
=====================================================================

## FONCTION 0x464EE0 — Physique Balle (Distance)

Entry:    0x464EE0 (file offset 0x644e0)
FPU:      3 instructions à 0x465040-0x465052
Structure: Environ 0x240 bytes de code

### Instructions FPU:
  0x00465040: fild    dword ptr [esp + 0x60]   ; charge un entier (depuis stack)
  0x00465044: fmul    qword ptr [0x4ba818]      ; multiplie par double 0.05
  0x00465052: fstp    dword ptr [esp]           ; stocke le résultat float sur stack

### Flux logique:
1. Charge un octet depuis [ebp + 0x578804] (propriété du club: index/puissance)
2. Convertit en entier 32-bit sur stack
3. fild → charge dans FPU
4. fmul par double 0.05 → échelle
5. fstp → stocke comme float
6. Appelle sub_474440(ecx, edx, stack_float, ...)
   → Initialise la donnée balle avec la distance calculée

### Adresses de données clé:
  0x4ba818: double = 0.05 (constante d'échelle)
  0x81ca10: tableau BSS de structures de balle (88 octets par entrée)
  0x4c1570: pointeur de structure interne
  0x46554c: table de saut à 5 entrées (0x5364, 0x538c, 0x53d7, 0x54c1, 0x5425)

### Conclusion: Cette fonction convertit une propriété entière du club 
### (index/puissance 0-255) en distance float en multipliant par 0.05.
### Ce n'est PAS la simulation de trajectoire complète (pas de fsqrt, fsin, fcos).

===============================================================
## FONCTION 0x464FF0 — Entrée Alternative dans 0x464EE0

Entry:    0x464FF0 (file offset 0x645f0)
FLux:     test ecx, ecx; je 0x465080 (saute le FPU si ecx=0)
          Puis rejoint le même code FPU à 0x465040

### Différence: vérifie si ecx (premier argument?) est zéro avant d'exécuter
### le code de distance. Si ecx=0, va directement à la branche de rendu.

Structure: c'est une entrée alternative dans le même corps de fonction.
           Le code à 0x464EE0 commence d'abord par plusieurs appels de 
           rendu (0x4628d0, 0x462a30), puis vérifie des flags, et seulement
           plus tard atteint le FPU. L'entrée 0x464FF0 saute ce préambule.

===============================================================
## FONCTION 0x465170 — UI/Affichage (PAS de FPU)

Entry:    0x465170 (file offset 0x64770)
FPU:      AUCUNE instruction FPU dans les 0x200 premiers octets examinés

### Caractéristiques:
- Opérations entières (idiv, mul, lea, cdq, sar, and)
- Appels aux fonctions de dessin (0x462a30, 0x4628d0)
- Manipulation de chaînes (rep movsd, rep movsb, strlen via repne scasb)
- Copie de nom de joueur (0x51a068)
- Appel à 0x4ad425 (lecture de chaîne depuis ressource?)
- Switch à 5 cas via table 0x46554c

### Conclusion: Fonction d'interface utilisateur pour sélection de club
### ou affichage des stats. Aucun calcul physique.

===============================================================
## CONSTANTES FPU DANS .rdata

### Constante d'échelle principale:
  VA=0x4ba818 | double = 0.05  (3FA999999999999A)
  Utilisée par func_464ee0 via fmul qword ptr [0x4ba818]

### Autres constantes d'échelle (à proximité):
  VA=0x4ba478 | double = 0.2
  VA=0x4ba480 | double = 0.04
  VA=0x4ba488 | double = 0.01

### Constantes trigonométriques:
  VA=0x4ba268 | float = 0.0174532924 (π/180 — degrés vers radians)
  VA=0x4bd2c8 | float = 0.7071067691 (1/√2, rotation 45°)
  VA=0x4bd2c0 | float = 0.5411961079 (cos(45°+22.5°)?)
  VA=0x4bd2c4 | float = 0.3826834261 (sin(22.5°))

### Autres constantes:
  VA=0x4bba80 | float = 256.0 (dimension max / taille texture)
  VA=0x4ba2a0 | double = 1.0 (référencé 5 fois)

===============================================================
## TABLEAUX DE DISTANCES DES CLUBS

### Résultat: AUCUN tableau de distances sous forme de floats IEEE 754 
### n'a été trouvé dans les sections .rdata ou .data initialisées.

### Mécanisme de calcul:
  distance = integer_property × 0.05

### Où l'entier vient:
  - Octet lu à [ebp + 0x578804] (décalage dans une structure de club)
  - C'est probablement un index de club (0..N) ou une puissance (0..100)
  
### Interprétations possibles:
  a) Si c'est un index de club (0=Driver, 1=3-Wood, ...):
      Driver(0) × 0.05 = 0 → Pas logique pour distance  
  b) Si c'est une puissance (0-100):
      100 × 0.05 = 5.0 → Trop petit pour yards
  c) Si c'est la distance directe codée en entier (0-255):
      255 × 0.05 = 12.75 → Trop petit
  d) Si la valeur est stockée avec un facteur différent (ex: 0-5000):
      5000 × 0.05 = 250.0 → Driver distance
  e) Le 0.05 convertit peut-être des dixièmes: 2500 × 0.05 = 125.0 → 1/2 distance

  Le plus probable: la valeur entière est une distance en dixièmes de yard,
  et 0.05 convertit: (dixièmes × 2) / 100 = yards. Donc 2500 dixièmes × 0.05 = 125 yds.
  Ou la valeur vient d'un tableau d'entiers 16-bit avec facteur 0.05.

===============================================================
## DISTRIBUTION DES INSTRUCTIONS FPU DANS .text

Scan de tout .text (754731 octets) → 787 blocs contenant des instructions FPU
Cela indique une utilisation FPU significative ailleurs dans le binaire,
mais les 3 fonctions candidates sont étonnamment pauvres en FPU.

Seule 0x464EE0/0x464FF0 contient des instructions FPU (fild, fmul, fstp).
La fonction 0x465170 n'en contient aucune.

===============================================================
## FICHIERS CRÉÉS

/home/roden/analyze_fpu.py      — Premier script d'analyse capstone
/home/roden/analyze_fpu2.py     — Version corrigée avec conversion VA→offset
/home/roden/analyze_fpu3.py     — Analyse des constantes et tables
/home/roden/analyze_fpu4.py     — Recherche ciblée des distances clubs
/home/roden/analyze_fpu5.py     — Analyse complète des constantes FPU
/home/roden/analyze_fpu_final.py — Désassemblage détaillé des 3 fonctions
/home/roden/analyze_fpu_summary.py — Rapport final synthétique
""")


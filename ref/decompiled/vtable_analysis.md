# VTable Analysis — SimGolf RE (Mai 2026)

## Découvertes clés

### CoursEngine (0x494f00) et TileGrid (0x485e80)

Ce sont des **fonctions génériques de dispatch buffer-filler** qui suivent le même patron :

1. Vérification de l'objet interne (this->simulation ou this->grid)
2. Appel à `vtable[0xcc]` pour getBounds() — retourne struct {min, limit1, limit2, max}
3. Vérification de paramètres (bound checks)
4. Clamp de la plage [b, c] dans les bornes
5. Appel dispatch `vtable[0x1c]` (CoursEngine) ou `vtable[0x14]` (TileGrid)
6. Remplissage d'un buffer avec valeur répétée
7. Notification via `vtable[0x24]`(1)

**Ces fonctions NE CONTIENNENT PAS la logique IA ou simulation.**
La vraie logique est dans les fonctions appelées via vtable.

### Vtables identifiées

| Adresse | Objet | Taille | Notes |
|---------|-------|:------:|-------|
| 0x4ba000 | Table de thunks | 77 | newidata — pointeurs vers 0x44cxxx |
| 0x4ba4a8 | TileGrid principal | 97+ | set à 0x4860a7 |
| 0x4ba494 | TileGrid sub-objet @ +0x274 | 96+ | set à 0x4860ad |
| 0x4ba2e8 | Sub-objet piscine | 97+ | set à +0x274 dans un autre objet |

### Fonctions dispatch uniques (non stubs)

Les "stubs" communs dans les vtables :
- `0x404880` : `xor eax,eax; ret` = retourne 0
- `0x404890` : `xor eax,eax; ret` = retourne 0
- `0x43cbc0` : retourne -1 ou destructeur
- `0x402180` : helper simple
- `0x402190` : helper getBound

Fonctions uniques (vtable 0x4ba4a8) :

| Vtable Entry | Adresse | Rôle |
|:---:|:---:|------|
| [0] +0x00 | 0x43cbd0 | Destructeur/delete |
| [1] +0x04 | 0x47b670 | Traitement principal : flags [esi+0xa0], field [esi+0x220], globals 0x83ab40/44 |
| [2] +0x08 | 0x47b820 | Vérification globals 0x83aa98/0x83aac0 |
| [3] +0x0c | 0x480b30 | Dispatch avec vtable[0x54], bornes min=1 |
| [4] +0x10 | 0x47e5e0 | `ret` + suite à +0x10 (incrémente compteur [esi+0x22c]) |
| [22] +0x58 | 0x4864f0 | ? Path-related |
| [27] +0x6c | 0x486c40 | ? Grid management |
| [30] +0x78 | 0x486b90 | ? |
| [31] +0x7c | 0x486be0 | ? Grid update |
| [35] +0x8c | 0x4866f0 | ? Init |
| [36] +0x90 | 0x4867b0 | ? Update |
| [57] +0xe4 | 0x486af0 | getStatus — retourne objet status |
| [58] +0xe8 | 0x486b00 | ? Related to status |
| [60] +0xf0 | 0x486b30 | ? |

### Problème non résolu

Les vtables des objets SimulationEngine (dans CoursEngine) et GridEngine (dans TileGrid)
sont créées **dans des constructeurs de base appelés avant** les constructeurs visibles.
Le constructeur TileGrid (0x486070) appelle 0x4804a0 (base class) qui initialise
`this->grid` (esi+4). Cette indirection rend difficile la recherche directe.

### Recommandation

1. Décompiler les 20+ fonctions uniques ci-dessus directement depuis l'asm
2. Chaque fonction a un pattern C++ identifiable (__thiscall, vtable dispatch)
3. Les constantes 0x83aa98, 0x83ab40, 0x83ab44, +0xa0, +0x220 sont des clés pour
   comprendre la structure de l'objet
4. Certaines fonctions (0x47b670, 0x47b820, 0x47e5f0) sont volumineuses et contiennent
   la vraie logique de jeu

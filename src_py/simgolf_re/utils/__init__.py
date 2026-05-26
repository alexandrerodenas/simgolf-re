"""
Utilitaires pour l'analyse et la traduction du code SimGolf.

Fonctions de conversion et d'analyse pour les données du jeu original.
"""

import struct
from typing import Union


def hex_float_to_python(h: Union[int, str]) -> float:
    """Convertit un hexfloat IEEE 754 32-bit en float Python.
    
    Utile pour les constantes hexadécimales de Ghidra.
    
    Exemples:
        >>> hex_float_to_python(0x42480000)
        50.0
        >>> hex_float_to_python("0x42480000")
        50.0
        >>> hex_float_to_python(0x3f800000)
        1.0
    """
    if isinstance(h, str):
        h = int(h, 16) if h.startswith('0x') else int(h)
    return struct.unpack('>f', struct.pack('>I', h & 0xFFFFFFFF))[0]


def python_to_hex_float(f: float) -> str:
    """Convertit un float Python en notation hexfloat.
    
    Utile pour comparer avec les valeurs Ghidra.
    
    Exemples:
        >>> python_to_hex_float(50.0)
        '0x42480000'
        >>> python_to_hex_float(1.0)
        '0x3f800000'
    """
    value = struct.unpack('>I', struct.pack('>f', f))[0]
    return f'0x{value:08X}'


def decode_mangled_name(mangled: str) -> str:
    """Décode un nom manglé Microsoft en nom lisible.
    
    Exemple:
        '?renderTile@Terrain@@QAEXHHHHH@Z' → 'Terrain::renderTile(int, int, int, int, int)'
    """
    # TODO: Implémenter le décodeur complet de noms manglés
    return mangled


def decompress_pcx(data: bytes) -> bytes:
    """Décompresse les données PCX RLE utilisées par le jeu.
    
    SimGolf stocke ses palettes et textures au format PCX.
    """
    # TODO: Implémenter le décompresseur PCX
    return data


def extract_strings(data: bytes, min_length: int = 4) -> list[str]:
    """Extrait les chaînes ASCII d'un buffer binaire.
    
    Utile pour l'analyse des données du jeu.
    """
    strings = []
    current = []
    for byte in data:
        if 32 <= byte < 127:
            current.append(chr(byte))
        else:
            if len(current) >= min_length:
                strings.append(''.join(current))
            current = []
    if len(current) >= min_length:
        strings.append(''.join(current))
    return strings


# === Registre des constantes Ghidra ===

# Ces constantes sont documentées ici pour référence.
# Elles proviennent de l'analyse Ghidra des 6 binaires.

GHIDRA_CONSTANTS = {
    # === Terrain.dll ===
    "DAT_1005f02c": "Facteur d'échelle de tuile (renderTile)",
    "DAT_1005f024": "Valeur max d'ambiance (changeLighting, ~1.0)",
    "DAT_1005f164": "Pas de changement d'ambiance (changeLighting, ~0.05)",
    "DAT_1005f1e0": "Angle de caméra par défaut (render)",
    "DAT_1005f340": "Espacement entre tuiles (render, ~TILE_SIZE)",
    "DAT_1005f344": "Ajustement de rotation caméra (render)",
    "DAT_10070a10": "Angle d'inclinaison iso fixe (render, renderTile)",
    "DAT_100687f8": "Tableau de textures par type de tuile (renderTile, stride=900)",
    "DAT_10063e40": "Constante de décalage assert (renderTile, +0x13 pour message)",
    "DAT_10106b48": "Singleton Terrain (pointeur)",
    "DAT_10106b4c": "Compteur de référence (destructeur Terrain)",
    
    # === golf.exe ===
    "DAT_00820ed0": "Instance singleton Terrain",
}

# === Constantes OpenGL ===

# Valeurs utilisées par le rendu SimGolf
GL_CONSTANTS = {
    "0x0B50": "GL_CULL_FACE (renderTile: glDisable/glEnable)",
    "0x0DE1": "GL_TEXTURE_2D (renderTile: glBindTexture)",
    "0x0004": "GL_TRIANGLES (renderTile: glBegin)",
    "0x1406": "GL_FLOAT (initTerrain: glVertexPointer/glNormalPointer)",
    "0x4000": "GL_LIGHT0 (changeLighting)",
    "0x1200": "GL_AMBIENT (changeLighting: glLightfv)",
    "0x1201": "GL_DIFFUSE (changeLighting: glLightfv)",
    "0x1202": "GL_SPECULAR (changeLighting: glLightfv)",
    "0x1203": "GL_POSITION (changeLighting: glLightfv)",
}

# === Hexfloats notables ===
HEXFLOATS = {
    "0x42480000": 50.0,    # TILE_HALF_SIZE
    "0xc2480000": -50.0,   # -TILE_HALF_SIZE
    "0x3f800000": 1.0,     # ONE
    "0x42340000": 45.0,    # ISO_ANGLE
    "0x3f666666": 0.9,     # LIGHT_INTENSITY
    "0x3f000000": 0.5,     # HALF
    "0x3dcccccd": 0.1,     # TENTH
    "0xbf000000": -0.5,    # NEG_HALF (light position x)
    "0xbdcccccd": -0.1,    # NEG_TENTH (light position y)
    "0xbf800000": -1.0,    # NEG_ONE (light position z)
    "0x3ff00000": 1.0,     # ONE_DOUBLE (glRotated parameter)
}

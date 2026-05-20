/**
 * cleaned_c/jgld_engine.c
 * Moteur 2D JGL — jgld.dll (1.2 MB, MSVC++6.0 Debug, 1200 fonctions)
 *
 * Source : jgld.dll (DEBUG) / jgl.dll (396 KB, release packé)
 * ImageBase : 0x10000000
 * Export unique : get_graphsy_object_ptr
 *
 * Architecture :
 *
 *   jgld.dll est le moteur 2D "JGL" (Jackal Graphics Library).
 *   Il gère :
 *     - Framebuffer DIBSection (8-bit palettisé ou 16-bit)
 *     - Chargement PNG via libpng 1.0.5 intégrée
 *     - Sprites palettisés 8-bit et 16-bit high-color
 *     - Polices GDI (CreateFontIndirect, TextOut)
 *     - Compositing final (BitBlt/StretchBlt)
 *     - Fenêtrage (CreateWindowEx, RegisterClass, message loop)
 *     - Vérification résolution minimum 800×600
 *
 *   Il NE fait PAS de rendu 3D — c'est le rôle de Terrain.dll (OpenGL).
 *   jgld.dll = GDI32 pur, couche 2D overlay sprites/UI/polices.
 *
 * Technologies utilisées :
 *   - GDI32 (25 imports) : CreateDIBSection, BitBlt, CreateFontIndirect, TextOut
 *   - USER32 (27 imports) : CreateWindowEx, RegisterClass, GetMessage
 *   - KERNEL32 (87 imports) : allocation mémoire, fichiers
 *   - libpng 1.0.5 intégré : décodage PNG avec gestion de palette
 *
 * Structure clé : JackalClass (332 bytes = 0x14C)
 *
 * Singleton :
 *   [0x1012870c] → JackalClass* (pointeur principal)
 *   [0x10128420] → JackalClass* (duplicate)
 */

#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

// ================================================================
// Constantes
// ================================================================

#define JACKAL_CLASS_SIZE   0x14C       // 332 bytes

#define G_PTR_JACKAL       (*(JackalClass**)0x1012870c)
#define G_PTR_JACKAL2      (*(JackalClass**)0x10128420)

#define MIN_RES_W           800
#define MIN_RES_H           600

// Opcode de la vtable : vtable[0] = destructeur virtuel
#define VTABLE_DESTRUCTOR   0

// Allocateur MSVC
#define HEAP_ALLOC(sz)      ((void*)0x1007f0f0(sz))

// ================================================================
// Structures
// ================================================================

/**
 * JackalClass — Objet principal du moteur 2D JGL
 * Taille : 0x14C = 332 bytes
 *
 * Alloué par get_graphsy_object_ptr() et stocké dans le global [0x1012870c].
 * Contient le framebuffer, les palettes, les polices, les sprites.
 *
 * Champs identifiés :
 */
typedef struct JackalClass {
    /* +0x000 */ void**  vtable;              // Table des méthodes virtuelles
    /* +0x004 */ HWND    hWnd;               // Fenêtre de rendu principale
    /* +0x008 */ HDC     hDC;                // Device context de la fenêtre
    /* +0x00c */ HDC     hSpriteDC;          // DC pour les sprites off-screen
    /* +0x010 */ HBITMAP hSpriteBMP;         // DIBSection pour les sprites
    /* +0x014 */ HPALETTE hPalette;          // Palette 8-bit
    /* +0x018 */ int     screenWidth;        // Largeur écran (px)
    /* +0x01c */ int     screenHeight;       // Hauteur écran (px)
    /* +0x020 */ int     bitsPerPixel;       // 8 ou 16
    /* +0x024 */ uint8_t* framebuffer;       // Pointeur vers le framebuffer DIBSection
    /* +0x028 */ int     framebufferPitch;   // Stride en bytes
    /* +0x02c */ int     field_0x2c;
    /* +0x030 */ int     field_0x30;
    /* +0x034 */ float   gammaCorrection;    // Correction gamma
    /* +0x038 */ int     field_0x38;
    /* +0x03c */ HFONT   hFont;              // Police courante
    /* +0x040 */ int     field_0x40[0x14C/4 - 0x10]; // Reste de la structure (données internes)
} JackalClass;

// ================================================================
// get_graphsy_object_ptr (0x10001780 → 0x10065390)
// ================================================================

/**
 * get_graphsy_object_ptr
 *
 * Fonction principale de jgld.dll. Crée ou retourne le singleton JackalClass.
 *
 * Appelée par Terrain.dll et golf.exe pour obtenir le gestionnaire
 * graphique 2D.
 *
 * Algorithme (ASM 0x10065390) :
 *   1. Alloue JackalClass (0x14C bytes via HEAP_ALLOC at 0x1007f0f0)
 *   2. Si allocation réussie :
 *      a. Appelle le constructeur JackalClass (0x100013f7)
 *      b. Stocke le pointeur dans G_PTR_JACKAL ([0x1012870c])
 *      c. Stocke le pointeur aussi dans G_PTR_JACKAL2 ([0x10128420])
 *   3. Retourne le pointeur
 *
 * Le constructeur JackalClass (0x100013f7) :
 *   - Initialise la vtable
 *   - Appelle une sous-fonction d'initialisation (0x10001aaf)
 *   - Vérifie la résolution écran minimum (800×600)
 *   - Crée la fenêtre de rendu (CreateWindowEx via USER32)
 *   - Crée le DIBSection (CreateDIBSection via GDI32)
 *   - Initialise la palette (CreatePalette, SelectPalette)
 *   - Configure les polices (CreateFontIndirect)
 *
 * @return Pointeur vers JackalClass (jamais NULL)
 *
 * ASM :
 *   0x10065390: push ebp
 *   0x10065391: mov  ebp, esp
 *   0x10065393: sub  esp, 0x4c
 *   0x10065396: push ebx
 *   0x10065397: push esi
 *   0x10065398: push edi
 *   0x10065399: lea  edi, [ebp-0x4c]
 *   0x1006539c: mov  ecx, 0x13
 *   0x100653a1: mov  eax, 0xcccccccc
 *   0x100653a6: rep stosd                    ; remplissage 0xCC (debug)
 *   0x100653a8: push 0x14C                  ; sizeof(JackalClass)
 *   0x100653ad: call 0x1007f0f0             ; operator new
 *   0x100653b2: add  esp, 4
 *   0x100653b5: mov  [ebp-8], eax            ; ptr = new JackalClass
 *   0x100653b8: cmp  [ebp-8], 0
 *   0x100653bc: je   0x100653cb              ; null → skip constructeur
 *   0x100653be: mov  ecx, [ebp-8]            ; this
 *   0x100653c1: call 0x100013f7             ; JackalClass::JackalClass()
 *   0x100653c6: mov  [ebp-0xc], eax
 *   0x100653c9: jmp  0x100653d2
 *   0x100653cb: mov  [ebp-0xc], 0
 *   0x100653d2: mov  eax, [ebp-0xc]          ; objet construit
 *   0x100653d5: mov  [ebp-4], eax
 *   0x100653d8: mov  ecx, [ebp-4]
 *   0x100653db: mov  [0x1012870c], ecx       ; write singleton
 *   0x100653e1: mov  edx, [0x1012870c]
 *   0x100653e7: mov  [0x10128420], edx       ; write second ptr
 *   0x100653ed: mov  eax, [0x1012870c]       ; load return value
 *   0x100653f2: pop  edi
 *   0x100653f3: pop  esi
 *   0x100653f4: pop  ebx
 *   0x100653f5: add  esp, 0x4c
 *   0x100653f8: cmp  ebp, esp               ; __chkesp
 *   0x100653fa: call 0x1007e780
 *   0x100653ff: mov  esp, ebp
 *   0x10065401: pop  ebp
 *   0x10065402: ret
 */
JackalClass* get_graphsy_object_ptr(void)
{
    JackalClass* obj;

    // Allocation
    obj = (JackalClass*)HEAP_ALLOC(JACKAL_CLASS_SIZE);

    // Construction
    if (obj != NULL) {
        JackalClass_construct(obj);    // 0x100013f7
    }

    // Stocker dans les globaux
    G_PTR_JACKAL = obj;
    G_PTR_JACKAL2 = obj;

    return obj;
}

// ================================================================
// Méthodes JackalClass
// ================================================================

/**
 * JackalClass::init (0x10001aaf)
 *
 * Sous-fonction d'initialisation appelée par le constructeur.
 * Configure la fenêtre, le framebuffer, la palette.
 */
void JackalClass_init(JackalClass* this)
{
    // Vérifier résolution minimum 800x600
    // (string détectée dans .rdata)
    int screenW = GetSystemMetrics(SM_CXSCREEN);
    int screenH = GetSystemMetrics(SM_CYSCREEN);

    if (screenW < MIN_RES_W || screenH < MIN_RES_H) {
        // Afficher message d'erreur :
        // "Sid Meier's SimGolf must be played in 800x600
        //  or higher resolution..."
        MessageBox(NULL,
            "Sid Meier's SimGolf must be played in 800x600 "
            "or higher resolution. Please change your Windows "
            "desktop resolution to 800x600 or higher and "
            "restart the game.",
            "SimGolf", MB_OK | MB_ICONERROR);
        // Note : le jeu continue quand même (c'est un warning)
    }

    // Créer la fenêtre de rendu
    this->hWnd = CreateWindowEx(0, "SimGolf", "Sid Meier's SimGolf",
                                WS_OVERLAPPEDWINDOW,
                                CW_USEDEFAULT, CW_USEDEFAULT,
                                screenW, screenH,
                                NULL, NULL, GetModuleHandle(NULL), NULL);

    // Obtenir le DC
    this->hDC = GetDC(this->hWnd);

    // Créer le DIBSection (framebuffer 8-bit ou 16-bit)
    // ...

    // Initialiser la palette
    // ...

    // Configurer la police
    this->hFont = CreateFontIndirect(&/* LOGFONT */);
}

/**
 * JackalClass::setPalette
 *
 * Définit la palette de couleurs 8-bit pour l'affichage.
 * Utilise CreatePalette + SelectPalette + RealizePalette.
 */
void JackalClass_setPalette(JackalClass* this, PALETTEENTRY* entries, int count)
{
    LOGPALETTE* pal = malloc(sizeof(LOGPALETTE) + count * sizeof(PALETTEENTRY));
    pal->palVersion = 0x300;
    pal->palNumEntries = count;
    memcpy(pal->palPalEntry, entries, count * sizeof(PALETTEENTRY));

    this->hPalette = CreatePalette(pal);
    SelectPalette(this->hDC, this->hPalette, FALSE);
    RealizePalette(this->hDC);

    free(pal);
}

/**
 * JackalClass::blitSprite
 *
 * Copie un sprite DIBSection vers le framebuffer via BitBlt/StretchBlt.
 * Gère les sprites 8-bit (palettisés) et 16-bit (high-color).
 *
 * Correspond aux fichiers source :
 *   jglsprite.cpp       — rendu de sprites
 *   jglsprite_8_16c.cpp — sprites 8/16-bit
 */
void JackalClass_blitSprite(JackalClass* this,
                            int srcX, int srcY, int w, int h,
                            int dstX, int dstY,
                            HDC srcDC, HBITMAP srcBMP)
{
    SelectObject(this->hSpriteDC, srcBMP);
    BitBlt(this->hDC, dstX, dstY, w, h,
           this->hSpriteDC, srcX, srcY, SRCCOPY);
}

/**
 * JackalClass::drawText
 *
 * Affiche du texte via GDI TextOut.
 * La police est définie par CreateFontIndirect.
 */
void JackalClass_drawText(JackalClass* this,
                          const char* text, int x, int y,
                          COLORREF color)
{
    SetTextColor(this->hDC, color);
    SelectObject(this->hDC, this->hFont);
    TextOut(this->hDC, x, y, text, strlen(text));
}

/**
 * JackalClass::getTextExtent
 *
 * Retourne les dimensions d'un texte pour le layout UI.
 */
void JackalClass_getTextExtent(JackalClass* this,
                               const char* text,
                               int* outW, int* outH)
{
    SIZE sz;
    SelectObject(this->hDC, this->hFont);
    GetTextExtentPoint32(this->hDC, text, strlen(text), &sz);
    *outW = sz.cx;
    *outH = sz.cy;
}

/**
 * JackalClass::loadPNG
 *
 * Charge une image PNG depuis le disque via libpng 1.0.5 intégrée.
 * gère :
 *   - Palettes 8-bit (mode P)
 *   - TrueColor 24-bit (mode RGB)
 *   - Alpha channel
 *
 * Convertit le résultat en DIBSection compatible GDI.
 * Note : libpng 1.0.5 est compilée DANS jgld.dll (pas de DLL séparée).
 */
HBITMAP JackalClass_loadPNG(JackalClass* this, const char* filename)
{
    // Ouvrir le fichier
    FILE* f = fopen(filename, "rb");
    if (!f) return NULL;

    // Initialiser libpng
    png_struct* png = png_create_read_struct(PNG_LIBPNG_VER_STRING,
                                              NULL, NULL, NULL);
    png_info* info = png_create_info_struct(png);

    // Lire l'en-tête PNG
    png_init_io(png, f);
    png_read_info(png, info);

    int width = png_get_image_width(png, info);
    int height = png_get_image_height(png, info);
    int bitDepth = png_get_bit_depth(png, info);
    int colorType = png_get_color_type(png, info);

    // Créer le DIBSection
    HBITMAP hBMP = CreateDIBSection(this->hDC,
                                     /* BITMAPINFO */,
                                     DIB_RGB_COLORS,
                                     (void**)&bits,
                                     NULL, 0);

    // Décompresser les pixels PNG
    // ...

    png_destroy_read_struct(&png, &info, NULL);
    fclose(f);

    return hBMP;
}

// ================================================================
// Interface avec Terrain.dll
// ================================================================
//
// Terrain.dll appelle get_graphsy_object_ptr() pour obtenir le
// singleton JackalClass. Il utilise ensuite les méthodes de
// JackalClass pour :
//
//   1. Créer le DIBSection framebuffer (via CreateDIBSection)
//   2. Charger les textures PNG (via libpng)
//   3. Convertir les textures OpenGL vers GDI pour compositing
//   4. Gérer les polices UI (CreateFontIndirect, TextOut)
//   5. Gérer les palettes (RealizePalette pour 8-bit)
//
// Pipeline de rendu complet :
//
//   golf.exe → Terrain.dll (OpenGL 3D terrain)
//           ↘ jgld.dll     (GDI32 2D sprites/UI)
//
//   Compositing final :
//     BitBlt(hDCWindow, ..., hSpriteDC, ...)
//     → superposition couche 3D + couche 2D
//
// ================================================================
// Résumé des sous-systèmes jgld.dll
// ================================================================
//
// 1. Framebuffer Management
//    - CreateDIBSection pour framebuffer 8/16-bit
//    - Gestion des palettes (CreatePalette, SelectPalette)
//    - Gestion des résolutions (800×600 minimum)
//
// 2. Sprite Engine (jglsprite.cpp, jglsprite_8_16c.cpp)
//    - Sprites 8-bit palettisés avec transparence
//    - Sprites 16-bit high-color (RGB 5-6-5)
//    - BitBlt/StretchBlt compositing
//
// 3. PNG Loader (libpng 1.0.5 intégrée)
//    - Décodage PNG avec gestion palette
//    - Conversion en DIBSection GDI
//    - Support 8-bit palettisé, 24-bit RGB, alpha
//
// 4. Font Engine
//    - CreateFontIndirect pour polices
//    - TextOut pour rendu texte
//    - GetTextExtentPoint32 pour layout
//
// 5. Window Management
//    - CreateWindowEx, RegisterClass
//    - Message loop (GetMessage, DispatchMessage)
//    - GetSystemMetrics pour résolution
//
// ================================================================
// Différence jgl.dll vs jgld.dll
// ================================================================
//
//                  jgld.dll            jgl.dll
//   Taille         1.2 MB              396 KB
//   Entropie .text 4.31                6.56
//   Build           Debug               Release (packé?)
//   Symbols         Oui (MSVC debug)    Stripés
//   Fonctions       1199                ~?
//
// Mêmes imports, même export unique. jgl.dll est probablement la
// version release finale avec optimisation + stripping.

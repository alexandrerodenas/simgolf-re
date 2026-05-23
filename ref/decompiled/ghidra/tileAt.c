/* Ghidra decompiled: golf.exe */
/* Function: tileAt @ 0x004490D0 */
/* Body size: 61 addresses */


/* public: class Tile * __thiscall Terrain::tileAt(int,int) */

Tile * __thiscall Terrain::tileAt(Terrain *this,int param_1,int param_2)

{
                    /* 0x490d0  4  ?tileAt@Terrain@@QAEPAVTile@@HH@Z */
  if ((param_1 < *(int *)(this + 0x14)) && (-1 < param_1)) {
    if ((param_2 < *(int *)(this + 0x18)) && (-1 < param_2)) {
      return (Tile *)(this + (*(int *)(this + 0x14) * param_2 + param_1) * 0x248 + 0x3a4);
    }
  }
  return (Tile *)0x0;
}


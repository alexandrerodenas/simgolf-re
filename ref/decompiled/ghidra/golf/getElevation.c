/* Ghidra decompiled: golf.exe */
/* Function: getElevation @ 0x00449110 */


/* public: int __thiscall Terrain::getElevation(class Tile *,int) */

int __thiscall Terrain::getElevation(Terrain *this,Tile *param_1,int param_2)

{
                    /* 0x49110  1  ?getElevation@Terrain@@QAEHPAVTile@@H@Z */
  if (param_1 != (Tile *)0x0) {
    return *(int *)(param_1 + param_2 * 4);
  }
  return 0;
}


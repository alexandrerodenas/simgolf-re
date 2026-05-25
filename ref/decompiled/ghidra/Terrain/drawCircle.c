/* Ghidra decompiled: Terrain.dll */
/* Function: drawCircle @ 0x10001186 */


/* public: void __thiscall Terrain::drawCircle(class Tile *,float) */

void __thiscall Terrain::drawCircle(Terrain *this,Tile *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [17];
  
                    /* 0x1186  8  ?drawCircle@Terrain@@QAEXPAVTile@@M@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}


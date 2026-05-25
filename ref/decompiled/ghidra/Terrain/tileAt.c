/* Ghidra decompiled: Terrain.dll */
/* Function: tileAt @ 0x1000108C */


/* public: class Tile * __thiscall Terrain::tileAt(int,int) */

Tile * __thiscall Terrain::tileAt(Terrain *this,int param_1,int param_2)

{
  Tile *pTVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [17];
  
                    /* 0x108c  36  ?tileAt@Terrain@@QAEPAVTile@@HH@Z */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((((param_1 < *(int *)(this + 0x14)) && (-1 < param_1)) && (param_2 < *(int *)(this + 0x18)))
     && (-1 < param_2)) {
    pTVar1 = (Tile *)(this + (param_1 + param_2 * *(int *)(this + 0x14)) * 0x248 + 0x3a4);
  }
  else {
    pTVar1 = (Tile *)0x0;
  }
  return pTVar1;
}


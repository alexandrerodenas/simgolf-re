/* Ghidra decompiled: Terrain.dll */
/* Function: lowerCorner @ 0x10001127 */


/* public: void __thiscall Terrain::lowerCorner(class Tile *,int) */

void __thiscall Terrain::lowerCorner(Terrain *this,Tile *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1127  23  ?lowerCorner@Terrain@@QAEXPAVTile@@H@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (Tile *)0x0) {
    pTStack_8 = this;
    thunk_FUN_1000ccc0(param_1,param_2);
  }
  pTStack_8 = (Terrain *)0x1000a65c;
  __chkesp();
  return;
}


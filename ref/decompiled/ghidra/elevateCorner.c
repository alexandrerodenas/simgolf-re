/* Ghidra decompiled: Terrain.dll */
/* Function: elevateCorner @ 0x1000133E */
/* Body size: 5 addresses */


/* public: void __thiscall Terrain::elevateCorner(class Tile *,int) */

void __thiscall Terrain::elevateCorner(Terrain *this,Tile *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x133e  10  ?elevateCorner@Terrain@@QAEXPAVTile@@H@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (Tile *)0x0) {
    pTStack_8 = this;
    thunk_FUN_1000c7b0(param_1,param_2);
  }
  pTStack_8 = (Terrain *)0x1000a5fc;
  __chkesp();
  return;
}


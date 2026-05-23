/* Ghidra decompiled: Terrain.dll */
/* Function: lowerEdgeCorner @ 0x10001154 */
/* Body size: 5 addresses */


/* public: void __thiscall Terrain::lowerEdgeCorner(class Tile *,int,class Tile *,float) */

void __thiscall
Terrain::lowerEdgeCorner(Terrain *this,Tile *param_1,int param_2,Tile *param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1154  24  ?lowerEdgeCorner@Terrain@@QAEXPAVTile@@H0M@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (Tile *)0x0) {
    pTStack_8 = this;
    thunk_FUN_10038900(param_1,(int)param_3,param_4);
    thunk_FUN_1000ccc0(param_1,param_2);
  }
  pTStack_8 = (Terrain *)0x1000a6d0;
  __chkesp();
  return;
}


/* Ghidra decompiled: Terrain.dll */
/* Function: hasPath @ 0x1000107D */
/* Body size: 5 addresses */


/* public: bool __thiscall Terrain::hasPath(class Tile *) */

bool __thiscall Terrain::hasPath(Terrain *this,Tile *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x107d  17  ?hasPath@Terrain@@QAE_NPAVTile@@@Z */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_10013320((int)param_1);
  pTStack_8 = (Terrain *)0x1000a542;
  uVar1 = __chkesp();
  return SUB41(uVar1,0);
}


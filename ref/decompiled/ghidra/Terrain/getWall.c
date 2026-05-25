/* Ghidra decompiled: Terrain.dll */
/* Function: getWall @ 0x100012BC */


/* public: bool __thiscall Terrain::getWall(class Tile *,int) */

bool __thiscall Terrain::getWall(Terrain *this,Tile *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x12bc  15  ?getWall@Terrain@@QAE_NPAVTile@@H@Z */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_10001ed0(param_1,param_2);
  pTStack_8 = (Terrain *)0x10001eb6;
  uVar1 = __chkesp();
  return SUB41(uVar1,0);
}


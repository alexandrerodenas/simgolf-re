/* Ghidra decompiled: Terrain.dll */
/* Function: setWall @ 0x10001014 */


/* public: void __thiscall Terrain::setWall(class Tile *,int,int,bool) */

void __thiscall Terrain::setWall(Terrain *this,Tile *param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1014  33  ?setWall@Terrain@@QAEXPAVTile@@HH_N@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_10015400(param_1,param_2,param_3,param_4);
  pTStack_8 = (Terrain *)0x1000a59e;
  __chkesp();
  return;
}


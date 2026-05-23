/* Ghidra decompiled: Terrain.dll */
/* Function: hasConnectedPath @ 0x10001023 */
/* Body size: 5 addresses */


/* public: bool __thiscall Terrain::hasConnectedPath(int,int) */

bool __thiscall Terrain::hasConnectedPath(Terrain *this,int param_1,int param_2)

{
  Tile *pTVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1023  16  ?hasConnectedPath@Terrain@@QAE_NHH@Z */
  puVar4 = auStack_48;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  pTStack_8 = this;
  pTVar1 = tileAt(this,param_1,param_2);
  thunk_FUN_10013360((int)pTVar1);
  pTStack_8 = (Terrain *)0x1000a491;
  uVar2 = __chkesp();
  return SUB41(uVar2,0);
}


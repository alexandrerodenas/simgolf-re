/* Ghidra decompiled: Terrain.dll */
/* Function: setType @ 0x1000121C */


/* public: void __thiscall Terrain::setType(class Tile *,int,int) */

void __thiscall Terrain::setType(Terrain *this,Tile *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x121c  32  ?setType@Terrain@@QAEXPAVTile@@HH@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  if (*(int *)(this + param_2 * 0x18 + 0x40) < 1) {
    thunk_FUN_10002f80(param_1,0);
  }
  else {
    iVar1 = _rand();
    thunk_FUN_10002f80(param_1,iVar1 % *(int *)(pTStack_8 + param_2 * 0x18 + 0x40));
  }
  thunk_FUN_10015380(param_1,param_3);
  thunk_FUN_10014020(param_1,param_2);
  pTStack_8 = (Terrain *)0x1000336a;
  __chkesp();
  return;
}


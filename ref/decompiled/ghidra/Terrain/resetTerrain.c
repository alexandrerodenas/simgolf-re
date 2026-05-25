/* Ghidra decompiled: Terrain.dll */
/* Function: resetTerrain @ 0x100010A0 */


/* public: void __thiscall Terrain::resetTerrain(void) */

void __thiscall Terrain::resetTerrain(Terrain *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_50 [11];
  undefined4 uStack_24;
  int iStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x10a0  29  ?resetTerrain@Terrain@@QAEXXZ */
  puVar3 = auStack_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  pTStack_8 = this;
  for (iStack_c = 0; iStack_c < *(int *)(pTStack_8 + 0x14); iStack_c = iStack_c + 1) {
    for (iStack_10 = 0; iStack_10 < *(int *)(pTStack_8 + 0x18); iStack_10 = iStack_10 + 1) {
      thunk_FUN_1000c2c0(pTStack_8 +
                         (iStack_c + iStack_10 * *(int *)(pTStack_8 + 0x14)) * 0x248 + 0x3a4,
                         iStack_c,iStack_10);
    }
  }
  thunk_FUN_1000a130(pTStack_8);
  uVar1 = thunk_FUN_100032b0();
  glVertexPointer(3,0x1406,0,uVar1);
  __chkesp();
  uVar1 = thunk_FUN_10003270();
  glNormalPointer(0x1406,0,uVar1);
  __chkesp();
  uStack_24 = 0x1000aaec;
  __chkesp();
  return;
}


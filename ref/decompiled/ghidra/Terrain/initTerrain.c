/* Ghidra decompiled: Terrain.dll */
/* Function: initTerrain @ 0x100012CB */


/* public: void __thiscall Terrain::initTerrain(void) */

void __thiscall Terrain::initTerrain(Terrain *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [9];
  undefined4 uStack_24;
  Terrain *pTStack_8;
  
                    /* 0x12cb  19  ?initTerrain@Terrain@@QAEXXZ */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  pTStack_8 = this;
  thunk_FUN_1000a130(this);
  uVar1 = thunk_FUN_100032b0();
  glVertexPointer(3,0x1406,0,uVar1);
  __chkesp();
  uVar1 = thunk_FUN_10003270();
  glNormalPointer(0x1406,0,uVar1);
  __chkesp();
  uStack_24 = 0x1000a9e2;
  __chkesp();
  return;
}


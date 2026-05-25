/* Ghidra decompiled: Terrain.dll */
/* Function: ~Terrain @ 0x10001302 */


/* public: __thiscall Terrain::~Terrain(void) */

void __thiscall Terrain::~Terrain(Terrain *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_58 [16];
  void *pvStack_18;
  Terrain *pTStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1302  1  ??1Terrain@@QAE@XZ */
  puStack_c = &LAB_1004112d;
  pvStack_10 = ExceptionList;
  puVar2 = auStack_58;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  pTStack_14 = this;
  if (DAT_10106b48 != (void *)0x0) {
    pvStack_18 = DAT_10106b48;
    FUN_10018be0(this,DAT_10106b48);
    DAT_10106b48 = (void *)0x0;
  }
  if (DAT_10106b4c != 0) {
    DAT_10106b4c = 0;
  }
  thunk_FUN_100380a0((int)pTStack_14);
  uStack_8 = uStack_8 & 0xffffff00;
  thunk_FUN_1000aed0(pTStack_14 + 0x164ac4);
  uStack_8 = 0xffffffff;
  FUN_10018420(pTStack_14 + 0x3a4,0x248,0x9c4,thunk_FUN_1000c3d0);
  ExceptionList = pvStack_10;
  uStack_8 = 0x1000316e;
  __chkesp();
  return;
}


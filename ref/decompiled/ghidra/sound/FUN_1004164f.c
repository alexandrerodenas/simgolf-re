/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004164f @ 0x1004164F */


void * __thiscall FUN_1004164f(void *this,int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char local_18 [12];
  undefined2 local_c;
  undefined1 uStack_a;
  undefined1 local_9;
  ushort local_8;
  undefined1 uStack_6;
  undefined1 local_5;
  
  local_c = DAT_1005ecc8;
  uStack_a = DAT_1005ecca;
  local_9 = 0;
  local_8 = DAT_1005ecc4;
  uStack_6 = DAT_1005ecc6;
  local_5 = 0;
  iVar3 = FUN_100417a4(this);
  if (iVar3 != 0) {
    if (param_1 != 0) {
      uVar1 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24);
      if ((uVar1 & 0x60) == 0) {
        if ((0 < param_1) && ((uVar1 & 0x400) != 0)) {
          local_8 = CONCAT11(local_8._1_1_,0x2b);
        }
      }
      else {
        if ((uVar1 & 0x40) == 0) {
          local_c = CONCAT11(0x6f,(byte)local_c);
        }
        else {
          bVar2 = ~(byte)(uVar1 >> 4);
          local_c = CONCAT11(bVar2,(byte)local_c) & 0x20ff | 0x5800;
          local_8 = CONCAT11(bVar2,(undefined1)local_8) & 0x20ff | 0x5800;
        }
        if ((*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 0x80) != 0) {
          local_8 = CONCAT11(local_8._1_1_,0x30);
        }
      }
    }
    FUN_10042577(local_18,(byte *)&local_c);
    FUN_10041c39(this,(char *)&local_8,local_18);
    FUN_10041818(this);
  }
  return this;
}


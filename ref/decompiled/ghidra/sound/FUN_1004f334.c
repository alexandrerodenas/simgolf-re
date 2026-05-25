/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f334 @ 0x1004F334 */


uint FUN_1004f334(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte local_7c [120];
  
  iVar1 = FUN_1004f5d7(param_1);
  iVar2 = (*DAT_100b57c0)(iVar1,(-(uint)(DAT_100b57a4 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_100b57b8 = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_10050b60(this,DAT_100b57b4,local_7c);
    if (uVar3 == 0) {
      iVar2 = FUN_1004f43a((short)iVar1);
      if (iVar2 != 0) {
        DAT_100b57b8 = DAT_100b57b8 | 4;
        DAT_100b57a0 = iVar1;
        DAT_100b57bc = iVar1;
      }
    }
    uVar3 = ~DAT_100b57b8 >> 2 & 1;
  }
  return uVar3;
}


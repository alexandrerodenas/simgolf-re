/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f240 @ 0x1004F240 */


uint FUN_1004f240(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte local_7c [120];
  
  iVar1 = FUN_1004f5d7(param_1);
  iVar2 = (*DAT_100b57c0)(iVar1,(-(uint)(DAT_100b57ac != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_100b57b8 = 0;
    return 1;
  }
  uVar3 = FUN_10050b60(this,DAT_100b57b0,local_7c);
  if (uVar3 == 0) {
    if (DAT_100b57ac == 0) {
      iVar2 = 1;
      goto LAB_1004f2cc;
    }
  }
  else {
    if (((DAT_100b57ac != 0) || (DAT_100b57a8 == (void *)0x0)) ||
       (iVar2 = FUN_10050c30(DAT_100b57b0,(char *)local_7c,DAT_100b57a8), iVar2 != 0))
    goto LAB_1004f2eb;
    iVar2 = 0;
LAB_1004f2cc:
    iVar2 = FUN_1004f459(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_1004f2eb;
  }
  DAT_100b57b8 = DAT_100b57b8 | 4;
  DAT_100b57a0 = iVar1;
  DAT_100b57bc = iVar1;
LAB_1004f2eb:
  return ~DAT_100b57b8 >> 2 & 1;
}


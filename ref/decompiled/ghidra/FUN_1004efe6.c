/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004efe6 @ 0x1004EFE6 */
/* Body size: 516 addresses */


uint FUN_1004efe6(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  void *this_00;
  void *this_01;
  byte local_7c [120];
  
  iVar1 = FUN_1004f5d7(param_1);
  iVar2 = (*DAT_100b57c0)(iVar1,(-(uint)(DAT_100b57a4 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_100b57b8 = 0;
    return 1;
  }
  uVar3 = FUN_10050b60(this,DAT_100b57b4,local_7c);
  if (uVar3 == 0) {
    iVar2 = (*DAT_100b57c0)(iVar1,(-(uint)(DAT_100b57ac != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_100b57b8 = 0;
      return 1;
    }
    uVar3 = FUN_10050b60(this_00,DAT_100b57b0,local_7c);
    if (uVar3 == 0) {
      DAT_100b57b8 = DAT_100b57b8 | 0x304;
      DAT_100b57bc = iVar1;
LAB_1004f08c:
      DAT_100b57a0 = iVar1;
    }
    else if ((DAT_100b57b8 & 2) == 0) {
      if ((DAT_100b57a8 == (void *)0x0) ||
         (iVar2 = FUN_10050c30(DAT_100b57b0,(char *)local_7c,DAT_100b57a8), iVar2 != 0)) {
        if (((DAT_100b57b8 & 1) == 0) && (iVar2 = FUN_1004f43a((short)iVar1), iVar2 != 0)) {
          DAT_100b57b8 = DAT_100b57b8 | 1;
          DAT_100b57bc = iVar1;
        }
      }
      else {
        DAT_100b57b8 = DAT_100b57b8 | 2;
        DAT_100b57bc = iVar1;
        pvVar4 = (void *)_strlen((char *)DAT_100b57b0);
        if (pvVar4 == DAT_100b57a8) goto LAB_1004f08c;
      }
    }
  }
  if ((DAT_100b57b8 & 0x300) == 0x300) goto LAB_1004f1d6;
  iVar2 = (*DAT_100b57c0)(iVar1,(-(uint)(DAT_100b57ac != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_100b57b8 = 0;
    return 1;
  }
  uVar3 = FUN_10050b60(this_01,DAT_100b57b0,local_7c);
  if (uVar3 == 0) {
    DAT_100b57b8 = DAT_100b57b8 | 0x200;
    if (((DAT_100b57ac == 0) && (DAT_100b57a8 != (void *)0x0)) &&
       (pvVar4 = (void *)_strlen((char *)DAT_100b57b0), pvVar4 == DAT_100b57a8)) {
      iVar2 = 1;
      goto LAB_1004f1b5;
    }
  }
  else {
    if (((DAT_100b57ac != 0) || (DAT_100b57a8 == (void *)0x0)) ||
       (iVar2 = FUN_10050c30(DAT_100b57b0,(char *)local_7c,DAT_100b57a8), iVar2 != 0))
    goto LAB_1004f1d6;
    iVar2 = 0;
LAB_1004f1b5:
    iVar2 = FUN_1004f459(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_1004f1d6;
  }
  DAT_100b57b8 = DAT_100b57b8 | 0x100;
  if (DAT_100b57a0 == 0) {
    DAT_100b57a0 = iVar1;
  }
LAB_1004f1d6:
  return ~DAT_100b57b8 >> 2 & 1;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c500 @ 0x0040C500 */
/* Body size: 487 addresses */


void FUN_0040c500(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_0042fb90(param_2,param_3,&param_3,&param_2,0);
  if (iVar1 == 0) {
    if (param_4 != -1) {
      return;
    }
  }
  else if (param_4 != -1) {
    if (DAT_005a9cbc != 0) {
      param_3 = param_3 * 2 + -400;
      param_2 = param_2 * 2 + -400;
    }
    if (param_2 < 0) {
      return;
    }
    if (500 < param_2) {
      return;
    }
    if (param_3 < 0) {
      return;
    }
    iVar1 = param_4;
    if (799 < param_3) {
      return;
    }
    goto LAB_0040c5cb;
  }
  param_3 = FUN_00467130(param_3,0,799);
  param_2 = FUN_00467130(param_2,0,599);
  iVar1 = 0;
LAB_0040c5cb:
  if (DAT_005a9cd8 != 0) {
    iVar3 = DAT_005a9cdc % 0x24;
    DAT_005a9cdc = DAT_005a9cdc + 1;
    FUN_004481b0(param_1,param_2 / 0xc + ((3 < DAT_004c2844) - 1 & 0xffffffd8) + 0x32,
                 (param_3 * 0x7f) / 800 + -0x40,((char)(&DAT_004c2fa4)[iVar3] + -5) * 100,iVar1);
    DAT_005a9cd8 = 0;
    return;
  }
  uVar2 = FUN_0045c1e0(600);
  uVar4 = (int)(param_3 - 400U) >> 0x1f;
  iVar3 = (param_3 - 400U ^ uVar4) - uVar4;
  FUN_004481b0(param_1,((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) +
                       ((3 < DAT_004c2844) - 1 & 0xffffffd8) + 0x32,(param_3 * 0x7f) / 800 + -0x40,
               300 - (uVar2 & 0xffff),iVar1);
  DAT_005a9cd8 = 0;
  return;
}


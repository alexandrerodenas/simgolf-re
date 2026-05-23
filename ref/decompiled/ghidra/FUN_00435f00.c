/* Ghidra decompiled: golf.exe */
/* Function: FUN_00435f00 @ 0x00435F00 */
/* Body size: 348 addresses */


undefined4 FUN_00435f00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_00467170(param_1 + -0x111,param_2 + -0x22f);
  if (iVar1 < 0x14) {
    uVar4 = 0;
  }
  iVar1 = param_1 + -0x139;
  iVar2 = FUN_00467170(iVar1,param_2 + -0x207);
  if (iVar2 < 0xf) {
    uVar4 = 1;
  }
  iVar2 = FUN_00467170(iVar1,param_2 + -0x224);
  if (iVar2 < 0xf) {
    uVar4 = 2;
  }
  iVar1 = FUN_00467170(iVar1,param_2 + -0x244);
  if (iVar1 < 0xf) {
    uVar4 = 3;
  }
  if (DAT_00567afc == 3) {
    iVar1 = param_2 + -0x1f9;
    iVar2 = FUN_00467170(param_1 + -0x19e,iVar1);
    if (iVar2 < 0x14) {
      uVar4 = 4;
    }
    iVar2 = FUN_00467170(param_1 + -0x1ed,iVar1);
    if (iVar2 < 0x14) {
      uVar4 = 5;
    }
    iVar2 = FUN_00467170(param_1 + -0x23c,iVar1);
    if (iVar2 < 0x14) {
      uVar4 = 6;
    }
    iVar2 = FUN_00467170(param_1 + -0x28b,iVar1);
    if (iVar2 < 0x14) {
      uVar4 = 7;
    }
    iVar1 = FUN_00467170(param_1 + -0x2da,iVar1);
    if (iVar1 < 0x14) {
      uVar4 = 8;
    }
  }
  iVar1 = FUN_00467170(param_1 + -0x11e,param_2 + -0x1ea);
  if (iVar1 < 0xf) {
    uVar4 = 9;
  }
  iVar1 = FUN_00467170(param_1 + -0xe7,param_2 + -0x21c);
  uVar3 = 10;
  if (0xe < iVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}


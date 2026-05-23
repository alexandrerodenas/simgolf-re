/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040d0b0 @ 0x0040D0B0 */
/* Body size: 618 addresses */


void FUN_0040d0b0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  uVar2 = param_3 & 0xf;
  if (uVar2 != 0) {
    param_3 = param_3 + (0xf - uVar2);
    param_1 = param_1 - (int)(0xf - uVar2) / 2;
  }
  uVar2 = param_4 & 0xf;
  if (uVar2 != 0) {
    param_4 = param_4 + (0xf - uVar2);
    param_2 = param_2 - (int)(0xf - uVar2) / 2;
  }
  if (param_5 != 0) {
    FUN_00480b00(param_1 + 2,param_2 + 2,param_3 - 4,param_4 - 4,0x80007fdc);
  }
  FUN_00473f60(&DAT_0059d94c + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,param_1,param_2,0);
  if (0x10 < (int)(param_3 - 0x10)) {
    uVar2 = param_3 - 0x11 >> 4;
    iVar3 = param_1;
    do {
      iVar3 = iVar3 + 0x10;
      FUN_00473f60(&DAT_0059d9d0 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,iVar3,param_2,0);
      FUN_00473f60(&DAT_0059d920 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,iVar3,
                   param_2 + -0x10 + param_4,0);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (0x10 < (int)(param_4 - 0x10)) {
    uVar2 = param_4 - 0x11 >> 4;
    iVar3 = param_2;
    do {
      iVar3 = iVar3 + 0x10;
      FUN_00473f60(&DAT_0059d978 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,param_1,iVar3,0);
      FUN_00473f60(&DAT_0059da28 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,param_1 + -0x10 + param_3,
                   iVar3,0);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  iVar3 = param_1 + -0x10 + param_3;
  FUN_00473f60(&DAT_0059d9fc + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,iVar3,param_2,0);
  iVar1 = param_2 + -0x10 + param_4;
  FUN_00473f60(&DAT_0059da54 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,iVar3,iVar1,0);
  FUN_00473f60(&DAT_0059d9a4 + DAT_005a34e0 * 0x160,PTR_DAT_004c1570,param_1,iVar1,0);
  return;
}


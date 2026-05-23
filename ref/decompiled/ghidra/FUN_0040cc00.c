/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040cc00 @ 0x0040CC00 */
/* Body size: 455 addresses */


void FUN_0040cc00(int param_1,int param_2,uint param_3,uint param_4)

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
  FUN_00480b00(param_1 + 4,param_2 + 4,param_3 - 8,param_4 - 8,0x80004e79);
  FUN_00473f60(&DAT_0058d1e0,PTR_DAT_004c1570,param_1,param_2,0);
  if (0x10 < (int)(param_3 - 0x10)) {
    uVar2 = param_3 - 0x11 >> 4;
    iVar3 = param_1;
    do {
      iVar3 = iVar3 + 0x10;
      FUN_00473f60(&DAT_0058d20c,PTR_DAT_004c1570,iVar3,param_2,0);
      FUN_00473f60(&DAT_0058d314,PTR_DAT_004c1570,iVar3,param_2 + -0x10 + param_4,0);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (0x10 < (int)(param_4 - 0x10)) {
    uVar2 = param_4 - 0x11 >> 4;
    iVar3 = param_2;
    do {
      iVar3 = iVar3 + 0x10;
      FUN_00473f60(&DAT_0058d264,PTR_DAT_004c1570,param_1,iVar3,0);
      FUN_00473f60(&DAT_0058d2bc,PTR_DAT_004c1570,param_1 + -0x10 + param_3,iVar3,0);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  iVar3 = param_1 + -0x10 + param_3;
  FUN_00473f60(&DAT_0058d238,PTR_DAT_004c1570,iVar3,param_2,0);
  iVar1 = param_2 + -0x10 + param_4;
  FUN_00473f60(&DAT_0058d340,PTR_DAT_004c1570,iVar3,iVar1,0);
  FUN_00473f60(&DAT_0058d2e8,PTR_DAT_004c1570,param_1,iVar1,0);
  return;
}


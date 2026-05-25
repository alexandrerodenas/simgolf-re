/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040cdd0 @ 0x0040CDD0 */


void FUN_0040cdd0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  uVar1 = param_3 & 0xf;
  if (uVar1 != 0) {
    param_3 = param_3 + (0xf - uVar1);
    param_1 = param_1 - (int)(0xf - uVar1) / 2;
  }
  uVar1 = param_4 & 0xf;
  if (uVar1 != 0) {
    param_4 = param_4 + (0xf - uVar1);
    param_2 = param_2 - (int)(0xf - uVar1) / 2;
  }
  if (param_5 != 0) {
    FUN_0040ca10(param_1,param_2 + -1,param_3,param_4,0);
  }
  iVar2 = 0xc;
  if (0xc < (int)(param_3 - 0x10)) {
    do {
      FUN_00473f60(&DAT_0058b8bc,PTR_DAT_004c1570,iVar2 + param_1,param_2 + -0x10 + param_4,0);
      iVar2 = iVar2 + 0x10;
    } while (iVar2 < (int)(param_3 - 0x10));
  }
  iVar2 = param_2 + -0x10 + param_4;
  FUN_00473f60(&DAT_0058b8e8,PTR_DAT_004c1570,param_1 + -0xc + param_3,iVar2,0);
  FUN_00473f60(&DAT_0058b890,PTR_DAT_004c1570,param_1 + -4,iVar2,0);
  return;
}


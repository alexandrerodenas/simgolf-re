/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848dc0 @ 0x00848DC0 */


int FUN_00848dc0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_2;
  uVar2 = FUN_0084aa1e(0,param_2);
  iVar3 = FUN_0084ad6d(uVar2);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00848e3b(param_2,iVar3,param_3,param_4);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(iVar1 + 0x78))(iVar3);
      FUN_0084af89(param_2,uVar2);
    }
    (**(code **)(param_1 + 0xc))(iVar3);
  }
  return iVar4;
}


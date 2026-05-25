/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474e70 @ 0x00474E70 */


void __thiscall FUN_00474e70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  DAT_00839ab0 = 1;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x10))();
    (**(code **)(*piVar2 + 0xc))(param_2,param_3,1,param_4);
    DAT_00839ab0 = 0;
    return;
  }
  FUN_00474dd0(param_2,param_3,param_4,0,param_1[8],0);
  DAT_00839ab0 = 0;
  return;
}


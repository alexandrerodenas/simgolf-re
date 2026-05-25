/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483850 @ 0x00483850 */


undefined4 __thiscall FUN_00483850(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_004838b0();
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 4;
    }
    piVar2 = (int *)(**(code **)(*DAT_0083ad50 + 0x74))(iVar1);
    *(int **)(param_1 + 4) = piVar2;
    uVar3 = (**(code **)(*piVar2 + 4))(param_2,param_3,param_3,param_4);
    return uVar3;
  }
  return 0x10;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483800 @ 0x00483800 */
/* Body size: 78 addresses */


undefined4 __thiscall FUN_00483800(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 3;
  }
  FUN_004838b0();
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 4;
  }
  piVar2 = (int *)(**(code **)(*DAT_0083ad50 + 0x74))(iVar1);
  *(int **)(param_1 + 4) = piVar2;
  uVar3 = (**(code **)(*piVar2 + 8))(param_2,param_2,param_3);
  return uVar3;
}


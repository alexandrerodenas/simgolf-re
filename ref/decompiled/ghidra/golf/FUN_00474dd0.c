/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474dd0 @ 0x00474DD0 */


int __thiscall
FUN_00474dd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  FUN_00474cb0();
  if (param_5 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  else {
    *(int *)(param_1 + 8) = param_5;
  }
  piVar1 = (int *)(**(code **)(*DAT_0083ad50 + 0x7c))(param_1,*(undefined4 *)(param_1 + 8));
  *(int **)(param_1 + 4) = piVar1;
  iVar2 = (**(code **)(*piVar1 + 4))(unaff_ESI,unaff_retaddr,param_2,*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    FUN_00474cb0();
    return iVar2;
  }
  FUN_00478a20();
  FUN_00478a70();
  FUN_004762d0(DAT_0083ad44,0,0,0);
  *(undefined4 *)(param_1 + 0x20) = unaff_ESI;
  return 0;
}


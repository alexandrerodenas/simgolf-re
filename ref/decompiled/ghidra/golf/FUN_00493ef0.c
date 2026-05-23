/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493ef0 @ 0x00493EF0 */
/* Body size: 96 addresses */


void __thiscall FUN_00493ef0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 3;
  piVar4 = (int *)(param_1 + 0x3468);
  do {
    iVar1 = *param_2;
    param_2 = param_2 + 1;
    *piVar4 = iVar1;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3468) + 0x1c);
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
  }
  (**(code **)(*(int *)(param_1 + 0x213c) + 0xc))(uVar3,uVar2,0,0);
  FUN_00493f50();
  return;
}


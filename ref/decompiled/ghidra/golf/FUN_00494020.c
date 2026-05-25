/* Ghidra decompiled: golf.exe */
/* Function: FUN_00494020 @ 0x00494020 */


void __thiscall FUN_00494020(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 3;
  piVar1 = (int *)(param_1 + 0x3474);
  piVar3 = piVar1;
  do {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)(param_1 + 0x2d14) = *piVar1;
  *(undefined4 *)(param_1 + 0x2d18) = *(undefined4 *)(param_1 + 0x3478);
  *(undefined4 *)(param_1 + 0x2d1c) = *(undefined4 *)(param_1 + 0x347c);
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = (int *)(**(code **)(**(int **)(param_1 + 0x23b4) + 0xdc))();
  }
  iVar4 = *(int *)(*piVar1 + 0x1c);
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
  }
  FUN_0047b420((iVar2 - *(int *)(*piVar1 + 0x18)) + -4,((int)param_2 - iVar4) / 2);
  (**(code **)(*(int *)(param_1 + 0x26c4) + 0x120))();
  return;
}


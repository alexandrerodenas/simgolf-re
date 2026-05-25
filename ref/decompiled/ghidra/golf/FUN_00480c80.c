/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480c80 @ 0x00480C80 */


void __fastcall FUN_00480c80(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd4))();
  }
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x278) + 0xd4))();
  }
  FUN_00480c20(0,0,piVar2[2] - *piVar2,*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 4),0);
  return;
}


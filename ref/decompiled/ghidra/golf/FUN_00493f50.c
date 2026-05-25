/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493f50 @ 0x00493F50 */


void __fastcall FUN_00493f50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == -0x213c) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x23b0;
  }
  FUN_00473e60(iVar2,0,0,0);
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
  }
  if (*(int *)(*(int *)(param_1 + 0x3468) + 0x18) + *(int *)(*(int *)(param_1 + 0x3470) + 0x18) <
      iVar2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x346c) + 0x1c);
    if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
    }
    FUN_00476140(*(undefined4 *)(param_1 + 0x346c),0,0,2,0,iVar2 + -4,uVar1);
  }
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
  }
  FUN_00473e60(-(uint)(param_1 != -0x213c) & param_1 + 0x23b0U,
               iVar2 - *(int *)(*(int *)(param_1 + 0x3470) + 0x18),0,0);
  return;
}


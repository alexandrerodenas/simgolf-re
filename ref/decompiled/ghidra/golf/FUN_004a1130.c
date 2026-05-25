/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a1130 @ 0x004A1130 */


undefined4 __fastcall FUN_004a1130(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + -8) == 2) &&
      (iVar1 = *(int *)(*(int *)(param_1 + -0x1f8) + 4),
      (*(byte *)(iVar1 + -0x15c + param_1) & 0x40) != 0)) &&
     (piVar2 = *(int **)(iVar1 + param_1 + -200), piVar2 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar2 + 0x20))();
    return uVar3;
  }
  return 0;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ffd0 @ 0x1000FFD0 */
/* Body size: 57 addresses */


undefined4 __fastcall FUN_1000ffd0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 2;
  }
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  return 0;
}


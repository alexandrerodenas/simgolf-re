/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f8f0 @ 0x1000F8F0 */
/* Body size: 114 addresses */


undefined4 __fastcall FUN_1000f8f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
    if (*(int *)(param_1 + 100) != 0) {
      piVar1 = *(int **)(param_1 + 0x6c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100));
      *(undefined4 *)(param_1 + 100) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x60) + 8))(*(int **)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return 0;
}


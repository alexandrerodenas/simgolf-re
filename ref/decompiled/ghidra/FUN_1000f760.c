/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f760 @ 0x1000F760 */
/* Body size: 22 addresses */


undefined4 __fastcall FUN_1000f760(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    return 2;
  }
  (**(code **)(*piVar1 + 0x48))(piVar1);
  return 0;
}


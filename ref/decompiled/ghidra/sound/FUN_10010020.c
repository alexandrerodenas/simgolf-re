/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010020 @ 0x10010020 */


undefined4 __fastcall FUN_10010020(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 == (int *)0x0) {
    return 2;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 0;
}


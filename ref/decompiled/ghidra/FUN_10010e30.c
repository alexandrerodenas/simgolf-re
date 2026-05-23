/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010e30 @ 0x10010E30 */
/* Body size: 50 addresses */


undefined4 __fastcall FUN_10010e30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x24))(piVar1);
  if (*(int *)(param_1 + 0x44) != 0) {
    return 1;
  }
  return 0;
}


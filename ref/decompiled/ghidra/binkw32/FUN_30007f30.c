/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f30 @ 0x30007F30 */


undefined4 FUN_30007f30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(int *)(param_1 + 0x70) != -1) && (*(int *)(param_1 + 0x7c) == 0)) {
    FUN_30007e50((undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x70));
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
    *param_3 = *(undefined4 *)(param_1 + 0x78);
    return 1;
  }
  return 0;
}


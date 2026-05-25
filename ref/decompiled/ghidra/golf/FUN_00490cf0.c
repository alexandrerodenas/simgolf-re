/* Ghidra decompiled: golf.exe */
/* Function: FUN_00490cf0 @ 0x00490CF0 */


undefined4 FUN_00490cf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 3;
  }
  if (*(int *)(param_1 + 4) != 0) {
    DAT_0083b9c4 = param_1;
  }
  DAT_0083b9c8 = param_2;
  DAT_0083b9cc = param_3;
  return 0;
}


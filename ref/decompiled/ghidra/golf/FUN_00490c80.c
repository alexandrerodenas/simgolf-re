/* Ghidra decompiled: golf.exe */
/* Function: FUN_00490c80 @ 0x00490C80 */


undefined4 FUN_00490c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    return 3;
  }
  if (*(int *)(param_1 + 4) != 0) {
    DAT_0083b9b4 = param_1;
  }
  DAT_0083b9b8 = param_2;
  DAT_0083b9bc = param_3;
  DAT_0083b9c0 = param_4;
  return 0;
}


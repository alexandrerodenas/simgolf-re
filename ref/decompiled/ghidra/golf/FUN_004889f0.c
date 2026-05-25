/* Ghidra decompiled: golf.exe */
/* Function: FUN_004889f0 @ 0x004889F0 */


undefined4 FUN_004889f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 3;
  }
  if (*(int *)(param_1 + 4) != 0) {
    DAT_0083b60c = param_1;
  }
  DAT_0083b610 = param_2;
  DAT_0083b614 = param_3;
  return 0;
}


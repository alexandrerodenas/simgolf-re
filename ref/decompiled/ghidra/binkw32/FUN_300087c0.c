/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300087c0 @ 0x300087C0 */


int FUN_300087c0(int param_1,int param_2)

{
  if (param_2 == 1) {
    (*DAT_30041bec)(*(undefined4 *)(param_1 + 0x48));
    return 1;
  }
  (*DAT_30041c04)(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x58) = 1;
  return param_2;
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300073d0 @ 0x300073D0 */


void FUN_300073d0(int param_1,int param_2)

{
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *(int *)(param_1 + 0x40) = (int)(((ulonglong)(param_2 + 1) * 0x7fff) / 0x10000);
  FUN_30007420(param_1);
  return;
}


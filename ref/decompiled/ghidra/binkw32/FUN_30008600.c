/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008600 @ 0x30008600 */


void FUN_30008600(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0x7fff < (int)param_2) {
    param_2 = 0x7fff;
  }
  uVar1 = (undefined4)(((ulonglong)param_2 * 0x7f) / 0x7fff);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  (*DAT_30041be4)(*(undefined4 *)(param_1 + 0x48),uVar1);
  return;
}


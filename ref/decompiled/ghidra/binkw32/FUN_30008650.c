/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008650 @ 0x30008650 */


void FUN_30008650(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(((ulonglong)param_2 * 0x7f) / 0x10000);
  if (0x7f < uVar1) {
    uVar1 = 0x7f;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  (*DAT_30041c10)(*(undefined4 *)(param_1 + 0x48),uVar1);
  return;
}


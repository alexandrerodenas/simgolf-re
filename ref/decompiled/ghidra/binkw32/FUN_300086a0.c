/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300086a0 @ 0x300086A0 */


void __cdecl FUN_300086a0(int param_1)

{
  byte bVar1;
  
  (*DAT_30041be0)(*(undefined4 *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x38) == 0x10) {
    bVar1 = ((*(int *)(param_1 + 0x3c) != 2) - 1U & 2) + 1;
  }
  else {
    bVar1 = (*(int *)(param_1 + 0x3c) != 2) - 1U & 2;
  }
  (*DAT_30041bdc)(*(undefined4 *)(param_1 + 0x48),bVar1,*(int *)(param_1 + 0x38) == 0x10);
  (*DAT_30041be8)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x34));
  (*DAT_30041be4)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x5c));
  (*DAT_30041c10)(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  (*DAT_30041bfc)(*(undefined4 *)(param_1 + 0x48),0,*(undefined4 *)(param_1 + 0x54));
  (*DAT_30041bd0)(*(undefined4 *)(param_1 + 0x48),&LAB_30008740);
  return;
}


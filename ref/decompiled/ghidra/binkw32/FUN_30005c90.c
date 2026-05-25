/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30005c90 @ 0x30005C90 */


void __cdecl FUN_30005c90(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20c) != 0) {
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + (param_2 - *(int *)(param_1 + 0x20c));
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  return;
}


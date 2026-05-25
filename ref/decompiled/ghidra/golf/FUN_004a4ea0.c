/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4ea0 @ 0x004A4EA0 */


undefined4 __thiscall FUN_004a4ea0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = **(undefined4 **)(param_1 + 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}


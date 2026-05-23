/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497c20 @ 0x00497C20 */
/* Body size: 78 addresses */


undefined4 __thiscall FUN_00497c20(int param_1,undefined4 param_2)

{
  if (DAT_008400b0 == 0) {
    return 7;
  }
  if ((*(uint *)(param_1 + 0xe8) & 0x60000000) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0xe4) = param_2;
    (**(code **)(*(int *)(param_1 + 100) + 0x90))();
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x20000000;
  }
  return 0;
}


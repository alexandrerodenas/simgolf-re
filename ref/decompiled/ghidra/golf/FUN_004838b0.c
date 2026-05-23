/* Ghidra decompiled: golf.exe */
/* Function: FUN_004838b0 @ 0x004838B0 */
/* Body size: 50 addresses */


void __fastcall FUN_004838b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*DAT_0083ad50 + 0x88))(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}


/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10007ee0 @ 0x10007EE0 */
/* Body size: 127 addresses */


void __fastcall FUN_10007ee0(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      DAT_10057b98 = DAT_10057b98 +
                     (4 - *(int *)(param_1 + 0x30)) * *(int *)(param_1 + 0x34) +
                     *(int *)(param_1 + 0x24);
    }
    DAT_10057b94 = DAT_10057b94 - *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
    if (*(LPVOID *)(param_1 + 0x14) != (LPVOID)0x0) {
      FUN_10046abc(*(LPVOID *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x1c) != (LPVOID)0x0) {
    FUN_10046abc(*(LPVOID *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


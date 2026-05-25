/* Ghidra decompiled: golf.exe */
/* Function: FUN_004843e0 @ 0x004843E0 */


undefined4 FUN_004843e0(int param_1)

{
  if (param_1 == 0) {
    return 10;
  }
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    DAT_0083af68 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    DAT_0083af64 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x48) = *(undefined4 *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffdfd;
  return 0;
}


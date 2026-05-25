/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b090 @ 0x1002B090 */


undefined4 __fastcall FUN_1002b090(int param_1)

{
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    DAT_100b5070 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0;
  }
  DAT_100b506c = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 0;
}


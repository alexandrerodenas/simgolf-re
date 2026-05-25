/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002cca0 @ 0x1002CCA0 */


undefined4 __fastcall FUN_1002cca0(int param_1)

{
  if ((*(byte *)(param_1 + 0x44) & 2) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      DAT_100b5070 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      DAT_100b506c = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x48) = *(undefined4 *)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffd;
    return 0;
  }
  return 0;
}


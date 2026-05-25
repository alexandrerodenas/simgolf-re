/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b010 @ 0x1002B010 */


undefined4 __fastcall FUN_1002b010(int param_1)

{
  if ((*(int *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    if (DAT_100b506c == 0) {
      DAT_100b506c = param_1;
      DAT_100b5070 = param_1;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
      return 0;
    }
    *(int *)(param_1 + 0x48) = DAT_100b506c;
    DAT_100b506c = param_1;
    *(int *)(*(int *)(param_1 + 0x48) + 0x4c) = param_1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
  }
  return 0;
}


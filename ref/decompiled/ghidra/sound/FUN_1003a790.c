/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a790 @ 0x1003A790 */


undefined4 __fastcall FUN_1003a790(int param_1)

{
  if (((*(uint *)(param_1 + 200) & 0x40) != 0) && ((*(uint *)(param_1 + 200) & 0x10) == 0)) {
    return 1;
  }
  return 0;
}


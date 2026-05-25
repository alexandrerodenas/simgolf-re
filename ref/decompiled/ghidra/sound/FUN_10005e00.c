/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005e00 @ 0x10005E00 */


undefined4 __fastcall FUN_10005e00(int param_1)

{
  thunk_FUN_10005e30(&DAT_100b5000,param_1);
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) | 2;
  return 0;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_100311d0 @ 0x100311D0 */


undefined4 __fastcall FUN_100311d0(int param_1)

{
  if (((*(uint *)(param_1 + 0x58) & 1) != 0) && ((*(uint *)(param_1 + 0x58) & 2) != 0)) {
    return 1;
  }
  return 0;
}


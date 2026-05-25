/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006dd0 @ 0x10006DD0 */


undefined4 __fastcall FUN_10006dd0(int param_1)

{
  if (((*(uint *)(param_1 + 0x58) & 1) != 0) && ((*(uint *)(param_1 + 0x58) & 2) != 0)) {
    return 1;
  }
  return 0;
}


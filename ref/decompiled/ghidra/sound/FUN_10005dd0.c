/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005dd0 @ 0x10005DD0 */


undefined4 __fastcall FUN_10005dd0(int param_1)

{
  if ((((*(uint *)(param_1 + 0xac) & 0x20) == 0) || ((*(uint *)(param_1 + 0xac) & 8) != 0)) &&
     ((*(byte *)(param_1 + 0x214) & 8) == 0)) {
    return 0;
  }
  return 1;
}


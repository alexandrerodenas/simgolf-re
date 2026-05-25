/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a800 @ 0x1003A800 */


undefined4 __fastcall FUN_1003a800(int param_1)

{
  if (((*(byte *)(param_1 + 0xcc) & 0x20) != 0) && ((*(byte *)(param_1 + 200) & 2) != 0)) {
    return 1;
  }
  return 0;
}


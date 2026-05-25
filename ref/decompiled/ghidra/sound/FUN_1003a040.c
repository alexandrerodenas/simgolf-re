/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a040 @ 0x1003A040 */


undefined4 __fastcall FUN_1003a040(int param_1)

{
  if ((*(byte *)(param_1 + 200) & 2) == 0) {
    return 0x14;
  }
  if (DAT_100b4a20 != (void *)0x0) {
    thunk_FUN_1000c2f0(DAT_100b4a20,param_1,2);
  }
  return 0;
}


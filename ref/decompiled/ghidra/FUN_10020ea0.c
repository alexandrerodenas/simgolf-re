/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020ea0 @ 0x10020EA0 */
/* Body size: 41 addresses */


undefined4 __fastcall FUN_10020ea0(int param_1)

{
  if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
    return 0x14;
  }
  if (DAT_100b4a1c != (void *)0x0) {
    thunk_FUN_1000a240(DAT_100b4a1c,param_1,2,0,0);
  }
  return 0;
}


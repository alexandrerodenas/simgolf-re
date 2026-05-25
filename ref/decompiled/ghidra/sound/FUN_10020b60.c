/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020b60 @ 0x10020B60 */


undefined4 __fastcall FUN_10020b60(int param_1)

{
  if ((*(uint *)(param_1 + 0xac) & 0x100) == 0) {
    *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) | 0x10;
    if ((DAT_100b4a20 != 0) && ((*(uint *)(DAT_100b4a20 + 0x1a4) >> 5 & 1) != 0)) {
      PostMessageA(*(HWND *)(param_1 + 0x210),0x7ec,0,param_1);
      return 0;
    }
    thunk_FUN_1002aa90(&DAT_100b5038,0x7ec,0,param_1);
  }
  return 0;
}


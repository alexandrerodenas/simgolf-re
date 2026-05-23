/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038fd0 @ 0x10038FD0 */
/* Body size: 89 addresses */


void FUN_10038fd0(undefined4 param_1,short param_2,LPARAM param_3,WPARAM param_4)

{
  if (param_2 == 0x3c0) {
    if ((DAT_100b4a20 != 0) && ((*(uint *)(DAT_100b4a20 + 0x1a4) >> 5 & 1) != 0)) {
      PostMessageA(DAT_100b49c0,0x7f0,param_4,param_3);
      return;
    }
    thunk_FUN_1002aa90(&DAT_100b5038,0x7f0,param_4,param_3);
  }
  return;
}


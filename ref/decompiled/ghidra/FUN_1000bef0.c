/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000bef0 @ 0x1000BEF0 */
/* Body size: 122 addresses */


void __fastcall FUN_1000bef0(int *param_1)

{
  thunk_FUN_10008d70((int)DAT_100b49ec);
  if (param_1[0x6a] != 0) {
    thunk_FUN_10008920(DAT_100b49ec,param_1);
  }
  if (DAT_100b49f8 != 0) {
    thunk_FUN_1000f760(DAT_100b49f8);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x6c) & 0x10) != 0) {
    if (DAT_100b49fc != 0) {
      thunk_FUN_1000f760(DAT_100b49fc);
    }
    if (DAT_100b4a00 != 0) {
      thunk_FUN_1000f760(DAT_100b4a00);
    }
  }
  if (DAT_100b49f4 != 0) {
    *(undefined4 *)(DAT_100b49f4 + 0x18) = 0;
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  return;
}


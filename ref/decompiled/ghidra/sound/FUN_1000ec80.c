/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ec80 @ 0x1000EC80 */


void __fastcall FUN_1000ec80(int param_1)

{
  if (DAT_100b49ec != (UINT *)0x0) {
    *(UINT **)(param_1 + 0x30) = DAT_100b49ec;
    thunk_FUN_100088e0(DAT_100b49ec,param_1);
    thunk_FUN_10008ce0(DAT_100b49ec);
    return;
  }
  return;
}


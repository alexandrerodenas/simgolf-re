/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a170 @ 0x1000A170 */


void __fastcall FUN_1000a170(int param_1)

{
  if (DAT_100b49ec != (UINT *)0x0) {
    *(UINT **)(param_1 + 0x2c) = DAT_100b49ec;
    thunk_FUN_100088e0(DAT_100b49ec,param_1);
    thunk_FUN_10008ce0(DAT_100b49ec);
    return;
  }
  return;
}


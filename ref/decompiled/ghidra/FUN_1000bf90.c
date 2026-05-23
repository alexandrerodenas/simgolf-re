/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000bf90 @ 0x1000BF90 */
/* Body size: 103 addresses */


void __fastcall FUN_1000bf90(int param_1)

{
  if (DAT_100b49f8 != 0) {
    thunk_FUN_1000f020(DAT_100b49f8);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x6c) & 0x10) != 0) {
    if (DAT_100b49fc != (void *)0x0) {
      thunk_FUN_10010db0(DAT_100b49fc,1);
    }
    if (DAT_100b4a00 != (void *)0x0) {
      thunk_FUN_10010db0(DAT_100b4a00,1);
    }
  }
  if (DAT_100b49ec != (UINT *)0x0) {
    *(UINT **)(param_1 + 0x1a8) = DAT_100b49ec;
    thunk_FUN_100088e0(DAT_100b49ec,param_1);
    thunk_FUN_10008ce0(DAT_100b49ec);
  }
  return;
}


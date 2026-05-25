/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000be00 @ 0x1000BE00 */


undefined4 __fastcall FUN_1000be00(int *param_1)

{
  if ((*(byte *)(param_1 + 0x69) & 2) != 0) {
    return 0;
  }
  if (DAT_100b4a1c != (int *)0x0) {
    (**(code **)(*DAT_100b4a1c + 0x5c))();
  }
  (**(code **)(*param_1 + 0x4c))();
  thunk_FUN_10008d70(DAT_100b49ec);
  thunk_FUN_10008470();
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  if (DAT_100b49f0 != (int *)0x0) {
    if (DAT_100b49f8 != (undefined *)0x0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49f8);
      DAT_100b49f8 = (undefined *)0x0;
    }
    if (DAT_100b49fc != (undefined *)0x0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49fc);
      DAT_100b49fc = (undefined *)0x0;
    }
    if (DAT_100b4a00 != (undefined *)0x0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b4a00);
      DAT_100b4a00 = (undefined *)0x0;
    }
    thunk_FUN_10011a80(DAT_100b49f0);
  }
  param_1[0x69] = param_1[0x69] | 2;
  return 0;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ec00 @ 0x1000EC00 */


undefined4 __fastcall FUN_1000ec00(int *param_1)

{
  if (param_1[0xc] != 0) {
    thunk_FUN_10008d70(param_1[0xc]);
    thunk_FUN_10008920(DAT_100b49ec,param_1);
  }
  if (DAT_100b4a04 != (undefined4 *)0x0) {
    (**(code **)*DAT_100b4a04)(1);
    DAT_100b4a04 = (undefined4 *)0x0;
  }
  return 0;
}


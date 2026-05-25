/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a1b0 @ 0x1000A1B0 */


undefined4 __fastcall FUN_1000a1b0(int *param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    (**(code **)(*param_1 + 0x4c))();
    thunk_FUN_10028810(0x100b49b8);
    DAT_100b49bc = DAT_100b49bc | 2;
    param_1[9] = param_1[9] | 1;
  }
  return 0;
}


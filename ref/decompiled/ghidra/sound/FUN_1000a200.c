/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a200 @ 0x1000A200 */
/* Body size: 43 addresses */


undefined4 __fastcall FUN_1000a200(int *param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    DAT_100b49bc = DAT_100b49bc & 0xfd;
    (**(code **)(*param_1 + 0x50))();
    param_1[9] = param_1[9] & 0xfffffffe;
  }
  return 0;
}


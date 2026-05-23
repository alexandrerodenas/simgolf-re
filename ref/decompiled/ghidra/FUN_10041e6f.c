/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041e6f @ 0x10041E6F */
/* Body size: 94 addresses */


undefined4 * __fastcall FUN_10041e6f(undefined4 *param_1)

{
  int iVar1;
  
  param_1[0xd] = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1005ed00;
  param_1[2] = 4;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  FUN_10041e43((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_100b5520;
  DAT_100b5520 = DAT_100b5520 + 1;
  if (iVar1 == 0) {
    FUN_10041e43((LPCRITICAL_SECTION)&DAT_100b54e8);
  }
  return param_1;
}


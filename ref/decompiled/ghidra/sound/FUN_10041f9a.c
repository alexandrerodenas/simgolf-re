/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041f9a @ 0x10041F9A */


void __fastcall FUN_10041f9a(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_1005ed00;
  DAT_100b5520 = DAT_100b5520 + -1;
  if (DAT_100b5520 == 0) {
    FUN_10041e4e((LPCRITICAL_SECTION)&DAT_100b54e8);
  }
  FUN_10041e4e((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}


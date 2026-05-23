/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001d380 @ 0x1001D380 */
/* Body size: 218 addresses */


undefined4 * __fastcall FUN_1001d380(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 0x12; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x13] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x57] = 0x78;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0x10000;
  param_1[0x5f] = 0x10000;
  if (DAT_100b49ec != (uint *)0x0) {
    if (*DAT_100b49ec < 1000) {
      param_1[0x5d] = (int)(0x10000 / (1000 / (ulonglong)*DAT_100b49ec));
    }
    else {
      param_1[0x5d] = 0x10000;
    }
  }
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  return param_1;
}


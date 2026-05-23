/* Ghidra decompiled: sound.dll */
/* Function: FUN_100441d8 @ 0x100441D8 */
/* Body size: 160 addresses */


void __cdecl FUN_100441d8(undefined *param_1)

{
  if (DAT_100651b0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_100651b0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10042c07(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10065348) {
        FUN_10042c07(*(undefined **)(param_1 + 0x50));
      }
      FUN_10042c07(param_1);
    }
    TlsSetValue(DAT_100651b0,(LPVOID)0x0);
    return;
  }
  return;
}


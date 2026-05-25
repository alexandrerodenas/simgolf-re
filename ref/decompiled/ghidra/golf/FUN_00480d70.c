/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480d70 @ 0x00480D70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00480d70(int *param_1)

{
  if ((param_1[0x88] & 1U) == 0) {
    param_1[0x88] = param_1[0x88] | 1;
    _DAT_0083ab2c = param_1;
    if ((code *)param_1[0x15c] != (code *)0x0) {
      (*(code *)param_1[0x15c])();
    }
    (**(code **)(*param_1 + 0x58))();
    param_1[0x88] = param_1[0x88] & 0xfffffffe;
    FUN_00480ce0();
  }
  return;
}


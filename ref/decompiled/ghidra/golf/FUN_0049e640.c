/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049e640 @ 0x0049E640 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049e640(int param_1)

{
  undefined4 uVar1;
  
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x24) + 4) + 0x10c + param_1);
  if (*(int *)(param_1 + -0x10) != 0) {
    uVar1 = FUN_00489950();
    (**(code **)(param_1 + -0x10))(uVar1);
  }
  return;
}


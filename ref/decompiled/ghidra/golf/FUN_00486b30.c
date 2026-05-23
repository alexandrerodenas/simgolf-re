/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486b30 @ 0x00486B30 */
/* Body size: 51 addresses */


void __thiscall FUN_00486b30(int *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00486ec0();
  }
  else {
    FUN_00486dc0();
  }
  param_1[0x16a] = param_2;
  (**(code **)(*param_1 + 0x120))();
  return;
}


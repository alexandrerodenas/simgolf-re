/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496d20 @ 0x00496D20 */


void __fastcall FUN_00496d20(int *param_1)

{
  (**(code **)(*param_1 + 0x120))();
  if (DAT_0083ab30 == param_1) {
    DAT_0083ab30 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))();
  }
  if (DAT_0083ab34 == param_1) {
    DAT_0083ab34 = (int *)0x0;
  }
  return;
}


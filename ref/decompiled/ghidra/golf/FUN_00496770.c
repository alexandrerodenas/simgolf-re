/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496770 @ 0x00496770 */


void __thiscall FUN_00496770(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    param_1[0x162] = 0;
  }
  else {
    param_1[0x162] = 1;
    FUN_00493580(&param_2,&param_3);
  }
  param_1[0x160] = param_2;
  param_1[0x163] = param_2;
  param_1[0x161] = param_3;
  (**(code **)(*param_1 + 0x120))();
  return;
}


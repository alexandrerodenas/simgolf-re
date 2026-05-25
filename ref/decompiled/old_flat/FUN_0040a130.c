/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040a130 @ 0x0040A130 */


void FUN_0040a130(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  param_2 = param_2 + param_1 * 0x32;
  *(undefined1 *)((int)&DAT_005830b8 + param_2) = param_3;
  (&DAT_0059c090)[param_2] = param_4;
  return;
}


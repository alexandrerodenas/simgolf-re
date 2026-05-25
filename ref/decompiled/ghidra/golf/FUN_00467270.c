/* Ghidra decompiled: golf.exe */
/* Function: FUN_00467270 @ 0x00467270 */


void FUN_00467270(uint param_1,int param_2)

{
  if ((param_1 & 0x80000000) != 0) {
    param_2 = -param_2;
    param_1 = param_1 & 0x7fffffff;
  }
  if ((param_1 & 0x40000000) != 0) {
    param_1 = 0x7fffffff - param_1;
  }
  FUN_00491c70(param_1,param_2);
  return;
}


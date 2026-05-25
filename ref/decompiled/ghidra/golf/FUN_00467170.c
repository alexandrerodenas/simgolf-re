/* Ghidra decompiled: golf.exe */
/* Function: FUN_00467170 @ 0x00467170 */


int FUN_00467170(int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_2 < param_1) {
    return (param_2 + param_1 * 2) / 2;
  }
  return (param_1 + param_2 * 2) / 2;
}


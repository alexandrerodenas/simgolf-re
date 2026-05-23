/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492610 @ 0x00492610 */
/* Body size: 52 addresses */


bool FUN_00492610(int param_1,int param_2,int *param_3)

{
  if (param_1 < *param_3) {
    return false;
  }
  if (param_3[2] <= param_1) {
    return false;
  }
  if (param_2 < param_3[1]) {
    return false;
  }
  return param_2 < param_3[3];
}


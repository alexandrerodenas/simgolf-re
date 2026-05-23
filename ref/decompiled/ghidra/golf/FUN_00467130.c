/* Ghidra decompiled: golf.exe */
/* Function: FUN_00467130 @ 0x00467130 */
/* Body size: 29 addresses */


int FUN_00467130(int param_1,int param_2,int param_3)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  if ((param_3 < param_1) && (param_2 <= param_3)) {
    param_1 = param_3;
  }
  return param_1;
}


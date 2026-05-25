/* Ghidra decompiled: golf.exe */
/* Function: FUN_004935b0 @ 0x004935B0 */


char * FUN_004935b0(int param_1,char *param_2,char param_3)

{
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    for (param_1 = (int)param_2 - param_1; param_1 != 0; param_1 = param_1 + -1) {
      if (*param_2 == param_3) {
        return param_2;
      }
      param_2 = param_2 + -1;
    }
  }
  return (char *)0x0;
}


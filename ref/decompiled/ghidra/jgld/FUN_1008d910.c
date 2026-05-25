/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008d910 @ 0x1008D910 */


void __cdecl FUN_1008d910(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_1008d890(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


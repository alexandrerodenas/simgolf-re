/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008d950 @ 0x1008D950 */
/* Body size: 74 addresses */


void __cdecl FUN_1008d950(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1008d890((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


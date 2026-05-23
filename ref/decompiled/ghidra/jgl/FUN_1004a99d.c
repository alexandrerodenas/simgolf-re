/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004a99d @ 0x1004A99D */
/* Body size: 56 addresses */


void __cdecl FUN_1004a99d(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1004a937((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


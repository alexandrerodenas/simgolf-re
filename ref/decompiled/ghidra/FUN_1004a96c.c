/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004a96c @ 0x1004A96C */
/* Body size: 49 addresses */


void __cdecl FUN_1004a96c(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1004a937(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


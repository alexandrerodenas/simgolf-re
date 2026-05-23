/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084b630 @ 0x0084B630 */
/* Body size: 90 addresses */


char * FUN_0084b630(code *param_1,char *param_2,char param_3)

{
  int iVar1;
  char *local_8;
  
  local_8 = (char *)0x0;
  while (*param_2 != '\0') {
    iVar1 = (*param_1)(*param_2);
    if (iVar1 == 0) {
      if (*param_2 == param_3) {
        local_8 = param_2;
      }
      param_2 = param_2 + 1;
    }
    else {
      param_2 = param_2 + 2;
    }
  }
  return local_8;
}


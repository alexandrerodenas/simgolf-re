/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084b68a @ 0x0084B68A */


char * FUN_0084b68a(code *param_1,char *param_2,char param_3)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      if (*param_2 == '\0') {
        return (char *)0x0;
      }
      iVar1 = (*param_1)(*param_2);
      if (iVar1 == 0) break;
      param_2 = param_2 + 2;
    }
    if (*param_2 == param_3) break;
    param_2 = param_2 + 1;
  }
  return param_2;
}


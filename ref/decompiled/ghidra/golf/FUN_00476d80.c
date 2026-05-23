/* Ghidra decompiled: golf.exe */
/* Function: FUN_00476d80 @ 0x00476D80 */
/* Body size: 65 addresses */


char * FUN_00476d80(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    do {
      cVar1 = *param_1;
      if ((((cVar1 == '{') || (cVar1 == '}')) || (cVar1 == '[')) ||
         (((cVar1 == ']' || (cVar1 == '$')) || (cVar1 == '=')))) break;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_2 = iVar2;
  }
  return param_1;
}


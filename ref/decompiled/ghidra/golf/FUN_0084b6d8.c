/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084b6d8 @ 0x0084B6D8 */
/* Body size: 82 addresses */


int FUN_0084b6d8(code *param_1,char *param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while (*param_2 != '\0') {
    iVar1 = (*param_1)(*param_2);
    if (iVar1 == 0) {
      param_2 = param_2 + 1;
      local_8 = local_8 + 1;
    }
    else {
      param_2 = param_2 + 2;
      local_8 = local_8 + 2;
    }
  }
  return local_8;
}


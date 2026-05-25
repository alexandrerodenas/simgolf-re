/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a7928 @ 0x004A7928 */


void FUN_004a7928(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_004a6d80(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}


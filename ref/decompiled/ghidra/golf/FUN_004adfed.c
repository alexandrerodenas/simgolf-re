/* Ghidra decompiled: golf.exe */
/* Function: FUN_004adfed @ 0x004ADFED */


undefined4 FUN_004adfed(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    pvVar2 = _malloc(sVar1 + 1);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_004abca0(pvVar2,param_1);
      return uVar3;
    }
  }
  return 0;
}


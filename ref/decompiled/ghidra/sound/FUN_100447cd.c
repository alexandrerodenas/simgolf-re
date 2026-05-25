/* Ghidra decompiled: sound.dll */
/* Function: FUN_100447cd @ 0x100447CD */


void __cdecl FUN_100447cd(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10042cf0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


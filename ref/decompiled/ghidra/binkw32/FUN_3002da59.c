/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002da59 @ 0x3002DA59 */


void __cdecl FUN_3002da59(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_3002ba10((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


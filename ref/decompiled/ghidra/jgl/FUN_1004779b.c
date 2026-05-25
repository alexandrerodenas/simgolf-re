/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004779b @ 0x1004779B */


void __cdecl FUN_1004779b(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1004bb90((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


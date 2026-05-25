/* Ghidra decompiled: jgld.dll */
/* Function: __strcats @ 0x10093E10 */


/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_1007f770(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}


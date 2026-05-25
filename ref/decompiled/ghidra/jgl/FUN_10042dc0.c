/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042dc0 @ 0x10042DC0 */


void __cdecl FUN_10042dc0(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_10042f10();
  return;
}


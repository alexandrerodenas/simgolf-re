/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042b90 @ 0x10042B90 */


void __cdecl FUN_10042b90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
  FUN_10042d90(param_1,s_Call_to_NULL_read_function_1005586c);
  return;
}


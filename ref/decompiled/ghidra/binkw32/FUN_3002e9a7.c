/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e9a7 @ 0x3002E9A7 */


void __cdecl FUN_3002e9a7(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


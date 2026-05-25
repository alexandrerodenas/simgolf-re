/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045238 @ 0x10045238 */


void __cdecl FUN_10045238(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


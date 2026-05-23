/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a51e1 @ 0x004A51E1 */
/* Body size: 26 addresses */


void FUN_004a51e1(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


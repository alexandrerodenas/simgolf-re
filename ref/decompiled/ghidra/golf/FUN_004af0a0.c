/* Ghidra decompiled: golf.exe */
/* Function: FUN_004af0a0 @ 0x004AF0A0 */
/* Body size: 29 addresses */


void FUN_004af0a0(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x35;
  *(undefined4 *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aa594 @ 0x004AA594 */


undefined4 FUN_004aa594(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


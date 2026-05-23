/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045106 @ 0x10045106 */
/* Body size: 14 addresses */


undefined4 __cdecl FUN_10045106(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


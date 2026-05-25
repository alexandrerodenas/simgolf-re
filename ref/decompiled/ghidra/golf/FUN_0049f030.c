/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049f030 @ 0x0049F030 */


uint __thiscall FUN_0049f030(int *param_1,byte param_2)

{
  return *(uint *)(*(int *)(*param_1 + 8) + 0xf0 + (int)param_1) & 1 << (param_2 & 0x1f);
}


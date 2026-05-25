/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049eff0 @ 0x0049EFF0 */


void __thiscall FUN_0049eff0(int *param_1,byte param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(*param_1 + 8) + 0xf0 + (int)param_1);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
    return;
  }
  *puVar1 = *puVar1 & ~(1 << (param_2 & 0x1f));
  return;
}


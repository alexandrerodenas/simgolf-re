/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048e0b0 @ 0x0048E0B0 */


void __thiscall FUN_0048e0b0(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x590) == 0) && ((*(uint *)(param_1 + 0x1f68) & 0x400) == 0)) &&
     (DAT_0083ad50 != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0083ad50 + 0xa8))();
    if (0x3ff < iVar1) {
      *(int *)(*(int *)(*(int *)(param_1 + 0x1464) + 8) + 0x1498 + param_1) = (param_2 * 3) / 2;
      return;
    }
  }
  *(int *)(*(int *)(*(int *)(param_1 + 0x1464) + 8) + 0x1498 + param_1) = param_2;
  return;
}


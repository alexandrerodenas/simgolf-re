/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048dfc0 @ 0x0048DFC0 */


undefined4 __thiscall FUN_0048dfc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 3;
  }
  *(int *)(param_1 + 0x13fc) = param_2;
  *(undefined4 *)(param_1 + 0x1400) = 0;
  *(undefined4 *)(param_1 + 0x1404) = 0;
  iVar1 = FUN_00401d10(0);
  if (iVar1 != 0) {
    return 1;
  }
  *(int *)(param_1 + 0x137c) = *(int *)(param_1 + 0x137c) + 1;
  return 0;
}


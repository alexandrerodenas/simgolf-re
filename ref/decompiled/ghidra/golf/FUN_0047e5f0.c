/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e5f0 @ 0x0047E5F0 */


void __thiscall FUN_0047e5f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x228) < *(int *)(param_1 + 0x22c) + 1) {
      FUN_00479b40();
    }
    if ((*(uint *)(param_2 + 0x9c) & 0x2000000) != 0) {
      *(int *)(*(int *)(param_1 + 0x224) + *(int *)(param_1 + 0x22c) * 4) = param_2;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      return;
    }
    for (iVar1 = *(int *)(param_1 + 0x22c); 0 < iVar1; iVar1 = iVar1 + -1) {
      *(undefined4 *)(*(int *)(param_1 + 0x224) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x224) + -4 + iVar1 * 4);
    }
    **(int **)(param_1 + 0x224) = param_2;
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  }
  return;
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300085c0 @ 0x300085C0 */


undefined4 FUN_300085c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == -1) {
    return 0;
  }
  (*DAT_30041bd8)(*(undefined4 *)(param_1 + 0x48),iVar1,*(undefined4 *)(param_1 + 0x40 + iVar1 * 4),
                  param_2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return 1;
}


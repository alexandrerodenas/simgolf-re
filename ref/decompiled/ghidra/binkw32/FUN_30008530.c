/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008530 @ 0x30008530 */


bool FUN_30008530(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == -1) {
    uVar1 = (*DAT_30041bd4)(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x58) == 0)) {
    iVar2 = (*DAT_30041bbc)(*(undefined4 *)(param_1 + 0x48),0,0,0,0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  return *(int *)(param_1 + 0x4c) != -1;
}


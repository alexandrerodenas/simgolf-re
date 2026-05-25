/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007310 @ 0x30007310 */


undefined4 FUN_30007310(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == -1) {
    return 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x50);
  uVar1 = *(int *)(param_1 + 0x58) + param_2;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(uint *)(param_1 + 0x58) = uVar1;
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(uint *)(param_1 + 0x5c) <= uVar1) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x48) = 1;
      if (-1 < *(int *)(param_1 + 0x54)) {
        do {
          FUN_30007390(param_1,iVar2,*(undefined4 *)(param_1 + 0x60));
          iVar2 = iVar2 + 1;
        } while (iVar2 <= *(int *)(param_1 + 0x54));
        return 1;
      }
    }
  }
  else {
    FUN_30007390(param_1,*(int *)(param_1 + 0x54),param_2);
  }
  return 1;
}


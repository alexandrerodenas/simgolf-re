/* Ghidra decompiled: sound.dll */
/* Function: FUN_100238b0 @ 0x100238B0 */
/* Body size: 117 addresses */


undefined4 __thiscall FUN_100238b0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0x24;
  }
  iVar1 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
    while (*(int *)(iVar1 + 4) != param_1) {
      if (*(int *)((int)this + 0x220) == 0) {
        return 0x24;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar1;
      if (iVar1 == 0) {
        return 0x24;
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return 0x24;
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x34) = 0;
      uVar2 = thunk_FUN_10023950(this,*(uint *)(iVar1 + 8),*(uint *)(iVar1 + 0xc));
      return uVar2;
    }
  }
  return 0x24;
}


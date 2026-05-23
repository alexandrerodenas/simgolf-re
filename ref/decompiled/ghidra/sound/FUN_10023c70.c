/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023c70 @ 0x10023C70 */
/* Body size: 106 addresses */


undefined4 __thiscall FUN_10023c70(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
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
      *(undefined4 *)(iVar1 + 0x30) = param_2;
      return 0;
    }
  }
  return 0x24;
}


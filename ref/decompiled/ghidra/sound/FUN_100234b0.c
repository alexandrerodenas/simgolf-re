/* Ghidra decompiled: sound.dll */
/* Function: FUN_100234b0 @ 0x100234B0 */


undefined4 __thiscall FUN_100234b0(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x234) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x228);
  *(int *)((int)this + 0x230) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
    while (*(int *)(iVar1 + 4) != param_1) {
      if (*(int *)((int)this + 0x230) == 0) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x230) + 4);
      *(int *)((int)this + 0x230) = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (iVar1 != 0) {
      return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x34) != 0);
    }
  }
  return 0;
}


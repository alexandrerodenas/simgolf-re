/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023000 @ 0x10023000 */
/* Body size: 84 addresses */


int __thiscall FUN_10023000(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar1;
  if (iVar1 == 0) {
LAB_1002304f:
    iVar1 = 0;
  }
  else {
    for (iVar1 = *(int *)(iVar1 + 8); (iVar1 != 0 && (*(int *)(iVar1 + 4) != param_1));
        iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)((int)this + 0x220) == 0) goto LAB_1002304f;
      iVar1 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar1;
      if (iVar1 == 0) goto LAB_1002304f;
    }
  }
  return iVar1;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001d780 @ 0x1001D780 */
/* Body size: 98 addresses */


int __thiscall FUN_1001d780(void *this,int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x19c);
  uVar2 = 0;
  *(int *)((int)this + 0x1a4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  *param_1 = iVar1;
  if (param_2 != 0) {
    do {
      if (*(int *)((int)this + 0x1a4) == 0) {
LAB_1001d7c5:
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)((int)this + 0x1a4) + 4);
        *(int *)((int)this + 0x1a4) = iVar1;
        if (iVar1 == 0) goto LAB_1001d7c5;
        iVar1 = *(int *)(iVar1 + 8);
      }
      *param_1 = iVar1;
    } while ((iVar1 != 0) && (uVar2 = uVar2 + 1, uVar2 < param_2));
  }
  return (-(uint)(*param_1 != 0) & 0xffffffdc) + 0x24;
}


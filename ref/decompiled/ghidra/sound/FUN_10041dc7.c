/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041dc7 @ 0x10041DC7 */
/* Body size: 124 addresses */


int * __thiscall FUN_10041dc7(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_100417a4(this);
  if (iVar2 != 0) {
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x30) == 0) {
      uVar4 = param_1 & 0xff;
      uVar3 = FUN_10041da5(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),uVar4);
      if (uVar3 == 0xffffffff) {
        iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x1c))(uVar4);
        if (iVar2 == -1) {
          puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
          *puVar1 = *puVar1 | 6;
        }
      }
    }
    else {
      param_1 = (uint)CONCAT12((undefined1)param_1,(short)param_1);
      FUN_10041c39(this,&DAT_10069988,(char *)((int)&param_1 + 2));
    }
    FUN_10041818(this);
  }
  return this;
}


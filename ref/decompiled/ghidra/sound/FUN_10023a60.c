/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023a60 @ 0x10023A60 */


undefined4 __thiscall FUN_10023a60(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0x24;
  }
  iVar4 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar4;
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 8), iVar4 != 0)) {
    while (*(int *)(iVar4 + 4) != param_1) {
      if (*(int *)((int)this + 0x220) == 0) {
        return 0x24;
      }
      iVar4 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar4;
      if (iVar4 == 0) {
        return 0x24;
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 == 0) {
        return 0x24;
      }
    }
    if (iVar4 != 0) {
      uVar5 = *(uint *)(iVar4 + 8);
      uVar1 = *(uint *)(iVar4 + 0xc);
      if ((uVar5 <= uVar1) && (uVar3 = (**(code **)(*(int *)this + 0xb4))(), uVar1 < uVar3)) {
        iVar4 = thunk_FUN_1001d780((void *)((int)this + 0x60),&param_1,0);
        uVar2 = param_2;
        if (iVar4 != 0) {
          *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 8;
        }
        for (; uVar5 <= uVar1; uVar5 = uVar5 + 1) {
          iVar4 = thunk_FUN_1001d780((void *)((int)this + 0x60),&param_1,uVar5);
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x45c) = uVar2;
          }
        }
        return 0;
      }
      return 10;
    }
  }
  return 0x24;
}


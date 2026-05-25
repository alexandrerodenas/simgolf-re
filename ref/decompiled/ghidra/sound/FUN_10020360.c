/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020360 @ 0x10020360 */


int __thiscall FUN_10020360(void *this,uint param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_8;
  int local_4;
  
  this_00 = (void *)((int)this + 0x60);
  iVar1 = thunk_FUN_1001dce0(this_00,param_1);
  thunk_FUN_1001d780(this_00,&local_4,1);
  if (iVar1 == 0) {
    uVar4 = 0;
    iVar2 = (**(code **)(*(int *)this + 0xb4))();
    if (iVar2 != 0) {
      do {
        thunk_FUN_100205f0(this,uVar4);
        uVar4 = uVar4 + 1;
        uVar3 = (**(code **)(*(int *)this + 0xb4))();
      } while (uVar4 < uVar3);
    }
    *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 0x400;
    *(undefined4 *)((int)this + 0x720) = 0;
    *(undefined4 *)((int)this + 0x71c) = 0;
    *(undefined4 *)((int)this + 0x724) = 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    return iVar1;
  }
  uVar4 = 0;
  iVar2 = (**(code **)(*(int *)this + 0xb4))();
  if (iVar2 != 0) {
    do {
      iVar2 = thunk_FUN_1001d780(this_00,&iStack_8,uVar4);
      if (iVar2 == 0) {
        *(byte *)(iStack_8 + 0x38) = *(byte *)(iStack_8 + 0x38) | 8;
      }
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(*(int *)this + 0xb4))();
    } while (uVar4 < uVar3);
  }
  return iVar1;
}


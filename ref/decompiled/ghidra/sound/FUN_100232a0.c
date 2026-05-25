/* Ghidra decompiled: sound.dll */
/* Function: FUN_100232a0 @ 0x100232A0 */


undefined4 __thiscall FUN_100232a0(void *this,uint param_1,uint param_2)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  void *pvStack_4;
  
  if (param_1 <= param_2) {
    pvStack_4 = this;
    uVar1 = (**(code **)(*(int *)this + 0xb4))();
    if (param_2 < uVar1) {
      this_00 = (void *)((int)this + 0x60);
      iVar2 = thunk_FUN_1001d780(this_00,(int *)&pvStack_4,0);
      if (iVar2 != 0) {
        *(byte *)((int)pvStack_4 + 0x38) = *(byte *)((int)pvStack_4 + 0x38) | 8;
      }
      iVar2 = (**(code **)(*(int *)this + 0x5c))();
      uVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)this + 0xb4))();
        if (iVar2 != 0) {
          do {
            iVar2 = thunk_FUN_1001d780(this_00,(int *)&pvStack_4,uVar1);
            if (iVar2 == 0) {
              if ((uVar1 < param_1) || (param_2 < uVar1)) {
                bVar4 = *(byte *)((int)pvStack_4 + 0x38) & 0xf7;
              }
              else {
                bVar4 = *(byte *)((int)pvStack_4 + 0x38) | 8;
              }
              *(byte *)((int)pvStack_4 + 0x38) = bVar4;
            }
            uVar1 = uVar1 + 1;
            uVar3 = (**(code **)(*(int *)this + 0xb4))();
          } while (uVar1 <= uVar3);
          return 0;
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0xb4))();
        if (iVar2 != 0) {
          do {
            iVar2 = thunk_FUN_1001d780(this_00,(int *)&pvStack_4,uVar1);
            if (iVar2 == 0) {
              if ((uVar1 < param_1) || (param_2 < uVar1)) {
                *(byte *)((int)pvStack_4 + 0x38) = *(byte *)((int)pvStack_4 + 0x38) & 0xf7;
                thunk_FUN_100246a0(this,uVar1);
              }
              else {
                *(byte *)((int)pvStack_4 + 0x38) = *(byte *)((int)pvStack_4 + 0x38) | 8;
                thunk_FUN_10024b80(this,(int)pvStack_4,*(uint *)((int)this + 0x71c),0x20,0);
              }
            }
            uVar1 = uVar1 + 1;
            uVar3 = (**(code **)(*(int *)this + 0xb4))();
          } while (uVar1 <= uVar3);
        }
      }
      return 0;
    }
  }
  return 10;
}


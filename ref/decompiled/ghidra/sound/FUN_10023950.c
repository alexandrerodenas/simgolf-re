/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023950 @ 0x10023950 */
/* Body size: 200 addresses */


undefined4 __thiscall FUN_10023950(void *this,uint param_1,uint param_2)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  if ((param_1 <= param_2) && (uVar2 = (**(code **)(*(int *)this + 0xb4))(), uVar1 < uVar2)) {
    this_00 = (void *)((int)this + 0x60);
    iVar3 = thunk_FUN_1001d780(this_00,(int *)&param_2,0);
    if (iVar3 != 0) {
      *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) | 8;
    }
    iVar3 = (**(code **)(*(int *)this + 0x5c))();
    if (iVar3 == 0) {
      if (param_1 <= uVar1) {
        do {
          iVar3 = thunk_FUN_1001d780(this_00,(int *)&param_2,param_1);
          if (iVar3 == 0) {
            *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xf7;
          }
          param_1 = param_1 + 1;
        } while (param_1 <= uVar1);
        return 0;
      }
    }
    else {
      for (; param_1 <= uVar1; param_1 = param_1 + 1) {
        iVar3 = thunk_FUN_1001d780(this_00,(int *)&param_2,param_1);
        if ((iVar3 == 0) && ((*(byte *)(param_2 + 0x38) & 8) != 0)) {
          *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xf7;
          thunk_FUN_100246a0(this,param_1);
          thunk_FUN_1001e8e0(param_2);
        }
      }
    }
    return 0;
  }
  return 10;
}


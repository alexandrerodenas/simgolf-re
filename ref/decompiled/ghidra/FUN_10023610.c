/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023610 @ 0x10023610 */
/* Body size: 246 addresses */


undefined4 __thiscall FUN_10023610(void *this,undefined4 *param_1)

{
  void *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = param_1;
  uVar2 = param_1[3];
  uVar6 = param_1[2];
  if ((uVar6 <= uVar2) && (uVar4 = (**(code **)(*(int *)this + 0xb4))(), uVar2 < uVar4)) {
    this_00 = (void *)((int)this + 0x60);
    iVar5 = thunk_FUN_1001d780(this_00,(int *)&param_1,0);
    if (iVar5 != 0) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 8;
    }
    iVar5 = (**(code **)(*(int *)this + 0x5c))();
    if (iVar5 == 0) {
      if (uVar6 <= uVar2) {
        do {
          iVar5 = thunk_FUN_1001d780(this_00,(int *)&param_1,uVar6);
          if (iVar5 == 0) {
            *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 8;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar2);
        return 0;
      }
    }
    else {
      for (; uVar6 <= uVar2; uVar6 = uVar6 + 1) {
        iVar5 = thunk_FUN_1001d780(this_00,(int *)&param_1,uVar6);
        if ((iVar5 == 0) && (param_1 != (undefined4 *)0x0)) {
          *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 8;
          thunk_FUN_10024b80(this,(int)param_1,*(uint *)((int)this + 0x71c),(byte)*puVar3,puVar3[8])
          ;
          if (param_1[0x116] != 0) {
            piVar1 = (int *)(param_1[0x116] + 0x34);
            *piVar1 = *piVar1 + 1;
          }
        }
      }
    }
    return 0;
  }
  return 10;
}


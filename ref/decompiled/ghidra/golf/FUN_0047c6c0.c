/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047c6c0 @ 0x0047C6C0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047c6c0(int *param_1,uint param_2)

{
  int iVar1;
  UINT UVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1[0x27] & 0x200000U) != 0) || ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
    return 0;
  }
  iVar4 = 0;
  if (param_1[0x50] != 0) {
    if (param_1[0x4e] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1[0x4f] + 4);
    }
    if (*(int **)(iVar3 + 0x26c) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(iVar3 + 0x26c) + 0x8c))(0,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      if (((0x5f < (int)param_2) && ((int)param_2 < 0x6a)) ||
         (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)) {
        iVar4 = FUN_0047c5d0(0,param_2);
      }
    }
    if (*(int **)(iVar3 + 0x270) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(iVar3 + 0x270) + 0x8c))(0,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      if ((iVar4 == 0) &&
         (((0x5f < (int)param_2 && ((int)param_2 < 0x6a)) ||
          (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)))) {
        iVar4 = FUN_0047c5d0(0,param_2);
      }
    }
    if (((*(int *)(iVar3 + 0x270) == 0) && (*(int *)(iVar3 + 0x26c) == 0)) &&
       ((iVar4 == 0 &&
        ((((0x5f < (int)param_2 && ((int)param_2 < 0x6a)) ||
          (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)) &&
         (iVar3 = FUN_0047c5d0(0,param_2), iVar3 != 0)))))) {
      return 1;
    }
    iVar3 = FUN_0047c6c0(param_2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  iVar3 = 0;
  if ((int *)param_1[0x9b] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x9b] + 0x8c))(0,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((iVar4 == 0) &&
       (((0x5f < (int)param_2 && ((int)param_2 < 0x6a)) ||
        (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)))) {
      iVar4 = FUN_0047c5d0(0,param_2);
    }
  }
  if ((int *)param_1[0x9c] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x9c] + 0x8c))(0,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((iVar4 == 0) &&
       (((0x5f < (int)param_2 && ((int)param_2 < 0x6a)) ||
        (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)))) {
      iVar4 = FUN_0047c5d0(0,param_2);
    }
  }
  if ((((param_1[0x9c] == 0) && (param_1[0x9b] == 0)) && (iVar4 == 0)) &&
     ((((0x5f < (int)param_2 && ((int)param_2 < 0x6a)) ||
       (UVar2 = MapVirtualKeyA(param_2 & 0xfff8ffff,2), (UVar2 & 0xffff) == 0)) &&
      (iVar4 = FUN_0047c5d0(0,param_2), iVar4 != 0)))) {
    return 1;
  }
  _DAT_0083ab2c = param_1;
  if ((code *)param_1[0x98] != (code *)0x0) {
    iVar3 = (*(code *)param_1[0x98])(param_2);
  }
  iVar4 = (**(code **)(*param_1 + 0x90))(param_2);
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0x1c))();
  }
  return iVar3 + iVar4;
}


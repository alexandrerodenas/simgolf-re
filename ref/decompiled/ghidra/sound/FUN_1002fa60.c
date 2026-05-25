/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002fa60 @ 0x1002FA60 */


undefined4 __fastcall FUN_1002fa60(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1[0x3f] == 0) && (param_1[0x3e] == 0)) {
    return 0x14;
  }
  iVar2 = (**(code **)(*param_1 + 0x5c))();
  if (iVar2 != 0) {
    return 0;
  }
  if ((int *)param_1[0x3e] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0x3e] + 0x5c))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_1[0x3e] + 0x48))(1);
      (**(code **)(*(int *)param_1[0x3e] + 0x40))(param_1[0x42]);
      uVar3 = (**(code **)(*(int *)param_1[0x3e] + 0x1c))();
      return uVar3;
    }
  }
  piVar1 = (int *)param_1[0x3f];
  param_1[0x3f] = 0;
  param_1[0x3e] = (int)piVar1;
  (**(code **)(*piVar1 + 0x48))(1);
  (**(code **)(*(int *)param_1[0x3e] + 0x40))(param_1[0x42]);
  uVar3 = (**(code **)(*(int *)param_1[0x3e] + 0x1c))();
  return uVar3;
}


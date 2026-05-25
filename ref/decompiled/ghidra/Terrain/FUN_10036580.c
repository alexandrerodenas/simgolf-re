/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036580 @ 0x10036580 */


uint __fastcall FUN_10036580(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_1[2] != 0) {
    if (param_1[3] == -1) {
      (**(code **)(*param_1 + 0x20))();
    }
    iVar1 = (**(code **)(*param_1 + 0x20))();
    param_1[3] = iVar1;
    return param_1[3];
  }
  iVar1 = FUN_100347c0((int)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_100344e0((int)param_1);
    uVar3 = FUN_100347c0((int)param_1);
    if (uVar2 < uVar3) goto LAB_100365eb;
  }
  (**(code **)(*param_1 + 0x20))();
LAB_100365eb:
  param_1[10] = param_1[10] + 1;
  uVar2 = FUN_100347c0((int)param_1);
  if ((uint)param_1[10] < uVar2) {
    pbVar4 = (byte *)FUN_100344e0((int)param_1);
    uVar2 = (uint)*pbVar4;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar2;
}


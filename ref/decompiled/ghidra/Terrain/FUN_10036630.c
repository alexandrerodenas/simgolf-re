/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036630 @ 0x10036630 */


uint __fastcall FUN_10036630(int *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint local_8;
  
  if (param_1[2] == 0) {
    uVar1 = FUN_100344e0((int)param_1);
    uVar2 = FUN_100347c0((int)param_1);
    if (uVar1 < uVar2) {
      pbVar3 = (byte *)FUN_100344e0((int)param_1);
      local_8 = (uint)*pbVar3;
    }
    else {
      local_8 = (**(code **)(*param_1 + 0x20))();
    }
    param_1[10] = param_1[10] + 1;
  }
  else if (param_1[3] == -1) {
    local_8 = (**(code **)(*param_1 + 0x20))();
  }
  else {
    local_8 = param_1[3];
    param_1[3] = -1;
  }
  return local_8;
}


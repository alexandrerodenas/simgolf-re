/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300197b0 @ 0x300197B0 */


void __cdecl FUN_300197b0(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_10;
  float *local_c;
  float *local_8;
  
  iVar8 = param_1 >> 1;
  while( true ) {
    iVar3 = param_1 >> 2;
    iVar5 = param_1 >> 3;
    iVar4 = iVar3;
    if (iVar3 < 0x81) break;
    for (; param_1 = iVar3, iVar4 < iVar8; iVar4 = iVar4 * 4) {
      iVar6 = iVar4 - iVar3;
      if (iVar6 < iVar8) {
        pfVar1 = (float *)(param_4 + (param_3 - iVar5) * 4);
        local_8 = (float *)(param_2 + (iVar6 + iVar8) * 4);
        pfVar7 = (float *)(param_2 + iVar6 * 4);
        do {
          FUN_30019a80(iVar3,pfVar7,pfVar1);
          FUN_30019a80(iVar3,local_8,pfVar1);
          iVar6 = iVar6 + iVar4 * 2;
          local_8 = local_8 + iVar4 * 2;
          pfVar7 = pfVar7 + iVar4 * 2;
        } while (iVar6 < iVar8);
      }
      iVar6 = iVar4 * 2 - iVar3;
      if (iVar6 < iVar8) {
        iVar2 = param_4 + (param_3 - iVar3) * 4;
        local_8 = (float *)(param_2 + iVar6 * 4);
        local_c = (float *)(param_2 + (iVar6 + iVar8) * 4);
        do {
          FUN_30019e90(iVar3,local_8,iVar2);
          FUN_30019e90(iVar3,local_c,iVar2);
          iVar6 = iVar6 + iVar4 * 4;
          local_8 = local_8 + iVar4 * 4;
          local_c = local_c + iVar4 * 4;
        } while (iVar6 < iVar8);
      }
    }
  }
  for (; iVar4 < iVar8; iVar4 = iVar4 * 4) {
    local_10 = iVar4 - iVar3;
    if (local_10 < iVar8) {
      pfVar1 = (float *)(param_4 + (param_3 - iVar5) * 4);
      local_c = (float *)(param_2 + local_10 * 4);
      local_8 = (float *)(param_2 + (local_10 + iVar8) * 4);
      do {
        FUN_30019a80(iVar3,local_c,pfVar1);
        FUN_3001a420(iVar3,local_c,param_3,param_4);
        FUN_30019a80(iVar3,local_8,pfVar1);
        FUN_3001a420(iVar3,local_8,param_3,param_4);
        local_10 = local_10 + iVar4 * 2;
        local_c = local_c + iVar4 * 2;
        local_8 = local_8 + iVar4 * 2;
      } while (local_10 < iVar8);
    }
    local_10 = iVar4 * 2 - iVar3;
    if (local_10 < iVar8) {
      iVar6 = param_4 + (param_3 - iVar3) * 4;
      local_8 = (float *)(param_2 + local_10 * 4);
      local_c = (float *)(param_2 + (local_10 + iVar8) * 4);
      do {
        FUN_30019e90(iVar3,local_8,iVar6);
        FUN_3001a4c0(iVar3,local_8,param_3,param_4);
        FUN_30019e90(iVar3,local_c,iVar6);
        FUN_3001a4c0(iVar3,local_c,param_3,param_4);
        local_10 = local_10 + iVar4 * 4;
        local_8 = local_8 + iVar4 * 4;
        local_c = local_c + iVar4 * 4;
      } while (local_10 < iVar8);
    }
  }
  return;
}


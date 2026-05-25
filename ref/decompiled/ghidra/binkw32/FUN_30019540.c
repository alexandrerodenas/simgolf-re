/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019540 @ 0x30019540 */


void __cdecl FUN_30019540(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *local_10;
  float *local_c;
  float *local_8;
  
  iVar4 = param_1;
  while( true ) {
    iVar2 = iVar4 >> 2;
    iVar4 = iVar4 >> 3;
    iVar3 = iVar2;
    if (iVar2 < 0x81) break;
    for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
      iVar5 = iVar3 - iVar2;
      if (iVar5 < param_1) {
        pfVar1 = (float *)(param_4 + (param_3 - iVar4) * 4);
        local_8 = (float *)(param_2 + iVar5 * 4);
        local_10 = (float *)(param_2 + (iVar5 + iVar3 * 2) * 4);
        local_c = (float *)(param_2 + (iVar3 + iVar5) * 4);
        do {
          FUN_30019a80(iVar2,local_8,pfVar1);
          FUN_30019e90(iVar2,local_c,param_4 + (param_3 - iVar2) * 4);
          FUN_30019a80(iVar2,local_10,pfVar1);
          iVar5 = iVar5 + iVar3 * 4;
          local_8 = local_8 + iVar3 * 4;
          local_c = local_c + iVar3 * 4;
          local_10 = local_10 + iVar3 * 4;
        } while (iVar5 < param_1);
      }
    }
    FUN_30019a80(iVar2,(float *)(param_2 + (param_1 - iVar2) * 4),
                 (float *)(param_4 + (param_3 - iVar4) * 4));
    iVar4 = iVar2;
  }
  for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
    iVar5 = iVar3 - iVar2;
    if (iVar5 < param_1) {
      pfVar1 = (float *)(param_4 + (param_3 - iVar4) * 4);
      local_10 = (float *)(param_2 + iVar5 * 4);
      local_8 = (float *)(param_2 + (iVar5 + iVar3 * 2) * 4);
      local_c = (float *)(param_2 + (iVar3 + iVar5) * 4);
      do {
        FUN_30019a80(iVar2,local_10,pfVar1);
        FUN_3001a420(iVar2,local_10,param_3,param_4);
        FUN_30019e90(iVar2,local_c,param_4 + (param_3 - iVar2) * 4);
        FUN_3001a4c0(iVar2,local_c,param_3,param_4);
        FUN_30019a80(iVar2,local_8,pfVar1);
        FUN_3001a420(iVar2,local_8,param_3,param_4);
        iVar5 = iVar5 + iVar3 * 4;
        local_10 = local_10 + iVar3 * 4;
        local_c = local_c + iVar3 * 4;
        local_8 = local_8 + iVar3 * 4;
      } while (iVar5 < param_1);
    }
  }
  pfVar1 = (float *)(param_2 + (param_1 - iVar2) * 4);
  FUN_30019a80(iVar2,pfVar1,(float *)(param_4 + (param_3 - iVar4) * 4));
  FUN_3001a420(iVar2,pfVar1,param_3,param_4);
  return;
}


/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034370 @ 0x10034370 */
/* Body size: 237 addresses */


uint __fastcall FUN_10034370(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  DWORD DVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_c;
  int local_8;
  
  iVar1 = FUN_10034460((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10036370(param_1);
    if (iVar1 == -1) {
      local_c = 0xffffffff;
    }
    else {
      iVar1 = FUN_100345d0(param_1);
      if (iVar1 == -1) {
        local_c = 0xffffffff;
      }
      else {
        iVar1 = FUN_10034350((int)param_1);
        if (iVar1 == 0) {
          DVar3 = FUN_100344a0((int)param_1);
          pcVar4 = (char *)FUN_100342a0((int)param_1);
          local_8 = FUN_1001f030(param_1[0x13],pcVar4,DVar3);
          if (local_8 < 1) {
            local_c = 0xffffffff;
          }
          else {
            iVar1 = FUN_100342a0((int)param_1);
            iVar1 = iVar1 + local_8;
            uVar5 = FUN_100342a0((int)param_1);
            uVar6 = FUN_100342a0((int)param_1);
            FUN_10034500(param_1,uVar6,uVar5,iVar1);
            pbVar2 = (byte *)FUN_100344e0((int)param_1);
            local_c = (uint)*pbVar2;
          }
        }
        else {
          iVar1 = FUN_1001f030(param_1[0x13],(char *)&local_c,1);
          if (iVar1 < 1) {
            local_c = 0xffffffff;
          }
          else {
            local_c = local_c & 0xff;
          }
        }
      }
    }
  }
  else {
    pbVar2 = (byte *)FUN_100344e0((int)param_1);
    local_c = (uint)*pbVar2;
  }
  return local_c;
}


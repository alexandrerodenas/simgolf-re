/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100345d0 @ 0x100345D0 */
/* Body size: 396 addresses */


undefined4 __fastcall FUN_100345d0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  int local_10;
  char *local_8;
  
  if (*(int *)((int)param_1 + 0x4c) == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_10034350((int)param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_10034760((int)param_1);
      if (uVar3 != 0) {
        uVar5 = uVar3;
        pcVar4 = (char *)FUN_100347a0((int)param_1);
        uVar5 = FUN_1001ffe0(*(uint *)((int)param_1 + 0x4c),pcVar4,uVar5);
        if (uVar5 != uVar3) {
          if (0 < (int)uVar5) {
            FUN_100347e0(param_1,-uVar5);
            uVar3 = uVar3 - uVar5;
            iVar2 = FUN_100347a0((int)param_1);
            puVar6 = (undefined4 *)(iVar2 + uVar5);
            puVar7 = (undefined4 *)FUN_100347a0((int)param_1);
            FUN_10024410(puVar7,puVar6,uVar3);
          }
          return 0xffffffff;
        }
      }
      FUN_10034320(param_1,0,0);
      local_10 = FUN_10034460((int)param_1);
      if (0 < local_10) {
        if (((int)*(char *)((&DAT_10110e20)[*(int *)((int)param_1 + 0x4c) >> 5] + 4 +
                           (*(uint *)((int)param_1 + 0x4c) & 0x1f) * 0x24) & 0x80U) != 0) {
          for (local_8 = (char *)FUN_100344e0((int)param_1);
              pcVar4 = (char *)FUN_100347c0((int)param_1), local_8 < pcVar4; local_8 = local_8 + 1)
          {
            if (*local_8 == '\n') {
              local_10 = local_10 + 1;
            }
          }
          if ((*(byte *)((&DAT_10110e20)[*(int *)((int)param_1 + 0x4c) >> 5] + 4 +
                        (*(uint *)((int)param_1 + 0x4c) & 0x1f) * 0x24) & 2) != 0) {
            local_10 = local_10 + 1;
          }
        }
        DVar8 = FUN_10026520(*(uint *)((int)param_1 + 0x4c),-local_10,1);
        if (DVar8 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      FUN_10034500(param_1,0,0,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}


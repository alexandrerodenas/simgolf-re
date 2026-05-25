/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetRects@8 @ 0x300064B0 */


uint _BinkGetRects_8(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_1ac;
  uint *local_1a8;
  int local_1a4;
  uint local_1a0 [32];
  int local_120 [8];
  uint local_100 [32];
  uint local_80 [32];
  
                    /* 0x64b0  24  _BinkGetRects@8 */
  if ((param_2 & 0x4000000) != 0) {
    return 0;
  }
  if ((((param_2 & 0x80000) == 0) && ((param_1[8] & 0x80000) == 0)) && (param_1[0xda] != 0)) {
    return 0;
  }
  if (param_1[0x2d] == 0xffffffff) {
    local_1a0[2] = param_1[0x33];
    local_1a0[3] = param_1[0x34];
    local_1a0[1] = 0;
    local_1a0[0] = 0;
    uVar1 = FUN_30006830((int *)(param_1 + 0xd),param_1[0x37],param_1[0x38],(int *)local_1a0);
    param_1[0x2d] = uVar1;
    if (((param_2 & 0x8000000) == 0) && (uVar1 != 0)) {
      local_1a0[0] = param_1[0xd];
      local_1a0[1] = param_1[0xe];
      local_1a0[2] = param_1[0xf];
      local_1a0[3] = param_1[0x10];
      local_120[0] = FUN_30006990((int *)local_80,(int *)local_100,(int *)local_1a0,param_1[0x37],
                                  param_1[0x38]);
      while( true ) {
        uVar1 = param_1[0x2d];
        iVar8 = -1;
        iVar5 = 0;
        iVar2 = 0;
        if ((int)uVar1 < 1) break;
        piVar7 = local_120;
        do {
          if (iVar5 < *piVar7) {
            iVar5 = *piVar7;
            iVar8 = iVar2;
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar2 < (int)uVar1);
        if (iVar8 == -1) break;
        local_1a0[iVar8 * 4] = local_80[iVar8 * 4];
        local_1a0[iVar8 * 4 + 1] = local_80[iVar8 * 4 + 1];
        uVar6 = local_80[iVar8 * 4 + 3];
        local_1a0[iVar8 * 4 + 2] = local_80[iVar8 * 4 + 2];
        local_1a0[iVar8 * 4 + 3] = uVar6;
        local_1a0[uVar1 * 4] = local_100[iVar8 * 4];
        local_1a0[uVar1 * 4 + 1] = local_100[iVar8 * 4 + 1];
        uVar6 = local_100[iVar8 * 4 + 3];
        local_1a0[uVar1 * 4 + 2] = local_100[iVar8 * 4 + 2];
        local_1a0[uVar1 * 4 + 3] = uVar6;
        param_1[0x2d] = uVar1 + 1;
        if (uVar1 + 1 == 8) break;
        iVar5 = FUN_30006990((int *)(local_80 + iVar8 * 4),(int *)(local_100 + iVar8 * 4),
                             (int *)(local_1a0 + iVar8 * 4),param_1[0x37],param_1[0x38]);
        uVar1 = param_1[0x38];
        uVar6 = param_1[0x37];
        local_120[iVar8] = iVar5;
        iVar8 = param_1[0x2d] - 1;
        iVar5 = FUN_30006990((int *)(local_80 + iVar8 * 4),(int *)(local_100 + iVar8 * 4),
                             (int *)(local_1a0 + iVar8 * 4),uVar6,uVar1);
        local_120[iVar8] = iVar5;
      }
    }
    uVar1 = param_1[0x2d];
    local_1ac = 0;
    if (0 < (int)uVar1) {
      local_1a8 = param_1 + 0xd;
      do {
        iVar5 = 0;
        uVar6 = 0x7fff0000;
        if (0 < (int)uVar1) {
          puVar4 = local_1a0;
          do {
            uVar3 = puVar4[1] * 0x10000 + *puVar4;
            if (uVar3 < uVar6) {
              uVar6 = uVar3;
              local_1a4 = iVar5;
            }
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar5 < (int)uVar1);
        }
        uVar1 = param_1[0x9f] & 0x70000000;
        if (uVar1 < 0x30000001) {
          if (uVar1 == 0x30000000) {
            local_1a0[local_1a4 * 4] = local_1a0[local_1a4 * 4] << 1;
            puVar4 = local_1a0 + local_1a4 * 4 + 2;
LAB_3000677b:
            *puVar4 = *puVar4 << 1;
          }
          else if ((uVar1 == 0x10000000) || (uVar1 == 0x20000000)) {
            iVar5 = local_1a4 << 4;
            goto LAB_3000676d;
          }
        }
        else if ((uVar1 == 0x40000000) || (uVar1 == 0x50000000)) {
          iVar5 = local_1a4 * 0x10;
          local_1a0[local_1a4 * 4] = local_1a0[local_1a4 * 4] << 1;
          local_1a0[local_1a4 * 4 + 2] = local_1a0[local_1a4 * 4 + 2] << 1;
LAB_3000676d:
          *(int *)((int)local_1a0 + iVar5 + 4) = *(int *)((int)local_1a0 + iVar5 + 4) << 1;
          puVar4 = (uint *)((int)local_1a0 + iVar5 + 0xc);
          goto LAB_3000677b;
        }
        uVar1 = local_1a0[local_1a4 * 4 + 2] + local_1a0[local_1a4 * 4];
        if (*param_1 < uVar1) {
          local_1a0[local_1a4 * 4 + 2] = (*param_1 - uVar1) + local_1a0[local_1a4 * 4 + 2];
        }
        uVar1 = local_1a0[local_1a4 * 4 + 3] + local_1a0[local_1a4 * 4 + 1];
        if (param_1[1] < uVar1) {
          local_1a0[local_1a4 * 4 + 3] = (param_1[1] - uVar1) + local_1a0[local_1a4 * 4 + 3];
        }
        *local_1a8 = local_1a0[local_1a4 * 4];
        local_1a8[1] = local_1a0[local_1a4 * 4 + 1];
        uVar1 = local_1a0[local_1a4 * 4 + 3];
        local_1a8[2] = local_1a0[local_1a4 * 4 + 2];
        local_1a8[3] = uVar1;
        local_1a0[local_1a4 * 4] = 0;
        local_1a0[local_1a4 * 4 + 1] = 0x7fffffff;
        uVar1 = param_1[0x2d];
        local_1ac = local_1ac + 1;
        local_1a8 = local_1a8 + 4;
      } while (local_1ac < (int)uVar1);
    }
  }
  return param_1[0x2d];
}


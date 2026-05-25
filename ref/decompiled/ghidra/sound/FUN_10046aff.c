/* Ghidra decompiled: sound.dll */
/* Function: FUN_10046aff @ 0x10046AFF */


undefined4 FUN_10046aff(void)

{
  LPVOID lp;
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  int local_140 [64];
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int *local_8;
  
  BVar1 = IsBadWritePtr(DAT_100b5d08,DAT_100b5d04 * 0x14);
  if (BVar1 == 0) {
    local_24 = 0;
    puVar8 = DAT_100b5d08;
    if (0 < DAT_100b5d04) {
      do {
        lp = (LPVOID)puVar8[4];
        local_3c = puVar8;
        BVar1 = IsBadWritePtr(lp,0x41c4);
        if (BVar1 != 0) {
          return 0xfffffffe;
        }
        local_10 = (uint *)puVar8[3];
        local_30 = 0;
        local_2c = (uint *)((int)lp + 0x144);
        local_18 = puVar8[2];
        puVar9 = (uint *)((int)lp + 0xc4);
        local_1c = 0;
        local_34 = 0;
        do {
          local_28 = 0;
          local_20 = 0;
          local_8 = (int *)0x0;
          bVar12 = -1 < (int)local_18;
          piVar11 = local_140;
          local_40 = puVar9;
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          if (bVar12) {
            BVar1 = IsBadWritePtr(local_10,0x8000);
            if (BVar1 != 0) {
              return 0xfffffffc;
            }
            iVar5 = 0;
            puVar8 = local_10 + 0x3ff;
            do {
              puVar9 = puVar8 + -0x3fc;
              if ((puVar8[-0x3fd] != 0xffffffff) || (*puVar8 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar4 = *puVar9;
                if ((uVar4 & 1) == 0) {
                  iVar3 = ((int)uVar4 >> 4) + -1;
                  if (0x3f < iVar3) {
                    iVar3 = 0x3f;
                  }
                  local_140[iVar3] = local_140[iVar3] + 1;
                  uVar6 = uVar4;
                }
                else {
                  if (0x400 < (int)(uVar4 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = (int *)((int)local_8 + 1);
                  uVar6 = uVar4 - 1;
                }
                if ((((int)uVar6 < 0x10) || ((uVar6 & 0xf) != 0)) || (0xff0 < (int)uVar6)) {
                  return 0xfffffff9;
                }
                puVar10 = (uint *)((uVar6 - 4) + (int)puVar9);
                puVar9 = (uint *)(uVar6 + (int)puVar9);
                if (*puVar10 != uVar4) {
                  return 0xfffffff8;
                }
              } while (puVar9 < puVar8);
              if (puVar9 != puVar8) {
                return 0xfffffff8;
              }
              puVar8 = puVar8 + 0x400;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 8);
            if ((int *)*local_2c != local_8) {
              return 0xfffffff7;
            }
            local_c = 0;
            local_8 = local_140;
            puVar10 = local_2c;
            do {
              local_14 = 0;
              puVar8 = (uint *)puVar10[1];
              local_38 = puVar10;
              if ((uint *)puVar10[1] != puVar10) {
                do {
                  puVar9 = puVar8;
                  if (local_14 == *local_8) break;
                  if ((puVar9 < local_10) || (local_10 + 0x2000 <= puVar9)) {
                    return 0xfffffff6;
                  }
                  puVar7 = (uint *)(((uint)puVar9 & 0xfffff000) + 0xc);
                  puVar8 = (uint *)(((uint)puVar9 & 0xfffff000) + 0xffc);
                  if (puVar7 == puVar8) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar7 == puVar9) break;
                    puVar7 = (uint *)((int)puVar7 + (*puVar7 & 0xfffffffe));
                  } while (puVar7 != puVar8);
                  if (puVar7 == puVar8) {
                    return 0xfffffff5;
                  }
                  iVar5 = ((int)*puVar9 >> 4) + -1;
                  if (0x3f < iVar5) {
                    iVar5 = 0x3f;
                  }
                  if (iVar5 != local_c) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar9[2] != local_38) {
                    return 0xfffffff3;
                  }
                  local_14 = local_14 + 1;
                  puVar8 = (uint *)puVar9[1];
                  local_38 = puVar9;
                } while ((uint *)puVar9[1] != puVar10);
                if (local_14 != 0) {
                  if (local_c < 0x20) {
                    uVar4 = 0x80000000 >> ((byte)local_c & 0x1f);
                    local_28 = local_28 | uVar4;
                    local_30 = local_30 | uVar4;
                  }
                  else {
                    uVar4 = 0x80000000 >> ((byte)local_c - 0x20 & 0x1f);
                    local_20 = local_20 | uVar4;
                    local_1c = local_1c | uVar4;
                  }
                }
              }
              if (((uint *)local_38[1] != puVar10) || (local_14 != *local_8)) {
                return 0xfffffff2;
              }
              if ((uint *)puVar10[2] != local_38) {
                return 0xfffffff1;
              }
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              puVar8 = local_3c;
              puVar9 = local_40;
              puVar10 = puVar10 + 2;
            } while (local_c < 0x40);
          }
          if ((local_28 != puVar9[-0x20]) || (local_20 != *puVar9)) {
            return 0xfffffff0;
          }
          local_10 = local_10 + 0x2000;
          local_2c = local_2c + 0x81;
          local_18 = local_18 << 1;
          local_34 = local_34 + 1;
          puVar9 = puVar9 + 1;
        } while (local_34 < 0x20);
        if ((local_30 != *puVar8) || (local_1c != puVar8[1])) {
          return 0xffffffef;
        }
        puVar8 = puVar8 + 5;
        local_24 = local_24 + 1;
        local_40 = puVar9;
      } while (local_24 < DAT_100b5d04);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


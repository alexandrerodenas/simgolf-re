/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10051010 @ 0x10051010 */
/* Body size: 1201 addresses */


undefined4 __cdecl
FUN_10051010(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
            uint *param_7,int param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint local_578;
  uint local_574;
  int local_570;
  uint *local_56c;
  undefined4 uStack_568;
  uint uStack_564;
  uint local_560;
  uint *local_558;
  uint local_554;
  int local_548;
  uint local_544;
  uint local_53c [31];
  uint auStack_4c0 [16];
  uint local_480 [288];
  
  uVar18 = 0;
  local_53c[0] = 0;
  local_53c[1] = 0;
  local_53c[2] = 0;
  local_53c[3] = 0;
  local_53c[4] = 0;
  local_53c[5] = 0;
  local_53c[6] = 0;
  local_53c[7] = 0;
  local_53c[8] = 0;
  local_53c[9] = 0;
  local_53c[10] = 0;
  local_53c[0xb] = 0;
  local_53c[0xc] = 0;
  local_53c[0xd] = 0;
  local_53c[0xe] = 0;
  local_53c[0xf] = 0;
  piVar9 = param_1;
  uVar14 = param_2;
  do {
    iVar17 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar14 = uVar14 - 1;
    local_53c[iVar17] = local_53c[iVar17] + 1;
  } while (uVar14 != 0);
  if (local_53c[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_574 = 1;
    puVar16 = local_53c;
    do {
      puVar16 = puVar16 + 1;
      if (*puVar16 != 0) break;
      local_574 = local_574 + 1;
    } while (local_574 < 0x10);
    local_578 = *param_7;
    if (*param_7 < local_574) {
      local_578 = local_574;
    }
    uVar14 = 0xf;
    puVar16 = local_53c + 0xf;
    do {
      if (*puVar16 != 0) break;
      uVar14 = uVar14 - 1;
      puVar16 = puVar16 + -1;
    } while (uVar14 != 0);
    if (uVar14 < local_578) {
      local_578 = uVar14;
    }
    *param_7 = local_578;
    iVar17 = 1 << ((byte)local_574 & 0x1f);
    if (local_574 < uVar14) {
      puVar16 = local_53c + local_574;
      uVar10 = local_574;
      do {
        uVar15 = *puVar16;
        if ((int)(iVar17 - uVar15) < 0) {
          return 0xfffffffd;
        }
        uVar10 = uVar10 + 1;
        puVar16 = puVar16 + 1;
        iVar17 = (iVar17 - uVar15) * 2;
      } while (uVar10 < uVar14);
    }
    iVar17 = iVar17 - local_53c[uVar14];
    if (iVar17 < 0) {
      return 0xfffffffd;
    }
    local_53c[0x11] = 0;
    local_53c[uVar14] = local_53c[uVar14] + iVar17;
    iVar11 = 0;
    iVar5 = uVar14 - 1;
    if (iVar5 != 0) {
      iVar12 = 0;
      do {
        iVar11 = iVar11 + *(int *)((int)local_53c + iVar12 + 4);
        iVar5 = iVar5 + -1;
        *(int *)((int)local_53c + iVar12 + 0x48) = iVar11;
        iVar12 = iVar12 + 4;
      } while (iVar5 != 0);
    }
    uVar10 = 0;
    do {
      iVar5 = *param_1;
      param_1 = param_1 + 1;
      if (iVar5 != 0) {
        uVar15 = local_53c[iVar5 + 0x10];
        local_480[uVar15] = uVar10;
        local_53c[iVar5 + 0x10] = uVar15 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
    local_56c = local_480;
    uVar10 = 0;
    iVar5 = -local_578;
    local_560 = 0;
    local_53c[0x10] = 0;
    local_570 = -1;
    auStack_4c0[1] = 0;
    local_544 = 0;
    if ((int)local_574 <= (int)uVar14) {
      local_548 = local_574 - 1;
      local_558 = local_53c + local_574;
      do {
        uVar15 = *local_558;
        uVar2 = uStack_568;
        while (uVar15 != 0) {
          uStack_568._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
          local_554 = uVar15 - 1;
          uVar3 = uStack_568._2_2_;
          iVar11 = iVar5;
          while (uStack_568 = uVar2, iVar11 = iVar11 + local_578, iVar11 < (int)local_574) {
            iVar5 = iVar5 + local_578;
            iVar12 = local_570 + 1;
            uVar18 = uVar14 - iVar5;
            if (local_578 < uVar14 - iVar5) {
              uVar18 = local_578;
            }
            uVar10 = local_574 - iVar5;
            uVar6 = 1 << ((byte)uVar10 & 0x1f);
            if ((uVar15 < uVar6) &&
               (iVar7 = uVar6 + (-1 - local_554), puVar16 = local_558, uVar10 < uVar18)) {
              while (uVar10 = uVar10 + 1, uVar10 < uVar18) {
                uVar6 = puVar16[1];
                uVar8 = iVar7 * 2;
                if (uVar8 < uVar6 || uVar8 - uVar6 == 0) break;
                iVar7 = uVar8 - uVar6;
                puVar16 = puVar16 + 1;
              }
            }
            uVar18 = 1 << ((byte)uVar10 & 0x1f);
            iVar7 = (**(code **)(param_8 + 0x20))(*(undefined4 *)(param_8 + 0x28),uVar18 + 1,8);
            if (iVar7 == 0) {
              if (iVar12 != 0) {
                FUN_10051720(auStack_4c0[1],param_8);
              }
              return 0xfffffffc;
            }
            local_544 = iVar7 + 8;
            *param_6 = local_544;
            *(uint *)(iVar7 + 4) = 0;
            auStack_4c0[local_570 + 2] = local_544;
            if (iVar12 != 0) {
              local_53c[local_570 + 0x11] = local_560;
              uStack_568._2_2_ = (undefined2)((uint)uStack_568 >> 0x10);
              uStack_568._0_2_ = CONCAT11((char)local_578,(byte)uVar10);
              uVar10 = auStack_4c0[iVar12];
              uVar6 = local_560 >> ((char)iVar5 - (char)local_578 & 0x1fU);
              *(undefined4 *)(uVar10 + uVar6 * 8) = uStack_568;
              *(uint *)(uVar10 + 4 + uVar6 * 8) = local_544;
              uStack_564 = local_544;
            }
            uVar10 = local_560;
            param_6 = (uint *)(iVar7 + 4);
            local_570 = iVar12;
            uVar2 = uStack_568;
            uVar3 = uStack_568._2_2_;
          }
          bVar4 = (byte)iVar5;
          if (local_56c < local_480 + param_2) {
            uStack_564 = *local_56c;
            if (uStack_564 < param_3) {
              uStack_568._0_1_ = (-(uStack_564 < 0x100) & 0xa0U) + 0x60;
            }
            else {
              iVar11 = (uStack_564 - param_3) * 4;
              uStack_568._0_1_ = *(char *)(iVar11 + param_5) + 'P';
              uStack_564 = *(uint *)(iVar11 + param_4);
            }
            local_56c = local_56c + 1;
          }
          else {
            uStack_568._0_1_ = -0x40;
          }
          uStack_568 = CONCAT31(CONCAT21(uVar3,(char)local_574 - bVar4),(char)uStack_568);
          iVar11 = 1 << ((char)local_574 - bVar4 & 0x1f);
          uVar15 = uVar10 >> (bVar4 & 0x1f);
          if (uVar15 < uVar18) {
            puVar13 = (undefined4 *)(local_544 + uVar15 * 8);
            do {
              uVar15 = uVar15 + iVar11;
              *puVar13 = uStack_568;
              puVar13[1] = uStack_564;
              puVar13 = puVar13 + iVar11 * 2;
              uVar10 = local_560;
            } while (uVar15 < uVar18);
          }
          uVar6 = 1 << ((byte)local_548 & 0x1f);
          uVar15 = uVar10 & uVar6;
          while (uVar15 != 0) {
            uVar10 = uVar10 ^ uVar6;
            uVar6 = uVar6 >> 1;
            uVar15 = uVar10 & uVar6;
          }
          uVar10 = uVar10 ^ uVar6;
          puVar16 = local_53c + local_570 + 0x10;
          uVar15 = local_554;
          uVar2 = uStack_568;
          local_560 = uVar10;
          if (((1 << (bVar4 & 0x1f)) - 1U & uVar10) != local_53c[local_570 + 0x10]) {
            do {
              iVar5 = iVar5 - local_578;
              local_570 = local_570 + -1;
              puVar1 = puVar16 + -1;
              puVar16 = puVar16 + -1;
            } while (((1 << ((byte)iVar5 & 0x1f)) - 1U & uVar10) != *puVar1);
          }
        }
        local_558 = local_558 + 1;
        local_574 = local_574 + 1;
        local_548 = local_548 + 1;
        uStack_568 = uVar2;
      } while ((int)local_574 <= (int)uVar14);
    }
    if ((iVar17 != 0) && (uVar14 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}


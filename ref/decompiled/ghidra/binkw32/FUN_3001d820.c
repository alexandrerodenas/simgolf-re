/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001d820 @ 0x3001D820 */


void __cdecl FUN_3001d820(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  int local_f0;
  uint local_ec;
  int local_e4;
  byte *local_e0;
  byte *local_dc;
  byte *local_d8;
  byte abStack_c4 [132];
  byte local_40 [64];
  
  puVar13 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  local_f0 = 0;
  puVar14 = param_1;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  bVar3 = (byte)uVar9;
  if (uVar10 < 3) {
    uVar9 = *puVar13 >> (3 - (byte)uVar10 & 0x1f);
    bVar3 = (char)*puVar13 << ((byte)uVar10 & 0x1f) | bVar3;
    iVar8 = uVar10 + 0x1d;
    puVar13 = puVar13 + 1;
  }
  else {
    uVar9 = uVar9 >> 3;
    iVar8 = uVar10 - 3;
  }
  local_e0 = local_40;
  local_d8 = local_40 + 4;
  iVar15 = 0;
  cVar11 = '\x01' << (bVar3 & 7);
  local_40[0] = 0x10;
  local_40[1] = 0x60;
  local_40[2] = 0xb0;
  local_40[3] = 2;
  local_e4 = 0;
  for (cVar4 = (bVar3 & 7) + 1; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    iVar12 = 0;
    if (0 < iVar15) {
      do {
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          cVar6 = *(char *)((uint)abStack_c4[iVar12] + (int)param_1);
          cVar7 = cVar11;
          if (cVar6 < '\0') {
            cVar7 = -cVar11;
          }
          *(char *)((uint)abStack_c4[iVar12] + (int)param_1) = cVar6 + cVar7;
          bVar16 = local_f0 == param_3;
          iVar15 = local_e4;
          local_f0 = local_f0 + 1;
          if (bVar16) goto LAB_3001dd27;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar15);
    }
    local_dc = local_e0;
    if (local_e0 < local_d8) {
      do {
        bVar3 = *local_dc;
        if (bVar3 == 0) goto switchD_3001d9ac_default;
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar10 = uVar9;
        }
        uVar9 = uVar10 >> 1;
        if ((uVar10 & 1) == 0) goto switchD_3001d9ac_default;
        switch(bVar3 & 3) {
        case 0:
          *local_dc = (bVar3 & 0xfc) + 0x11;
          break;
        case 1:
          bVar3 = bVar3 & 0xfc;
          *local_dc = bVar3 + 2;
          *local_d8 = bVar3 + 0x12;
          local_d8[1] = bVar3 + 0x22;
          local_d8[2] = bVar3 + 0x32;
          local_d8 = local_d8 + 3;
          goto LAB_3001dd03;
        case 2:
          *local_dc = 0;
          local_dc = local_dc + 1;
          break;
        case 3:
          abStack_c4[iVar15] = bVar3 >> 2;
          iVar15 = iVar15 + 1;
          local_ec = (uint)(bVar3 >> 2);
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar8 = 0x1f;
            uVar2 = uVar10 >> 1;
          }
          else {
            iVar8 = iVar8 + -1;
            uVar2 = uVar10 >> 2;
            uVar10 = uVar9;
          }
          uVar9 = uVar2;
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          if (local_f0 != param_3) {
            *local_dc = 0;
            local_f0 = local_f0 + 1;
            local_e4 = iVar15;
            goto switchD_3001d9ac_default;
          }
          goto LAB_3001dd27;
        default:
switchD_3001d9ac_default:
          local_dc = local_dc + 1;
          goto LAB_3001dd03;
        }
        bVar3 = bVar3 >> 2;
        local_ec = (uint)bVar3;
        if (iVar8 == 0) {
          uVar10 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
          uVar2 = uVar10 >> 1;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar2 = uVar10 >> 2;
          uVar10 = uVar9;
        }
        uVar9 = uVar2;
        if ((uVar10 & 1) == 0) {
          abStack_c4[iVar15] = bVar3;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            iVar8 = 0x1f;
          }
          else {
            iVar8 = iVar8 + -1;
            uVar10 = uVar9;
          }
          uVar9 = uVar10 >> 1;
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar3 * '\x04' + 3;
        }
        bVar5 = bVar3 + 1;
        local_ec = (uint)bVar5;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar5;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar5 * '\x04' + 3;
          uVar9 = uVar10;
        }
        bVar5 = bVar3 + 2;
        local_ec = (uint)bVar5;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar5;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar5 * '\x04' + 3;
          uVar9 = uVar10;
        }
        bVar3 = bVar3 + 3;
        local_ec = (uint)bVar3;
        if (iVar8 == 0) {
          uVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          iVar8 = 0x1f;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        uVar10 = uVar9 >> 1;
        if ((uVar9 & 1) == 0) {
          abStack_c4[iVar15] = bVar3;
          iVar15 = iVar15 + 1;
          if (iVar8 == 0) {
            uVar10 = *puVar13;
            puVar13 = puVar13 + 1;
            uVar9 = uVar10 >> 1;
            iVar8 = 0x1f;
          }
          else {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar8 + -1;
          }
          cVar6 = cVar11;
          if ((uVar10 & 1) != 0) {
            cVar6 = -cVar11;
          }
          *(char *)(local_ec + (int)param_1) = cVar6;
          bVar16 = local_f0 == param_3;
          local_f0 = local_f0 + 1;
          local_e4 = iVar15;
          if (bVar16) goto LAB_3001dd27;
        }
        else {
          local_e0 = local_e0 + -1;
          *local_e0 = bVar3 * '\x04' + 3;
          uVar9 = uVar10;
        }
LAB_3001dd03:
      } while (local_dc < local_d8);
    }
    cVar11 = cVar11 >> 1;
  }
LAB_3001dd27:
  *param_2 = (int)puVar13;
  param_2[1] = iVar1;
  param_2[2] = uVar9;
  param_2[3] = iVar8;
  return;
}


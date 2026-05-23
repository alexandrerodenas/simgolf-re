/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100736c0 @ 0x100736C0 */
/* Body size: 3950 addresses */


undefined4 __cdecl FUN_100736c0(int param_1,uint *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 local_12c [20];
  byte *local_dc;
  byte *local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  byte *local_b4;
  byte *local_b0;
  byte *local_a0;
  byte *local_9c;
  byte *local_8c;
  byte *local_88;
  byte *local_74;
  byte *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_38;
  byte *local_34;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  uint local_8;
  
  puVar12 = local_12c;
  for (iVar9 = 0x4a; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0xcccccccc;
    puVar12 = puVar12 + 1;
  }
  uVar6 = *param_2;
  local_10 = 0;
  if ((param_2[2] & 2) != 0) {
    local_14 = (uint)*(byte *)(param_1 + 0x215);
    local_18 = (uint)*(byte *)(param_1 + 0x216);
    local_1c = (uint)*(byte *)(param_1 + 0x217);
    if ((char)param_2[2] == '\x02') {
      if (*(char *)((int)param_2 + 9) == '\b') {
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          local_34 = param_3;
          local_38 = param_3;
          for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
            bVar3 = *local_34;
            if ((bVar3 == local_34[1]) && (bVar3 == local_34[2])) {
              *local_38 = local_34[2];
            }
            else {
              local_10 = 1;
              *local_38 = (byte)(local_14 * bVar3 + local_18 * local_34[1] + local_1c * local_34[2]
                                >> 8);
            }
            local_38 = local_38 + 1;
            local_34 = local_34 + 3;
          }
        }
        else {
          local_20 = param_3;
          local_24 = param_3;
          for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
            bVar3 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)*local_20);
            bVar4 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)local_20[1]);
            bVar5 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)local_20[2]);
            if ((bVar3 == bVar4) && (bVar3 == bVar5)) {
              *local_24 = local_20[2];
            }
            else {
              local_10 = 1;
              *local_24 = *(byte *)(*(int *)(param_1 + 0x168) +
                                   ((int)(local_14 * bVar3 + local_18 * bVar4 + local_1c * bVar5) >>
                                   8));
            }
            local_24 = local_24 + 1;
            local_20 = local_20 + 3;
          }
        }
      }
      else if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
        local_70 = param_3;
        local_74 = param_3;
        for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
          uVar8 = CONCAT11(*local_70,local_70[1]);
          pbVar11 = local_70 + 2;
          pbVar1 = local_70 + 3;
          pbVar10 = local_70 + 4;
          pbVar2 = local_70 + 5;
          local_70 = local_70 + 6;
          if ((uVar8 != CONCAT11(*pbVar11,*pbVar1)) || (uVar8 != CONCAT11(*pbVar10,*pbVar2))) {
            local_10 = 1;
          }
          iVar9 = local_14 * uVar8 + local_18 * CONCAT11(*pbVar11,*pbVar1) +
                  local_1c * CONCAT11(*pbVar10,*pbVar2);
          *local_74 = (byte)((uint)iVar9 >> 0x10);
          local_74[1] = (byte)((uint)iVar9 >> 8);
          local_74 = local_74 + 2;
        }
      }
      else {
        local_48 = param_3;
        local_4c = param_3;
        for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
          uVar8 = CONCAT11(*local_48,local_48[1]);
          local_50 = (uint)uVar8;
          local_54 = (uint)CONCAT11(local_48[2],local_48[3]);
          local_58 = (uint)CONCAT11(local_48[4],local_48[5]);
          local_48 = local_48 + 6;
          if ((local_50 != local_54) || (local_50 != local_58)) {
            local_60 = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_50 & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_50 >> 8) * 2);
            local_64 = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_54 & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_54 >> 8) * 2);
            local_68 = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_58 & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_58 >> 8) * 2);
            uVar7 = local_14 * local_60 + local_18 * local_64 + local_1c * local_68 >> 8;
            local_6c = uVar7 & 0xffff;
            uVar8 = *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x174) +
                              ((int)(uVar7 & 0xff) >>
                              ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                     ((int)local_6c >> 8) * 2);
            local_10 = 1;
          }
          *local_4c = (byte)(uVar8 >> 8);
          local_4c[1] = (byte)uVar8;
          local_4c = local_4c + 2;
        }
      }
    }
    if ((char)param_2[2] == '\x06') {
      if (*(char *)((int)param_2 + 9) == '\b') {
        if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
          local_9c = param_3;
          local_a0 = param_3;
          for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
            bVar3 = *local_9c;
            if ((bVar3 != local_9c[1]) || (bVar3 != local_9c[2])) {
              local_10 = 1;
            }
            *local_a0 = (byte)(local_18 * bVar3 + local_18 * local_9c[1] + local_1c * local_9c[2] >>
                              8);
            local_a0[1] = local_9c[3];
            local_a0 = local_a0 + 2;
            local_9c = local_9c + 4;
          }
        }
        else {
          local_88 = param_3;
          local_8c = param_3;
          for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
            bVar3 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)*local_88);
            bVar4 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)local_88[1]);
            bVar5 = *(byte *)(*(int *)(param_1 + 0x16c) + (uint)local_88[2]);
            if ((bVar3 != bVar4) || (bVar3 != bVar5)) {
              local_10 = 1;
            }
            *local_8c = *(byte *)(*(int *)(param_1 + 0x168) +
                                 ((int)(local_14 * bVar3 + local_18 * bVar4 + local_1c * bVar5) >> 8
                                 ));
            local_8c[1] = local_88[3];
            local_8c = local_8c + 2;
            local_88 = local_88 + 4;
          }
        }
      }
      else if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
        local_d8 = param_3;
        local_dc = param_3;
        for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
          uVar8 = CONCAT11(*local_d8,local_d8[1]);
          if ((uVar8 != CONCAT11(local_d8[2],local_d8[3])) ||
             (uVar8 != CONCAT11(local_d8[4],local_d8[5]))) {
            local_10 = 1;
          }
          iVar9 = local_14 * uVar8 + local_18 * CONCAT11(local_d8[2],local_d8[3]) +
                  local_1c * CONCAT11(local_d8[4],local_d8[5]);
          *local_dc = (byte)((uint)iVar9 >> 0x10);
          local_dc[1] = (byte)((uint)iVar9 >> 8);
          local_dc[2] = local_d8[6];
          local_dc[3] = local_d8[7];
          local_dc = local_dc + 4;
          local_d8 = local_d8 + 8;
        }
      }
      else {
        local_b0 = param_3;
        local_b4 = param_3;
        for (local_8 = 0; local_8 < uVar6; local_8 = local_8 + 1) {
          uVar8 = CONCAT11(*local_b0,local_b0[1]);
          local_b8 = (uint)uVar8;
          local_bc = (uint)CONCAT11(local_b0[2],local_b0[3]);
          local_c0 = (uint)CONCAT11(local_b0[4],local_b0[5]);
          if ((local_b8 != local_bc) || (local_b8 != local_c0)) {
            local_c8 = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_b8 & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_b8 >> 8) * 2);
            local_cc = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_bc & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_bc >> 8) * 2);
            local_d0 = (uint)*(ushort *)
                              (*(int *)(*(int *)(param_1 + 0x178) +
                                       ((int)(local_c0 & 0xff) >>
                                       ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                              ((int)local_c0 >> 8) * 2);
            uVar7 = local_14 * local_c8 + local_18 * local_cc + local_1c * local_d0 >> 8;
            local_d4 = uVar7 & 0xffff;
            uVar8 = *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x174) +
                              ((int)(uVar7 & 0xff) >>
                              ((byte)*(undefined4 *)(param_1 + 0x158) & 0x1f)) * 4) +
                     ((int)local_d4 >> 8) * 2);
            local_10 = 1;
          }
          *local_b4 = (byte)(uVar8 >> 8);
          local_b4[1] = (byte)uVar8;
          local_b4[2] = local_b0[6];
          local_b4[3] = local_b0[7];
          local_b4 = local_b4 + 4;
          local_b0 = local_b0 + 8;
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    *(byte *)(param_2 + 2) = (byte)param_2[2] & 0xfd;
    *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 10) * *(char *)((int)param_2 + 9);
    param_2[1] = uVar6 * *(byte *)((int)param_2 + 0xb) + 7 >> 3;
  }
  return local_10;
}


/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10040020 @ 0x10040020 */


undefined4 __cdecl FUN_10040020(uint param_1,int *param_2,byte *param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  undefined4 local_20;
  uint local_18;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar7 = param_1;
  local_20 = 0;
  iVar1 = *param_2;
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    return 0;
  }
  local_18 = (uint)*(byte *)(param_1 + 0x215);
  param_1 = (uint)*(byte *)(param_1 + 0x216);
  uVar10 = param_1;
  local_c = (uint)*(byte *)(uVar7 + 0x217);
  if (*(byte *)(param_2 + 2) == 2) {
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar4 = iVar1;
      pbVar5 = param_3;
      pbVar6 = param_3;
      if ((*(int *)(uVar7 + 0x168) == 0) || (*(int *)(uVar7 + 0x16c) == 0)) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          bVar12 = *pbVar5;
          local_4 = (uint)bVar12;
          if ((bVar12 == pbVar5[1]) && (bVar12 == pbVar5[2])) {
            *pbVar6 = pbVar5[2];
          }
          else {
            local_20 = 1;
            *pbVar6 = (byte)(pbVar5[2] * local_c + pbVar5[1] * param_1 + local_4 * local_18 >> 8);
          }
          pbVar5 = pbVar5 + 3;
          pbVar6 = pbVar6 + 1;
        }
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar11 = *(int *)(uVar7 + 0x16c);
          bVar12 = *(byte *)((uint)*pbVar5 + iVar11);
          local_4 = (uint)bVar12;
          if ((bVar12 == *(byte *)((uint)pbVar5[1] + iVar11)) &&
             (bVar12 == *(byte *)((uint)pbVar5[2] + iVar11))) {
            *pbVar6 = pbVar5[2];
          }
          else {
            local_20 = 1;
            *pbVar6 = *(byte *)(((int)(*(byte *)((uint)pbVar5[2] + iVar11) * local_c +
                                       *(byte *)((uint)pbVar5[1] + iVar11) * param_1 +
                                      local_4 * local_18) >> 8) + *(int *)(uVar7 + 0x168));
          }
          pbVar5 = pbVar5 + 3;
          pbVar6 = pbVar6 + 1;
        }
      }
    }
    else {
      iVar4 = iVar1;
      pbVar5 = param_3;
      pbVar6 = param_3;
      if ((*(int *)(uVar7 + 0x178) == 0) || (*(int *)(uVar7 + 0x174) == 0)) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar8 = CONCAT11(*pbVar5,pbVar5[1]);
          if ((uVar8 != CONCAT11(pbVar5[2],pbVar5[3])) || (uVar8 != CONCAT11(pbVar5[4],pbVar5[5])))
          {
            local_20 = 1;
          }
          iVar11 = uVar8 * local_18 + CONCAT11(pbVar5[2],pbVar5[3]) * param_1 +
                   CONCAT11(pbVar5[4],pbVar5[5]) * local_c;
          *pbVar6 = (byte)((uint)iVar11 >> 0x10);
          pbVar6[1] = (byte)((uint)iVar11 >> 8);
          pbVar5 = pbVar5 + 6;
          pbVar6 = pbVar6 + 2;
        }
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar8 = CONCAT11(*pbVar5,pbVar5[1]);
          uVar2 = CONCAT11(pbVar5[2],pbVar5[3]);
          uVar3 = CONCAT11(pbVar5[4],pbVar5[5]);
          if ((uVar8 != uVar2) || (uVar8 != uVar3)) {
            bVar12 = (byte)*(undefined2 *)(uVar7 + 0x158);
            uVar9 = (int)(*(ushort *)
                           (*(int *)(*(int *)(uVar7 + 0x178) +
                                    ((uVar8 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)*pbVar5 * 2) *
                          local_18 +
                          *(ushort *)
                           (*(int *)(*(int *)(uVar7 + 0x178) +
                                    ((uVar2 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)pbVar5[2] * 2)
                          * param_1 +
                         *(ushort *)
                          (*(int *)(*(int *)(uVar7 + 0x178) +
                                   ((uVar3 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)pbVar5[4] * 2) *
                         local_c) >> 8;
            uVar8 = *(ushort *)
                     (*(int *)(*(int *)(uVar7 + 0x174) + ((uVar9 & 0xff) >> (bVar12 & 0x1f)) * 4) +
                     ((uVar9 & 0xffff) >> 8) * 2);
            local_20 = 1;
          }
          *pbVar6 = (byte)(uVar8 >> 8);
          pbVar6[1] = (byte)uVar8;
          pbVar5 = pbVar5 + 6;
          pbVar6 = pbVar6 + 2;
        }
      }
    }
  }
  if ((char)param_2[2] == '\x06') {
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar4 = iVar1;
      pbVar5 = param_3;
      pbVar6 = param_3;
      if ((*(int *)(uVar7 + 0x168) == 0) || (*(int *)(uVar7 + 0x16c) == 0)) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          bVar12 = *pbVar6;
          param_3 = (byte *)(uint)pbVar6[1];
          local_4 = (uint)bVar12;
          param_1 = (uint)pbVar6[2];
          if ((bVar12 != pbVar6[1]) || (bVar12 != pbVar6[2])) {
            local_20 = 1;
          }
          *pbVar5 = (byte)((int)(param_3 + local_4) * uVar10 + param_1 * local_c >> 8);
          pbVar5[1] = pbVar6[3];
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 4;
        }
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar11 = *(int *)(uVar7 + 0x16c);
          bVar12 = *(byte *)((uint)*pbVar6 + iVar11);
          local_4 = (uint)bVar12;
          param_3 = (byte *)(uint)*(byte *)((uint)pbVar6[1] + iVar11);
          local_8 = (uint)*(byte *)((uint)pbVar6[2] + iVar11);
          if ((bVar12 != *(byte *)((uint)pbVar6[1] + iVar11)) ||
             (bVar12 != *(byte *)((uint)pbVar6[2] + iVar11))) {
            local_20 = 1;
          }
          *pbVar5 = *(byte *)(((int)(local_4 * local_18 + (int)param_3 * param_1 + local_8 * local_c
                                    ) >> 8) + *(int *)(uVar7 + 0x168));
          pbVar5[1] = pbVar6[3];
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 4;
        }
      }
    }
    else {
      iVar4 = iVar1;
      pbVar5 = param_3;
      if ((*(int *)(uVar7 + 0x178) == 0) || (*(int *)(uVar7 + 0x174) == 0)) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar8 = CONCAT11(*pbVar5,pbVar5[1]);
          if ((uVar8 != CONCAT11(pbVar5[2],pbVar5[3])) || (uVar8 != CONCAT11(pbVar5[4],pbVar5[5])))
          {
            local_20 = 1;
          }
          iVar11 = uVar8 * local_18 + CONCAT11(pbVar5[2],pbVar5[3]) * param_1 +
                   CONCAT11(pbVar5[4],pbVar5[5]) * local_c;
          *param_3 = (byte)((uint)iVar11 >> 0x10);
          param_3[1] = (byte)((uint)iVar11 >> 8);
          param_3[2] = pbVar5[6];
          param_3[3] = pbVar5[7];
          param_3 = param_3 + 4;
          pbVar5 = pbVar5 + 8;
        }
      }
      else {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar8 = CONCAT11(*pbVar5,pbVar5[1]);
          uVar2 = CONCAT11(pbVar5[2],pbVar5[3]);
          uVar3 = CONCAT11(pbVar5[4],pbVar5[5]);
          if ((uVar8 != uVar2) || (uVar8 != uVar3)) {
            bVar12 = (byte)*(undefined2 *)(uVar7 + 0x158);
            uVar10 = (int)(*(ushort *)
                            (*(int *)(*(int *)(uVar7 + 0x178) +
                                     ((uVar8 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)*pbVar5 * 2) *
                           local_18 +
                           *(ushort *)
                            (*(int *)(*(int *)(uVar7 + 0x178) +
                                     ((uVar2 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)pbVar5[2] * 2)
                           * param_1 +
                          *(ushort *)
                           (*(int *)(*(int *)(uVar7 + 0x178) +
                                    ((uVar3 & 0xff) >> (bVar12 & 0x1f)) * 4) + (uint)pbVar5[4] * 2)
                          * local_c) >> 8;
            uVar8 = *(ushort *)
                     (*(int *)(*(int *)(uVar7 + 0x174) + ((uVar10 & 0xff) >> (bVar12 & 0x1f)) * 4) +
                     ((uVar10 & 0xffff) >> 8) * 2);
            local_20 = 1;
          }
          *param_3 = (byte)(uVar8 >> 8);
          param_3[1] = (byte)uVar8;
          param_3[2] = pbVar5[6];
          param_3[3] = pbVar5[7];
          param_3 = param_3 + 4;
          pbVar5 = pbVar5 + 8;
        }
      }
    }
  }
  cVar13 = *(char *)((int)param_2 + 10) + -2;
  *(char *)((int)param_2 + 10) = cVar13;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
  bVar12 = *(char *)((int)param_2 + 9) * cVar13;
  *(byte *)((int)param_2 + 0xb) = bVar12;
  param_2[1] = (uint)bVar12 * iVar1 + 7 >> 3;
  return local_20;
}


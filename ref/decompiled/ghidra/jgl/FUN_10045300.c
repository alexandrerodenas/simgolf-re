/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045300 @ 0x10045300 */
/* Body size: 1093 addresses */


void __cdecl FUN_10045300(uint *param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  uint local_8 [2];
  
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    uVar2 = *(uint *)(&DAT_100557e0 + param_3 * 4);
    uVar3 = *param_1;
    uVar10 = uVar3 * uVar2;
    bVar1 = *(byte *)((int)param_1 + 0xb);
    if (bVar1 == 1) {
      pbVar6 = (byte *)((uVar3 - 1 >> 3) + param_2);
      pbVar8 = (byte *)((uVar10 - 1 >> 3) + param_2);
      if ((param_4 & 0x10000) == 0) {
        param_4 = 7 - (uVar3 - 1 & 7);
        uVar4 = 7 - (uVar10 - 1 & 7);
        local_14 = 0;
        param_3 = 7;
        local_18 = 1;
      }
      else {
        param_4 = uVar3 - 1 & 7;
        uVar4 = uVar10 - 1 & 7;
        local_14 = 7;
        param_3 = 0;
        local_18 = -1;
      }
      local_10 = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_8[0] = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0x7f7f >> (7 - (byte)uVar4 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)param_4 & 0x1f) & 1) << ((byte)uVar4 & 0x1f);
              if (uVar4 == param_3) {
                pbVar8 = pbVar8 + -1;
                uVar4 = local_14;
              }
              else {
                uVar4 = uVar4 + local_18;
              }
              local_8[0] = local_8[0] - 1;
              pbVar6 = local_c;
            } while (local_8[0] != 0);
          }
          if (param_4 == param_3) {
            pbVar6 = pbVar6 + -1;
            param_4 = local_14;
            local_c = pbVar6;
          }
          else {
            param_4 = param_4 + local_18;
          }
          local_10 = local_10 + 1;
        } while (local_10 < *param_1);
      }
    }
    else if (bVar1 == 2) {
      pbVar6 = (byte *)((uVar3 - 1 >> 2) + param_2);
      pbVar8 = (byte *)((uVar10 - 1 >> 2) + param_2);
      if ((param_4 & 0x10000) == 0) {
        local_18 = 0;
        param_3 = 6;
        uVar4 = (3 - (uVar3 - 1 & 3)) * 2;
        uVar12 = (3 - (uVar10 - 1 & 3)) * 2;
        local_14 = 2;
      }
      else {
        uVar4 = uVar3 * 2 - 2 & 6;
        uVar12 = uVar10 * 2 - 2 & 6;
        local_18 = 6;
        param_3 = 0;
        local_14 = -2;
      }
      local_10 = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_8[0] = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0x3f3f >> (6 - (byte)uVar12 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)uVar4 & 0x1f) & 3) << ((byte)uVar12 & 0x1f);
              if (uVar12 == param_3) {
                pbVar8 = pbVar8 + -1;
                uVar12 = local_18;
              }
              else {
                uVar12 = uVar12 + local_14;
              }
              local_8[0] = local_8[0] - 1;
              pbVar6 = local_c;
            } while (local_8[0] != 0);
          }
          if (uVar4 == param_3) {
            pbVar6 = pbVar6 + -1;
            uVar4 = local_18;
            local_c = pbVar6;
          }
          else {
            uVar4 = uVar4 + local_14;
          }
          local_10 = local_10 + 1;
        } while (local_10 < *param_1);
      }
    }
    else if (bVar1 == 4) {
      pbVar6 = (byte *)((uVar3 - 1 >> 1) + param_2);
      pbVar8 = (byte *)((uVar10 - 1 >> 1) + param_2);
      if ((param_4 & 0x10000) == 0) {
        param_3 = 0;
        param_4 = (uVar3 - 1 & 1) * -4 + 4;
        uVar4 = (uVar10 - 1 & 1) * -4 + 4;
        uVar12 = 4;
        local_18 = 4;
      }
      else {
        param_4 = (-(-1 - uVar3) & 1) << 2;
        uVar4 = (-(-1 - uVar10) & 1) << 2;
        param_3 = 4;
        uVar12 = 0;
        local_18 = -4;
      }
      local_8[0] = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_10 = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0xf0f >> (4 - (byte)uVar4 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)param_4 & 0x1f) & 0xf) << ((byte)uVar4 & 0x1f);
              if (uVar4 == uVar12) {
                pbVar8 = pbVar8 + -1;
                uVar4 = param_3;
              }
              else {
                uVar4 = uVar4 + local_18;
              }
              local_10 = local_10 - 1;
              pbVar6 = local_c;
            } while (local_10 != 0);
          }
          if (param_4 == uVar12) {
            pbVar6 = pbVar6 + -1;
            param_4 = param_3;
            local_c = pbVar6;
          }
          else {
            param_4 = param_4 + local_18;
          }
          local_8[0] = local_8[0] + 1;
        } while (local_8[0] < *param_1);
      }
    }
    else {
      uVar4 = (uint)(bVar1 >> 3);
      puVar7 = (uint *)((uVar3 - 1) * uVar4 + param_2);
      puVar5 = (uint *)((uVar10 - 1) * uVar4 + param_2);
      param_3 = 0;
      if (uVar3 != 0) {
        do {
          puVar9 = puVar7;
          puVar11 = local_8;
          for (uVar3 = (uint)(bVar1 >> 5); uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)puVar11 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          param_4 = uVar2;
          if (0 < (int)uVar2) {
            do {
              puVar9 = local_8;
              puVar11 = puVar5;
              for (uVar3 = (uint)(bVar1 >> 5); uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              puVar5 = (uint *)((int)puVar5 - uVar4);
              param_4 = param_4 - 1;
              for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(char *)puVar11 = (char)*puVar9;
                puVar9 = (uint *)((int)puVar9 + 1);
                puVar11 = (uint *)((int)puVar11 + 1);
              }
            } while (param_4 != 0);
          }
          puVar7 = (uint *)((int)puVar7 - uVar4);
          param_3 = param_3 + 1;
        } while (param_3 < *param_1);
      }
    }
    *param_1 = uVar10;
    param_1[1] = *(byte *)((int)param_1 + 0xb) * uVar10 + 7 >> 3;
  }
  return;
}


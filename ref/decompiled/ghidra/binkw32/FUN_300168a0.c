/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300168a0 @ 0x300168A0 */


void __cdecl
FUN_300168a0(uint param_1,uint param_2,int param_3,uint param_4,byte *param_5,int param_6,
            int param_7,uint param_8,uint param_9,byte *param_10,uint param_11,uint param_12,
            int param_13,int *param_14)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_9c [18];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  byte *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = param_4;
  uVar8 = param_12 & 0x70000000;
  local_1c = param_9;
  local_38 = param_11;
  local_24 = param_10;
  local_2c = param_4;
  if (uVar8 == 0x60000000) {
    param_9 = param_9 >> 1;
    local_c = param_6;
    param_4 = param_4 * 2;
    param_6 = param_6 * 2;
    pbVar4 = (byte *)((int)param_10 * 2);
    uVar6 = param_11 >> 1;
  }
  else {
    local_c = 0;
    pbVar4 = param_10;
    uVar6 = param_11;
  }
  DAT_30045890 = uVar2 * param_3 + param_1 + *param_14 * param_2;
  if ((uVar8 == 0x20000000) || (uVar8 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  local_48 = param_6 - (param_8 >> 4);
  param_11 = param_4;
  FUN_3000e000(param_12,(int *)&param_11,0x10,param_9,param_14,&param_6);
  FUN_3000e000(param_12,(int *)&param_4,0x20,param_9,param_14,&local_8);
  if (((uVar8 == 0x30000000) || (uVar8 == 0x50000000)) || (local_18 = 1, uVar8 == 0x40000000)) {
    local_18 = 2;
  }
  local_10 = *param_14 * local_18 * 0x10;
  DAT_30045894 = DAT_30045890 + param_4;
  DAT_30045898 = (byte *)param_7;
  DAT_3004589c = pbVar4 + param_7;
  DAT_300458ac = pbVar4 + param_13;
  DAT_300458a8 = (byte *)param_13;
  param_11 = (int)pbVar4 - param_8;
  local_20 = param_8 & 0xf;
  uVar2 = (uint)pbVar4 >> 1;
  local_14 = uVar2 - 8;
  local_44 = uVar2 - 0x10;
  local_3c = ((int)pbVar4 * 0xf - param_8) + local_20;
  local_4c = ((param_8 >> 1 & 7) + uVar2 * 8) - (param_8 >> 1);
  local_40 = (local_20 - param_8) * (*param_14 * local_18 & 0xfffffffU) + param_4 * 0xf;
  if ((param_12 & 0x10000) == 0) {
    DAT_300458a4 = (int)pbVar4 * uVar6 + param_7;
    DAT_300458a0 = (uVar6 >> 1) * uVar2 + DAT_300458a4;
  }
  else {
    DAT_300458a0 = (int)pbVar4 * uVar6 + param_7;
    DAT_300458a4 = (uVar6 >> 1) * uVar2 + DAT_300458a0;
  }
  local_50 = param_9 - 1;
  param_10 = param_5;
  if (0xe < local_50) {
    local_34 = 0xf;
    uVar2 = param_4;
    do {
      iVar3 = param_8 - 1;
      local_28 = 0;
      if (0x1e < iVar3) {
        param_5 = param_10 + local_c;
        local_54 = 1 - local_c;
        local_30 = 0x1f;
        do {
          bVar5 = (*param_10 != 0) + (param_5[local_54] != 0) * '\x02';
          if (local_c != 0) {
            bVar5 = bVar5 | (*param_5 != 0) + (param_10[local_c + 1] != 0) * '\x02';
          }
          if (bVar5 == 1) {
            puVar7 = &DAT_30045890;
            puVar9 = local_9c;
            for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar3 = 8;
            do {
              (*DAT_300488f8)(4);
              DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
              DAT_3004589c = DAT_30045898 + (int)pbVar4;
              DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
              DAT_300458ac = DAT_300458a8 + (int)pbVar4;
              DAT_300458a4 = DAT_300458a4 + local_14;
              DAT_300458a0 = DAT_300458a0 + local_14;
              DAT_30045890 = param_6 + DAT_30045894;
              DAT_30045894 = DAT_30045890 + param_4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
LAB_30016d39:
            puVar7 = local_9c;
            puVar9 = &DAT_30045890;
            for (iVar3 = 0x12; uVar2 = param_4, iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          else {
            if (bVar5 == 2) {
              puVar7 = &DAT_30045890;
              puVar9 = local_9c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              DAT_3004589c = DAT_3004589c + 0x10;
              DAT_30045898 = DAT_30045898 + 0x10;
              DAT_300458a8 = DAT_300458a8 + 0x10;
              DAT_300458ac = DAT_300458ac + 0x10;
              iVar3 = 8;
              DAT_300458a0 = DAT_300458a0 + 8;
              DAT_300458a4 = DAT_300458a4 + 8;
              DAT_30045890 = DAT_30045890 + local_10;
              DAT_30045894 = DAT_30045894 + local_10;
              do {
                (*DAT_300488f8)(4);
                DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
                DAT_3004589c = DAT_30045898 + (int)pbVar4;
                DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
                DAT_300458ac = DAT_300458a8 + (int)pbVar4;
                DAT_300458a0 = DAT_300458a0 + local_14;
                DAT_300458a4 = DAT_300458a4 + local_14;
                DAT_30045890 = DAT_30045894 + param_6;
                DAT_30045894 = DAT_30045890 + param_4;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              goto LAB_30016d39;
            }
            if (bVar5 == 3) {
              puVar7 = &DAT_30045890;
              puVar9 = local_9c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              iVar3 = 8;
              do {
                (*DAT_300488f8)(8);
                DAT_30045898 = DAT_3004589c + -0x20 + (int)pbVar4;
                DAT_3004589c = DAT_30045898 + (int)pbVar4;
                DAT_300458a8 = DAT_300458ac + -0x20 + (int)pbVar4;
                DAT_300458ac = DAT_300458a8 + (int)pbVar4;
                DAT_300458a4 = DAT_300458a4 + local_44;
                DAT_300458a0 = DAT_300458a0 + local_44;
                DAT_30045890 = DAT_30045894 + local_8;
                DAT_30045894 = DAT_30045890 + param_4;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              goto LAB_30016d39;
            }
          }
          DAT_30045898 = DAT_30045898 + 0x20;
          DAT_3004589c = DAT_3004589c + 0x20;
          DAT_300458a8 = DAT_300458a8 + 0x20;
          DAT_300458ac = DAT_300458ac + 0x20;
          DAT_300458a4 = DAT_300458a4 + 0x10;
          DAT_30045890 = DAT_30045890 + local_10 * 2;
          DAT_30045894 = DAT_30045894 + local_10 * 2;
          local_28 = local_28 + 0x20;
          param_5 = param_5 + 2;
          DAT_300458a0 = DAT_300458a0 + 0x10;
          param_10 = param_10 + 2;
          local_30 = local_30 + 0x20;
          iVar3 = param_8 - 1;
        } while (local_30 <= iVar3);
      }
      if (local_28 + 0xf <= iVar3) {
        bVar5 = *param_10;
        if (local_c != 0) {
          bVar5 = bVar5 | param_10[local_c];
        }
        param_10 = param_10 + 1;
        if (bVar5 != 0) {
          puVar7 = &DAT_30045890;
          puVar9 = local_9c;
          for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          iVar3 = 8;
          do {
            (*DAT_300488f8)(4);
            DAT_30045898 = DAT_3004589c + -0x10 + (int)pbVar4;
            DAT_3004589c = DAT_30045898 + (int)pbVar4;
            DAT_300458a8 = DAT_300458ac + -0x10 + (int)pbVar4;
            DAT_300458ac = DAT_300458a8 + (int)pbVar4;
            DAT_300458a4 = DAT_300458a4 + local_14;
            DAT_300458a0 = DAT_300458a0 + local_14;
            DAT_30045890 = DAT_30045894 + param_6;
            DAT_30045894 = DAT_30045890 + param_4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          puVar7 = local_9c;
          puVar9 = &DAT_30045890;
          for (iVar3 = 0x12; uVar2 = param_4, iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        DAT_300458ac = DAT_300458ac + 0x10;
        DAT_3004589c = DAT_3004589c + 0x10;
        DAT_300458a4 = DAT_300458a4 + 8;
        DAT_300458a0 = DAT_300458a0 + 8;
        DAT_30045894 = DAT_30045894 + local_10;
      }
      DAT_30045898 = DAT_3004589c + local_3c;
      DAT_3004589c = DAT_30045898 + (int)pbVar4;
      DAT_300458a8 = DAT_300458ac + local_3c;
      DAT_300458ac = DAT_300458a8 + (int)pbVar4;
      DAT_300458a4 = DAT_300458a4 + local_4c;
      DAT_300458a0 = DAT_300458a0 + local_4c;
      DAT_30045890 = local_40 + DAT_30045894;
      DAT_30045894 = DAT_30045890 + uVar2;
      param_10 = param_10 + local_48;
      local_34 = local_34 + 0x10;
    } while (local_34 <= local_50);
  }
  uVar2 = local_1c;
  if (local_20 != 0) {
    uVar8 = param_8 & 0xfffffff0;
    FUN_3000dbc0(param_1,uVar8 * local_18 + param_2,param_3,local_2c,param_7,uVar8,0,param_8 - uVar8
                 ,local_1c,(uint)local_24,local_38,param_12,param_13,param_14);
  }
  if ((param_9 & 0xf) != 0) {
    uVar1 = ((ulonglong)(param_9 & 0xfffffff0) * (ulonglong)local_1c) / (ulonglong)param_9;
    param_5 = (byte *)uVar1;
    param_9 = local_2c * (int)pbVar4;
    param_10 = (byte *)((int)local_24 * param_4);
    FUN_3000dbc0(param_1,param_2,
                 (int)(((uVar1 & 0xffffffff) * ZEXT48(param_10)) / (ulonglong)param_9) + param_3,
                 local_2c,param_7,0,(uint)param_5,param_8,uVar2 - (int)param_5,(uint)local_24,
                 local_38,param_12,param_13,param_14);
  }
  if ((DAT_30041c30 != 0) && ((param_12 & 0x40000) == 0)) {
    FUN_3000dff0();
  }
  return;
}


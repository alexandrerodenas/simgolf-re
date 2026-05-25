/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10074750 @ 0x10074750 */


void FUN_10074750(uint *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,byte param_12)

{
  undefined2 uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 local_13c [16];
  int local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  ushort local_e8;
  undefined2 uStack_e6;
  ushort local_e4;
  undefined2 uStack_e2;
  ushort local_e0;
  undefined2 uStack_de;
  undefined2 local_dc;
  undefined2 uStack_da;
  ushort local_d8;
  undefined2 uStack_d6;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined2 local_c8;
  undefined2 uStack_c6;
  ushort local_c4;
  undefined2 uStack_c2;
  ushort local_c0;
  undefined2 uStack_be;
  undefined2 local_bc;
  undefined2 uStack_ba;
  ushort local_b8;
  undefined2 uStack_b6;
  ushort local_b4;
  undefined2 uStack_b2;
  ushort local_b0;
  undefined2 uStack_ae;
  ushort local_ac;
  undefined2 uStack_aa;
  byte local_a8;
  undefined3 uStack_a7;
  ushort local_a4;
  undefined2 uStack_a2;
  ushort local_a0;
  undefined2 uStack_9e;
  ushort local_9c;
  undefined2 uStack_9a;
  byte local_98;
  undefined3 uStack_97;
  undefined1 local_94;
  undefined3 uStack_93;
  byte local_90;
  undefined3 uStack_8f;
  uint local_8c;
  undefined2 local_88;
  undefined2 uStack_86;
  ushort local_84;
  undefined2 uStack_82;
  ushort local_80;
  undefined2 uStack_7e;
  uint local_7c;
  undefined2 local_78;
  undefined2 uStack_76;
  ushort local_74;
  undefined2 uStack_72;
  ushort local_70;
  undefined2 uStack_6e;
  undefined2 local_6c;
  undefined2 uStack_6a;
  ushort local_68;
  undefined2 uStack_66;
  ushort local_64;
  undefined2 uStack_62;
  byte local_60;
  undefined3 uStack_5f;
  ushort local_5c;
  undefined2 uStack_5a;
  byte local_58;
  undefined3 uStack_57;
  undefined1 local_54;
  undefined3 uStack_53;
  ushort local_50;
  undefined2 uStack_4e;
  short local_4c;
  undefined2 uStack_4a;
  short local_48;
  undefined2 uStack_46;
  short local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  short local_3c;
  undefined2 uStack_3a;
  short local_38;
  undefined2 uStack_36;
  short local_34;
  undefined2 uStack_32;
  short local_30;
  undefined2 uStack_2e;
  short local_2c;
  undefined2 uStack_2a;
  undefined1 local_28;
  undefined3 uStack_27;
  uint local_24;
  undefined1 local_20;
  undefined3 uStack_1f;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  puVar12 = local_13c;
  for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0xcccccccc;
    puVar12 = puVar12 + 1;
  }
  local_14 = *param_1;
  if ((param_4 != 0) &&
     (((param_1[2] & 4) == 0 || (((char)param_1[2] != '\x03' && (param_3 != 0)))))) {
    local_f8 = (uint)(byte)param_1[2];
    switch(local_f8) {
    case 0:
      local_fc = *(byte *)((int)param_1 + 9) - 1;
      switch(*(byte *)((int)param_1 + 9)) {
      case 1:
        local_8 = param_2;
        local_18 = 7;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          bVar2 = (byte)local_18;
          if (((int)(uint)*local_8 >> (bVar2 & 0x1f) & 1U) == (uint)*(ushort *)(param_3 + 8)) {
            *local_8 = *local_8 & (byte)(0x7f7f >> (7 - bVar2 & 0x1f));
            *local_8 = *local_8 | (char)*(undefined2 *)(param_4 + 8) << (bVar2 & 0x1f);
          }
          if (local_18 == 0) {
            local_18 = 7;
            local_8 = local_8 + 1;
          }
          else {
            local_18 = local_18 + -1;
          }
        }
        break;
      case 2:
        if (param_6 == 0) {
          local_8 = param_2;
          local_18 = 6;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = (byte)local_18;
            if (((int)(uint)*local_8 >> (bVar2 & 0x1f) & 3U) == (uint)*(ushort *)(param_3 + 8)) {
              *local_8 = *local_8 & (byte)(0x3f3f >> (6 - bVar2 & 0x1f));
              *local_8 = *local_8 | (char)*(undefined2 *)(param_4 + 8) << (bVar2 & 0x1f);
            }
            if (local_18 == 0) {
              local_18 = 6;
              local_8 = local_8 + 1;
            }
            else {
              local_18 = local_18 + -2;
            }
          }
        }
        else {
          local_8 = param_2;
          local_18 = 6;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = (byte)local_18;
            if (((int)(uint)*local_8 >> (bVar2 & 0x1f) & 3U) == (uint)*(ushort *)(param_3 + 8)) {
              *local_8 = *local_8 & (byte)(0x3f3f >> (6 - bVar2 & 0x1f));
              *local_8 = *local_8 | (char)*(undefined2 *)(param_4 + 8) << (bVar2 & 0x1f);
            }
            else {
              uVar11 = (int)(uint)*local_8 >> (bVar2 & 0x1f);
              local_1c = CONCAT31(local_1c._1_3_,(char)uVar11) & 0xffffff03;
              iVar7 = (int)(uint)*(byte *)(param_6 +
                                          (uVar11 & 3 | (uVar11 & 3) << 2 | (uVar11 & 3) << 4 |
                                          (uVar11 & 3) << 6)) >> 6;
              _local_20 = CONCAT31(uStack_1f,(char)iVar7);
              *local_8 = *local_8 & (byte)(0x3f3f >> (6 - bVar2 & 0x1f));
              *local_8 = *local_8 | (byte)(iVar7 << (bVar2 & 0x1f));
            }
            if (local_18 == 0) {
              local_18 = 6;
              local_8 = local_8 + 1;
            }
            else {
              local_18 = local_18 + -2;
            }
          }
        }
        break;
      case 4:
        if (param_6 == 0) {
          local_8 = param_2;
          local_18 = 4;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = (byte)local_18;
            if (((int)(uint)*local_8 >> (bVar2 & 0x1f) & 0xfU) == (uint)*(ushort *)(param_3 + 8)) {
              *local_8 = *local_8 & (byte)(0xf0f >> (4 - bVar2 & 0x1f));
              *local_8 = *local_8 | (char)*(undefined2 *)(param_4 + 8) << (bVar2 & 0x1f);
            }
            if (local_18 == 0) {
              local_18 = 4;
              local_8 = local_8 + 1;
            }
            else {
              local_18 = local_18 + -4;
            }
          }
        }
        else {
          local_8 = param_2;
          local_18 = 4;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = (byte)local_18;
            if (((int)(uint)*local_8 >> (bVar2 & 0x1f) & 0xfU) == (uint)*(ushort *)(param_3 + 8)) {
              *local_8 = *local_8 & (byte)(0xf0f >> (4 - bVar2 & 0x1f));
              *local_8 = *local_8 | (char)*(undefined2 *)(param_4 + 8) << (bVar2 & 0x1f);
            }
            else {
              uVar11 = (int)(uint)*local_8 >> (bVar2 & 0x1f);
              local_24 = CONCAT31(local_24._1_3_,(char)uVar11) & 0xffffff0f;
              iVar7 = (int)(uint)*(byte *)(param_6 + (uVar11 & 0xf | (uVar11 & 0xf) << 4)) >> 4;
              _local_28 = CONCAT31(uStack_27,(char)iVar7);
              *local_8 = *local_8 & (byte)(0xf0f >> (4 - bVar2 & 0x1f));
              *local_8 = *local_8 | (byte)(iVar7 << (bVar2 & 0x1f));
            }
            if (local_18 == 0) {
              local_18 = 4;
              local_8 = local_8 + 1;
            }
            else {
              local_18 = local_18 + -4;
            }
          }
        }
        break;
      case 8:
        if (param_6 == 0) {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            if ((ushort)*local_8 == *(ushort *)(param_3 + 8)) {
              *local_8 = *(byte *)(param_4 + 8);
            }
            local_8 = local_8 + 1;
          }
        }
        else {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            if ((ushort)*local_8 == *(ushort *)(param_3 + 8)) {
              *local_8 = *(byte *)(param_4 + 8);
            }
            else {
              *local_8 = *(byte *)(param_6 + (uint)*local_8);
            }
            local_8 = local_8 + 1;
          }
        }
        break;
      case 0x10:
        if (param_9 == 0) {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            sVar3 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
            _local_30 = CONCAT22(uStack_2e,sVar3);
            if (sVar3 == *(short *)(param_3 + 8)) {
              *local_8 = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
              local_8[1] = (byte)*(undefined2 *)(param_4 + 8);
            }
            local_8 = local_8 + 2;
          }
        }
        else {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            sVar3 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
            if (sVar3 == *(short *)(param_3 + 8)) {
              *local_8 = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
              local_8[1] = (byte)*(undefined2 *)(param_4 + 8);
            }
            else {
              sVar3 = *(short *)(*(int *)(param_9 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4
                                         ) + (uint)*local_8 * 2);
              *local_8 = (byte)((ushort)sVar3 >> 8);
              local_8[1] = (byte)sVar3;
            }
            _local_2c = CONCAT22(uStack_2a,sVar3);
            local_8 = local_8 + 2;
          }
        }
      }
      break;
    case 2:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (param_6 == 0) {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            if ((((ushort)*local_8 == *(ushort *)(param_3 + 2)) &&
                ((ushort)local_8[1] == *(ushort *)(param_3 + 4))) &&
               ((ushort)local_8[2] == *(ushort *)(param_3 + 6))) {
              *local_8 = *(byte *)(param_4 + 2);
              local_8[1] = *(byte *)(param_4 + 4);
              local_8[2] = *(byte *)(param_4 + 6);
            }
            local_8 = local_8 + 3;
          }
        }
        else {
          local_8 = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            if ((((ushort)*local_8 == *(ushort *)(param_3 + 2)) &&
                ((ushort)local_8[1] == *(ushort *)(param_3 + 4))) &&
               ((ushort)local_8[2] == *(ushort *)(param_3 + 6))) {
              *local_8 = *(byte *)(param_4 + 2);
              local_8[1] = *(byte *)(param_4 + 4);
              local_8[2] = *(byte *)(param_4 + 6);
            }
            else {
              *local_8 = *(byte *)(param_6 + (uint)*local_8);
              local_8[1] = *(byte *)(param_6 + (uint)local_8[1]);
              local_8[2] = *(byte *)(param_6 + (uint)local_8[2]);
            }
            local_8 = local_8 + 3;
          }
        }
      }
      else if (param_9 == 0) {
        local_8 = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          sVar4 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
          _local_44 = CONCAT22(uStack_42,sVar4);
          sVar8 = (ushort)local_8[2] * 0x100 + (ushort)local_8[3];
          _local_48 = CONCAT22(uStack_46,sVar8);
          sVar3 = (ushort)local_8[4] * 0x100 + (ushort)local_8[5];
          _local_4c = CONCAT22(uStack_4a,sVar3);
          if (((sVar4 == *(short *)(param_3 + 2)) && (sVar8 == *(short *)(param_3 + 4))) &&
             (sVar3 == *(short *)(param_3 + 6))) {
            *local_8 = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
            local_8[1] = (byte)*(undefined2 *)(param_4 + 2);
            local_8[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
            local_8[3] = (byte)*(undefined2 *)(param_4 + 4);
            local_8[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
            local_8[5] = (byte)*(undefined2 *)(param_4 + 6);
          }
          local_8 = local_8 + 6;
        }
      }
      else {
        local_8 = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          sVar4 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
          _local_34 = CONCAT22(uStack_32,sVar4);
          sVar8 = (ushort)local_8[2] * 0x100 + (ushort)local_8[3];
          _local_38 = CONCAT22(uStack_36,sVar8);
          sVar3 = (ushort)local_8[4] * 0x100 + (ushort)local_8[5];
          _local_3c = CONCAT22(uStack_3a,sVar3);
          if (((sVar4 == *(short *)(param_3 + 2)) && (sVar8 == *(short *)(param_3 + 4))) &&
             (sVar3 == *(short *)(param_3 + 6))) {
            *local_8 = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
            local_8[1] = (byte)*(undefined2 *)(param_4 + 2);
            local_8[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
            local_8[3] = (byte)*(undefined2 *)(param_4 + 4);
            local_8[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
            local_8[5] = (byte)*(undefined2 *)(param_4 + 6);
          }
          else {
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*local_8 * 2);
            *local_8 = (byte)((ushort)uVar1 >> 8);
            local_8[1] = (byte)uVar1;
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[3] >> (param_12 & 0x1f)) * 4) +
                     (uint)local_8[2] * 2);
            local_8[2] = (byte)((ushort)uVar1 >> 8);
            local_8[3] = (byte)uVar1;
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[5] >> (param_12 & 0x1f)) * 4) +
                     (uint)local_8[4] * 2);
            _local_40 = CONCAT22(uStack_3e,uVar1);
            local_8[4] = (byte)((ushort)uVar1 >> 8);
            local_8[5] = (byte)uVar1;
          }
          local_8 = local_8 + 6;
        }
      }
      break;
    case 4:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          local_8 = param_2;
          local_c = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = local_8[1];
            _local_60 = CONCAT31(uStack_5f,bVar2);
            if (bVar2 == 0xff) {
              *local_c = *local_8;
            }
            else if (bVar2 == 0) {
              *local_c = *(byte *)(param_4 + 8);
            }
            else {
              uVar9 = (ushort)*local_8 * ((ushort)_local_60 & 0xff) + 0x80 +
                      *(short *)(param_5 + 8) * (0xff - ((ushort)_local_60 & 0xff));
              _local_64 = CONCAT22(uStack_62,uVar9);
              *local_c = (byte)((uint)uVar9 + ((int)(uint)uVar9 >> 8) >> 8);
            }
            local_8 = local_8 + 2;
            local_c = local_c + 1;
          }
        }
        else {
          local_8 = param_2;
          local_c = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            uVar9 = (ushort)local_8[1];
            _local_50 = CONCAT22(uStack_4e,uVar9);
            if (uVar9 == 0xff) {
              *local_c = *(byte *)(param_6 + (uint)*local_8);
            }
            else if (uVar9 == 0) {
              *local_c = *(byte *)(param_4 + 8);
            }
            else {
              _local_54 = CONCAT31(uStack_53,*(undefined1 *)(param_8 + (uint)*local_8));
              uVar9 = ((ushort)_local_54 & 0xff) * uVar9 + 0x80 +
                      *(short *)(param_5 + 8) * (0xff - uVar9);
              _local_5c = CONCAT22(uStack_5a,uVar9);
              bVar2 = (byte)((uint)uVar9 + ((int)(uint)uVar9 >> 8) >> 8);
              _local_58 = CONCAT31(uStack_57,bVar2);
              *local_c = *(byte *)(param_7 + (uint)bVar2);
            }
            local_8 = local_8 + 2;
            local_c = local_c + 1;
          }
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        local_8 = param_2;
        local_c = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          uVar9 = (ushort)local_8[2] * 0x100 + (ushort)local_8[3];
          _local_80 = CONCAT22(uStack_7e,uVar9);
          if (uVar9 == 0xffff) {
            FUN_1007f3a0((undefined4 *)local_c,(undefined4 *)local_8,2);
          }
          else if (uVar9 == 0) {
            *local_c = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
            local_c[1] = (byte)*(undefined2 *)(param_4 + 8);
          }
          else {
            uVar5 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
            _local_84 = CONCAT22(uStack_82,uVar5);
            local_8c = (uint)uVar5 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
            iVar7 = local_8c + (local_8c >> 0x10);
            _local_88 = CONCAT22(uStack_86,(short)((uint)iVar7 >> 0x10));
            *local_c = (byte)((uint)iVar7 >> 0x18);
            local_c[1] = (byte)((uint)iVar7 >> 0x10);
          }
          local_8 = local_8 + 4;
          local_c = local_c + 2;
        }
      }
      else {
        local_8 = param_2;
        local_c = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          uVar9 = (ushort)local_8[2] * 0x100 + (ushort)local_8[3];
          _local_68 = CONCAT22(uStack_66,uVar9);
          if (uVar9 == 0xffff) {
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*local_8 * 2);
            _local_6c = CONCAT22(uStack_6a,uVar1);
            *local_c = (byte)((ushort)uVar1 >> 8);
            local_c[1] = (byte)uVar1;
          }
          else if (uVar9 == 0) {
            *local_c = (byte)((ushort)*(undefined2 *)(param_4 + 8) >> 8);
            local_c[1] = (byte)*(undefined2 *)(param_4 + 8);
          }
          else {
            uVar5 = *(ushort *)
                     (*(int *)(param_11 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*local_8 * 2);
            _local_70 = CONCAT22(uStack_6e,uVar5);
            local_7c = (uint)uVar5 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar9);
            uVar9 = (ushort)(local_7c + (local_7c >> 0x10) >> 0x10);
            _local_74 = CONCAT22(uStack_72,uVar9);
            uVar1 = *(undefined2 *)
                     (*(int *)(param_10 + ((int)(uVar9 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     ((int)(uint)uVar9 >> 8) * 2);
            _local_78 = CONCAT22(uStack_76,uVar1);
            *local_c = (byte)((ushort)uVar1 >> 8);
            local_c[1] = (byte)uVar1;
          }
          local_8 = local_8 + 4;
          local_c = local_c + 2;
        }
      }
      break;
    case 6:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          local_8 = param_2;
          local_c = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = local_8[3];
            _local_a8 = CONCAT31(uStack_a7,bVar2);
            if (bVar2 == 0xff) {
              *local_c = *local_8;
              local_c[1] = local_8[1];
              local_c[2] = local_8[2];
            }
            else if (bVar2 == 0) {
              *local_c = *(byte *)(param_4 + 2);
              local_c[1] = *(byte *)(param_4 + 4);
              local_c[2] = *(byte *)(param_4 + 6);
            }
            else {
              uVar9 = (ushort)_local_a8;
              uVar5 = (ushort)*local_8 * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_4 + 2) * (0xff - (uVar9 & 0xff));
              _local_ac = CONCAT22(uStack_aa,uVar5);
              *local_c = (byte)((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8);
              uVar5 = (ushort)local_8[1] * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_4 + 4) * (0xff - (uVar9 & 0xff));
              _local_b0 = CONCAT22(uStack_ae,uVar5);
              local_c[1] = (byte)((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8);
              uVar9 = (ushort)local_8[2] * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_4 + 6) * (0xff - (uVar9 & 0xff));
              _local_b4 = CONCAT22(uStack_b2,uVar9);
              local_c[2] = (byte)((uint)uVar9 + ((int)(uint)uVar9 >> 8) >> 8);
            }
            local_8 = local_8 + 4;
            local_c = local_c + 3;
          }
        }
        else {
          local_8 = param_2;
          local_c = param_2;
          for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
            bVar2 = local_8[3];
            _local_90 = CONCAT31(uStack_8f,bVar2);
            if (bVar2 == 0xff) {
              *local_c = *(byte *)(param_6 + (uint)*local_8);
              local_c[1] = *(byte *)(param_6 + (uint)local_8[1]);
              local_c[2] = *(byte *)(param_6 + (uint)local_8[2]);
            }
            else if (bVar2 == 0) {
              *local_c = *(byte *)(param_4 + 2);
              local_c[1] = *(byte *)(param_4 + 4);
              local_c[2] = *(byte *)(param_4 + 6);
            }
            else {
              _local_94 = CONCAT31(uStack_93,*(undefined1 *)(param_8 + (uint)*local_8));
              uVar9 = (ushort)_local_90;
              uVar5 = ((ushort)_local_94 & 0xff) * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_5 + 2) * (0xff - (uVar9 & 0xff));
              _local_9c = CONCAT22(uStack_9a,uVar5);
              *local_c = *(byte *)(param_7 + ((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8 & 0xff));
              _local_94 = CONCAT31(uStack_93,*(undefined1 *)(param_8 + (uint)local_8[1]));
              uVar5 = ((ushort)_local_94 & 0xff) * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_5 + 4) * (0xff - (uVar9 & 0xff));
              _local_a0 = CONCAT22(uStack_9e,uVar5);
              local_c[1] = *(byte *)(param_7 + ((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8 & 0xff));
              _local_94 = CONCAT31(uStack_93,*(undefined1 *)(param_8 + (uint)local_8[2]));
              uVar9 = ((ushort)_local_94 & 0xff) * (uVar9 & 0xff) + 0x80 +
                      *(short *)(param_5 + 6) * (0xff - (uVar9 & 0xff));
              _local_a4 = CONCAT22(uStack_a2,uVar9);
              bVar2 = (byte)((uint)uVar9 + ((int)(uint)uVar9 >> 8) >> 8);
              _local_98 = CONCAT31(uStack_97,bVar2);
              local_c[2] = *(byte *)(param_7 + (uint)bVar2);
            }
            local_8 = local_8 + 4;
            local_c = local_c + 3;
          }
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        local_8 = param_2;
        local_c = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          uVar9 = (ushort)local_8[6] * 0x100 + (ushort)local_8[7];
          _local_d8 = CONCAT22(uStack_d6,uVar9);
          if (uVar9 == 0xffff) {
            FUN_1007f3a0((undefined4 *)local_c,(undefined4 *)local_8,6);
          }
          else if (uVar9 == 0) {
            *local_c = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
            local_c[1] = (byte)*(undefined2 *)(param_4 + 2);
            local_c[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
            local_c[3] = (byte)*(undefined2 *)(param_4 + 4);
            local_c[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
            local_c[5] = (byte)*(undefined2 *)(param_4 + 6);
          }
          else {
            uVar10 = (ushort)*local_8 * 0x100 + (ushort)local_8[1];
            _local_e0 = CONCAT22(uStack_de,uVar10);
            uVar5 = (ushort)local_8[2] * 0x100 + (ushort)local_8[3];
            _local_e4 = CONCAT22(uStack_e2,uVar5);
            uVar6 = (ushort)local_8[4] * 0x100 + (ushort)local_8[5];
            _local_e8 = CONCAT22(uStack_e6,uVar6);
            local_ec = (uint)uVar10 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 2) * (0xffff - (uint)uVar9);
            iVar7 = local_ec + (local_ec >> 0x10);
            *local_c = (byte)((uint)iVar7 >> 0x18);
            local_c[1] = (byte)((uint)iVar7 >> 0x10);
            local_f0 = (uint)uVar5 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 4) * (0xffff - (uint)uVar9);
            iVar7 = local_f0 + (local_f0 >> 0x10);
            local_c[2] = (byte)((uint)iVar7 >> 0x18);
            local_c[3] = (byte)((uint)iVar7 >> 0x10);
            local_f4 = (uint)uVar6 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 6) * (0xffff - (uint)uVar9);
            iVar7 = local_f4 + (local_f4 >> 0x10);
            _local_dc = CONCAT22(uStack_da,(short)((uint)iVar7 >> 0x10));
            local_c[4] = (byte)((uint)iVar7 >> 0x18);
            local_c[5] = (byte)((uint)iVar7 >> 0x10);
          }
          local_8 = local_8 + 8;
          local_c = local_c + 6;
        }
      }
      else {
        local_8 = param_2;
        local_c = param_2;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          uVar9 = (ushort)local_8[6] * 0x100 + (ushort)local_8[7];
          _local_b8 = CONCAT22(uStack_b6,uVar9);
          if (uVar9 == 0xffff) {
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*local_8 * 2);
            *local_c = (byte)((ushort)uVar1 >> 8);
            local_c[1] = (byte)uVar1;
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[3] >> (param_12 & 0x1f)) * 4) +
                     (uint)local_8[2] * 2);
            local_c[2] = (byte)((ushort)uVar1 >> 8);
            local_c[3] = (byte)uVar1;
            uVar1 = *(undefined2 *)
                     (*(int *)(param_9 + ((int)(uint)local_8[5] >> (param_12 & 0x1f)) * 4) +
                     (uint)local_8[4] * 2);
            _local_bc = CONCAT22(uStack_ba,uVar1);
            local_c[4] = (byte)((ushort)uVar1 >> 8);
            local_c[5] = (byte)uVar1;
          }
          else if (uVar9 == 0) {
            *local_c = (byte)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
            local_c[1] = (byte)*(undefined2 *)(param_4 + 2);
            local_c[2] = (byte)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
            local_c[3] = (byte)*(undefined2 *)(param_4 + 4);
            local_c[4] = (byte)((ushort)*(undefined2 *)(param_4 + 6) >> 8);
            local_c[5] = (byte)*(undefined2 *)(param_4 + 6);
          }
          else {
            local_cc = (uint)*(ushort *)
                              (*(int *)(param_11 + ((int)(uint)local_8[1] >> (param_12 & 0x1f)) * 4)
                              + (uint)*local_8 * 2) * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 2) * (0xffff - (uint)uVar9);
            uVar5 = (ushort)(local_cc + (local_cc >> 0x10) >> 0x10);
            uVar1 = *(undefined2 *)
                     (*(int *)(param_10 + ((int)(uVar5 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     ((int)(uint)uVar5 >> 8) * 2);
            *local_c = (byte)((ushort)uVar1 >> 8);
            local_c[1] = (byte)uVar1;
            local_d0 = (uint)*(ushort *)
                              (*(int *)(param_11 + ((int)(uint)local_8[3] >> (param_12 & 0x1f)) * 4)
                              + (uint)local_8[2] * 2) * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 4) * (0xffff - (uint)uVar9);
            uVar5 = (ushort)(local_d0 + (local_d0 >> 0x10) >> 0x10);
            uVar1 = *(undefined2 *)
                     (*(int *)(param_10 + ((int)(uVar5 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     ((int)(uint)uVar5 >> 8) * 2);
            local_c[2] = (byte)((ushort)uVar1 >> 8);
            local_c[3] = (byte)uVar1;
            uVar5 = *(ushort *)
                     (*(int *)(param_11 + ((int)(uint)local_8[5] >> (param_12 & 0x1f)) * 4) +
                     (uint)local_8[4] * 2);
            _local_c0 = CONCAT22(uStack_be,uVar5);
            local_d4 = (uint)uVar5 * (uint)uVar9 + 0x8000 +
                       (uint)*(ushort *)(param_4 + 6) * (0xffff - (uint)uVar9);
            uVar9 = (ushort)(local_d4 + (local_d4 >> 0x10) >> 0x10);
            _local_c4 = CONCAT22(uStack_c2,uVar9);
            uVar1 = *(undefined2 *)
                     (*(int *)(param_10 + ((int)(uVar9 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     ((int)(uint)uVar9 >> 8) * 2);
            _local_c8 = CONCAT22(uStack_c6,uVar1);
            local_c[4] = (byte)((ushort)uVar1 >> 8);
            local_c[5] = (byte)uVar1;
          }
          local_8 = local_8 + 8;
          local_c = local_c + 6;
        }
      }
    }
    if ((param_1[2] & 4) != 0) {
      *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
      *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + -1;
      *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 10) * *(char *)((int)param_1 + 9);
      param_1[1] = local_14 * *(byte *)((int)param_1 + 0xb) + 7 >> 3;
    }
  }
  local_8 = (byte *)0x1007670f;
  __chkesp();
  return;
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30008ab0 @ 0x30008AB0 */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * __cdecl
FUN_30008ab0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint *param_6,
            undefined4 param_7,int param_8,uint param_9,uint *param_10,uint param_11)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar21;
  undefined1 local_430 [388];
  short local_2ac [64];
  short *local_22c [12];
  undefined1 *local_1fc [12];
  undefined1 *local_1cc [12];
  uint local_19c;
  uint local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  short *local_15c [12];
  char *local_12c [12];
  char *local_fc [12];
  byte *local_cc [12];
  int local_9c;
  byte *local_98 [12];
  int local_68;
  code *local_64;
  int local_60;
  uint *local_5c [12];
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_9c = param_5 * 8 - param_3;
  local_18 = param_1;
  local_1c = param_2;
  local_8 = 0;
  local_c = 0;
  local_64 = (code *)&LAB_3000a740;
  local_60 = (int)((ulonglong)param_5 / (0x10 / (ulonglong)param_9));
  local_10 = param_6;
  local_14 = param_6;
  if ((param_11 & 0x8000) == 0) {
    local_64 = FUN_3000aa30;
  }
  FUN_30009e30(*param_10,local_1fc,0x200,param_3,4,1,0);
  FUN_30009e30(param_10[1],local_1cc,0x200,param_3 >> 1,4,1,0);
  FUN_30009e30(param_10[2],local_5c,0x200,param_3,8,0x40,0);
  FUN_30009e30(param_10[3],local_98,0x200,param_3,8,8,0);
  FUN_30009e30(param_10[4],local_fc,0x200,param_3,5,1,1);
  FUN_30009e30(param_10[5],local_12c,0x200,param_3,5,1,1);
  FUN_30009e30(param_10[6],local_15c,0x200,param_3,0xb,1,0);
  FUN_30009e30(param_10[7],local_22c,0x200,param_3,0xb,1,1);
  FUN_30009e30(param_10[8],local_cc,0x200,param_3,4,0x30,0);
  FUN_30009ee0((int)local_1fc,(int *)&local_14);
  FUN_30009ee0((int)local_1cc,(int *)&local_14);
  FUN_3000a440((int)local_5c,(int *)&local_14,local_430);
  FUN_30009ee0((int)local_98,(int *)&local_14);
  FUN_30009ee0((int)local_fc,(int *)&local_14);
  FUN_30009ee0((int)local_12c,(int *)&local_14);
  FUN_30009ee0((int)local_cc,(int *)&local_14);
  local_2c = 0;
  if (param_4 != 0) {
    do {
      uVar16 = local_2c;
      param_2 = (uint *)0x0;
      FUN_3000a4a0((int *)local_1fc,(int *)&local_14);
      FUN_3000a4a0((int *)local_1cc,(int *)&local_14);
      (*local_64)(local_5c,&local_14,local_430);
      FUN_3000af10((int *)local_98,(int *)&local_14);
      FUN_3000b110((int *)local_fc,(int *)&local_14);
      FUN_3000b110((int *)local_12c,(int *)&local_14);
      FUN_3000b370((int *)local_15c,(int *)&local_14);
      FUN_3000b370((int *)local_22c,(int *)&local_14);
      FUN_3000ad10((int *)local_cc,(int *)&local_14);
      uVar13 = local_c;
      pbVar21 = local_98[0];
      puVar19 = local_5c[0];
      for (local_28 = param_3; local_c = uVar13, local_28 != 0; local_28 = local_28 - 8) {
        uVar4 = *local_1fc[0];
        local_1fc[0] = local_1fc[0] + 1;
        bVar14 = (byte)local_8;
        switch(uVar4) {
        case 0:
          uVar13 = local_1c[1];
          uVar6 = *(undefined4 *)((int)local_1c + param_5);
          uVar7 = *(undefined4 *)((int)local_1c + param_5 + 4);
          puVar2 = (undefined4 *)((int)local_1c + param_5 * 2);
          *local_18 = *local_1c;
          local_18[1] = uVar13;
          *(undefined4 *)((int)local_18 + param_5) = uVar6;
          *(undefined4 *)((int)local_18 + param_5 + 4) = uVar7;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar2 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar3[1];
          uVar7 = *(undefined4 *)((int)puVar3 + param_5);
          uVar8 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar3;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 1:
          if ((uVar16 & 8) == 0) {
            uVar4 = *local_1cc[0];
            local_1cc[0] = local_1cc[0] + 1;
            switch(uVar4) {
            case 3:
              if (local_8 < 4) {
                uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
                local_c = *local_14 >> (4 - bVar14 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14 = local_14 + 1;
              }
              else {
                local_c = uVar13 >> 4;
                local_8 = local_8 - 4;
              }
              iVar12 = (uVar13 & 0xf) * 0x40;
              iVar18 = 0;
              do {
                if (local_8 == 0) {
                  uVar13 = *local_14;
                  local_14 = local_14 + 1;
                  local_8 = 0x1f;
                }
                else {
                  local_8 = local_8 - 1;
                  uVar13 = local_c;
                }
                local_c = uVar13 >> 1;
                if ((uVar13 & 1) == 0) {
                  bVar14 = *local_cc[0];
                  local_cc[0] = local_cc[0] + 1;
                  for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                    iVar11 = iVar18 + iVar12;
                    uVar13 = *puVar19;
                    iVar18 = iVar18 + 1;
                    puVar19 = (uint *)((int)puVar19 + 1);
                    local_5c[0] = puVar19;
                    *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
                  }
                }
                else {
                  uVar13 = *puVar19;
                  puVar19 = (uint *)((int)puVar19 + 1);
                  bVar14 = *local_cc[0];
                  local_cc[0] = local_cc[0] + 1;
                  local_5c[0] = puVar19;
                  for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                    iVar11 = iVar18 + iVar12;
                    iVar18 = iVar18 + 1;
                    *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
                  }
                }
              } while (iVar18 < 0x3f);
              if (iVar18 == 0x3f) {
                uVar13 = *puVar19;
                puVar19 = (uint *)((int)puVar19 + 1);
                local_5c[0] = puVar19;
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033747)[iVar12]) = (char)uVar13;
              }
              param_1 = &local_198;
              param_11 = 8;
              puVar20 = local_18;
              do {
                param_6 = (uint *)((int)puVar20 + param_5);
                uVar5 = (ushort)param_1[-1];
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                *puVar20 = uVar13;
                *param_6 = uVar13;
                uVar5 = *(ushort *)((int)param_1 + -2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[1] = uVar13;
                param_6[1] = uVar13;
                uVar5 = (ushort)*param_1;
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[2] = uVar13;
                param_6[2] = uVar13;
                uVar5 = *(ushort *)((int)param_1 + 2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[3] = uVar13;
                param_1 = param_1 + 2;
                param_6[3] = uVar13;
                puVar20 = (uint *)((int)param_6 + param_5);
                param_11 = param_11 - 1;
              } while (param_11 != 0);
              break;
            case 5:
              local_2ac[0] = *local_15c[0];
              local_15c[0] = local_15c[0] + 1;
              FUN_3001ce50((int)local_2ac,(int *)&local_14);
              if (local_8 < 4) {
                uVar13 = *local_14 << ((byte)local_8 & 0x1f) | local_c;
                local_c = *local_14 >> (4 - (byte)local_8 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14 = local_14 + 1;
              }
              else {
                local_8 = local_8 - 4;
                uVar13 = local_c;
                local_c = local_c >> 4;
              }
              FUN_3001c590((int)local_18,param_5,local_2ac,uVar13 & 0xf);
              puVar19 = local_5c[0];
              pbVar21 = local_98[0];
              break;
            case 6:
              local_5c[0] = (uint *)((int)puVar19 + 1);
              param_1 = (uint *)0x7;
              uVar9 = CONCAT11((char)*puVar19,(char)*puVar19);
              uVar13 = CONCAT22(uVar9,uVar9);
              puVar19 = (uint *)((int)local_18 + param_5);
              *local_18 = uVar13;
              local_18[1] = uVar13;
              local_18[2] = uVar13;
              local_18[3] = uVar13;
              do {
                puVar20 = (uint *)((int)puVar19 + param_5);
                *puVar19 = uVar13;
                puVar19[1] = uVar13;
                puVar19[2] = uVar13;
                puVar19[3] = uVar13;
                puVar19 = (uint *)((int)puVar20 + param_5);
                *puVar20 = uVar13;
                puVar20[1] = uVar13;
                puVar20[2] = uVar13;
                puVar20[3] = uVar13;
                param_1 = (uint *)((int)param_1 + -1);
              } while (param_1 != (uint *)0x0);
              *puVar19 = uVar13;
              puVar19[1] = uVar13;
              puVar19[2] = uVar13;
              puVar19[3] = uVar13;
              puVar19 = local_5c[0];
              break;
            case 8:
              local_5c[0] = (uint *)((int)puVar19 + 2);
              uVar9 = CONCAT11((char)*puVar19,(char)*puVar19);
              local_68 = 8;
              uVar10 = CONCAT11(*(undefined1 *)((int)puVar19 + 1),*(undefined1 *)((int)puVar19 + 1))
              ;
              uVar16 = CONCAT22(uVar9,uVar9);
              uVar13 = CONCAT22(uVar10,uVar10);
              param_1 = local_18;
              do {
                param_10 = (uint *)((int)param_1 + param_5);
                bVar14 = *pbVar21;
                pbVar21 = pbVar21 + 1;
                iVar18 = (bVar14 & 3) * 4;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                *param_1 = uVar17;
                *param_10 = uVar17;
                iVar18 = (bVar14 >> 2 & 3) * 4;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                param_1[1] = uVar17;
                param_10[1] = uVar17;
                local_20 = (bVar14 >> 4 & 3) * 4;
                local_24 = *(uint *)(&DAT_30033f8c + local_20) & uVar16;
                uVar17 = local_24 | *(uint *)(&DAT_30033f7c + local_20) & uVar13;
                iVar18 = (uint)(bVar14 >> 6) * 4;
                param_1[2] = uVar17;
                param_10[2] = uVar17;
                uVar17 = *(uint *)(&DAT_30033f8c + iVar18) & uVar16 |
                         *(uint *)(&DAT_30033f7c + iVar18) & uVar13;
                param_1[3] = uVar17;
                param_1 = (uint *)((int)param_10 + param_5);
                local_68 = local_68 + -1;
                param_10[3] = uVar17;
              } while (local_68 != 0);
              local_68 = 0;
              puVar19 = local_5c[0];
              local_98[0] = pbVar21;
              break;
            case 9:
              param_1 = (uint *)0x8;
              puVar20 = local_18;
              do {
                uVar5 = (ushort)*puVar19;
                local_5c[0] = puVar19 + 2;
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                *puVar20 = uVar13;
                *(uint *)((int)puVar20 + param_5) = uVar13;
                uVar5 = *(ushort *)((int)puVar19 + 2);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[1] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 4) = uVar13;
                uVar5 = (ushort)puVar19[1];
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[2] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 8) = uVar13;
                uVar5 = *(ushort *)((int)puVar19 + 6);
                uVar13 = ((uVar5 & 0xffffff00) << 8 | (uint)uVar5) << 8 | uVar5 & 0xff;
                puVar20[3] = uVar13;
                *(uint *)((int)puVar20 + param_5 + 0xc) = uVar13;
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                param_1 = (uint *)((int)param_1 + -1);
                puVar19 = local_5c[0];
              } while (param_1 != (uint *)0x0);
            }
          }
          local_18 = local_18 + 2;
          local_28 = local_28 - 8;
          local_1c = local_1c + 2;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          param_2 = (uint *)((int)param_2 + param_9);
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          break;
        case 2:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          uVar13 = puVar19[1];
          uVar6 = *(undefined4 *)((int)puVar19 + param_5);
          uVar7 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          *local_18 = *puVar19;
          local_18[1] = uVar13;
          *(undefined4 *)((int)local_18 + param_5) = uVar6;
          *(undefined4 *)((int)local_18 + param_5 + 4) = uVar7;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar2 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar3[1];
          uVar7 = *(undefined4 *)((int)puVar3 + param_5);
          uVar8 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *(undefined4 *)pcVar1 = *puVar3;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          pcVar1 = pcVar1 + param_5 * 2;
          uVar6 = puVar2[1];
          uVar7 = *(undefined4 *)((int)puVar2 + param_5);
          uVar8 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          *(undefined4 *)pcVar1 = *puVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar6;
          *(undefined4 *)(pcVar1 + param_5) = uVar7;
          *(undefined4 *)(pcVar1 + param_5 + 4) = uVar8;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 3:
          if (local_8 < 4) {
            uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
            local_c = *local_14 >> (4 - bVar14 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
          }
          else {
            local_c = uVar13 >> 4;
            local_8 = local_8 - 4;
          }
          iVar12 = (uVar13 & 0xf) * 0x40;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          iVar18 = 0;
          do {
            if (local_8 == 0) {
              uVar13 = *local_14;
              local_14 = local_14 + 1;
              local_8 = 0x1f;
            }
            else {
              local_8 = local_8 - 1;
              uVar13 = local_c;
            }
            local_c = uVar13 >> 1;
            if ((uVar13 & 1) == 0) {
              bVar14 = *local_cc[0];
              local_cc[0] = local_cc[0] + 1;
              for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                iVar11 = iVar18 + iVar12;
                iVar18 = iVar18 + 1;
                puVar20 = (uint *)((int)puVar19 + 1);
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)*puVar19;
                puVar19 = puVar20;
                local_5c[0] = puVar20;
              }
            }
            else {
              uVar13 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 1);
              bVar14 = *local_cc[0];
              local_cc[0] = local_cc[0] + 1;
              local_5c[0] = puVar19;
              for (iVar15 = bVar14 + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
                iVar11 = iVar18 + iVar12;
                iVar18 = iVar18 + 1;
                *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033708)[iVar11]) = (char)uVar13;
              }
            }
          } while (iVar18 < 0x3f);
          if (iVar18 == 0x3f) {
            local_5c[0] = (uint *)((int)puVar19 + 1);
            *(char *)((int)&local_19c + (uint)(byte)(&DAT_30033747)[iVar12]) = (char)*puVar19;
          }
          *local_18 = local_19c;
          local_18[1] = local_198;
          *(undefined4 *)((int)local_18 + param_5) = local_194;
          *(undefined4 *)((int)local_18 + param_5 + 4) = local_190;
          pcVar1 = (char *)((int)local_18 + param_5 * 2);
          *(undefined4 *)pcVar1 = local_18c;
          *(undefined4 *)(pcVar1 + 4) = local_188;
          *(undefined4 *)(pcVar1 + param_5) = local_184;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_180;
          pcVar1 = pcVar1 + param_5 * 2;
          *(undefined4 *)pcVar1 = local_17c;
          *(undefined4 *)(pcVar1 + 4) = local_178;
          *(undefined4 *)(pcVar1 + param_5) = local_174;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_170;
          pcVar1 = pcVar1 + param_5 * 2;
          *(undefined4 *)pcVar1 = local_16c;
          *(undefined4 *)(pcVar1 + 4) = local_168;
          *(undefined4 *)(pcVar1 + param_5) = local_164;
          *(undefined4 *)(pcVar1 + param_5 + 4) = local_160;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 4:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          local_19c = *puVar19;
          local_198 = puVar19[1];
          local_194 = *(undefined4 *)((int)puVar19 + param_5);
          local_190 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_18c = *puVar2;
          local_188 = puVar2[1];
          local_184 = *(undefined4 *)((int)puVar2 + param_5);
          local_180 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_17c = *puVar2;
          local_178 = puVar2[1];
          local_174 = *(undefined4 *)((int)puVar2 + param_5);
          local_170 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_16c = *puVar2;
          local_168 = puVar2[1];
          local_164 = *(undefined4 *)((int)puVar2 + param_5);
          local_160 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          if (local_8 < 7) {
            local_c = *local_14 >> (7 - bVar14 & 0x1f);
            uVar13 = *local_14 << (bVar14 & 0x1f) | uVar13;
            local_8 = local_8 + 0x19;
            local_14 = local_14 + 1;
          }
          else {
            local_c = uVar13 >> 7;
            local_8 = local_8 - 7;
          }
          FUN_3001dd60((char *)local_18,param_5,(int *)&local_14,uVar13 & 0x7f,(char *)&local_19c);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 5:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          local_2ac[0] = *local_15c[0];
          local_15c[0] = local_15c[0] + 1;
          FUN_3001ce50((int)local_2ac,(int *)&local_14);
          if (local_8 < 4) {
            uVar13 = *local_14 << ((byte)local_8 & 0x1f) | local_c;
            local_c = *local_14 >> (4 - (byte)local_8 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
          }
          else {
            local_8 = local_8 - 4;
            uVar13 = local_c;
            local_c = local_c >> 4;
          }
          FUN_3001c560((int)local_18,param_5,local_2ac,uVar13 & 0xf);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 6:
          uVar13 = *puVar19;
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          local_5c[0] = (uint *)((int)puVar19 + 1);
          uVar9 = CONCAT11((char)uVar13,(char)uVar13);
          uVar13 = CONCAT22(uVar9,uVar9);
          *local_18 = uVar13;
          local_18[1] = uVar13;
          *(uint *)((int)local_18 + param_5) = uVar13;
          *(uint *)((int)local_18 + param_5 + 4) = uVar13;
          *(uint *)((int)local_18 + param_5 * 2) = uVar13;
          *(uint *)((int)local_18 + param_5 * 2 + 4) = uVar13;
          *(uint *)((int)local_18 + param_5 * 3) = uVar13;
          *(uint *)((int)local_18 + param_5 * 3 + 4) = uVar13;
          puVar19 = local_18 + param_5;
          *puVar19 = uVar13;
          puVar19[1] = uVar13;
          puVar19 = (uint *)((int)puVar19 + param_5);
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = uVar13;
          puVar19[1] = uVar13;
          *puVar20 = uVar13;
          puVar20[1] = uVar13;
          *(uint *)((int)puVar20 + param_5) = uVar13;
          *(uint *)((int)puVar20 + param_5 + 4) = uVar13;
          puVar19 = local_5c[0];
          break;
        case 7:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          puVar19 = (uint *)((int)local_1c + (int)*local_fc[0] + (int)*local_12c[0] * param_5);
          local_fc[0] = local_fc[0] + 1;
          local_12c[0] = local_12c[0] + 1;
          local_19c = *puVar19;
          local_198 = puVar19[1];
          local_194 = *(undefined4 *)((int)puVar19 + param_5);
          local_190 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_18c = *puVar2;
          local_188 = puVar2[1];
          local_184 = *(undefined4 *)((int)puVar2 + param_5);
          local_180 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_17c = *puVar2;
          local_178 = puVar2[1];
          local_174 = *(undefined4 *)((int)puVar2 + param_5);
          local_170 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          local_16c = *puVar2;
          local_168 = puVar2[1];
          local_164 = *(undefined4 *)((int)puVar2 + param_5);
          local_160 = *(undefined4 *)((int)puVar2 + param_5 + 4);
          local_2ac[0] = *local_22c[0];
          local_22c[0] = local_22c[0] + 1;
          FUN_3001ce50((int)local_2ac,(int *)&local_14);
          if (local_8 < 4) {
            uVar13 = *local_14;
            bVar14 = (byte)local_8;
            uVar16 = uVar13 << (bVar14 & 0x1f) | local_c;
            local_8 = local_8 + 0x1c;
            local_14 = local_14 + 1;
            local_c = uVar13 >> (4 - bVar14 & 0x1f);
          }
          else {
            local_8 = local_8 - 4;
            uVar16 = local_c;
            local_c = local_c >> 4;
          }
          FUN_3001ca30((int)local_18,param_5,local_2ac,uVar16 & 0xf,(int)&local_19c);
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 8:
          uVar13 = *puVar19;
          uVar4 = *(undefined1 *)((int)puVar19 + 1);
          local_5c[0] = (uint *)((int)puVar19 + 2);
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          uVar9 = CONCAT11((char)uVar13,(char)uVar13);
          uVar13 = CONCAT22(uVar9,uVar9);
          uVar9 = CONCAT11(uVar4,uVar4);
          uVar16 = CONCAT22(uVar9,uVar9);
          bVar14 = *pbVar21;
          iVar18 = (bVar14 & 0xf) * 4;
          *local_18 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                      *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          local_18[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                        *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[1];
          puVar19 = (uint *)((int)local_18 + param_5 * 2);
          iVar18 = (bVar14 & 0xf) * 4;
          *(uint *)((int)local_18 + param_5) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          *(uint *)((int)local_18 + param_5 + 4) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[2];
          iVar18 = (bVar14 & 0xf) * 4;
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[3];
          puVar19 = (uint *)((int)puVar20 + param_5);
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar20 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[4];
          puVar20 = (uint *)((int)puVar19 + param_5);
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[5];
          iVar18 = (bVar14 & 0xf) * 4;
          puVar19 = (uint *)((int)puVar20 + param_5);
          *puVar20 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[6];
          iVar18 = (bVar14 & 0xf) * 4;
          *puVar19 = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                     *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
                       *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          bVar14 = pbVar21[7];
          local_98[0] = pbVar21 + 8;
          iVar18 = (bVar14 & 0xf) * 4;
          *(uint *)((int)puVar19 + param_5) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          iVar18 = (uint)(bVar14 >> 4) * 4;
          *(uint *)((int)puVar19 + param_5 + 4) =
               *(uint *)(&DAT_30033efc + iVar18) & uVar16 |
               *(uint *)(&DAT_30033f3c + iVar18) & uVar13;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
          break;
        case 9:
          *(undefined1 *)(((uint)param_2 >> 1) + param_8) = 1;
          uVar13 = local_5c[0][1];
          uVar16 = local_5c[0][2];
          uVar17 = local_5c[0][3];
          *local_18 = *local_5c[0];
          local_18[1] = uVar13;
          *(uint *)((int)local_18 + param_5) = uVar16;
          *(uint *)((int)local_18 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)local_18 + param_5 * 2);
          uVar13 = local_5c[0][5];
          uVar16 = local_5c[0][6];
          uVar17 = local_5c[0][7];
          *puVar19 = local_5c[0][4];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar13 = local_5c[0][9];
          uVar16 = local_5c[0][10];
          uVar17 = local_5c[0][0xb];
          *puVar19 = local_5c[0][8];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar13 = local_5c[0][0xd];
          uVar16 = local_5c[0][0xe];
          uVar17 = local_5c[0][0xf];
          *puVar19 = local_5c[0][0xc];
          puVar19[1] = uVar13;
          *(uint *)((int)puVar19 + param_5) = uVar16;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar17;
          local_5c[0] = local_5c[0] + 0x10;
          puVar19 = local_5c[0];
          pbVar21 = local_98[0];
        }
        param_2 = (uint *)((int)param_2 + param_9);
        local_18 = local_18 + 2;
        local_1c = local_1c + 2;
        uVar16 = local_2c;
        uVar13 = local_c;
      }
      if (param_9 == 1) {
        if ((uVar16 & 8) != 0) {
          param_8 = param_8 + local_60;
        }
      }
      else {
        param_8 = param_8 + local_60;
      }
      local_18 = (uint *)((int)local_18 + local_9c);
      local_1c = (uint *)((int)local_1c + local_9c);
      local_2c = uVar16 + 8;
      local_28 = 0;
    } while (local_2c < param_4);
  }
  return local_14;
}


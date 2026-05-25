/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ce50 @ 0x3001CE50 */


void FUN_3001ce50(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_134;
  byte *local_130;
  byte *local_12c;
  byte *local_124;
  uint local_120;
  uint local_11c;
  int local_118;
  ushort auStack_114 [2];
  undefined4 local_110 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  byte local_40 [6];
  byte local_3a [58];
  
  puVar9 = (uint *)*param_2;
  local_90 = param_2[1];
  uVar5 = param_2[2];
  uVar10 = param_2[3];
  auStack_114[1] = 0;
  puVar11 = local_110;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  bVar2 = (byte)uVar5;
  if (uVar10 < 4) {
    uVar5 = *puVar9 >> (4 - (byte)uVar10 & 0x1f);
    bVar2 = (char)*puVar9 << ((byte)uVar10 & 0x1f) | bVar2;
    uVar10 = uVar10 + 0x1c;
    puVar9 = puVar9 + 1;
  }
  else {
    uVar5 = uVar5 >> 4;
    uVar10 = uVar10 - 4;
  }
  bVar2 = bVar2 & 0xf;
  local_11c = (uint)bVar2;
  local_12c = local_3a;
  local_130 = local_40;
  local_120 = 1 << (bVar2 - 1 & 0x1f);
  if (1 < bVar2) {
    local_118 = local_11c - 1;
    do {
      local_11c = local_11c - 1;
      local_124 = local_130;
      pbVar12 = local_12c;
      if (local_130 < local_12c) {
        do {
          bVar3 = *local_124;
          if (bVar3 == 0) goto switchD_3001cf90_default;
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
            uVar6 = uVar5;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) goto switchD_3001cf90_default;
          bVar1 = (byte)local_11c;
          switch(bVar3 & 3) {
          case 0:
            *local_124 = (bVar3 & 0xfc) + 0x11;
            break;
          case 1:
            bVar3 = bVar3 & 0xfc;
            *local_124 = bVar3 + 2;
            *local_12c = bVar3 + 0x12;
            local_12c[1] = bVar3 + 0x22;
            local_12c[2] = bVar3 + 0x32;
            pbVar12 = local_12c + 3;
            local_12c = pbVar12;
            goto LAB_3001d3c7;
          case 2:
            *local_124 = 0;
            local_124 = local_124 + 1;
            break;
          case 3:
            local_134 = (uint)(bVar3 >> 2);
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
            *local_124 = 0;
            pbVar12 = local_12c;
          default:
switchD_3001cf90_default:
            local_124 = local_124 + 1;
            goto LAB_3001d3c7;
          }
          bVar3 = bVar3 >> 2;
          local_134 = (uint)bVar3;
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar6 = uVar5 >> 1;
            uVar10 = 0x1f;
          }
          else {
            uVar6 = uVar6 >> 2;
            uVar10 = uVar10 - 1;
          }
          if ((uVar5 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar6);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6;
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = bVar3 * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 1);
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 1) * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 2);
          if (uVar10 == 0) {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar6 = uVar5 >> 1;
          if ((uVar5 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar5 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar6);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar6;
              uVar5 = uVar6 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 2) * '\x04' + 3;
          }
          local_134 = (uint)(byte)(bVar3 + 3);
          if (uVar10 == 0) {
            uVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar10 = 0x1f;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar5 = uVar6 >> 1;
          if ((uVar6 & 1) == 0) {
            if (uVar10 < local_11c) {
              uVar6 = *puVar9 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar4 = 0x20 - local_11c;
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) &
                      ((ushort)(*puVar9 << ((byte)uVar10 & 0x1f)) | (ushort)uVar5);
              puVar9 = puVar9 + 1;
            }
            else {
              uVar8 = (ushort)(0xffffffff >> (0x20 - bVar1 & 0x1f)) & (ushort)uVar5;
              uVar6 = uVar5 >> (bVar1 & 0x1f);
              iVar4 = -local_11c;
            }
            uVar8 = uVar8 | (ushort)local_120;
            if (uVar10 + iVar4 == 0) {
              uVar6 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar10 = 0x1f;
            }
            else {
              uVar10 = (uVar10 + iVar4) - 1;
            }
            uVar5 = uVar6 >> 1;
            if ((uVar6 & 1) != 0) {
              uVar8 = -uVar8;
            }
            auStack_114[local_134] = uVar8;
            pbVar12 = local_12c;
          }
          else {
            local_130 = local_130 + -1;
            *local_130 = (bVar3 + 3) * '\x04' + 3;
            pbVar12 = local_12c;
          }
LAB_3001d3c7:
        } while (local_124 < pbVar12);
      }
      local_120 = (uint)(ushort)((short)(ushort)local_120 >> 1);
      local_118 = local_118 + -1;
    } while (local_118 != 0);
  }
  if ((bVar2 != 0) && (pbVar12 = local_12c, pbVar13 = local_130, local_130 < local_12c)) {
    do {
      bVar2 = *pbVar13;
      uVar6 = uVar5;
      if (bVar2 == 0) goto switchD_3001d447_default;
      if (uVar10 == 0) {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar7 = uVar5;
      }
      uVar5 = uVar7 >> 1;
      uVar6 = uVar5;
      if ((uVar7 & 1) == 0) goto switchD_3001d447_default;
      switch(bVar2 & 3) {
      case 0:
        *pbVar13 = (bVar2 & 0xfc) + 0x11;
        break;
      case 1:
        bVar2 = bVar2 & 0xfc;
        *pbVar13 = bVar2 + 2;
        *pbVar12 = bVar2 + 0x12;
        pbVar12[1] = bVar2 + 0x22;
        pbVar12[2] = bVar2 + 0x32;
        pbVar12 = pbVar12 + 3;
        local_12c = pbVar12;
        goto LAB_3001d6c2;
      case 2:
        *pbVar13 = 0;
        pbVar13 = pbVar13 + 1;
        break;
      case 3:
        local_134 = (uint)(bVar2 >> 2);
        if (uVar10 == 0) {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar6 = uVar5 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar6 = uVar7 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[local_134] = (-(ushort)((uVar5 & 1) != 0) & 0xfffe) + 1;
        *pbVar13 = 0;
      default:
switchD_3001d447_default:
        pbVar13 = pbVar13 + 1;
        uVar5 = uVar6;
        goto LAB_3001d6c2;
      }
      bVar2 = bVar2 >> 2;
      local_134 = (uint)bVar2;
      if (uVar10 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar7 = uVar5 >> 1;
        iVar4 = 0x1f;
      }
      else {
        uVar7 = uVar7 >> 2;
        iVar4 = uVar10 - 1;
      }
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar4 = 0x1f;
        }
        else {
          iVar4 = iVar4 + -1;
          uVar10 = uVar7;
        }
        uVar7 = uVar10 >> 1;
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = bVar2 * '\x04' + 3;
      }
      local_134 = (uint)(byte)(bVar2 + 1);
      if (iVar4 == 0) {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar7 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 1) * '\x04' + 3;
        uVar5 = uVar10;
      }
      local_134 = (uint)(byte)(bVar2 + 2);
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = 0x1f;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      uVar10 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        if (iVar4 == 0) {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar10 >> 1;
          iVar4 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          iVar4 = iVar4 + -1;
        }
        auStack_114[local_134] = (-(ushort)((uVar10 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 2) * '\x04' + 3;
        uVar5 = uVar10;
      }
      local_134 = (uint)(byte)(bVar2 + 3);
      if (iVar4 == 0) {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = iVar4 - 1;
      }
      uVar6 = uVar5 >> 1;
      pbVar12 = local_12c;
      if ((uVar5 & 1) == 0) {
        if (uVar10 == 0) {
          uVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar5 = uVar6 >> 1;
          uVar10 = 0x1f;
        }
        else {
          uVar5 = uVar5 >> 2;
          uVar10 = uVar10 - 1;
        }
        auStack_114[local_134] = (-(ushort)((uVar6 & 1) != 0) & 0xfffe) + 1;
      }
      else {
        local_130 = local_130 + -1;
        *local_130 = (bVar2 + 3) * '\x04' + 3;
        uVar5 = uVar6;
      }
LAB_3001d6c2:
    } while (pbVar13 < pbVar12);
  }
  *param_2 = (int)puVar9;
  param_2[1] = local_90;
  param_2[2] = uVar5;
  param_2[3] = uVar10;
  *(ushort *)(param_1 + 2) = auStack_114[1];
  *(undefined4 *)(param_1 + 4) = local_110[1];
  *(undefined4 *)(param_1 + 8) = local_110[3];
  *(undefined4 *)(param_1 + 0xc) = local_fc;
  *(undefined4 *)(param_1 + 0x10) = local_110[0];
  *(undefined4 *)(param_1 + 0x14) = local_110[2];
  *(undefined4 *)(param_1 + 0x18) = local_100;
  *(undefined4 *)(param_1 + 0x1c) = local_f8;
  *(undefined4 *)(param_1 + 0x20) = local_e4;
  *(undefined4 *)(param_1 + 0x24) = local_bc;
  *(undefined4 *)(param_1 + 0x28) = local_f4;
  *(undefined4 *)(param_1 + 0x2c) = local_ec;
  *(undefined4 *)(param_1 + 0x30) = local_e0;
  *(undefined4 *)(param_1 + 0x34) = local_b8;
  *(undefined4 *)(param_1 + 0x38) = local_f0;
  *(undefined4 *)(param_1 + 0x3c) = local_e8;
  *(undefined4 *)(param_1 + 0x40) = local_dc;
  *(undefined4 *)(param_1 + 0x44) = local_d4;
  *(undefined4 *)(param_1 + 0x48) = local_b4;
  *(undefined4 *)(param_1 + 0x4c) = local_ac;
  *(undefined4 *)(param_1 + 0x50) = local_d8;
  *(undefined4 *)(param_1 + 0x54) = local_d0;
  *(undefined4 *)(param_1 + 0x58) = local_b0;
  *(undefined4 *)(param_1 + 0x5c) = local_a8;
  *(undefined4 *)(param_1 + 0x60) = local_cc;
  *(undefined4 *)(param_1 + 100) = local_c4;
  *(undefined4 *)(param_1 + 0x68) = local_a4;
  *(undefined4 *)(param_1 + 0x6c) = local_9c;
  *(undefined4 *)(param_1 + 0x70) = local_c8;
  *(undefined4 *)(param_1 + 0x74) = local_c0;
  *(undefined4 *)(param_1 + 0x78) = local_a0;
  *(undefined4 *)(param_1 + 0x7c) = local_98;
  return;
}


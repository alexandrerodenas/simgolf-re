/* Ghidra decompiled: sound.dll */
/* Function: FUN_10026d30 @ 0x10026D30 */


int __cdecl FUN_10026d30(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  short sVar2;
  byte *pbVar3;
  undefined8 uVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  int local_30;
  uint local_2c;
  int local_20;
  int local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  
  bVar12 = 0;
  bVar5 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(uint *)(param_4 + 0x220);
    iVar10 = *(int *)(param_4 + 8);
    uVar14 = *(uint *)(param_4 + 0x1e8);
    uVar9 = *(uint *)(param_4 + 0x1f8);
    local_30 = param_4 + 0x1358;
    local_8 = *(uint *)(iVar10 + 0x20);
    if (local_8 < *(uint *)(iVar10 + 0x1c)) {
      local_8 = *(uint *)(iVar10 + 0x24);
    }
    local_c = *(byte **)(iVar10 + 0x18);
    bVar16 = local_8 == *(uint *)(iVar10 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar16)) {
      bVar5 = true;
    }
    goto LAB_10026e21;
  }
  uVar14 = *(uint *)(param_4 + 0x78);
  uVar9 = *(uint *)(param_4 + 0x68);
  local_30 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  bVar12 = *(byte *)(param_4 + 0x9c) & 1;
  if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
    if (!bVar16) {
      local_c = *(byte **)(param_4 + 0x18);
      goto LAB_10026e12;
    }
    local_c = *(byte **)(param_4 + 0xd8);
    local_8 = *(uint *)(param_4 + 0xd4);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(byte **)(local_1c + 0x18);
LAB_10026e12:
    local_8 = *(uint *)(param_4 + 0x20);
  }
  local_2c = *(uint *)(param_4 + 0x4c);
LAB_10026e21:
  if (uVar9 == 0x10000) {
    uVar9 = 0xffff;
  }
  if (uVar14 == 0x10000) {
    uVar14 = 0xffff;
  }
  uStack_4c = (uVar9 & 0xfffffffe) << 0xf | uVar14 >> 1 & 0xffff;
  puVar15 = (undefined8 *)*param_1;
  uVar4 = CONCAT44(uStack_4c,uStack_4c);
  iVar10 = param_3;
  pbVar13 = (byte *)*param_2;
  do {
    while( true ) {
      do {
        sVar6 = (ushort)*pbVar13 * 0x100 + -0x8000;
        if ((int)(pbVar13 + 1) < (int)local_8) {
          sVar7 = (ushort)pbVar13[1] * 0x100 + -0x8000;
          local_48 = CONCAT22(sVar7,sVar7);
        }
        else if (bVar16) {
          iVar11 = (int)pbVar13 - local_8;
          if ((int)pbVar13 < (int)local_8) {
            iVar11 = 0;
          }
          *(int *)(local_30 + 4) = iVar11;
          sVar7 = (ushort)local_c[iVar11] * 0x100 + -0x8000;
          local_48 = CONCAT22(sVar7,sVar7);
          *param_2 = (int)(local_c + iVar11);
          if (bVar5) {
            bVar16 = false;
          }
        }
        else {
          local_48 = 0;
        }
        sVar7 = *(short *)(local_30 + 2);
        sVar2 = *(short *)(local_30 + 2);
        puVar1 = (uint *)(local_30 + 2);
        uVar14 = *puVar1;
        *puVar1 = *puVar1 + local_2c;
        *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar14,local_2c);
        pbVar13 = (byte *)(*param_2 + *(int *)(local_30 + 4));
        local_20 = 4;
        iVar11 = iVar10 + -1;
        if (iVar11 != 0 && 0 < iVar10) {
          if ((int)pbVar13 < (int)local_8) {
            sVar8 = (ushort)*pbVar13 * 0x100 + -0x8000;
            uStack_4c = CONCAT22(sVar8,sVar8);
            if ((int)(pbVar13 + 1) < (int)local_8) {
              sVar8 = (ushort)pbVar13[1] * 0x100 + -0x8000;
              uStack_44 = CONCAT22(sVar8,sVar8);
            }
            else if (bVar16) {
              iVar11 = (int)(pbVar13 + 1) - local_8;
              if ((int)(pbVar13 + 1) < (int)local_8) {
                iVar11 = 0;
              }
              *(int *)(local_30 + 4) = iVar11;
              sVar8 = (ushort)local_c[iVar11] * 0x100 + -0x8000;
              uStack_44 = CONCAT22(sVar8,sVar8);
              *param_2 = (int)pbVar13;
              if (bVar5) {
                bVar16 = false;
              }
            }
            else {
              uStack_44 = 0;
            }
          }
          else if (bVar16) {
            iVar11 = (int)pbVar13 - local_8;
            if ((int)pbVar13 < (int)local_8) {
              iVar11 = 0;
            }
            *(int *)(local_30 + 4) = iVar11;
            pbVar13 = local_c + iVar11;
            sVar8 = (ushort)*pbVar13 * 0x100 + -0x8000;
            uStack_4c = CONCAT22(sVar8,sVar8);
            sVar8 = (ushort)pbVar13[1] * 0x100 + -0x8000;
            uStack_44 = CONCAT22(sVar8,sVar8);
            *param_2 = (int)pbVar13;
            if (bVar5) {
              bVar16 = false;
            }
          }
          else {
            uStack_4c = 0;
            uStack_44 = 0;
          }
          uStack_3c = CONCAT22(*(short *)(local_30 + 2) + -0x8000,*(short *)(local_30 + 2) + -0x8000
                              );
          puVar1 = (uint *)(local_30 + 2);
          uVar14 = *puVar1;
          *puVar1 = *puVar1 + local_2c;
          *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar14,local_2c);
          pbVar13 = (byte *)(*param_2 + *(int *)(local_30 + 4));
          local_20 = 8;
          iVar11 = iVar10 + -2;
        }
        uVar17 = CONCAT44(uStack_4c,CONCAT22(sVar6,sVar6));
        uVar18 = psubsw(CONCAT44(uStack_44,local_48),uVar17);
        uVar18 = pmulhw(uVar18,CONCAT44(uStack_3c,CONCAT22(sVar7 + -0x8000,sVar2 + -0x8000)));
        uVar17 = paddsw(uVar17,uVar18);
        uVar17 = pmulhw(uVar17,uVar4);
        uVar17 = psllw(uVar17,1);
        *puVar15 = uVar17;
        puVar15 = (undefined8 *)((int)puVar15 + local_20);
        if (iVar11 < 1) goto LAB_1002714e;
        iVar10 = iVar11;
      } while ((int)pbVar13 < (int)local_8);
      if (bVar12 == 0) break;
      local_14 = local_14 + 1;
      *(undefined4 *)(local_30 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar12 = 0;
        bVar16 = false;
        pbVar3 = local_c;
      }
      else {
        pbVar3 = *(byte **)(local_1c + 0xd8);
      }
      pbVar13 = local_c;
      local_c = pbVar3;
      if (iVar11 == 0) goto LAB_1002714e;
    }
    if (!bVar16) break;
    local_14 = local_14 + 1;
    *(uint *)(local_30 + 4) = (int)pbVar13 - local_8;
    *param_2 = (int)local_c;
    pbVar13 = local_c;
  } while (iVar11 != 0);
LAB_1002714e:
  iVar10 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)pbVar13;
  *param_1 = (int)puVar15;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar10;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - iVar11;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar10;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - iVar11;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10026800 @ 0x10026800 */


int __cdecl FUN_10026800(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  undefined4 uStack_3c;
  int local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_14;
  uint *local_c;
  uint local_8;
  
  bVar9 = 0;
  bVar5 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_28 = *(uint *)(param_4 + 0x220);
    iVar7 = *(int *)(param_4 + 8);
    uVar10 = *(uint *)(param_4 + 0x1e8);
    uVar6 = *(uint *)(param_4 + 0x1f8);
    local_2c = param_4 + 0x1358;
    local_8 = *(uint *)(iVar7 + 0x20);
    if (local_8 < *(uint *)(iVar7 + 0x1c)) {
      local_8 = *(uint *)(iVar7 + 0x24);
    }
    local_c = *(uint **)(iVar7 + 0x18);
    bVar13 = local_8 == *(uint *)(iVar7 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar13)) {
      bVar5 = true;
    }
    goto LAB_100268f1;
  }
  uVar10 = *(uint *)(param_4 + 0x78);
  uVar6 = *(uint *)(param_4 + 0x68);
  local_2c = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  bVar9 = *(byte *)(param_4 + 0x9c) & 1;
  if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
    if (!bVar13) {
      local_c = *(uint **)(param_4 + 0x18);
      goto LAB_100268e2;
    }
    local_c = *(uint **)(param_4 + 0xd8);
    local_8 = *(uint *)(param_4 + 0xd4);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(uint **)(local_1c + 0x18);
LAB_100268e2:
    local_8 = *(uint *)(param_4 + 0x20);
  }
  local_28 = *(uint *)(param_4 + 0x4c);
LAB_100268f1:
  if (uVar6 == 0x10000) {
    uVar6 = 0xffff;
  }
  if (uVar10 == 0x10000) {
    uVar10 = 0xffff;
  }
  uStack_4c = (uVar6 & 0xfffffffe) << 0xf | uVar10 >> 1 & 0xffff;
  puVar12 = (undefined8 *)*param_1;
  uVar4 = CONCAT44(uStack_4c,uStack_4c);
  iVar7 = param_3;
  puVar11 = (uint *)*param_2;
  do {
    while( true ) {
      do {
        uVar10 = *puVar11;
        if ((int)(puVar11 + 1) < (int)local_8) {
          local_48 = puVar11[1];
        }
        else if (bVar13) {
          iVar8 = (int)puVar11 - local_8;
          if ((int)puVar11 < (int)local_8) {
            iVar8 = 0;
          }
          *(int *)(local_2c + 4) = iVar8;
          local_48 = *(uint *)(iVar8 + (int)local_c);
          *param_2 = iVar8 + (int)local_c;
          if (bVar5) {
            bVar13 = false;
          }
        }
        else {
          local_48 = 0;
        }
        sVar1 = *(short *)(local_2c + 2);
        sVar2 = *(short *)(local_2c + 2);
        puVar11 = (uint *)(local_2c + 2);
        uVar6 = *puVar11;
        *puVar11 = *puVar11 + local_28;
        *(short *)(local_2c + 6) = *(short *)(local_2c + 6) + (ushort)CARRY4(uVar6,local_28);
        puVar11 = (uint *)(*param_2 + *(int *)(local_2c + 4) * 4);
        local_20 = 4;
        iVar8 = iVar7 + -1;
        if (iVar8 != 0 && 0 < iVar7) {
          if ((int)puVar11 < (int)local_8) {
            uStack_4c = *puVar11;
            if ((int)(puVar11 + 1) < (int)local_8) {
              uStack_44 = puVar11[1];
            }
            else if (bVar13) {
              iVar8 = (int)(puVar11 + 1) - local_8;
              if ((int)(puVar11 + 1) < (int)local_8) {
                iVar8 = 0;
              }
              *(int *)(local_2c + 4) = iVar8;
              uStack_44 = *(uint *)(iVar8 + (int)local_c);
              *param_2 = (int)puVar11;
              if (bVar5) {
                bVar13 = false;
              }
            }
            else {
              uStack_44 = 0;
            }
          }
          else if (bVar13) {
            iVar8 = (int)puVar11 - local_8;
            if ((int)puVar11 < (int)local_8) {
              iVar8 = 0;
            }
            *(int *)(local_2c + 4) = iVar8;
            puVar11 = (uint *)(iVar8 + (int)local_c);
            uStack_4c = *puVar11;
            uStack_44 = puVar11[1];
            *param_2 = (int)puVar11;
            if (bVar5) {
              bVar13 = false;
            }
          }
          else {
            uStack_4c = 0;
            uStack_44 = 0;
          }
          uStack_3c = CONCAT22(*(short *)(local_2c + 2) + -0x8000,*(short *)(local_2c + 2) + -0x8000
                              );
          puVar11 = (uint *)(local_2c + 2);
          uVar6 = *puVar11;
          *puVar11 = *puVar11 + local_28;
          *(short *)(local_2c + 6) = *(short *)(local_2c + 6) + (ushort)CARRY4(uVar6,local_28);
          puVar11 = (uint *)(*param_2 + *(int *)(local_2c + 4) * 4);
          local_20 = 8;
          iVar8 = iVar7 + -2;
        }
        uVar14 = psubsw(CONCAT44(uStack_44,local_48),CONCAT44(uStack_4c,uVar10));
        uVar14 = pmulhw(uVar14,CONCAT44(uStack_3c,CONCAT22(sVar1 + -0x8000,sVar2 + -0x8000)));
        uVar14 = paddsw(CONCAT44(uStack_4c,uVar10),uVar14);
        uVar14 = pmulhw(uVar14,uVar4);
        uVar14 = psllw(uVar14,1);
        *puVar12 = uVar14;
        puVar12 = (undefined8 *)((int)puVar12 + local_20);
        if (iVar8 < 1) goto LAB_10026b91;
        iVar7 = iVar8;
      } while ((int)puVar11 < (int)local_8);
      if (bVar9 == 0) break;
      local_14 = local_14 + 1;
      *(undefined4 *)(local_2c + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar9 = 0;
        bVar13 = false;
        puVar3 = local_c;
      }
      else {
        puVar3 = *(uint **)(local_1c + 0xd8);
      }
      puVar11 = local_c;
      local_c = puVar3;
      if (iVar8 == 0) goto LAB_10026b91;
    }
    if (!bVar13) break;
    local_14 = local_14 + 1;
    *(uint *)(local_2c + 4) = (int)puVar11 - local_8;
    *param_2 = (int)local_c;
    puVar11 = local_c;
  } while (iVar8 != 0);
LAB_10026b91:
  iVar7 = *(int *)(local_2c + 4);
  *(undefined4 *)(local_2c + 4) = 0;
  *param_2 = (int)puVar11;
  *param_1 = (int)puVar12;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + (param_3 - iVar8);
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - iVar8;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar7;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - iVar8;
}


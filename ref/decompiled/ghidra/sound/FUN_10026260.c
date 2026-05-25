/* Ghidra decompiled: sound.dll */
/* Function: FUN_10026260 @ 0x10026260 */


int __cdecl FUN_10026260(int *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_20;
  int local_1c;
  int local_14;
  undefined2 *local_c;
  uint local_8;
  
  local_30 = 0;
  bVar9 = 0;
  bVar7 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(uint *)(param_4 + 0x220);
    uVar13 = *(uint *)(param_4 + 0x1e8);
    uVar10 = *(uint *)(param_4 + 0x1f8);
    iVar8 = *(int *)(param_4 + 8);
    local_34 = param_4 + 0x1358;
    local_8 = *(uint *)(iVar8 + 0x20);
    if (local_8 < *(uint *)(iVar8 + 0x1c)) {
      local_8 = *(uint *)(iVar8 + 0x24);
    }
    local_c = *(undefined2 **)(iVar8 + 0x18);
    bVar15 = local_8 == *(uint *)(iVar8 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar15)) {
      bVar7 = true;
    }
    goto LAB_10026374;
  }
  bVar1 = *(byte *)(param_4 + 0x9c);
  uVar13 = *(uint *)(param_4 + 0x78);
  uVar10 = *(uint *)(param_4 + 0x68);
  if ((bVar1 & 8) != 0) {
    local_30 = *(uint *)(param_4 + 0xec) / param_3;
  }
  local_34 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar1 & 2) != 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  bVar9 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    if (!bVar15) {
      local_c = *(undefined2 **)(param_4 + 0x18);
      goto LAB_10026365;
    }
    local_c = *(undefined2 **)(param_4 + 0xd8);
    local_8 = *(uint *)(param_4 + 0xd4);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(undefined2 **)(local_1c + 0x18);
LAB_10026365:
    local_8 = *(uint *)(param_4 + 0x20);
  }
  local_2c = *(uint *)(param_4 + 0x4c);
LAB_10026374:
  if (uVar10 == 0x10000) {
    uVar10 = 0xffff;
  }
  if (uVar13 == 0x10000) {
    uVar13 = 0xffff;
  }
  uVar13 = (uVar10 & 0xfffffffe) << 0xf | uVar13 >> 1 & 0xffff;
  puVar14 = (undefined8 *)*param_1;
  uVar18 = CONCAT44(uVar13,uVar13);
  uStack_50 = local_30;
  uVar19 = packssdw(CONCAT44(local_30,local_30),CONCAT44(local_30,local_30));
  uVar13 = param_3;
  puVar11 = (undefined2 *)*param_2;
  do {
    while( true ) {
      do {
        uVar2 = *puVar11;
        uVar3 = *puVar11;
        puVar6 = puVar11 + 1;
        if ((int)puVar6 < (int)local_8) {
          local_4c = CONCAT22(*puVar6,*puVar6);
        }
        else if (bVar15) {
          iVar8 = (int)puVar11 - local_8;
          if ((int)puVar11 < (int)local_8) {
            iVar8 = 0;
          }
          *(int *)(local_34 + 4) = iVar8;
          puVar11 = (undefined2 *)(iVar8 + (int)local_c);
          local_4c = CONCAT22(*puVar11,*puVar11);
          *param_2 = (int)puVar11;
          if (bVar7) {
            bVar15 = false;
          }
        }
        else {
          local_4c = 0;
        }
        sVar4 = *(short *)(local_34 + 2);
        sVar5 = *(short *)(local_34 + 2);
        puVar12 = (uint *)(local_34 + 2);
        uVar10 = *puVar12;
        *puVar12 = *puVar12 + local_2c;
        *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar10,local_2c);
        puVar11 = (undefined2 *)(*param_2 + *(int *)(local_34 + 4) * 2);
        local_20 = 4;
        uVar10 = uVar13 - 1;
        if (uVar10 != 0 && 0 < (int)uVar13) {
          if ((int)puVar11 < (int)local_8) {
            uStack_50 = CONCAT22(*puVar11,*puVar11);
            if ((int)(puVar11 + 1) < (int)local_8) {
              uStack_48 = CONCAT22(puVar11[1],puVar11[1]);
            }
            else if (bVar15) {
              iVar8 = (int)(puVar11 + 2) - local_8;
              if ((int)(puVar11 + 2) < (int)local_8) {
                iVar8 = 0;
              }
              *(int *)(local_34 + 4) = iVar8;
              uStack_48 = *(undefined4 *)(iVar8 + (int)local_c);
              *param_2 = (int)puVar11;
              if (bVar7) {
                bVar15 = false;
              }
            }
            else {
              uStack_48 = 0;
            }
          }
          else if (bVar15) {
            iVar8 = (int)puVar11 - local_8;
            if ((int)puVar11 < (int)local_8) {
              iVar8 = 0;
            }
            *(int *)(local_34 + 4) = iVar8;
            puVar12 = (uint *)(iVar8 + (int)local_c);
            uStack_50 = *puVar12;
            uStack_48 = CONCAT22(*(undefined2 *)((int)puVar12 + 2),*(undefined2 *)((int)puVar12 + 2)
                                );
            *param_2 = (int)puVar12;
            if (bVar7) {
              bVar15 = false;
            }
          }
          else {
            uStack_50 = 0;
            uStack_48 = 0;
          }
          uStack_40 = CONCAT22(*(short *)(local_34 + 2) + -0x8000,*(short *)(local_34 + 2) + -0x8000
                              );
          puVar12 = (uint *)(local_34 + 2);
          uVar10 = *puVar12;
          *puVar12 = *puVar12 + local_2c;
          *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar10,local_2c);
          puVar11 = (undefined2 *)(*param_2 + *(int *)(local_34 + 4) * 2);
          local_20 = 8;
          uVar10 = uVar13 - 2;
        }
        uVar16 = CONCAT44(uStack_50,CONCAT22(uVar2,uVar3));
        uVar17 = psubsw(CONCAT44(uStack_48,local_4c),uVar16);
        uVar17 = pmulhw(uVar17,CONCAT44(uStack_40,CONCAT22(sVar4 + -0x8000,sVar5 + -0x8000)));
        uVar16 = paddsw(uVar16,uVar17);
        uVar16 = pmulhw(uVar16,uVar18);
        uVar16 = psllw(uVar16,1);
        *puVar14 = uVar16;
        uVar18 = psubusw(uVar18,uVar19);
        puVar14 = (undefined8 *)((int)puVar14 + local_20);
        if ((int)uVar10 < 1) goto LAB_10026654;
        uVar13 = uVar10;
      } while ((int)puVar11 < (int)local_8);
      if (bVar9 == 0) break;
      local_14 = local_14 + 1;
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar9 = 0;
        bVar15 = false;
        puVar6 = local_c;
      }
      else {
        puVar6 = *(undefined2 **)(local_1c + 0xd8);
      }
      puVar11 = local_c;
      local_c = puVar6;
      if (uVar10 == 0) goto LAB_10026654;
    }
    if (!bVar15) break;
    local_14 = local_14 + 1;
    *(uint *)(local_34 + 4) = (int)puVar11 - local_8;
    *param_2 = (int)local_c;
    puVar11 = local_c;
  } while (uVar10 != 0);
LAB_10026654:
  iVar8 = *(int *)(local_34 + 4);
  *(undefined4 *)(local_34 + 4) = 0;
  *param_2 = (int)puVar11;
  *param_1 = (int)puVar14;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar8;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - uVar10;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar8;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - uVar10;
}


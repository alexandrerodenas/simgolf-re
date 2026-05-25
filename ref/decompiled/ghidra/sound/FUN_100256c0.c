/* Ghidra decompiled: sound.dll */
/* Function: FUN_100256c0 @ 0x100256C0 */


int __cdecl FUN_100256c0(undefined4 *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined2 *puVar7;
  bool bVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  undefined2 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  int local_34;
  int local_30;
  uint local_2c;
  int local_20;
  int local_1c;
  int local_14;
  undefined2 *local_c;
  uint local_8;
  
  local_30 = 0;
  bVar10 = 0;
  bVar8 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(uint *)(param_4 + 0x220);
    uVar14 = *(uint *)(param_4 + 0x1e8);
    uVar11 = *(uint *)(param_4 + 0x1f8);
    iVar9 = *(int *)(param_4 + 8);
    local_34 = param_4 + 0x1358;
    local_8 = *(uint *)(iVar9 + 0x20);
    if (local_8 < *(uint *)(iVar9 + 0x1c)) {
      local_8 = *(uint *)(iVar9 + 0x24);
    }
    local_c = *(undefined2 **)(iVar9 + 0x18);
    bVar16 = local_8 == *(uint *)(iVar9 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar16)) {
      bVar8 = true;
    }
    goto LAB_100257d5;
  }
  bVar2 = *(byte *)(param_4 + 0x9c);
  uVar14 = *(uint *)(param_4 + 0x78);
  uVar11 = *(uint *)(param_4 + 0x68);
  if ((bVar2 & 8) != 0) {
    local_30 = *(uint *)(param_4 + 0xec) / param_3 + 1;
  }
  local_34 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar2 & 2) != 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  bVar10 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if (!bVar16) {
      local_c = *(undefined2 **)(param_4 + 0x18);
      goto LAB_100257c6;
    }
    local_c = *(undefined2 **)(param_4 + 0xd8);
    local_8 = *(uint *)(param_4 + 0xd4);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(undefined2 **)(local_1c + 0x18);
LAB_100257c6:
    local_8 = *(uint *)(param_4 + 0x20);
  }
  local_2c = *(uint *)(param_4 + 0x4c);
LAB_100257d5:
  if (uVar11 == 0x10000) {
    uVar11 = 0xffff;
  }
  if (uVar14 == 0x10000) {
    uVar14 = 0xffff;
  }
  uVar14 = (uVar11 & 0xfffffffe) << 0xf | uVar14 >> 1 & 0xffff;
  puVar15 = (undefined8 *)*param_1;
  uVar19 = CONCAT44(uVar14,uVar14);
  iStack_50 = local_30;
  uVar20 = packssdw(CONCAT44(local_30,local_30),CONCAT44(local_30,local_30));
  uVar14 = param_3;
  puVar12 = (undefined2 *)*param_2;
  do {
    while( true ) {
      do {
        uVar3 = *puVar12;
        uVar4 = *puVar12;
        puVar7 = puVar12 + 1;
        if ((int)puVar7 < (int)local_8) {
          local_4c = CONCAT22(*puVar7,*puVar7);
        }
        else if (bVar16) {
          iVar9 = (int)puVar12 - local_8;
          if ((int)puVar12 < (int)local_8) {
            iVar9 = 0;
          }
          *(int *)(local_34 + 4) = iVar9;
          puVar12 = (undefined2 *)(iVar9 + (int)local_c);
          local_4c = CONCAT22(*puVar12,*puVar12);
          *param_2 = (int)puVar12;
          if (bVar8) {
            bVar16 = false;
          }
        }
        else {
          local_4c = 0;
        }
        sVar5 = *(short *)(local_34 + 2);
        sVar6 = *(short *)(local_34 + 2);
        puVar1 = (uint *)(local_34 + 2);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 + local_2c;
        *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar11,local_2c);
        puVar12 = (undefined2 *)(*param_2 + *(int *)(local_34 + 4) * 2);
        local_20 = 4;
        uVar11 = uVar14 - 1;
        if (uVar11 != 0 && 0 < (int)uVar14) {
          if ((int)puVar12 < (int)local_8) {
            iStack_50 = CONCAT22(*puVar12,*puVar12);
            if ((int)(puVar12 + 1) < (int)local_8) {
              uStack_48 = CONCAT22(puVar12[1],puVar12[1]);
            }
            else if (bVar16) {
              iVar9 = (int)(puVar12 + 2) - local_8;
              if ((int)(puVar12 + 2) < (int)local_8) {
                iVar9 = 0;
              }
              *(int *)(local_34 + 4) = iVar9;
              uStack_48 = *(undefined4 *)(iVar9 + (int)local_c);
              *param_2 = (int)puVar12;
              if (bVar8) {
                bVar16 = false;
              }
            }
            else {
              uStack_48 = 0;
            }
          }
          else if (bVar16) {
            iVar9 = (int)puVar12 - local_8;
            if ((int)puVar12 < (int)local_8) {
              iVar9 = 0;
            }
            *(int *)(local_34 + 4) = iVar9;
            piVar13 = (int *)(iVar9 + (int)local_c);
            iStack_50 = *piVar13;
            uStack_48 = CONCAT22(*(undefined2 *)((int)piVar13 + 2),*(undefined2 *)((int)piVar13 + 2)
                                );
            *param_2 = (int)piVar13;
            if (bVar8) {
              bVar16 = false;
            }
          }
          else {
            iStack_50 = 0;
            uStack_48 = 0;
          }
          uStack_40 = CONCAT22(*(short *)(local_34 + 2) + -0x8000,*(short *)(local_34 + 2) + -0x8000
                              );
          puVar1 = (uint *)(local_34 + 2);
          uVar11 = *puVar1;
          *puVar1 = *puVar1 + local_2c;
          *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar11,local_2c);
          puVar12 = (undefined2 *)(*param_2 + *(int *)(local_34 + 4) * 2);
          local_20 = 8;
          uVar11 = uVar14 - 2;
        }
        uVar17 = CONCAT44(iStack_50,CONCAT22(uVar3,uVar4));
        uVar18 = psubsw(CONCAT44(uStack_48,local_4c),uVar17);
        uVar18 = pmulhw(uVar18,CONCAT44(uStack_40,CONCAT22(sVar5 + -0x8000,sVar6 + -0x8000)));
        uVar17 = paddsw(uVar17,uVar18);
        uVar17 = pmulhw(uVar17,uVar19);
        uVar17 = psllw(uVar17,1);
        uVar17 = paddsw(uVar17,*puVar15);
        *puVar15 = uVar17;
        uVar19 = psubusw(uVar19,uVar20);
        puVar15 = (undefined8 *)((int)puVar15 + local_20);
        if ((int)uVar11 < 1) goto LAB_10025ab8;
        uVar14 = uVar11;
      } while ((int)puVar12 < (int)local_8);
      if (bVar10 == 0) break;
      local_14 = local_14 + 1;
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar10 = 0;
        bVar16 = false;
        puVar7 = local_c;
      }
      else {
        puVar7 = *(undefined2 **)(local_1c + 0xd8);
      }
      puVar12 = local_c;
      local_c = puVar7;
      if (uVar11 == 0) goto LAB_10025ab8;
    }
    if (!bVar16) break;
    local_14 = local_14 + 1;
    *(uint *)(local_34 + 4) = (int)puVar12 - local_8;
    *param_2 = (int)local_c;
    puVar12 = local_c;
  } while (uVar11 != 0);
LAB_10025ab8:
  iVar9 = *(int *)(local_34 + 4);
  *(undefined4 *)(local_34 + 4) = 0;
  *param_2 = (int)puVar12;
  *param_1 = puVar15;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar9;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - uVar11;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar9;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - uVar11;
}


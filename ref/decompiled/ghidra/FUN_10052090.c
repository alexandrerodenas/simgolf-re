/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10052090 @ 0x10052090 */
/* Body size: 834 addresses */


undefined4 __cdecl
FUN_10052090(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = *(undefined1 **)(param_5 + 0x30);
  uVar6 = *(uint *)(param_5 + 0x20);
  local_14 = param_6[1];
  pbVar9 = (byte *)*param_6;
  uVar5 = *(uint *)(param_5 + 0x1c);
  if (local_10 < *(undefined1 **)(param_5 + 0x2c)) {
    local_c = *(undefined1 **)(param_5 + 0x2c) + (-1 - (int)local_10);
  }
  else {
    local_c = (undefined1 *)(*(int *)(param_5 + 0x28) - (int)local_10);
  }
  uVar3 = *(uint *)(&DAT_10057ac0 + param_1 * 4);
  uVar4 = *(uint *)(&DAT_10057ac0 + param_2 * 4);
  do {
    for (; uVar5 < 0x14; uVar5 = uVar5 + 8) {
      local_14 = local_14 - 1;
      uVar6 = uVar6 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
      pbVar9 = pbVar9 + 1;
    }
    bVar2 = *(byte *)(param_3 + (uVar3 & uVar6) * 8);
    uVar8 = (uint)bVar2;
    iVar13 = param_3 + (uVar3 & uVar6) * 8;
    if (uVar8 == 0) {
LAB_100522c4:
      uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      *local_10 = *(undefined1 *)(iVar13 + 4);
      local_10 = local_10 + 1;
      local_c = local_c + -1;
    }
    else {
      uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      while ((bVar2 & 0x10) == 0) {
        if ((uVar8 & 0x40) != 0) {
          if ((uVar8 & 0x20) != 0) {
            *(uint *)(param_5 + 0x20) = uVar6;
            iVar10 = (int)pbVar9 - (uVar5 >> 3);
            *(uint *)(param_5 + 0x1c) = uVar5 & 7;
            iVar13 = *param_6;
            param_6[1] = (uVar5 >> 3) + local_14;
            *param_6 = iVar10;
            param_6[2] = param_6[2] + (iVar10 - iVar13);
            *(undefined1 **)(param_5 + 0x30) = local_10;
            return 1;
          }
          param_6[6] = (int)s_invalid_literal_length_code_10057aa4;
          goto LAB_10052391;
        }
        iVar10 = uVar8 * 4;
        bVar2 = *(byte *)(*(int *)(iVar13 + 4) + (*(uint *)(&DAT_10057ac0 + iVar10) & uVar6) * 8);
        uVar8 = (uint)bVar2;
        iVar13 = *(int *)(iVar13 + 4) + (*(uint *)(&DAT_10057ac0 + iVar10) & uVar6) * 8;
        if (uVar8 == 0) goto LAB_100522c4;
        uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
        uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      }
      uVar8 = uVar8 & 0xf;
      param_1 = (*(uint *)(&DAT_10057ac0 + uVar8 * 4) & uVar6) + *(int *)(iVar13 + 4);
      uVar7 = uVar6 >> (sbyte)uVar8;
      for (uVar5 = uVar5 - uVar8; uVar5 < 0xf; uVar5 = uVar5 + 8) {
        local_14 = local_14 - 1;
        uVar7 = uVar7 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      iVar13 = param_4 + (uVar4 & uVar7) * 8;
      uVar6 = uVar7 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      bVar2 = *(byte *)(param_4 + (uVar4 & uVar7) * 8);
      while ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          param_6[6] = (int)s_invalid_distance_code_10057a8c;
LAB_10052391:
          *(uint *)(param_5 + 0x20) = uVar6;
          iVar10 = (int)pbVar9 - (uVar5 >> 3);
          *(uint *)(param_5 + 0x1c) = uVar5 & 7;
          iVar13 = *param_6;
          param_6[1] = (uVar5 >> 3) + local_14;
          *param_6 = iVar10;
          param_6[2] = param_6[2] + (iVar10 - iVar13);
          *(undefined1 **)(param_5 + 0x30) = local_10;
          return 0xfffffffd;
        }
        piVar1 = (int *)(iVar13 + 4);
        uVar8 = *(uint *)(&DAT_10057ac0 + (uint)bVar2 * 4) & uVar6;
        iVar13 = *piVar1 + uVar8 * 8;
        uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
        uVar5 = uVar5 - *(byte *)(iVar13 + 1);
        bVar2 = *(byte *)(*piVar1 + uVar8 * 8);
      }
      uVar8 = bVar2 & 0xf;
      for (; uVar5 < uVar8; uVar5 = uVar5 + 8) {
        local_14 = local_14 - 1;
        uVar6 = uVar6 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      uVar7 = (*(uint *)(&DAT_10057ac0 + uVar8 * 4) & uVar6) + *(int *)(iVar13 + 4);
      uVar6 = uVar6 >> (sbyte)uVar8;
      uVar5 = uVar5 - uVar8;
      local_c = local_c + -param_1;
      if ((uint)((int)local_10 - *(int *)(param_5 + 0x24)) < uVar7) {
        uVar7 = (*(int *)(param_5 + 0x24) - (int)local_10) + uVar7;
        puVar12 = (undefined1 *)(*(int *)(param_5 + 0x28) - uVar7);
        if (uVar7 < param_1) {
          param_1 = param_1 - uVar7;
          do {
            *local_10 = *puVar12;
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          puVar12 = *(undefined1 **)(param_5 + 0x24);
        }
      }
      else {
        puVar11 = local_10 + -uVar7;
        *local_10 = *puVar11;
        puVar12 = puVar11 + 2;
        local_10[1] = puVar11[1];
        param_1 = param_1 - 2;
        local_10 = local_10 + 2;
      }
      do {
        *local_10 = *puVar12;
        local_10 = local_10 + 1;
        puVar12 = puVar12 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if ((local_c < (undefined1 *)0x102) || (local_14 < 10)) {
      *(uint *)(param_5 + 0x20) = uVar6;
      iVar10 = (int)pbVar9 - (uVar5 >> 3);
      *(uint *)(param_5 + 0x1c) = uVar5 & 7;
      iVar13 = *param_6;
      param_6[1] = (uVar5 >> 3) + local_14;
      *param_6 = iVar10;
      param_6[2] = param_6[2] + (iVar10 - iVar13);
      *(undefined1 **)(param_5 + 0x30) = local_10;
      return 0;
    }
  } while( true );
}


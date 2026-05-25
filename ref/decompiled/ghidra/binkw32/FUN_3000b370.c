/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b370 @ 0x3000B370 */


void __cdecl FUN_3000b370(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  sbyte sVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  uint *local_28;
  int *local_14;
  short *local_c;
  uint local_8;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar9 = param_1[10];
  puVar10 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  bVar3 = (byte)uVar9;
  if (uVar11 < uVar9) {
    uVar12 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & (*puVar10 << ((byte)uVar11 & 0x1f) | uVar8);
    uVar8 = *puVar10 >> (bVar3 - (byte)uVar11 & 0x1f);
    iVar6 = 0x20 - uVar9;
    puVar10 = puVar10 + 1;
  }
  else {
    uVar12 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & uVar8;
    uVar8 = uVar8 >> (bVar3 & 0x1f);
    iVar6 = -uVar9;
  }
  uVar11 = uVar11 + iVar6;
  local_c = (short *)param_1[0xb];
  if (uVar12 == 0) {
    *param_1 = (int)(local_c + 2);
    param_1[1] = (int)local_c;
    goto LAB_3000b67d;
  }
  uVar9 = param_1[2];
  bVar3 = (byte)uVar9;
  bVar5 = (byte)uVar11;
  local_28 = puVar10;
  if (param_1[3] == 0) {
    if (uVar11 < uVar9) {
      local_8 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & 0xffff;
      local_8 = local_8 & (*puVar10 << (bVar5 & 0x1f) | uVar8);
      uVar8 = *puVar10 >> (bVar3 - bVar5 & 0x1f);
      uVar11 = uVar11 + (0x20 - uVar9);
      local_28 = puVar10 + 1;
    }
    else {
      local_8 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar3 & 0x1f);
      uVar11 = uVar11 - uVar9;
    }
LAB_3000b515:
  }
  else {
    if (uVar11 < uVar9 - 1) {
      local_8 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & 0xffff;
      local_8 = local_8 & (*puVar10 << (bVar5 & 0x1f) | uVar8);
      uVar8 = *puVar10 >> ((bVar3 - bVar5) - 1 & 0x1f);
      iVar6 = 0x21 - uVar9;
      local_28 = puVar10 + 1;
    }
    else {
      local_8 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar3 - 1 & 0x1f);
      iVar6 = 1 - uVar9;
    }
    uVar11 = uVar11 + iVar6;
    if ((short)local_8 != 0) {
      if (uVar11 == 0) {
        uVar9 = *local_28;
        local_28 = local_28 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        local_8 = -local_8;
        goto LAB_3000b515;
      }
    }
  }
  *local_c = (short)local_8;
  local_c = local_c + 1;
  *param_1 = param_1[0xb];
  param_1[1] = param_1[0xb] + uVar12 * 2;
  puVar10 = local_28;
  for (piVar7 = (int *)(uVar12 - 1); piVar7 != (int *)0x0;
      piVar7 = (int *)((int)piVar7 - (int)param_1)) {
    param_1 = (int *)0x8;
    if (piVar7 < (int *)0x9) {
      param_1 = piVar7;
    }
    if (uVar11 < 4) {
      uVar9 = *puVar10 >> (4 - (byte)uVar11 & 0x1f);
      uVar8 = *puVar10 << ((byte)uVar11 & 0x1f) | uVar8;
      uVar11 = uVar11 + 0x1c;
      puVar10 = puVar10 + 1;
      local_28 = puVar10;
    }
    else {
      uVar9 = uVar8 >> 4;
      uVar11 = uVar11 - 4;
    }
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 0) {
      psVar13 = local_c;
      for (uVar8 = (uint)param_1 & 0x7fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(uint *)psVar13 = CONCAT22((short)local_8,(short)local_8);
        psVar13 = psVar13 + 2;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *psVar13 = (short)local_8;
        psVar13 = psVar13 + 1;
      }
      local_c = local_c + (int)param_1;
      puVar10 = local_28;
    }
    else if (param_1 != (int *)0x0) {
      local_14 = param_1;
      do {
        sVar4 = (sbyte)uVar8;
        if (uVar11 < uVar8) {
          uVar12 = *puVar10 << ((byte)uVar11 & 0x1f) | uVar9;
          uVar9 = *puVar10 >> (sVar4 - (byte)uVar11 & 0x1f);
          uVar12 = 0xffffffffU >> (0x20U - sVar4 & 0x1f) & uVar12;
          iVar6 = 0x20 - uVar8;
          puVar10 = local_28 + 1;
          local_28 = puVar10;
        }
        else {
          uVar12 = 0xffffffffU >> (0x20U - sVar4 & 0x1f) & uVar9;
          uVar9 = uVar9 >> sVar4;
          iVar6 = -uVar8;
        }
        uVar11 = uVar11 + iVar6;
        if ((short)uVar12 != 0) {
          if (uVar11 == 0) {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar11 = 0x1f;
            local_28 = puVar10;
          }
          else {
            uVar11 = uVar11 - 1;
            uVar2 = uVar9;
          }
          uVar9 = uVar2 >> 1;
          if ((uVar2 & 1) != 0) {
            uVar12 = -uVar12;
          }
        }
        local_8 = local_8 + uVar12;
        *local_c = (short)local_8;
        local_c = local_c + 1;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
    }
    uVar8 = uVar9;
  }
LAB_3000b67d:
  *param_2 = (int)puVar10;
  param_2[1] = iVar1;
  param_2[2] = uVar8;
  param_2[3] = uVar11;
  return;
}


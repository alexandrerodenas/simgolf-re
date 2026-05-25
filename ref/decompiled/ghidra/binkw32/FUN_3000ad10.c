/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ad10 @ 0x3000AD10 */


void __cdecl FUN_3000ad10(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_14;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar1 = param_2[1];
    uVar10 = param_2[2];
    uVar8 = param_1[10];
    uVar11 = param_2[3];
    bVar7 = (byte)uVar8;
    if (uVar11 < uVar8) {
      local_14 = 0xffffffffU >> (0x20 - bVar7 & 0x1f) &
                 (*local_10 << ((byte)uVar11 & 0x1f) | uVar10);
      iVar4 = 0x20 - uVar8;
      uVar10 = *local_10 >> (bVar7 - (byte)uVar11 & 0x1f);
      local_10 = local_10 + 1;
    }
    else {
      local_14 = 0xffffffffU >> (0x20 - bVar7 & 0x1f) & uVar10;
      uVar10 = uVar10 >> (bVar7 & 0x1f);
      iVar4 = -uVar8;
    }
    uVar11 = uVar11 + iVar4;
    if (local_14 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
      puVar9 = local_10;
    }
    else {
      puVar12 = (uint *)param_1[0xb];
      *param_1 = (int)puVar12;
      param_1[1] = (int)((int)puVar12 + local_14);
      if (uVar11 == 0) {
        uVar8 = *local_10;
        local_10 = local_10 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar8 = uVar10;
      }
      uVar10 = uVar8 >> 1;
      if ((uVar8 & 1) == 0) {
        uVar8 = param_1[8];
        iVar4 = param_1[9];
        puVar9 = local_10;
        do {
          cVar2 = (char)uVar8;
          if (uVar11 < uVar8) {
            uVar6 = *puVar9;
            bVar7 = *(byte *)((0xffffffffU >> (0x20U - cVar2 & 0x1f) &
                              (uVar6 << ((byte)uVar11 & 0x1f) | uVar10)) + iVar4);
            *(byte *)puVar12 = *(byte *)((bVar7 & 0xf) + 0x10 + (int)param_1);
            bVar7 = bVar7 >> 4;
            uVar5 = (uint)bVar7;
            if (uVar11 < uVar5) {
              uVar10 = uVar6 >> (bVar7 - (byte)uVar11 & 0x1f);
              uVar11 = uVar11 + (0x20 - uVar5);
              puVar9 = local_10 + 1;
              local_10 = puVar9;
            }
            else {
              uVar10 = uVar10 >> bVar7;
              uVar11 = uVar11 - uVar5;
              puVar9 = local_10;
            }
          }
          else {
            bVar7 = *(byte *)((0xffffffffU >> (0x20U - cVar2 & 0x1f) & uVar10) + iVar4);
            bVar3 = bVar7 >> 4;
            *(byte *)puVar12 = *(byte *)((bVar7 & 0xf) + 0x10 + (int)param_1);
            uVar10 = uVar10 >> bVar3;
            uVar11 = uVar11 - bVar3;
          }
          puVar12 = (uint *)((int)puVar12 + 1);
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
      else {
        if (uVar11 < 4) {
          uVar8 = *local_10;
          bVar7 = (byte)uVar11;
          uVar6 = uVar8 << (bVar7 & 0x1f) | uVar10;
          uVar11 = uVar11 + 0x1c;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> (4 - bVar7 & 0x1f);
        }
        else {
          uVar11 = uVar11 - 4;
          uVar8 = uVar8 >> 5;
          uVar6 = uVar10;
        }
        uVar10 = uVar8;
        bVar7 = (byte)uVar6;
        for (uVar8 = local_14 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7)) & 0xf0f0f0f;
          puVar12 = puVar12 + 1;
        }
        for (local_14 = local_14 & 3; puVar9 = local_10, local_14 != 0; local_14 = local_14 - 1) {
          *(byte *)puVar12 = bVar7 & 0xf;
          puVar12 = (uint *)((int)puVar12 + 1);
        }
      }
    }
    *param_2 = (int)puVar9;
    param_2[1] = iVar1;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
  }
  return;
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000aa30 @ 0x3000AA30 */


void __cdecl FUN_3000aa30(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint local_24;
  byte *local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar4 = param_2[1];
    uVar9 = param_2[2];
    uVar13 = param_2[3];
    uVar6 = param_1[10];
    bVar1 = (byte)uVar6;
    if (uVar13 < uVar6) {
      uVar12 = *local_10 >> (bVar1 - (byte)uVar13 & 0x1f);
      local_24 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & (*local_10 << ((byte)uVar13 & 0x1f) | uVar9)
      ;
      iVar7 = 0x20 - uVar6;
      local_10 = local_10 + 1;
    }
    else {
      local_24 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & uVar9;
      uVar12 = uVar9 >> (bVar1 & 0x1f);
      iVar7 = -uVar6;
    }
    uVar13 = uVar13 + iVar7;
    local_18 = (byte *)param_1[0xb];
    if (local_24 == 0) {
      *param_1 = (int)(local_18 + 4);
      param_1[1] = (int)local_18;
    }
    else {
      param_1[1] = (int)(local_18 + local_24);
      uVar9 = param_1[8];
      *param_1 = (int)local_18;
      iVar7 = param_1[9];
      uVar6 = *(uint *)(param_3 + 0x180);
      if (uVar13 == 0) {
        uVar10 = *local_10;
        local_10 = local_10 + 1;
        uVar13 = 0x1f;
      }
      else {
        uVar13 = uVar13 - 1;
        uVar10 = uVar12;
      }
      uVar12 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        local_24 = -local_24 - 0x14;
      }
      do {
        uVar10 = *(uint *)(param_3 + 0x100 + uVar6 * 4);
        cVar5 = (char)uVar10;
        if (uVar13 < uVar10) {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) &
                             (*local_10 << ((byte)uVar13 & 0x1f) | uVar12)) +
                            *(int *)(param_3 + 0x140 + uVar6 * 4));
          bVar1 = *(byte *)(uVar6 * 0x10 + param_3 + (bVar11 & 0xf));
          bVar11 = bVar11 >> 4;
          uVar6 = (uint)bVar11;
          if (uVar13 < uVar6) {
            uVar12 = *local_10 >> (bVar11 - (byte)uVar13 & 0x1f);
            iVar8 = 0x20 - uVar6;
            local_10 = local_10 + 1;
          }
          else {
            uVar12 = uVar12 >> bVar11;
            iVar8 = -uVar6;
          }
        }
        else {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) & uVar12) +
                            *(int *)(param_3 + 0x140 + uVar6 * 4));
          bVar1 = *(byte *)(uVar6 * 0x10 + param_3 + (bVar11 & 0xf));
          bVar11 = bVar11 >> 4;
          uVar12 = uVar12 >> bVar11;
          iVar8 = -(uint)bVar11;
        }
        uVar13 = uVar13 + iVar8;
        uVar6 = (uint)bVar1;
        cVar5 = (char)uVar9;
        if (uVar13 < uVar9) {
          bVar2 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) &
                            (*local_10 << ((byte)uVar13 & 0x1f) | uVar12)) + iVar7);
          bVar11 = *(byte *)((bVar2 & 0xf) + 0x10 + (int)param_1);
          bVar2 = bVar2 >> 4;
          uVar10 = (uint)bVar2;
          if (uVar13 < uVar10) {
            uVar12 = *local_10 >> (bVar2 - (byte)uVar13 & 0x1f);
            iVar8 = 0x20 - uVar10;
            local_10 = local_10 + 1;
          }
          else {
            uVar12 = uVar12 >> bVar2;
            iVar8 = -uVar10;
          }
        }
        else {
          bVar11 = *(byte *)((0xffffffffU >> (0x20U - cVar5 & 0x1f) & uVar12) + iVar7);
          bVar2 = bVar11 >> 4;
          bVar11 = *(byte *)((bVar11 & 0xf) + 0x10 + (int)param_1);
          uVar12 = uVar12 >> bVar2;
          iVar8 = -(uint)bVar2;
        }
        uVar13 = uVar13 + iVar8;
        *local_18 = bVar1 << 4 | bVar11;
        local_24 = local_24 - 1;
        local_18 = local_18 + 1;
      } while (0 < (int)local_24);
      if ((int)local_24 < -0x16) {
        uVar3 = *(undefined1 *)param_1[0xb];
        puVar14 = (undefined4 *)param_1[0xb];
        for (uVar9 = -local_24 - 0x15 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
          puVar14 = puVar14 + 1;
        }
        for (uVar9 = -local_24 - 0x15 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar14 = uVar3;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
      }
      *(uint *)(param_3 + 0x180) = uVar6;
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar4;
    param_2[2] = uVar12;
    param_2[3] = uVar13;
  }
  return;
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a4a0 @ 0x3000A4A0 */


void __cdecl FUN_3000a4a0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint local_14;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar7 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar8 = param_2[2];
    uVar10 = param_2[3];
    bVar9 = (byte)uVar7;
    if (uVar10 < uVar7) {
      local_28 = 0xffffffffU >> (0x20 - bVar9 & 0x1f) & (*local_10 << ((byte)uVar10 & 0x1f) | uVar8)
      ;
      uVar8 = *local_10 >> (bVar9 - (byte)uVar10 & 0x1f);
      iVar5 = 0x20 - uVar7;
      local_10 = local_10 + 1;
    }
    else {
      local_28 = 0xffffffffU >> (0x20 - bVar9 & 0x1f) & uVar8;
      uVar8 = uVar8 >> (bVar9 & 0x1f);
      iVar5 = -uVar7;
    }
    uVar10 = uVar10 + iVar5;
    if (local_28 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_20 = (uint *)param_1[0xb];
      *param_1 = (int)local_20;
      param_1[1] = (int)local_20 + local_28;
      if (uVar10 == 0) {
        uVar7 = *local_10;
        local_10 = local_10 + 1;
        uVar10 = 0x1f;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
      }
      uVar8 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        bVar9 = *(byte *)(param_1 + 8);
        local_24 = (uint)bVar9;
        uVar7 = local_24;
        iVar5 = param_1[9];
        local_14 = 0;
        do {
          if (uVar10 < uVar7) {
            bVar1 = *(byte *)((0xffffffffU >> (0x20 - bVar9 & 0x1f) &
                              (*local_10 << ((byte)uVar10 & 0x1f) | uVar8)) + iVar5);
            bVar4 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar3 = (uint)bVar1;
            if (uVar10 < uVar3) {
              uVar8 = *local_10 >> (bVar1 - (byte)uVar10 & 0x1f);
              iVar6 = 0x20 - uVar3;
              local_10 = local_10 + 1;
            }
            else {
              uVar8 = uVar8 >> bVar1;
              iVar6 = -uVar3;
            }
          }
          else {
            bVar1 = *(byte *)((0xffffffffU >> (0x20 - bVar9 & 0x1f) & uVar8) + iVar5);
            bVar4 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar8 = uVar8 >> bVar1;
            iVar6 = -(uint)bVar1;
          }
          local_24 = (uint)bVar4;
          uVar10 = uVar10 + iVar6;
          if (bVar4 < 0xc) {
            *(byte *)local_20 = bVar4;
            local_20 = (uint *)((int)local_20 + 1);
            local_28 = local_28 - 1;
            local_14 = (uint)bVar4;
          }
          else {
            uVar3 = local_14 << 8 | local_14;
            bVar4 = (&DAT_30033eec)[local_24];
            local_28 = local_28 - bVar4;
            do {
              *local_20 = uVar3 | uVar3 << 0x10;
              local_20 = local_20 + 1;
              bVar4 = bVar4 - 4;
            } while (bVar4 != 0);
          }
        } while (local_28 != 0);
      }
      else {
        bVar9 = (byte)uVar8;
        if (uVar10 < 4) {
          uVar8 = *local_10 >> (4 - (byte)uVar10 & 0x1f);
          bVar9 = (char)*local_10 << ((byte)uVar10 & 0x1f) | bVar9;
          uVar10 = uVar10 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar8 = uVar7 >> 5;
          uVar10 = uVar10 - 4;
        }
        for (uVar7 = local_28 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_20 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9)) & 0xf0f0f0f;
          local_20 = local_20 + 1;
        }
        for (local_28 = local_28 & 3; local_28 != 0; local_28 = local_28 - 1) {
          *(byte *)local_20 = bVar9 & 0xf;
          local_20 = (uint *)((int)local_20 + 1);
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar8;
    param_2[3] = uVar10;
  }
  return;
}


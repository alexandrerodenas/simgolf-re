/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b110 @ 0x3000B110 */


void __cdecl FUN_3000b110(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  byte *local_1c;
  uint local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar6 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar9 = param_2[3];
    bVar8 = (byte)uVar6;
    if (uVar9 < uVar6) {
      uVar7 = *local_10 >> (bVar8 - (byte)uVar9 & 0x1f);
      iVar5 = 0x20 - uVar6;
      local_18 = 0xffffffffU >> (0x20 - bVar8 & 0x1f) & (*local_10 << ((byte)uVar9 & 0x1f) | uVar4);
      local_10 = local_10 + 1;
    }
    else {
      local_18 = 0xffffffffU >> (0x20 - bVar8 & 0x1f) & uVar4;
      uVar7 = uVar4 >> (bVar8 & 0x1f);
      iVar5 = -uVar6;
    }
    uVar9 = uVar9 + iVar5;
    if (local_18 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_1c = (byte *)param_1[0xb];
      *param_1 = (int)local_1c;
      param_1[1] = (int)(local_1c + local_18);
      if (uVar9 == 0) {
        uVar6 = *local_10;
        local_10 = local_10 + 1;
        uVar9 = 0x1f;
      }
      else {
        uVar9 = uVar9 - 1;
        uVar6 = uVar7;
      }
      uVar7 = uVar6 >> 1;
      if ((uVar6 & 1) == 0) {
        uVar6 = param_1[8];
        iVar5 = param_1[9];
        do {
          cVar3 = (char)uVar6;
          if (uVar9 < uVar6) {
            bVar1 = *(byte *)((0xffffffffU >> (0x20U - cVar3 & 0x1f) &
                              (*local_10 << ((byte)uVar9 & 0x1f) | uVar7)) + iVar5);
            bVar8 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar4 = (uint)bVar1;
            if (uVar9 < uVar4) {
              uVar7 = *local_10 >> (bVar1 - (byte)uVar9 & 0x1f);
              uVar9 = uVar9 + (0x20 - uVar4);
              local_10 = local_10 + 1;
            }
            else {
              uVar7 = uVar7 >> bVar1;
              uVar9 = uVar9 - uVar4;
            }
          }
          else {
            bVar8 = *(byte *)((0xffffffffU >> (0x20U - cVar3 & 0x1f) & uVar7) + iVar5);
            bVar1 = bVar8 >> 4;
            bVar8 = *(byte *)((bVar8 & 0xf) + 0x10 + (int)param_1);
            uVar7 = uVar7 >> bVar1;
            uVar9 = uVar9 - bVar1;
          }
          if (bVar8 != 0) {
            if (uVar9 == 0) {
              uVar4 = *local_10;
              local_10 = local_10 + 1;
              uVar9 = 0x1f;
            }
            else {
              uVar9 = uVar9 - 1;
              uVar4 = uVar7;
            }
            uVar7 = uVar4 >> 1;
            if ((uVar4 & 1) != 0) {
              bVar8 = -bVar8;
            }
          }
          *local_1c = bVar8;
          local_1c = local_1c + 1;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      else {
        bVar8 = (byte)uVar7;
        if (uVar9 < 4) {
          uVar7 = *local_10 >> (4 - (byte)uVar9 & 0x1f);
          bVar8 = (char)*local_10 << ((byte)uVar9 & 0x1f) | bVar8;
          uVar9 = uVar9 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar7 = uVar6 >> 5;
          uVar9 = uVar9 - 4;
        }
        bVar8 = bVar8 & 0xf;
        if (bVar8 != 0) {
          if (uVar9 == 0) {
            uVar6 = *local_10;
            local_10 = local_10 + 1;
            uVar9 = 0x1f;
          }
          else {
            uVar9 = uVar9 - 1;
            uVar6 = uVar7;
          }
          uVar7 = uVar6 >> 1;
          if ((uVar6 & 1) != 0) {
            bVar8 = -bVar8;
          }
        }
        for (uVar6 = local_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(uint *)local_1c = CONCAT22(CONCAT11(bVar8,bVar8),CONCAT11(bVar8,bVar8));
          local_1c = local_1c + 4;
        }
        for (local_18 = local_18 & 3; local_18 != 0; local_18 = local_18 - 1) {
          *local_1c = bVar8;
          local_1c = local_1c + 1;
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar7;
    param_2[3] = uVar9;
  }
  return;
}


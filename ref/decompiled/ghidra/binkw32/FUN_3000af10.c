/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000af10 @ 0x3000AF10 */


void __cdecl FUN_3000af10(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte *local_1c;
  uint local_18;
  uint *local_10;
  
  piVar5 = param_1;
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar8 = param_1[10];
    uVar6 = param_2[3];
    bVar1 = (byte)uVar8;
    if (uVar6 < uVar8) {
      uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
      iVar7 = 0x20 - uVar8;
      local_18 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & (*local_10 << ((byte)uVar6 & 0x1f) | uVar3);
      local_10 = local_10 + 1;
    }
    else {
      local_18 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & uVar3;
      uVar10 = uVar3 >> (bVar1 & 0x1f);
      iVar7 = -uVar8;
    }
    uVar6 = uVar6 + iVar7;
    local_1c = (byte *)param_1[0xb];
    if (local_18 == 0) {
      *param_1 = (int)(local_1c + 4);
      param_1[1] = (int)local_1c;
    }
    else {
      iVar7 = param_1[9];
      param_1[1] = (int)(local_1c + local_18);
      uVar3 = param_1[8];
      *param_1 = (int)local_1c;
      do {
        if (uVar6 < uVar3) {
          uVar8 = 0xffffffff >> (0x20U - (char)uVar3 & 0x1f);
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar6 & 0x1f) | uVar10) & uVar8) + iVar7);
          param_1._0_1_ = *(byte *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar11 = (uint)bVar1;
          if (uVar6 < uVar11) {
            uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
            uVar6 = uVar6 + (0x20 - uVar11);
            local_10 = local_10 + 1;
          }
          else {
            uVar10 = uVar10 >> bVar1;
            uVar6 = uVar6 - uVar11;
          }
        }
        else {
          uVar8 = 0xffffffff >> (0x20U - (char)uVar3 & 0x1f);
          bVar1 = *(byte *)((uVar8 & uVar10) + iVar7);
          param_1._0_1_ = *(byte *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar10 = uVar10 >> bVar1;
          uVar6 = uVar6 - bVar1;
        }
        if (uVar6 < uVar3) {
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar6 & 0x1f) | uVar10) & uVar8) + iVar7);
          cVar9 = *(char *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          bVar1 = bVar1 >> 4;
          uVar8 = (uint)bVar1;
          if (uVar6 < uVar8) {
            uVar10 = *local_10 >> (bVar1 - (byte)uVar6 & 0x1f);
            uVar6 = uVar6 + (0x20 - uVar8);
            local_10 = local_10 + 1;
          }
          else {
            uVar10 = uVar10 >> bVar1;
            uVar6 = uVar6 - uVar8;
          }
        }
        else {
          bVar1 = *(byte *)((uVar8 & uVar10) + iVar7);
          bVar4 = bVar1 >> 4;
          cVar9 = *(char *)((bVar1 & 0xf) + 0x10 + (int)piVar5);
          uVar10 = uVar10 >> bVar4;
          uVar6 = uVar6 - bVar4;
        }
        *local_1c = cVar9 << 4 | (byte)param_1;
        local_1c = local_1c + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar10;
    param_2[3] = uVar6;
  }
  return;
}


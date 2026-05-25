/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044fe0 @ 0x10044FE0 */


void __cdecl FUN_10044fe0(int param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int local_8;
  int local_4;
  
  pbVar6 = param_2;
  if (param_3 == 0xff) {
    uVar4 = (uint)*(byte *)(param_1 + 0x10b) * *(int *)(param_1 + 200) + 7;
    pbVar6 = (byte *)(*(int *)(param_1 + 0xec) + 1);
    for (uVar5 = uVar4 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar4 = uVar4 >> 3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x10b);
  if (bVar2 == 1) {
    iVar8 = *(int *)(param_1 + 200);
    pbVar11 = (byte *)(*(int *)(param_1 + 0xec) + 1);
    param_2 = (byte *)0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar7 = 7;
      param_1 = 0;
      local_4 = -1;
      iVar9 = iVar7;
    }
    else {
      iVar7 = 0;
      param_1 = 7;
      local_4 = 1;
      iVar9 = iVar7;
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if ((param_3 & (uint)param_2) != 0) {
        bVar2 = (byte)iVar7;
        *pbVar6 = (byte)(0x7f7f >> (7 - bVar2 & 0x1f)) & *pbVar6 |
                  (*pbVar11 >> (bVar2 & 0x1f) & 1) << (bVar2 & 0x1f);
      }
      if (iVar7 == param_1) {
        pbVar11 = pbVar11 + 1;
        pbVar6 = pbVar6 + 1;
        iVar7 = iVar9;
      }
      else {
        iVar7 = iVar7 + local_4;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else if (bVar2 == 2) {
    local_8 = *(int *)(param_1 + 200);
    pbVar11 = (byte *)(*(int *)(param_1 + 0xec) + 1);
    param_2 = (byte *)0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar8 = 6;
      param_1 = 0;
      local_4 = -2;
    }
    else {
      iVar8 = 0;
      param_1 = 6;
      local_4 = 2;
    }
    iVar7 = iVar8;
    if (local_8 != 0) {
      do {
        if ((param_3 & (uint)param_2) != 0) {
          bVar2 = (byte)iVar7;
          *pbVar6 = (byte)(0x3f3f >> (6 - bVar2 & 0x1f)) & *pbVar6 |
                    (*pbVar11 >> (bVar2 & 0x1f) & 3) << (bVar2 & 0x1f);
        }
        if (iVar7 == param_1) {
          pbVar11 = pbVar11 + 1;
          pbVar6 = pbVar6 + 1;
          iVar7 = iVar8;
        }
        else {
          iVar7 = iVar7 + local_4;
        }
        if (param_2 == (byte *)0x1) {
          param_2 = (byte *)0x80;
        }
        else {
          param_2 = (byte *)((int)param_2 >> 1);
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  }
  else if (bVar2 == 4) {
    local_4 = *(int *)(param_1 + 200);
    pbVar11 = (byte *)(*(int *)(param_1 + 0xec) + 1);
    param_2 = (byte *)0x80;
    if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
      iVar8 = 4;
      param_1 = 0;
      local_8 = -4;
    }
    else {
      iVar8 = 0;
      param_1 = 4;
      local_8 = 4;
    }
    iVar7 = iVar8;
    if (local_4 != 0) {
      do {
        if ((param_3 & (uint)param_2) != 0) {
          bVar2 = (byte)iVar7;
          *pbVar6 = (byte)(0xf0f >> (4 - bVar2 & 0x1f)) & *pbVar6 |
                    (*pbVar11 >> (bVar2 & 0x1f) & 0xf) << (bVar2 & 0x1f);
        }
        if (iVar7 == param_1) {
          pbVar11 = pbVar11 + 1;
          pbVar6 = pbVar6 + 1;
          iVar7 = iVar8;
        }
        else {
          iVar7 = iVar7 + local_8;
        }
        if (param_2 == (byte *)0x1) {
          param_2 = (byte *)0x80;
        }
        else {
          param_2 = (byte *)((int)param_2 >> 1);
        }
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      return;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xec);
    uVar4 = (uint)(bVar2 >> 3);
    param_1 = *(int *)(param_1 + 200);
    pbVar6 = (byte *)(*piVar1 + 1);
    bVar3 = 0x80;
    if (param_1 != 0) {
      do {
        if (((byte)param_3 & bVar3) != 0) {
          pbVar11 = pbVar6;
          pbVar10 = param_2;
          for (uVar5 = (uint)(bVar2 >> 5); uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pbVar10 = *(undefined4 *)pbVar11;
            pbVar11 = pbVar11 + 4;
            pbVar10 = pbVar10 + 4;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pbVar10 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            pbVar10 = pbVar10 + 1;
          }
        }
        pbVar6 = pbVar6 + uVar4;
        param_2 = param_2 + uVar4;
        if (bVar3 == 1) {
          bVar3 = 0x80;
        }
        else {
          bVar3 = bVar3 >> 1;
        }
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return;
    }
  }
  return;
}


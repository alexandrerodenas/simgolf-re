/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001a2c0 @ 0x1001A2C0 */


int __cdecl FUN_1001a2c0(double *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  double local_44;
  undefined8 local_3c;
  int local_28;
  uint *local_20;
  uint local_1c;
  byte *local_10;
  uint local_c;
  
  iVar8 = param_4;
  local_44 = 0.0;
  bVar7 = false;
  local_1c = 0;
  local_20 = (uint *)0x0;
  if (param_5 == 1) {
    local_54 = *(undefined4 *)(param_4 + 0x1f0);
    uStack_50 = *(undefined4 *)(param_4 + 500);
    local_5c = *(undefined4 *)(param_4 + 0x200);
    iVar9 = *(int *)(param_4 + 8);
    uStack_58 = *(undefined4 *)(param_4 + 0x204);
    puVar1 = (uint *)(iVar9 + 0x20);
    local_c = *puVar1;
    if (local_c < *(uint *)(iVar9 + 0x1c)) {
      local_c = *(uint *)(iVar9 + 0x24);
    }
    local_10 = *(byte **)(iVar9 + 0x18);
    local_3c = *(double *)(param_4 + 0x1380);
    local_4c = *(undefined4 *)(param_4 + 5000);
    uStack_48 = *(undefined4 *)(param_4 + 0x138c);
    if ((*(uint *)(param_4 + 0x58) & 8) != 0) {
      local_44 = *(double *)(param_4 + 0x1c8) / (double)param_3;
    }
    bVar10 = ~(byte)*(undefined4 *)(param_4 + 0x5c) & 1;
    if ((*(uint *)(param_4 + 0x58) & 0x20) != 0) {
      local_20 = puVar1;
      if (*puVar1 < *param_2) {
        local_1c = *(uint *)(param_4 + 0x1378);
        bVar7 = true;
      }
      else {
        local_1c = *(uint *)(param_4 + 0x1378);
        bVar10 = 0;
      }
    }
  }
  else {
    local_54 = *(undefined4 *)(param_4 + 0x80);
    uStack_50 = *(undefined4 *)(param_4 + 0x84);
    local_5c = *(undefined4 *)(param_4 + 0x70);
    local_4c = *(undefined4 *)(param_4 + 0x108);
    uStack_58 = *(undefined4 *)(param_4 + 0x74);
    uStack_48 = *(undefined4 *)(param_4 + 0x10c);
    local_3c = *(double *)(param_4 + 0x100);
    if ((*(byte *)(param_4 + 0x9c) & 8) != 0) {
      local_44 = *(double *)(param_4 + 0xf0) / (double)param_3;
    }
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      local_10 = *(byte **)(param_4 + 0x18);
      local_c = *(uint *)(param_4 + 0x20);
      bVar10 = 0;
    }
    else {
      local_10 = *(byte **)(param_4 + 0xd8);
      local_c = *(uint *)(param_4 + 0xd4);
      bVar10 = 1;
    }
  }
  uVar11 = *param_2;
  dVar2 = (double)CONCAT44(uStack_58,local_5c);
  dVar3 = (double)CONCAT44(uStack_50,local_54);
  iVar9 = param_3;
  dVar5 = local_3c;
  do {
    dVar5 = dVar5 + (double)CONCAT44(uStack_48,local_4c);
    local_28 = (int)ROUND(dVar5);
    pbVar12 = (byte *)(uVar11 + local_28);
    dVar6 = dVar5 - (double)local_28;
    if ((int)pbVar12 < (int)local_c) {
      dVar4 = (double)(short)((ushort)*pbVar12 * 0x100 + -0x8000);
    }
    else {
      if (bVar10 == 0) {
LAB_1001a56a:
        if (iVar9 == 0) {
          pbVar12 = pbVar12 + -1;
          local_3c = dVar6 - (double)local_28;
        }
        *param_2 = (uint)pbVar12;
        if (param_5 == 1) {
          *(undefined4 *)(iVar8 + 0x1380) = (undefined4)local_3c;
          *(undefined4 *)(iVar8 + 0x1384) = local_3c._4_4_;
          if (((*(byte *)(iVar8 + 0x58) & 0x20) != 0) && (bVar10 == 0)) {
            *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 1;
            return param_3 - iVar9;
          }
        }
        else {
          *(undefined4 *)(iVar8 + 0x100) = (undefined4)local_3c;
          *(undefined4 *)(iVar8 + 0x104) = local_3c._4_4_;
        }
        return param_3 - iVar9;
      }
      local_28 = (int)ROUND(dVar6);
      *param_2 = (uint)local_10;
      dVar4 = (double)(short)((ushort)*local_10 * 0x100 + -0x8000);
      pbVar12 = local_10;
      dVar5 = dVar6;
      if (bVar7) {
        bVar10 = 0;
        *local_20 = local_1c;
      }
    }
    pbVar12 = pbVar12 + 1;
    if ((int)pbVar12 < (int)local_c) {
      param_4._2_2_ = (ushort)*pbVar12 * 0x100 + -0x8000;
    }
    else {
      param_4._2_2_ = 0;
      if (bVar10 != 0) {
        param_4._2_2_ = (ushort)*local_10 * 0x100 + -0x8000;
      }
    }
    dVar4 = ((double)param_4._2_2_ - dVar4) * dVar6 + dVar4;
    *param_1 = dVar4 * dVar3 + *param_1;
    param_1[1] = dVar4 * dVar2 + param_1[1];
    iVar9 = iVar9 + -1;
    dVar6 = dVar5;
    if (iVar9 == 0) goto LAB_1001a56a;
    param_1 = param_1 + 2;
    uVar11 = *param_2;
    if (param_1 != (double *)0x0) {
      dVar3 = dVar3 - local_44;
      dVar2 = dVar2 - local_44;
    }
  } while( true );
}


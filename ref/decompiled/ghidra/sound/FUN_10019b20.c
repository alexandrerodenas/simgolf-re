/* Ghidra decompiled: sound.dll */
/* Function: FUN_10019b20 @ 0x10019B20 */


int __cdecl FUN_10019b20(double *param_1,uint *param_2,int param_3,int param_4,int param_5)

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
  short *psVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  double local_40;
  undefined8 local_38;
  int local_24;
  uint *local_1c;
  uint local_18;
  short *local_10;
  uint local_c;
  
  iVar8 = param_4;
  local_40 = 0.0;
  bVar7 = false;
  local_18 = 0;
  local_1c = (uint *)0x0;
  if (param_5 == 1) {
    local_50 = *(undefined4 *)(param_4 + 0x1f0);
    uStack_4c = *(undefined4 *)(param_4 + 500);
    local_58 = *(undefined4 *)(param_4 + 0x200);
    iVar9 = *(int *)(param_4 + 8);
    uStack_54 = *(undefined4 *)(param_4 + 0x204);
    puVar1 = (uint *)(iVar9 + 0x20);
    local_c = *puVar1;
    if (local_c < *(uint *)(iVar9 + 0x1c)) {
      local_c = *(uint *)(iVar9 + 0x24);
    }
    local_10 = *(short **)(iVar9 + 0x18);
    local_38 = *(double *)(param_4 + 0x1380);
    local_48 = *(undefined4 *)(param_4 + 5000);
    uStack_44 = *(undefined4 *)(param_4 + 0x138c);
    if ((*(uint *)(param_4 + 0x58) & 8) != 0) {
      local_40 = *(double *)(param_4 + 0x1c8) / (double)param_3;
    }
    bVar10 = ~(byte)*(undefined4 *)(param_4 + 0x5c) & 1;
    if ((*(uint *)(param_4 + 0x58) & 0x20) != 0) {
      local_1c = puVar1;
      if (*puVar1 < *param_2) {
        local_18 = *(uint *)(param_4 + 0x1378);
        bVar7 = true;
      }
      else {
        local_18 = *(uint *)(param_4 + 0x1378);
        bVar10 = 0;
      }
    }
  }
  else {
    local_50 = *(undefined4 *)(param_4 + 0x80);
    uStack_4c = *(undefined4 *)(param_4 + 0x84);
    local_58 = *(undefined4 *)(param_4 + 0x70);
    local_48 = *(undefined4 *)(param_4 + 0x108);
    uStack_54 = *(undefined4 *)(param_4 + 0x74);
    uStack_44 = *(undefined4 *)(param_4 + 0x10c);
    local_38 = *(double *)(param_4 + 0x100);
    if ((*(byte *)(param_4 + 0x9c) & 8) != 0) {
      local_40 = *(double *)(param_4 + 0xf0) / (double)param_3;
    }
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      local_10 = *(short **)(param_4 + 0x18);
      local_c = *(uint *)(param_4 + 0x20);
      bVar10 = 0;
    }
    else {
      local_10 = *(short **)(param_4 + 0xd8);
      local_c = *(uint *)(param_4 + 0xd4);
      bVar10 = 1;
    }
  }
  uVar11 = *param_2;
  dVar2 = (double)CONCAT44(uStack_54,local_58);
  dVar3 = (double)CONCAT44(uStack_4c,local_50);
  iVar9 = param_3;
  dVar5 = local_38;
  do {
    dVar5 = dVar5 + (double)CONCAT44(uStack_44,local_48);
    local_24 = (int)ROUND(dVar5);
    psVar12 = (short *)(uVar11 + local_24 * 2);
    dVar6 = dVar5 - (double)local_24;
    if ((int)psVar12 < (int)local_c) {
      dVar4 = (double)*psVar12;
    }
    else {
      if (bVar10 == 0) {
LAB_10019d70:
        if (iVar9 == 0) {
          psVar12 = psVar12 + -1;
          local_38 = dVar6 - (double)local_24;
        }
        *param_2 = (uint)psVar12;
        if (param_5 == 1) {
          *(undefined4 *)(iVar8 + 0x1380) = (undefined4)local_38;
          *(undefined4 *)(iVar8 + 0x1384) = local_38._4_4_;
          if (((*(byte *)(iVar8 + 0x58) & 0x20) != 0) && (bVar10 == 0)) {
            *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 1;
            return param_3 - iVar9;
          }
        }
        else {
          *(undefined4 *)(iVar8 + 0x100) = (undefined4)local_38;
          *(undefined4 *)(iVar8 + 0x104) = local_38._4_4_;
        }
        return param_3 - iVar9;
      }
      local_24 = (int)ROUND(dVar6);
      *param_2 = (uint)local_10;
      dVar4 = (double)*local_10;
      psVar12 = local_10;
      dVar5 = dVar6;
      if (bVar7) {
        bVar10 = 0;
        *local_1c = local_18;
      }
    }
    psVar12 = psVar12 + 1;
    if ((int)psVar12 < (int)local_c) {
      param_4._2_2_ = *psVar12;
    }
    else {
      param_4._2_2_ = 0;
      if (bVar10 != 0) {
        param_4._2_2_ = *local_10;
      }
    }
    dVar4 = ((double)param_4._2_2_ - dVar4) * dVar6 + dVar4;
    *param_1 = dVar4 * dVar3;
    param_1[1] = dVar4 * dVar2;
    iVar9 = iVar9 + -1;
    dVar6 = dVar5;
    if (iVar9 == 0) goto LAB_10019d70;
    param_1 = param_1 + 2;
    uVar11 = *param_2;
    if (param_1 != (double *)0x0) {
      dVar3 = dVar3 - local_40;
      dVar2 = dVar2 - local_40;
    }
  } while( true );
}


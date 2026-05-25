/* Ghidra decompiled: sound.dll */
/* Function: FUN_100188d0 @ 0x100188D0 */


int __cdecl FUN_100188d0(double *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  int local_40;
  int local_38;
  int local_30;
  uint *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  short *local_c;
  uint local_8;
  
  local_68 = 0.0;
  bVar9 = 0;
  bVar6 = false;
  bVar12 = false;
  local_20 = 0;
  local_24 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_38 = 0;
  if (param_5 == 1) {
    local_58 = *(undefined4 *)(param_4 + 0x1f0);
    uStack_54 = *(undefined4 *)(param_4 + 500);
    local_60 = *(undefined4 *)(param_4 + 0x200);
    iVar10 = *(int *)(param_4 + 8);
    uStack_5c = *(undefined4 *)(param_4 + 0x204);
    local_40 = param_4;
    local_8 = *(uint *)(iVar10 + 0x20);
    if (local_8 < *(uint *)(iVar10 + 0x1c)) {
      local_8 = *(uint *)(iVar10 + 0x24);
    }
    local_c = *(short **)(iVar10 + 0x18);
    local_48 = *(double *)(param_4 + 0x1380);
    bVar12 = (*(uint *)(param_4 + 0x58) & 8) != 0;
    if (bVar12) {
      local_68 = *(double *)(param_4 + 0x1c8) / (double)param_3;
    }
    bVar8 = ~(byte)*(undefined4 *)(param_4 + 0x5c) & 1;
    if ((*(uint *)(param_4 + 0x58) & 0x20) != 0) {
      local_20 = *(uint *)(param_4 + 0x1378);
      bVar6 = true;
      local_24 = (uint *)(iVar10 + 0x20);
    }
  }
  else {
    local_48 = *(double *)(param_4 + 0x100);
    local_38 = param_4;
    local_58 = 0;
    uStack_54 = 0x40000000;
    local_60 = 0;
    uStack_5c = 0x40000000;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar8 = 0;
    }
    else {
      bVar8 = 1;
    }
    bVar9 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar8 != 0) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10018a4e;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_18 = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_18 + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10018a4e:
  iVar10 = *param_2;
  dVar1 = (double)CONCAT44(uStack_5c,local_60);
  dVar2 = (double)CONCAT44(uStack_54,local_58);
  iVar7 = param_3;
  dVar4 = local_48;
  do {
    dVar4 = dVar4 + 0.36281179138321995;
    local_30 = (int)ROUND(dVar4);
    psVar11 = (short *)(iVar10 + local_30 * 2);
    dVar5 = dVar4 - (double)local_30;
    if ((int)psVar11 < (int)local_8) {
      dVar3 = (double)*psVar11;
    }
    else {
      dVar4 = dVar5;
      if (bVar9 == 0) {
        if (bVar8 == 0) {
LAB_10018b97:
          if (iVar7 == 0) {
            psVar11 = psVar11 + -1;
            local_48 = dVar5 - (double)local_30;
          }
          *param_2 = (int)psVar11;
          if (param_5 == 1) {
            *(undefined4 *)(local_40 + 0x1380) = (undefined4)local_48;
            *(undefined4 *)(local_40 + 0x1384) = local_48._4_4_;
            if (((*(byte *)(local_40 + 0x58) & 0x20) != 0) && (bVar8 == 0)) {
              *(uint *)(local_40 + 0x5c) = *(uint *)(local_40 + 0x5c) | 1;
              return param_3 - iVar7;
            }
          }
          else {
            *(undefined4 *)(local_38 + 0x100) = (undefined4)local_48;
            *(undefined4 *)(local_38 + 0x104) = local_48._4_4_;
            *(int *)(local_38 + 0xcc) = *(int *)(local_38 + 0xcc) + local_1c;
          }
          return param_3 - iVar7;
        }
        local_30 = (int)ROUND(dVar5);
        *param_2 = (int)local_c;
        dVar3 = (double)*local_c;
        psVar11 = local_c;
        if (bVar6) {
          bVar8 = 0;
          *local_24 = local_20;
        }
      }
      else {
        local_1c = local_1c + 1;
        local_30 = (int)ROUND(dVar5);
        *param_2 = (int)local_c;
        dVar3 = (double)*local_c;
        local_8 = *(uint *)(local_18 + 0xd4);
        local_18 = *(int *)(local_18 + 0xb4);
        if (local_18 == 0) {
          bVar9 = 0;
          bVar8 = 0;
          psVar11 = local_c;
        }
        else {
          psVar11 = local_c;
          local_c = *(short **)(local_18 + 0xd8);
        }
      }
    }
    psVar11 = psVar11 + 1;
    if ((int)psVar11 < (int)local_8) {
      param_4._2_2_ = *psVar11;
    }
    else {
      param_4._2_2_ = 0;
      if ((bVar9 != 0) || (bVar8 != 0)) {
        param_4._2_2_ = *local_c;
      }
    }
    dVar3 = ((double)param_4._2_2_ - dVar3) * dVar5 + dVar3;
    *param_1 = dVar3 * dVar2 + *param_1;
    param_1[1] = dVar3 * dVar1 + param_1[1];
    iVar7 = iVar7 + -1;
    dVar5 = dVar4;
    if (iVar7 == 0) goto LAB_10018b97;
    param_1 = param_1 + 2;
    iVar10 = *param_2;
    if (bVar12) {
      dVar2 = dVar2 - local_68;
      dVar1 = dVar1 - local_68;
    }
  } while( true );
}


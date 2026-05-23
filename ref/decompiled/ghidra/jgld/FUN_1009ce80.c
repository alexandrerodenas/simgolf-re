/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009ce80 @ 0x1009CE80 */
/* Body size: 5080 addresses */


void __cdecl FUN_1009ce80(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_c0 [16];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c [4];
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar4 = local_c0;
  for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_14 = (byte *)*param_2;
  local_18 = param_2[1];
  local_c = param_1[8];
  local_10 = param_1[7];
  local_1c = (undefined4 *)param_1[0xc];
  if (local_1c < (undefined4 *)param_1[0xb]) {
    local_58 = (param_1[0xb] - (int)local_1c) - 1;
  }
  else {
    local_58 = param_1[10] - (int)local_1c;
  }
  local_20 = local_58;
switchD_1009cff3_default:
  do {
    local_5c = *param_1;
    switch(local_5c) {
    case 0:
      for (; local_10 < 3; local_10 = local_10 + 8) {
        if (local_18 == 0) {
          param_1[8] = local_c;
          param_1[7] = local_10;
          param_2[1] = 0;
          param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
          *param_2 = (int)local_14;
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
          goto LAB_1009e244;
        }
        local_18 = local_18 - 1;
        local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
        local_14 = local_14 + 1;
      }
      goto LAB_1009cfc9;
    case 1:
      for (; local_10 < 0x20; local_10 = local_10 + 8) {
        if (local_18 == 0) {
          param_1[8] = local_c;
          param_1[7] = local_10;
          param_2[1] = 0;
          param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
          *param_2 = (int)local_14;
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
          goto LAB_1009e244;
        }
        local_18 = local_18 - 1;
        local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
        local_14 = local_14 + 1;
      }
      if (~local_c >> 0x10 != (local_c & 0xffff)) {
        *param_1 = 9;
        param_2[6] = (int)"invalid stored block lengths";
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      param_1[1] = local_c & 0xffff;
      local_10 = 0;
      local_c = 0;
      if (param_1[1] == 0) {
        local_64 = -(uint)(param_1[6] != 0) & 7;
      }
      else {
        local_64 = 2;
      }
      *param_1 = local_64;
      break;
    case 2:
      if (local_18 == 0) {
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = 0;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      if (local_20 == 0) {
        if ((local_1c == (undefined4 *)param_1[10]) && (param_1[0xb] != param_1[9])) {
          local_1c = (undefined4 *)param_1[9];
          if (local_1c < (undefined4 *)param_1[0xb]) {
            local_68 = (param_1[0xb] - (int)local_1c) - 1;
          }
          else {
            local_68 = param_1[10] - (int)local_1c;
          }
          local_20 = local_68;
        }
        if (local_20 == 0) {
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
          local_1c = (undefined4 *)param_1[0xc];
          if (local_1c < (undefined4 *)param_1[0xb]) {
            local_6c = (param_1[0xb] - (int)local_1c) - 1;
          }
          else {
            local_6c = param_1[10] - (int)local_1c;
          }
          local_20 = local_6c;
          if ((local_1c == (undefined4 *)param_1[10]) && (param_1[0xb] != param_1[9])) {
            local_1c = (undefined4 *)param_1[9];
            if (local_1c < (undefined4 *)param_1[0xb]) {
              local_70 = (param_1[0xb] - (int)local_1c) - 1;
            }
            else {
              local_70 = param_1[10] - (int)local_1c;
            }
            local_20 = local_70;
          }
          if (local_20 == 0) {
            param_1[8] = local_c;
            param_1[7] = local_10;
            param_2[1] = local_18;
            param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
            *param_2 = (int)local_14;
            param_1[0xc] = (uint)local_1c;
            FUN_100a0130((int)param_1,(int)param_2);
            goto LAB_1009e244;
          }
        }
      }
      local_8 = param_1[1];
      if (local_18 < local_8) {
        local_8 = local_18;
      }
      if (local_20 < local_8) {
        local_8 = local_20;
      }
      FUN_1007f3a0(local_1c,(undefined4 *)local_14,local_8);
      local_14 = local_14 + local_8;
      local_18 = local_18 - local_8;
      local_1c = (undefined4 *)((int)local_1c + local_8);
      local_20 = local_20 - local_8;
      param_1[1] = param_1[1] - local_8;
      if (param_1[1] == 0) {
        *param_1 = -(uint)(param_1[6] != 0) & 7;
      }
      break;
    case 3:
      for (; local_10 < 0xe; local_10 = local_10 + 8) {
        if (local_18 == 0) {
          param_1[8] = local_c;
          param_1[7] = local_10;
          param_2[1] = 0;
          param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
          *param_2 = (int)local_14;
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
          goto LAB_1009e244;
        }
        local_18 = local_18 - 1;
        local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
        local_14 = local_14 + 1;
      }
      local_8 = local_c & 0x3fff;
      param_1[1] = local_8;
      if ((0x1d < (local_c & 0x1f)) || (0x1d < (local_8 >> 5 & 0x1f))) {
        *param_1 = 9;
        param_2[6] = (int)"too many length or distance symbols";
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      local_8 = (local_c & 0x1f) + 0x102 + (local_8 >> 5 & 0x1f);
      if (local_8 < 0x13) {
        local_8 = 0x13;
      }
      (*(code *)param_2[8])(param_2[10],local_8,4);
      uVar2 = __chkesp();
      param_1[3] = uVar2;
      if (param_1[3] == 0) {
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      local_c = local_c >> 0xe;
      local_10 = local_10 - 0xe;
      param_1[2] = 0;
      *param_1 = 4;
    case 4:
      while (param_1[2] < (param_1[1] >> 10) + 4) {
        for (; local_10 < 3; local_10 = local_10 + 8) {
          if (local_18 == 0) {
            param_1[8] = local_c;
            param_1[7] = local_10;
            param_2[1] = 0;
            param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
            *param_2 = (int)local_14;
            param_1[0xc] = (uint)local_1c;
            FUN_100a0130((int)param_1,(int)param_2);
            goto LAB_1009e244;
          }
          local_18 = local_18 - 1;
          local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
          local_14 = local_14 + 1;
        }
        *(uint *)(param_1[3] + *(int *)(&DAT_10127218 + param_1[2] * 4) * 4) = local_c & 7;
        param_1[2] = param_1[2] + 1;
        local_c = local_c >> 3;
        local_10 = local_10 - 3;
      }
      while (param_1[2] < 0x13) {
        *(undefined4 *)(param_1[3] + *(int *)(&DAT_10127218 + param_1[2] * 4) * 4) = 0;
        param_1[2] = param_1[2] + 1;
      }
      param_1[4] = 7;
      local_8 = FUN_1009e710((uint *)param_1[3],param_1 + 4,(int *)(param_1 + 5),(int)param_2);
      if (local_8 != 0) {
        if (local_8 == -3) {
          *param_1 = 9;
        }
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      param_1[2] = 0;
      *param_1 = 5;
switchD_1009cf1a_caseD_5:
      while (local_8 = param_1[1], param_1[2] < (local_8 & 0x1f) + 0x102 + (local_8 >> 5 & 0x1f)) {
        local_8 = param_1[4];
        for (; local_10 < local_8; local_10 = local_10 + 8) {
          if (local_18 == 0) {
            param_1[8] = local_c;
            param_1[7] = local_10;
            param_2[1] = 0;
            param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
            *param_2 = (int)local_14;
            param_1[0xc] = (uint)local_1c;
            FUN_100a0130((int)param_1,(int)param_2);
            goto LAB_1009e244;
          }
          local_18 = local_18 - 1;
          local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
          local_14 = local_14 + 1;
        }
        local_34 = param_1[5] + (local_c & *(uint *)(&DAT_101274a4 + local_8 * 4)) * 8;
        bVar1 = *(byte *)(local_34 + 1);
        local_8 = (uint)bVar1;
        local_4c[3] = *(uint *)(local_34 + 4);
        if (local_4c[3] < 0x10) {
          local_c = local_c >> (bVar1 & 0x1f);
          local_10 = local_10 - local_8;
          *(uint *)(param_1[3] + param_1[2] * 4) = local_4c[3];
          param_1[2] = param_1[2] + 1;
        }
        else {
          if (local_4c[3] == 0x12) {
            local_74 = 7;
          }
          else {
            local_74 = local_4c[3] - 0xe;
          }
          local_38 = local_74;
          local_3c = (-(uint)(local_4c[3] != 0x12) & 0xfffffff8) + 0xb;
          for (; local_10 < local_8 + local_74; local_10 = local_10 + 8) {
            if (local_18 == 0) {
              param_1[8] = local_c;
              param_1[7] = local_10;
              param_2[1] = 0;
              param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
              *param_2 = (int)local_14;
              param_1[0xc] = (uint)local_1c;
              FUN_100a0130((int)param_1,(int)param_2);
              goto LAB_1009e244;
            }
            local_18 = local_18 - 1;
            local_c = local_c | (uint)*local_14 << ((byte)local_10 & 0x1f);
            local_14 = local_14 + 1;
          }
          local_c = local_c >> (bVar1 & 0x1f);
          local_3c = local_3c + (local_c & *(uint *)(&DAT_101274a4 + local_74 * 4));
          local_c = local_c >> ((byte)local_74 & 0x1f);
          local_10 = (local_10 - local_8) - local_74;
          local_38 = param_1[2];
          local_8 = param_1[1];
          if (((local_8 & 0x1f) + 0x102 + (local_8 >> 5 & 0x1f) < local_38 + local_3c) ||
             ((local_4c[3] == 0x10 && (local_38 == 0)))) {
            *param_1 = 9;
            param_2[6] = (int)"invalid bit length repeat";
            param_1[8] = local_c;
            param_1[7] = local_10;
            param_2[1] = local_18;
            param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
            *param_2 = (int)local_14;
            param_1[0xc] = (uint)local_1c;
            FUN_100a0130((int)param_1,(int)param_2);
            goto LAB_1009e244;
          }
          if (local_4c[3] == 0x10) {
            local_78 = *(uint *)((param_1[3] - 4) + local_38 * 4);
          }
          else {
            local_78 = 0;
          }
          local_4c[3] = local_78;
          do {
            *(uint *)(param_1[3] + local_38 * 4) = local_78;
            local_38 = local_38 + 1;
            local_3c = local_3c + -1;
          } while (local_3c != 0);
          param_1[2] = local_38;
          local_3c = 0;
        }
      }
      FUN_1009f250(param_1[5],(int)param_2);
      param_1[5] = 0;
      local_4c[2] = 9;
      local_4c[1] = 6;
      local_8 = param_1[1];
      local_8 = FUN_1009ef00((local_8 & 0x1f) + 0x101,(local_8 >> 5 & 0x1f) + 1,(uint *)param_1[3],
                             local_4c + 2,local_4c + 1,(int *)local_4c,(int *)&local_50,(int)param_2
                            );
      if (local_8 != 0) {
        if (local_8 == 0xfffffffd) {
          *param_1 = 9;
        }
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      local_54 = FUN_1009f2f0((char)local_4c[2],(char)local_4c[1],local_4c[0],local_50,(int)param_2)
      ;
      if (local_54 == 0) {
        FUN_1009f250(local_50,(int)param_2);
        FUN_1009f250(local_4c[0],(int)param_2);
        param_1[8] = local_c;
        param_1[7] = local_10;
        param_2[1] = local_18;
        param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
        *param_2 = (int)local_14;
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      (*(code *)param_2[9])(param_2[10],param_1[3]);
      __chkesp();
      param_1[3] = local_54;
      param_1[1] = local_4c[0];
      param_1[2] = local_50;
      *param_1 = 6;
switchD_1009cf1a_caseD_6:
      param_1[8] = local_c;
      param_1[7] = local_10;
      param_2[1] = local_18;
      param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
      *param_2 = (int)local_14;
      param_1[0xc] = (uint)local_1c;
      iVar3 = FUN_1009f370((int)param_1,param_2);
      if (iVar3 != 1) {
        FUN_100a0130((int)param_1,(int)param_2);
        goto LAB_1009e244;
      }
      FUN_100a00e0(param_1[3],(int)param_2);
      FUN_1009f250(param_1[2],(int)param_2);
      FUN_1009f250(param_1[1],(int)param_2);
      local_14 = (byte *)*param_2;
      local_18 = param_2[1];
      local_c = param_1[8];
      local_10 = param_1[7];
      local_1c = (undefined4 *)param_1[0xc];
      if (local_1c < (undefined4 *)param_1[0xb]) {
        local_7c = (param_1[0xb] - (int)local_1c) - 1;
      }
      else {
        local_7c = param_1[10] - (int)local_1c;
      }
      local_20 = local_7c;
      if (param_1[6] != 0) {
        if (7 < local_10) {
          local_10 = local_10 - 8;
          local_18 = local_18 + 1;
          local_14 = local_14 + -1;
        }
        *param_1 = 7;
switchD_1009cf1a_caseD_7:
        param_1[0xc] = (uint)local_1c;
        FUN_100a0130((int)param_1,(int)param_2);
        local_1c = (undefined4 *)param_1[0xc];
        if (local_1c < (undefined4 *)param_1[0xb]) {
          local_80 = (param_1[0xb] - (int)local_1c) - 1;
        }
        else {
          local_80 = param_1[10] - (int)local_1c;
        }
        local_20 = local_80;
        if (param_1[0xb] == param_1[0xc]) {
          *param_1 = 8;
switchD_1009cf1a_caseD_8:
          param_1[8] = local_c;
          param_1[7] = local_10;
          param_2[1] = local_18;
          param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
          *param_2 = (int)local_14;
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
        }
        else {
          param_1[8] = local_c;
          param_1[7] = local_10;
          param_2[1] = local_18;
          param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
          *param_2 = (int)local_14;
          param_1[0xc] = (uint)local_1c;
          FUN_100a0130((int)param_1,(int)param_2);
        }
        goto LAB_1009e244;
      }
      *param_1 = 0;
      break;
    case 5:
      goto switchD_1009cf1a_caseD_5;
    case 6:
      goto switchD_1009cf1a_caseD_6;
    case 7:
      goto switchD_1009cf1a_caseD_7;
    case 8:
      goto switchD_1009cf1a_caseD_8;
    case 9:
      param_1[8] = local_c;
      param_1[7] = local_10;
      param_2[1] = local_18;
      param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
      *param_2 = (int)local_14;
      param_1[0xc] = (uint)local_1c;
      FUN_100a0130((int)param_1,(int)param_2);
      goto LAB_1009e244;
    default:
      param_1[8] = local_c;
      param_1[7] = local_10;
      param_2[1] = local_18;
      param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
      *param_2 = (int)local_14;
      param_1[0xc] = (uint)local_1c;
      FUN_100a0130((int)param_1,(int)param_2);
      goto LAB_1009e244;
    }
  } while( true );
LAB_1009cfc9:
  local_8 = local_c & 7;
  param_1[6] = local_c & 1;
  local_60 = local_8 >> 1;
  switch(local_60) {
  case 0:
    local_8 = local_10 - 3 & 7;
    local_c = (local_c >> 3) >> (sbyte)local_8;
    local_10 = (local_10 - 3) - local_8;
    *param_1 = 1;
    break;
  case 1:
    FUN_1009f030(&local_24,&local_28,&local_2c,&local_30);
    uVar2 = FUN_1009f2f0((char)local_24,(char)local_28,local_2c,local_30,(int)param_2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      param_1[8] = local_c;
      param_1[7] = local_10;
      param_2[1] = local_18;
      param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
      *param_2 = (int)local_14;
      param_1[0xc] = (uint)local_1c;
      FUN_100a0130((int)param_1,(int)param_2);
      goto LAB_1009e244;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    local_c = local_c >> 3;
    local_10 = local_10 - 3;
    *param_1 = 6;
    break;
  case 2:
    local_c = local_c >> 3;
    local_10 = local_10 - 3;
    *param_1 = 3;
    break;
  case 3:
    local_c = local_c >> 3;
    local_10 = local_10 - 3;
    *param_1 = 9;
    param_2[6] = (int)"invalid block type";
    param_1[8] = local_c;
    param_1[7] = local_10;
    param_2[1] = local_18;
    param_2[2] = (int)(local_14 + (param_2[2] - *param_2));
    *param_2 = (int)local_14;
    param_1[0xc] = (uint)local_1c;
    FUN_100a0130((int)param_1,(int)param_2);
LAB_1009e244:
    local_8 = 0x1009e254;
    __chkesp();
    return;
  }
  goto switchD_1009cff3_default;
}


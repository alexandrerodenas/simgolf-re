/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100500e0 @ 0x100500E0 */


void __cdecl FUN_100500e0(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  uint local_4;
  
  puVar3 = param_1;
  local_2c = (uint *)*param_2;
  local_30 = param_2[1];
  local_28 = param_1[8];
  puVar7 = (uint *)param_1[7];
  puVar8 = (uint *)param_1[0xc];
  if (puVar8 < (uint *)param_1[0xb]) {
    local_24 = (int)param_1[0xb] + (-1 - (int)puVar8);
    param_1 = puVar8;
  }
  else {
    local_24 = param_1[10] - (int)puVar8;
    param_1 = puVar8;
  }
switchD_10050191_default:
  uVar10 = local_28;
  switch(*puVar3) {
  case 0:
    goto switchD_1005012d_caseD_0;
  case 1:
    for (; puVar7 < (uint *)0x20; puVar7 = puVar7 + 2) {
      if (local_30 == 0) {
        puVar3[8] = uVar10;
        puVar3[7] = (uint)puVar7;
        iVar5 = *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_2c;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
        puVar3[0xc] = (uint)param_1;
        FUN_10051f50((int)puVar3,(int)param_2,param_3);
        return;
      }
      param_3 = 0;
      local_30 = local_30 - 1;
      uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
      local_2c = (uint *)((int)local_2c + 1);
    }
    uVar4 = uVar10 & 0xffff;
    if (~uVar10 >> 0x10 != uVar4) {
      *puVar3 = 9;
      param_2[6] = (int)s_invalid_stored_block_lengths_10057718;
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      *param_2 = (int)local_2c;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,-3);
      return;
    }
    puVar7 = (uint *)0x0;
    puVar3[1] = uVar4;
    local_28 = 0;
    if (uVar4 != 0) {
      *puVar3 = 2;
      goto switchD_10050191_default;
    }
    break;
  case 2:
    if (local_30 == 0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      *param_2 = (int)local_2c;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,param_3);
      return;
    }
    if (local_24 == 0) {
      if (param_1 == (uint *)puVar3[10]) {
        puVar8 = (uint *)puVar3[0xb];
        puVar9 = (uint *)puVar3[9];
        if (puVar8 != puVar9) {
          if (puVar9 < puVar8) {
            local_24 = (int)puVar8 + (-1 - (int)puVar9);
          }
          else {
            local_24 = (int)puVar3[10] - (int)puVar9;
          }
          param_1 = puVar9;
          if (local_24 != 0) goto LAB_10050355;
        }
      }
      puVar3[0xc] = (uint)param_1;
      iVar5 = FUN_10051f50((int)puVar3,(int)param_2,param_3);
      param_1 = (uint *)puVar3[0xc];
      puVar8 = (uint *)puVar3[0xb];
      if (param_1 < puVar8) {
        local_24 = (int)puVar8 + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar3[10] - (int)param_1;
      }
      local_8 = (uint *)puVar3[10];
      if ((param_1 == local_8) && (puVar9 = (uint *)puVar3[9], puVar8 != puVar9)) {
        param_1 = puVar9;
        if (puVar9 < puVar8) {
          local_24 = (int)puVar8 + (-1 - (int)puVar9);
        }
        else {
          local_24 = (int)local_8 - (int)puVar9;
        }
      }
      if (local_24 == 0) {
        puVar3[8] = local_28;
        puVar3[7] = (uint)puVar7;
        iVar2 = *param_2;
        param_2[1] = local_30;
        *param_2 = (int)local_2c;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
        puVar3[0xc] = (uint)param_1;
        FUN_10051f50((int)puVar3,(int)param_2,iVar5);
        return;
      }
    }
LAB_10050355:
    param_3 = 0;
    uVar10 = puVar3[1];
    if (local_30 < puVar3[1]) {
      uVar10 = local_30;
    }
    if (local_24 < uVar10) {
      uVar10 = local_24;
    }
    puVar8 = local_2c;
    puVar9 = param_1;
    for (uVar4 = uVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_24 = local_24 - uVar10;
    for (uVar4 = uVar10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar9 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    local_2c = (uint *)((int)local_2c + uVar10);
    uVar4 = puVar3[1];
    local_30 = local_30 - uVar10;
    param_1 = (uint *)((int)param_1 + uVar10);
    puVar3[1] = uVar4 - uVar10;
    if (uVar4 - uVar10 != 0) goto switchD_10050191_default;
    break;
  case 3:
    for (; puVar7 < (uint *)0xe; puVar7 = puVar7 + 2) {
      if (local_30 == 0) {
        puVar3[8] = uVar10;
        puVar3[7] = (uint)puVar7;
        iVar5 = *param_2;
        *param_2 = (int)local_2c;
        param_2[1] = 0;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
        puVar3[0xc] = (uint)param_1;
        FUN_10051f50((int)puVar3,(int)param_2,param_3);
        return;
      }
      local_30 = local_30 - 1;
      param_3 = 0;
      uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
      local_2c = (uint *)((int)local_2c + 1);
    }
    puVar3[1] = uVar10 & 0x3fff;
    if ((0x1d < (uVar10 & 0x1f)) || (0x3a0 < (uVar10 & 0x3e0))) {
      *puVar3 = 9;
      param_2[6] = (int)s_too_many_length_or_distance_symb_100576f4;
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,-3);
      return;
    }
    uVar4 = ((uVar10 & 0x3fff) >> 5 & 0x1f) + 0x102 + (uVar10 & 0x1f);
    if (uVar4 < 0x13) {
      uVar4 = 0x13;
    }
    uVar4 = (*(code *)param_2[8])(param_2[10],uVar4,4);
    puVar3[3] = uVar4;
    if (uVar4 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,-4);
      return;
    }
    uVar10 = uVar10 >> 0xe;
    puVar7 = (uint *)((int)puVar7 - 0xe);
    puVar3[2] = 0;
    *puVar3 = 4;
    goto LAB_10050486;
  case 4:
LAB_10050486:
    if (puVar3[2] < (puVar3[1] >> 10) + 4) {
      do {
        for (; puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
          if (local_30 == 0) {
LAB_10050b60:
            puVar3[8] = uVar10;
            puVar3[7] = (uint)puVar7;
            iVar5 = *param_2;
            *param_2 = (int)local_2c;
            param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
            param_2[1] = 0;
            puVar3[0xc] = (uint)param_1;
            FUN_10051f50((int)puVar3,(int)param_2,param_3);
            return;
          }
          local_30 = local_30 - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
          local_2c = (uint *)((int)local_2c + 1);
        }
        uVar4 = uVar10 & 7;
        puVar7 = (uint *)((int)puVar7 - 3);
        uVar10 = uVar10 >> 3;
        *(uint *)(puVar3[3] + *(int *)(&DAT_1005768c + puVar3[2] * 4) * 4) = uVar4;
        uVar4 = puVar3[2];
        puVar3[2] = uVar4 + 1;
      } while (uVar4 + 1 < (puVar3[1] >> 10) + 4);
    }
    uVar4 = puVar3[2];
    while (uVar4 < 0x13) {
      *(undefined4 *)(puVar3[3] + *(int *)(&DAT_1005768c + puVar3[2] * 4) * 4) = 0;
      uVar4 = puVar3[2] + 1;
      puVar3[2] = uVar4;
    }
    puVar3[4] = 7;
    iVar5 = FUN_10050fb0((int *)puVar3[3],puVar3 + 4,puVar3 + 5,(int)param_2);
    if (iVar5 != 0) {
      if (iVar5 == -3) {
        *puVar3 = 9;
      }
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,iVar5);
      return;
    }
    puVar3[2] = 0;
    *puVar3 = 5;
LAB_10050565:
    if (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f)) {
      do {
        for (; puVar7 < (uint *)puVar3[4]; puVar7 = puVar7 + 2) {
          if (local_30 == 0) goto LAB_10050b60;
          local_30 = local_30 - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
          local_2c = (uint *)((int)local_2c + 1);
        }
        bVar1 = *(byte *)(puVar3[5] + 1 +
                         (*(uint *)(&DAT_10057ac0 + (int)puVar3[4] * 4) & uVar10) * 8);
        uVar4 = (uint)bVar1;
        local_4 = *(uint *)(puVar3[5] + (*(uint *)(&DAT_10057ac0 + (int)puVar3[4] * 4) & uVar10) * 8
                           + 4);
        local_28 = uVar4;
        if (local_4 < 0x10) {
          puVar7 = (uint *)((int)puVar7 - uVar4);
          uVar10 = uVar10 >> (bVar1 & 0x1f);
          *(uint *)(puVar3[3] + puVar3[2] * 4) = local_4;
          uVar4 = puVar3[2] + 1;
        }
        else {
          local_24 = 7;
          if (local_4 != 0x12) {
            local_24 = local_4 - 0xe;
          }
          local_8 = (uint *)(local_24 + uVar4);
          for (; puVar7 < local_8; puVar7 = puVar7 + 2) {
            if (local_30 == 0) goto LAB_10050b60;
            local_30 = local_30 - 1;
            param_3 = 0;
            uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
            local_2c = (uint *)((int)local_2c + 1);
          }
          uVar10 = uVar10 >> (bVar1 & 0x1f);
          local_28 = (-(uint)(local_4 != 0x12) & 0xfffffff8) + 0xb +
                     (*(uint *)(&DAT_10057ac0 + local_24 * 4) & uVar10);
          uVar10 = uVar10 >> ((byte)local_24 & 0x1f);
          puVar7 = (uint *)((int)puVar7 - (local_24 + uVar4));
          local_24 = puVar3[2];
          if ((puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f) < local_28 + local_24) {
LAB_10050b9f:
            *puVar3 = 9;
            param_2[6] = (int)s_invalid_bit_length_repeat_100576d8;
            puVar3[8] = uVar10;
            puVar3[7] = (uint)puVar7;
            param_2[1] = local_30;
            param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
            *param_2 = (int)local_2c;
            puVar3[0xc] = (uint)param_1;
            FUN_10051f50((int)puVar3,(int)param_2,-3);
            return;
          }
          uVar4 = local_24;
          if (local_4 == 0x10) {
            if (local_24 == 0) goto LAB_10050b9f;
            uVar6 = *(undefined4 *)((puVar3[3] - 4) + local_24 * 4);
          }
          else {
            uVar6 = 0;
          }
          do {
            uVar4 = uVar4 + 1;
            *(undefined4 *)((puVar3[3] - 4) + uVar4 * 4) = uVar6;
            local_28 = local_28 - 1;
          } while (local_28 != 0);
        }
        puVar3[2] = uVar4;
      } while (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f));
    }
    FUN_10051720(puVar3[5],(int)param_2);
    puVar3[5] = 0;
    local_28 = 9;
    local_24 = 6;
    iVar5 = FUN_100514d0((puVar3[1] & 0x1f) + 0x101,(puVar3[1] >> 5 & 0x1f) + 1,(int *)puVar3[3],
                         &local_28,&local_24,&local_1c,&local_20,(int)param_2);
    if (iVar5 != 0) {
      if (iVar5 == -3) {
        *puVar3 = 9;
      }
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,iVar5);
      return;
    }
    local_4 = FUN_10051760((char)local_28,(char)local_24,local_1c,local_20,(int)param_2);
    if (local_4 == 0) {
      FUN_10051720(local_20,(int)param_2);
      FUN_10051720(local_1c,(int)param_2);
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,-4);
      return;
    }
    (*(code *)param_2[9])(param_2[10],puVar3[3]);
    puVar3[3] = local_4;
    puVar3[1] = local_1c;
    puVar3[2] = local_20;
    *puVar3 = 6;
LAB_100507cc:
    puVar3[8] = uVar10;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    iVar5 = FUN_100517a0((uint)puVar3,param_2,param_3);
    if (iVar5 == 1) {
      param_3 = 0;
      FUN_10051f30(puVar3[3],(int)param_2);
      FUN_10051720(puVar3[2],(int)param_2);
      FUN_10051720(puVar3[1],(int)param_2);
      local_30 = param_2[1];
      local_2c = (uint *)*param_2;
      local_28 = puVar3[8];
      puVar7 = (uint *)puVar3[7];
      param_1 = (uint *)puVar3[0xc];
      if (param_1 < (uint *)puVar3[0xb]) {
        local_24 = (int)puVar3[0xb] + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar3[10] - (int)param_1;
      }
      if (puVar3[6] == 0) {
        *puVar3 = 0;
        goto switchD_10050191_default;
      }
      if ((uint *)0x7 < puVar7) {
        puVar7 = puVar7 + -2;
        local_30 = local_30 + 1;
        local_2c = (uint *)((int)local_2c + -1);
      }
      *puVar3 = 7;
LAB_10050ca6:
      puVar3[0xc] = (uint)param_1;
      iVar5 = FUN_10051f50((int)puVar3,(int)param_2,param_3);
      param_1 = (uint *)puVar3[0xc];
      if ((uint *)puVar3[0xb] == param_1) {
        *puVar3 = 8;
LAB_10050d0d:
        puVar3[8] = local_28;
        puVar3[7] = (uint)puVar7;
        param_2[1] = local_30;
        param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
        *param_2 = (int)local_2c;
        puVar3[0xc] = (uint)param_1;
        FUN_10051f50((int)puVar3,(int)param_2,1);
        return;
      }
      puVar3[7] = (uint)puVar7;
      puVar3[8] = local_28;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
    }
    FUN_10051f50((int)puVar3,(int)param_2,iVar5);
    return;
  case 5:
    goto LAB_10050565;
  case 6:
    goto LAB_100507cc;
  case 7:
    goto LAB_10050ca6;
  case 8:
    goto LAB_10050d0d;
  case 9:
    puVar3[8] = local_28;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    FUN_10051f50((int)puVar3,(int)param_2,-3);
    return;
  default:
    puVar3[8] = local_28;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    FUN_10051f50((int)puVar3,(int)param_2,-2);
    return;
  }
  *puVar3 = -(uint)(puVar3[6] != 0) & 7;
  goto switchD_10050191_default;
switchD_1005012d_caseD_0:
  for (; local_28 = uVar10, puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
    if (local_30 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
      *param_2 = (int)local_2c;
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,param_3);
      return;
    }
    local_30 = local_30 - 1;
    param_3 = 0;
    uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
    local_2c = (uint *)((int)local_2c + 1);
  }
  puVar3[6] = uVar10 & 1;
  switch((uVar10 & 7) >> 1) {
  case 0:
    *puVar3 = 1;
    uVar4 = (int)puVar7 - 3U & 7;
    local_28 = (uVar10 >> 3) >> (sbyte)uVar4;
    puVar7 = (uint *)(((int)puVar7 - 3U) - uVar4);
    break;
  case 1:
    FUN_100515c0(&local_c,&local_10,&local_14,&local_18);
    uVar4 = FUN_10051760((char)local_c,(char)local_10,local_14,local_18,(int)param_2);
    puVar3[3] = uVar4;
    if (uVar4 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
      *param_2 = (int)local_2c;
      puVar3[0xc] = (uint)param_1;
      FUN_10051f50((int)puVar3,(int)param_2,-4);
      return;
    }
    *puVar3 = 6;
    local_28 = uVar10 >> 3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar7 = (uint *)((int)puVar7 - 3);
    break;
  case 2:
    local_28 = uVar10 >> 3;
    puVar7 = (uint *)((int)puVar7 - 3);
    *puVar3 = 3;
    break;
  case 3:
    *puVar3 = 9;
    param_2[6] = (int)s_invalid_block_type_10057738;
    puVar3[8] = uVar10 >> 3;
    puVar3[7] = (int)puVar7 - 3;
    param_2[1] = local_30;
    param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
    *param_2 = (int)local_2c;
    puVar3[0xc] = (uint)param_1;
    FUN_10051f50((int)puVar3,(int)param_2,-3);
    return;
  }
  goto switchD_10050191_default;
}


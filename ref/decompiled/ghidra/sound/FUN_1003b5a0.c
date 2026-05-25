/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003b5a0 @ 0x1003B5A0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003b5a0(int *param_1,int *param_2,int param_3,int param_4,int *param_5,float *param_6,
            int param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_c0 [16];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puVar3 = local_c0;
  for (iVar2 = 0x2f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_3 != 0) {
    param_3 = param_3 + -4;
  }
  if (param_4 != 0) {
    param_4 = param_4 + -4;
  }
  if (param_7 != 0) {
    param_7 = param_7 + -4;
  }
  local_18 = param_8;
  local_8 = param_8 + 1;
  local_c = param_8 + 2;
  local_10 = param_8 + 3;
  local_14 = param_8 + 4;
  local_1c = param_8 + 5;
  local_20 = param_8 + 6;
  local_24 = param_8 + 0x24;
  local_28 = param_8 + 0x27;
  local_58 = *(int *)(&DAT_10064014 + *param_1 * 4);
  if (DAT_100b58a8 == 0) {
    *(undefined4 *)(param_4 + 4) = 1;
    *(undefined4 *)(param_4 + 8) = 1;
    if (*param_1 < 2) {
      *(undefined4 *)(param_4 + 4) = 0;
    }
    if ((*param_1 == 0) || (*param_1 == 2)) {
      *(undefined4 *)(param_4 + 8) = 0;
    }
    *param_5 = local_58;
    if (*param_5 < 5) {
      *param_5 = *param_8;
    }
    if ((*(int *)(param_4 + 4) == 1) && (*(int *)(param_4 + 8) == 1)) {
      *param_8 = *param_5;
    }
    if (*(int *)(param_4 + 4) != *(int *)(param_4 + 8)) {
      *param_5 = *param_8;
    }
  }
  else {
    if (local_58 < 5) {
      *local_24 = *local_14;
      local_48 = local_58;
    }
    else {
      *local_24 = local_58;
      local_48 = 2;
      iVar2 = *local_14 * 0xf + 8 + local_58;
      *local_14 = (int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4;
    }
    *local_28 = *param_2;
    iVar2 = DAT_100b58a0;
    local_2c = DAT_100b58a0;
    for (local_3c = 1; local_3c <= iVar2; local_3c = local_3c + 1) {
      param_8[local_3c * 3 + 3] = *(int *)(param_3 + local_3c * 4);
    }
    local_44 = local_48 + *local_c * 0x10 + 1 + *local_10 * 4;
    local_50 = (&DAT_10063f10)[local_44];
    local_34 = local_50 & 3;
    iVar2 = local_50 + ((int)local_50 >> 0x1f & 7U);
    local_40 = iVar2 >> 3;
    if (*local_1c < DAT_10063f04) {
      local_40 = (int)(local_40 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
    }
    local_4c = 4;
    if (*local_1c < DAT_10063f10) {
      local_4c = 3;
    }
    if (*local_1c < DAT_10063f0c) {
      local_4c = 2;
    }
    if (*local_1c < DAT_10063f08) {
      local_4c = 1;
    }
    *(uint *)(param_4 + 4) = (int)local_40 / 2 & 1;
    *(uint *)(param_4 + 8) = local_40 & 1;
    if (*local_8 == 0) {
      if ((local_40 & _DAT_10064450) != 0) {
        local_60 = 0;
        local_64 = param_8[0x28] & 1;
        local_44 = param_8[0x1c] * 0x10 + param_8[0x28] / 2;
        FUN_1003e520(&local_44,&local_38,&local_60);
        local_28[1] = local_28[2];
        if (-1 < (int)local_38) {
          local_28[1] = local_64 + local_38 * 2;
        }
        for (local_3c = 1; local_3c < 5; local_3c = local_3c + 1) {
          if (local_3c == 1) {
            local_50 = (local_20[0x1c] & 1U) + (local_20[0x19] & 7U) * 2;
          }
          else {
            local_50 = local_20[(9 - local_3c) * 3 + -2] & 0xf;
          }
          local_54 = local_20[(5 - local_3c) * 3 + -2] & 0x1f;
          local_64 = local_20[(5 - local_3c) * 3 + -2] & 1;
          local_44 = local_50 * 0x10 + local_54 / 2;
          FUN_1003e520(&local_44,&local_38,&local_60);
          if ((int)local_38 < 0) {
            local_38 = local_20[(5 - local_3c) * 3 + -1];
          }
          else {
            local_38 = local_64 + local_38 * 2;
            if ((local_38 & 0x10) == 0x10) {
              local_38 = local_38 - 0x20;
            }
          }
          local_20[(5 - local_3c) * 3 + -2] = local_38;
        }
        local_68 = local_60 * 0x66;
        lVar4 = __ftol();
        *local_1c = (int)lVar4;
      }
      *param_2 = local_28[1];
      iVar2 = DAT_100b58a0;
      for (local_3c = 1; local_3c <= iVar2; local_3c = local_3c + 1) {
        *(int *)(param_3 + local_3c * 4) = local_20[local_3c * 3 + -2];
      }
      if (local_34 == 1) {
        local_24[1] = local_24[2];
      }
      if (local_34 == 3) {
        local_24[1] = *local_24;
      }
      *param_5 = local_24[1];
      if ((local_40 & _DAT_10064448) != 0) {
        local_2c = local_28[1] - *local_28;
        local_6c = local_2c;
        if (local_2c < 0) {
          local_6c = -local_2c;
        }
        if (*(float *)(local_4c * 4 + 0x10063fa0) <= (float)local_6c) {
          local_30 = local_28[1] - local_28[2];
          local_70 = local_30;
          if (local_30 < 0) {
            local_70 = -local_30;
          }
          if (*(float *)(local_4c * 4 + 0x10063fa0) <= (float)local_70) {
            iVar2 = FUN_1003e480(local_28 + 2,local_28 + 1,local_28);
            *param_2 = iVar2;
          }
        }
        for (local_3c = 1; local_3c < 7; local_3c = local_3c + 1) {
          local_2c = local_20[local_3c * 3 + -2] - local_20[local_3c * 3 + -3];
          local_74 = local_2c;
          if (local_2c < 0) {
            local_74 = -local_2c;
          }
          if (*(float *)((local_4c + 8 + local_3c * 4) * 4 + 0x10063f80) <= (float)local_74) {
            local_30 = local_20[local_3c * 3 + -2] - local_20[local_3c * 3 + -1];
            local_78 = local_30;
            if (local_30 < 0) {
              local_78 = -local_30;
            }
            if (*(float *)((local_4c + 8 + local_3c * 4) * 4 + 0x10063f80) <= (float)local_78) {
              iVar2 = FUN_1003e480(local_20 + local_3c * 3 + -1,local_20 + local_3c * 3 + -2,
                                   local_20 + local_3c * 3 + -3);
              *(int *)(param_3 + local_3c * 4) = iVar2;
            }
          }
        }
      }
      if ((local_40 & _DAT_1006444c) != 0) {
        local_2c = local_24[1] - *local_24;
        local_7c = local_2c;
        if (local_2c < 0) {
          local_7c = -local_2c;
        }
        if (*(float *)(local_4c * 4 + 0x10063f90) <= (float)local_7c) {
          local_30 = local_24[1] - local_24[2];
          local_80 = local_30;
          if (local_30 < 0) {
            local_80 = -local_30;
          }
          if (*(float *)(local_4c * 4 + 0x10063f90) <= (float)local_80) {
            iVar2 = FUN_1003e480(local_24 + 2,local_24 + 1,local_24);
            *param_5 = iVar2;
          }
        }
      }
    }
    else {
      *local_8 = 0;
      *param_5 = local_58;
      if (*param_5 < 5) {
        *param_5 = *param_8;
      }
    }
    iVar2 = DAT_100b58a0;
    if ((local_40 & _DAT_10064454) != 0) {
      for (local_3c = 5; local_3c <= iVar2; local_3c = local_3c + 1) {
        *(undefined4 *)(param_3 + local_3c * 4) = *(undefined4 *)(local_3c * 4 + 0x10064418);
      }
    }
    *local_10 = local_48;
    *local_c = *(int *)(param_4 + 8);
    local_24[2] = local_24[1];
    local_24[1] = *local_24;
    local_28[2] = local_28[1];
    local_28[1] = *local_28;
    iVar2 = DAT_100b58a0;
    local_2c = DAT_100b58a0;
    for (local_3c = 1; local_3c <= iVar2; local_3c = local_3c + 1) {
      local_20[local_3c * 3 + -1] = local_20[local_3c * 3 + -2];
      local_20[local_3c * 3 + -2] = local_20[local_3c * 3 + -3];
    }
  }
  *param_2 = *(int *)(&DAT_10064214 + (0x1f - *param_2) * 8);
  for (local_3c = 1; local_3c < 3; local_3c = local_3c + 1) {
    local_54 = *(int *)(param_3 + local_3c * 4);
    local_50 = 0;
    if ((int)local_54 < 0) {
      local_50 = 1;
      local_54 = -local_54;
      if (0xf < (int)local_54) {
        local_54 = 0;
      }
    }
    local_54 = *(uint *)(&DAT_10064314 + local_54 * 8);
    if (local_50 == 1) {
      local_54 = -local_54;
    }
    local_5c = 0xf - *(int *)(local_3c * 4 + 0x100643f0);
    uVar1 = FUN_1003e2c0((int *)&DAT_10063f00,&local_5c);
    *(uint *)(param_3 + local_3c * 4) = local_54 * uVar1;
  }
  local_2c = DAT_100b58a0;
  for (local_3c = 3; local_3c <= local_2c; local_3c = local_3c + 1) {
    local_54 = *(int *)(param_3 + local_3c * 4);
    local_5c = 0xf - *(int *)(local_3c * 4 + 0x100643f0);
    uVar1 = FUN_1003e2c0((int *)&DAT_10063f00,&local_5c);
    local_54 = local_54 * uVar1 + *(int *)(local_3c * 4 + 0x100643c8);
    lVar4 = __ftol();
    *(int *)(param_3 + local_3c * 4) = (int)lVar4;
  }
  *param_6 = (float)*param_2;
  iVar2 = DAT_100b58a0;
  local_2c = DAT_100b58a0;
  for (local_3c = 1; local_3c <= iVar2; local_3c = local_3c + 1) {
    *(float *)(param_7 + local_3c * 4) = (float)*(int *)(param_3 + local_3c * 4) / _DAT_1005ebd8;
  }
  local_8 = (int *)0x1003bf1f;
  FUN_100431ce();
  return;
}


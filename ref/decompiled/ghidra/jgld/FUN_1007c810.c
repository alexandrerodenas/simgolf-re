/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007c810 @ 0x1007C810 */


void __cdecl FUN_1007c810(uint *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_f0 [16];
  char local_b0;
  int local_ac;
  undefined4 local_a8 [2];
  uint local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  byte *local_68;
  byte *local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  byte *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  puVar3 = local_f0;
  for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    local_8 = *param_1 * *(int *)(&DAT_10123244 + param_3 * 4);
    local_b0 = *(char *)((int)param_1 + 0xb);
    if (local_b0 == '\x01') {
      local_c = (byte *)(param_2 + (*param_1 - 1 >> 3));
      local_10 = (byte *)(param_2 + (local_8 - 1 >> 3));
      local_28 = *(int *)(&DAT_10123244 + param_3 * 4);
      if ((param_4 & 0x10000) == 0) {
        local_14 = 7 - (*param_1 + 7 & 7);
        local_18 = 7 - (local_8 + 7 & 7);
        local_1c = 0;
        local_20 = 7;
        local_24 = 1;
      }
      else {
        local_14 = *param_1 + 7 & 7;
        local_18 = local_8 + 7 & 7;
        local_1c = 7;
        local_20 = 0;
        local_24 = -1;
      }
      for (local_30 = 0; local_30 < *param_1; local_30 = local_30 + 1) {
        uVar2 = (int)(uint)*local_c >> ((byte)local_14 & 0x1f);
        local_2c = CONCAT31(local_2c._1_3_,(char)uVar2) & 0xffffff01;
        for (local_34 = 0; local_34 < local_28; local_34 = local_34 + 1) {
          *local_10 = *local_10 & (byte)(0x7f7f >> (7 - (byte)local_18 & 0x1f));
          *local_10 = *local_10 | (byte)((uVar2 & 1) << ((byte)local_18 & 0x1f));
          if (local_18 == local_20) {
            local_18 = local_1c;
            local_10 = local_10 + -1;
          }
          else {
            local_18 = local_18 + local_24;
          }
        }
        if (local_14 == local_20) {
          local_14 = local_1c;
          local_c = local_c + -1;
        }
        else {
          local_14 = local_14 + local_24;
        }
      }
    }
    else if (local_b0 == '\x02') {
      local_38 = (byte *)(param_2 + (*param_1 - 1 >> 2));
      local_3c = (byte *)(param_2 + (local_8 - 1 >> 2));
      local_54 = *(int *)(&DAT_10123244 + param_3 * 4);
      if ((param_4 & 0x10000) == 0) {
        local_40 = (3 - (*param_1 + 3 & 3)) * 2;
        local_44 = (3 - (local_8 + 3 & 3)) * 2;
        local_48 = 0;
        local_4c = 6;
        local_50 = 2;
      }
      else {
        local_40 = (*param_1 + 3 & 3) << 1;
        local_44 = (local_8 + 3 & 3) << 1;
        local_48 = 6;
        local_4c = 0;
        local_50 = -2;
      }
      for (local_58 = 0; local_58 < *param_1; local_58 = local_58 + 1) {
        uVar2 = (int)(uint)*local_38 >> ((byte)local_40 & 0x1f);
        local_5c = CONCAT31(local_5c._1_3_,(char)uVar2) & 0xffffff03;
        for (local_60 = 0; local_60 < local_54; local_60 = local_60 + 1) {
          *local_3c = *local_3c & (byte)(0x3f3f >> (6 - (byte)local_44 & 0x1f));
          *local_3c = *local_3c | (byte)((uVar2 & 3) << ((byte)local_44 & 0x1f));
          if (local_44 == local_4c) {
            local_44 = local_48;
            local_3c = local_3c + -1;
          }
          else {
            local_44 = local_44 + local_50;
          }
        }
        if (local_40 == local_4c) {
          local_40 = local_48;
          local_38 = local_38 + -1;
        }
        else {
          local_40 = local_40 + local_50;
        }
      }
    }
    else if (local_b0 == '\x04') {
      local_64 = (byte *)(param_2 + (*param_1 - 1 >> 1));
      local_68 = (byte *)(param_2 + (local_8 - 1 >> 1));
      local_84 = *(int *)(&DAT_10123244 + param_3 * 4);
      if ((param_4 & 0x10000) == 0) {
        local_6c = (1 - (*param_1 + 1 & 1)) * 4;
        local_70 = (1 - (local_8 + 1 & 1)) * 4;
        local_74 = 0;
        local_78 = 4;
        local_7c = 4;
      }
      else {
        local_6c = (*param_1 + 1 & 1) << 2;
        local_70 = (local_8 + 1 & 1) << 2;
        local_74 = 4;
        local_78 = 0;
        local_7c = -4;
      }
      for (local_80 = 0; local_80 < *param_1; local_80 = local_80 + 1) {
        uVar2 = (int)(uint)*local_64 >> ((byte)local_6c & 0x1f);
        local_88 = CONCAT31(local_88._1_3_,(char)uVar2) & 0xffffff0f;
        for (local_8c = 0; local_8c < local_84; local_8c = local_8c + 1) {
          *local_68 = *local_68 & (byte)(0xf0f >> (4 - (byte)local_70 & 0x1f));
          *local_68 = *local_68 | (byte)((uVar2 & 0xf) << ((byte)local_70 & 0x1f));
          if (local_70 == local_78) {
            local_70 = local_74;
            local_68 = local_68 + -1;
          }
          else {
            local_70 = local_70 + local_7c;
          }
        }
        if (local_6c == local_78) {
          local_6c = local_74;
          local_64 = local_64 + -1;
        }
        else {
          local_6c = local_6c + local_7c;
        }
      }
    }
    else {
      local_90 = (int)(uint)*(byte *)((int)param_1 + 0xb) >> 3;
      local_94 = (undefined4 *)(param_2 + (*param_1 - 1) * local_90);
      local_98 = (undefined4 *)(param_2 + (local_8 - 1) * local_90);
      local_9c = *(int *)(&DAT_10123244 + param_3 * 4);
      for (local_a0 = 0; local_a0 < *param_1; local_a0 = local_a0 + 1) {
        FUN_1007f3a0(local_a8,local_94,local_90);
        for (local_ac = 0; local_ac < local_9c; local_ac = local_ac + 1) {
          FUN_1007f3a0(local_98,local_a8,local_90);
          local_98 = (undefined4 *)((int)local_98 - local_90);
        }
        local_94 = (undefined4 *)((int)local_94 - local_90);
      }
    }
    *param_1 = local_8;
    param_1[1] = local_8 * *(byte *)((int)param_1 + 0xb) + 7 >> 3;
  }
  local_8 = 0x1007ce73;
  __chkesp();
  return;
}


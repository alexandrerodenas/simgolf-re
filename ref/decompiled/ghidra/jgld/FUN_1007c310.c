/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007c310 @ 0x1007C310 */


void __cdecl FUN_1007c310(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_d8 [16];
  char local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  byte *local_84;
  undefined4 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  byte *local_5c;
  byte *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  byte *local_34;
  byte *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  byte *local_8;
  
  puVar3 = local_d8;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_3 == 0xff) {
    FUN_1007f3a0((undefined4 *)param_2,(undefined4 *)(*(int *)(param_1 + 0xec) + 1),
                 *(int *)(param_1 + 200) * (uint)*(byte *)(param_1 + 0x10b) + 7 >> 3);
  }
  else {
    local_98 = *(char *)(param_1 + 0x10b);
    if (local_98 == '\x01') {
      local_8 = (byte *)(*(int *)(param_1 + 0xec) + 1);
      local_c = param_2;
      local_1c = 0x80;
      local_28 = *(uint *)(param_1 + 200);
      if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
        local_14 = 7;
        local_18 = 0;
        local_10 = -1;
      }
      else {
        local_14 = 0;
        local_18 = 7;
        local_10 = 1;
      }
      local_20 = local_14;
      for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
        if ((local_1c & param_3) != 0) {
          bVar1 = (byte)local_20;
          local_2c = (int)(uint)*local_8 >> (bVar1 & 0x1f) & 1;
          *local_c = *local_c & (byte)(0x7f7f >> (7 - bVar1 & 0x1f));
          *local_c = *local_c | (byte)(local_2c << (bVar1 & 0x1f));
        }
        if (local_20 == local_18) {
          local_20 = local_14;
          local_8 = local_8 + 1;
          local_c = local_c + 1;
        }
        else {
          local_20 = local_20 + local_10;
        }
        if (local_1c == 1) {
          local_1c = 0x80;
        }
        else {
          local_1c = (int)local_1c >> 1;
        }
      }
    }
    else if (local_98 == '\x02') {
      local_30 = (byte *)(*(int *)(param_1 + 0xec) + 1);
      local_34 = param_2;
      local_44 = 0x80;
      local_50 = *(uint *)(param_1 + 200);
      if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
        local_38 = 6;
        local_3c = 0;
        local_40 = -2;
      }
      else {
        local_38 = 0;
        local_3c = 6;
        local_40 = 2;
      }
      local_48 = local_38;
      for (local_4c = 0; local_4c < local_50; local_4c = local_4c + 1) {
        if ((local_44 & param_3) != 0) {
          bVar1 = (byte)local_48;
          local_54 = (int)(uint)*local_30 >> (bVar1 & 0x1f) & 3;
          *local_34 = *local_34 & (byte)(0x3f3f >> (6 - bVar1 & 0x1f));
          *local_34 = *local_34 | (byte)(local_54 << (bVar1 & 0x1f));
        }
        if (local_48 == local_3c) {
          local_48 = local_38;
          local_30 = local_30 + 1;
          local_34 = local_34 + 1;
        }
        else {
          local_48 = local_48 + local_40;
        }
        if (local_44 == 1) {
          local_44 = 0x80;
        }
        else {
          local_44 = (int)local_44 >> 1;
        }
      }
    }
    else if (local_98 == '\x04') {
      local_58 = (byte *)(*(int *)(param_1 + 0xec) + 1);
      local_5c = param_2;
      local_6c = 0x80;
      local_78 = *(uint *)(param_1 + 200);
      if ((*(uint *)(param_1 + 0x70) & 0x10000) == 0) {
        local_60 = 4;
        local_64 = 0;
        local_68 = -4;
      }
      else {
        local_60 = 0;
        local_64 = 4;
        local_68 = 4;
      }
      local_70 = local_60;
      for (local_74 = 0; local_74 < local_78; local_74 = local_74 + 1) {
        if ((local_6c & param_3) != 0) {
          bVar1 = (byte)local_70;
          local_7c = (int)(uint)*local_58 >> (bVar1 & 0x1f) & 0xf;
          *local_5c = *local_5c & (byte)(0xf0f >> (4 - bVar1 & 0x1f));
          *local_5c = *local_5c | (byte)(local_7c << (bVar1 & 0x1f));
        }
        if (local_70 == local_64) {
          local_70 = local_60;
          local_58 = local_58 + 1;
          local_5c = local_5c + 1;
        }
        else {
          local_70 = local_70 + local_68;
        }
        if (local_6c == 1) {
          local_6c = 0x80;
        }
        else {
          local_6c = (int)local_6c >> 1;
        }
      }
    }
    else {
      local_80 = (undefined4 *)(*(int *)(param_1 + 0xec) + 1);
      local_84 = param_2;
      local_88 = (int)(uint)*(byte *)(param_1 + 0x10b) >> 3;
      local_90 = *(uint *)(param_1 + 200);
      local_94 = CONCAT31(local_94._1_3_,0x80);
      for (local_8c = 0; local_8c < local_90; local_8c = local_8c + 1) {
        if ((local_94 & 0xff & param_3) != 0) {
          FUN_1007f3a0((undefined4 *)local_84,local_80,local_88);
        }
        local_80 = (undefined4 *)((int)local_80 + local_88);
        local_84 = local_84 + local_88;
        if ((local_94 & 0xff) == 1) {
          local_94 = CONCAT31(local_94._1_3_,0x80);
        }
        else {
          local_94 = CONCAT31(local_94._1_3_,(byte)local_94 >> 1);
        }
      }
    }
  }
  local_8 = (byte *)0x1007c7ff;
  __chkesp();
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007ce80 @ 0x1007CE80 */
/* Body size: 993 addresses */


void __cdecl FUN_1007ce80(int param_1,int param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_d0 [16];
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  byte *local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  uint local_2c;
  byte *local_28;
  byte *local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = local_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_7c = param_5;
  switch(param_5) {
  case 0:
    break;
  case 1:
    local_c = *(uint *)(param_2 + 4);
    local_10 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_14 = param_3 + local_10;
    local_18 = param_3;
    for (local_8 = local_10; local_8 < local_c; local_8 = local_8 + 1) {
      *local_14 = *local_14 + *local_18;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    break;
  case 2:
    local_20 = *(uint *)(param_2 + 4);
    local_24 = param_3;
    local_28 = param_4;
    for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
      *local_24 = *local_24 + *local_28;
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    }
    break;
  case 3:
    local_30 = param_3;
    local_34 = param_4;
    local_38 = param_3;
    local_3c = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_40 = *(int *)(param_2 + 4) - local_3c;
    for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
      *local_30 = *local_30 + (char)((int)(uint)*local_34 >> 1);
      local_34 = local_34 + 1;
      local_30 = local_30 + 1;
    }
    for (local_2c = 0; local_2c < local_40; local_2c = local_2c + 1) {
      *local_30 = *local_30 + (char)(((uint)*local_34 + (uint)*local_38) / 2);
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
      local_30 = local_30 + 1;
    }
    break;
  case 4:
    local_48 = param_3;
    local_4c = param_4;
    local_50 = param_3;
    local_54 = param_4;
    local_58 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_5c = *(int *)(param_2 + 4) - local_58;
    for (local_44 = 0; local_44 < local_58; local_44 = local_44 + 1) {
      *local_48 = *local_48 + *local_4c;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    }
    for (local_44 = 0; local_44 < local_5c; local_44 = local_44 + 1) {
      local_60 = (uint)*local_50;
      local_50 = local_50 + 1;
      local_64 = (uint)*local_4c;
      local_4c = local_4c + 1;
      local_68 = (uint)*local_54;
      local_54 = local_54 + 1;
      local_88 = local_64 - local_68;
      iVar1 = local_60 - local_68;
      local_80 = local_88;
      if (local_88 < 0) {
        local_80 = -local_88;
      }
      local_6c = local_80;
      local_84 = iVar1;
      if (iVar1 < 0) {
        local_84 = -iVar1;
      }
      local_70 = local_84;
      if (local_88 + iVar1 < 0) {
        local_88 = -(local_88 + iVar1);
      }
      else {
        local_88 = local_88 + iVar1;
      }
      local_74 = local_88;
      if ((local_84 < local_80) || (local_8c = local_60, local_88 < local_80)) {
        local_90 = local_68;
        if (local_84 <= local_88) {
          local_90 = local_64;
        }
        local_8c = local_90;
      }
      local_78 = local_8c;
      *local_48 = *local_48 + (char)local_8c;
      local_48 = local_48 + 1;
    }
    break;
  default:
    FUN_10079040(param_1,"Ignoring bad adaptive filter type");
    *param_3 = 0;
  }
  local_8 = 0x1007d25d;
  __chkesp();
  return;
}


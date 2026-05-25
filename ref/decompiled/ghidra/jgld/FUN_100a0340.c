/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100a0340 @ 0x100A0340 */


undefined4 __cdecl
FUN_100a0340(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_7c [16];
  uint local_3c;
  byte *local_38;
  uint local_30;
  uint local_24;
  byte *local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  puVar6 = local_7c;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_18 = (byte *)*param_6;
  local_1c = param_6[1];
  local_10 = *(uint *)(param_5 + 0x20);
  local_14 = *(uint *)(param_5 + 0x1c);
  local_20 = *(byte **)(param_5 + 0x30);
  if (local_20 < *(byte **)(param_5 + 0x2c)) {
    local_3c = (*(int *)(param_5 + 0x2c) - (int)local_20) - 1;
  }
  else {
    local_3c = *(int *)(param_5 + 0x28) - (int)local_20;
  }
  local_24 = local_3c;
  uVar2 = *(uint *)(&DAT_101274a4 + param_1 * 4);
  uVar3 = *(uint *)(&DAT_101274a4 + param_2 * 4);
LAB_100a03cc:
  for (; local_14 < 0x14; local_14 = local_14 + 8) {
    local_1c = local_1c - 1;
    local_10 = local_10 | (uint)*local_18 << ((byte)local_14 & 0x1f);
    local_18 = local_18 + 1;
  }
  local_8 = (byte *)(param_3 + (local_10 & uVar2) * 8);
  local_c = (uint)*local_8;
  if (local_c != 0) {
LAB_100a0466:
    local_10 = local_10 >> (local_8[1] & 0x1f);
    local_14 = local_14 - local_8[1];
    if ((local_c & 0x10) == 0) goto LAB_100a0774;
    local_c = local_c & 0xf;
    local_30 = *(int *)(local_8 + 4) + (local_10 & *(uint *)(&DAT_101274a4 + local_c * 4));
    local_10 = local_10 >> (sbyte)local_c;
    for (local_14 = local_14 - local_c; local_14 < 0xf; local_14 = local_14 + 8) {
      local_1c = local_1c - 1;
      local_10 = local_10 | (uint)*local_18 << ((byte)local_14 & 0x1f);
      local_18 = local_18 + 1;
    }
    local_8 = (byte *)(param_4 + (local_10 & uVar3) * 8);
    bVar1 = *local_8;
    while( true ) {
      local_c = (uint)bVar1;
      local_10 = local_10 >> (local_8[1] & 0x1f);
      local_14 = local_14 - local_8[1];
      if ((bVar1 & 0x10) != 0) break;
      if ((bVar1 & 0x40) != 0) {
        param_6[6] = (int)"invalid distance code";
        iVar5 = (int)local_18 - (local_14 >> 3);
        *(uint *)(param_5 + 0x20) = local_10;
        *(uint *)(param_5 + 0x1c) = local_14 & 7;
        param_6[1] = local_1c + (local_14 >> 3);
        param_6[2] = param_6[2] + (iVar5 - *param_6);
        *param_6 = iVar5;
        *(byte **)(param_5 + 0x30) = local_20;
        return 0xfffffffd;
      }
      local_8 = (byte *)(*(int *)(local_8 + 4) +
                        (local_10 & *(uint *)(&DAT_101274a4 + local_c * 4)) * 8);
      bVar1 = *local_8;
    }
    local_c = local_c & 0xf;
    for (; local_14 < local_c; local_14 = local_14 + 8) {
      local_1c = local_1c - 1;
      local_10 = local_10 | (uint)*local_18 << ((byte)local_14 & 0x1f);
      local_18 = local_18 + 1;
    }
    uVar4 = *(int *)(local_8 + 4) + (local_10 & *(uint *)(&DAT_101274a4 + local_c * 4));
    local_10 = local_10 >> (sbyte)local_c;
    local_14 = local_14 - local_c;
    local_24 = local_24 - local_30;
    if ((uint)((int)local_20 - *(int *)(param_5 + 0x24)) < uVar4) {
      local_c = uVar4 - ((int)local_20 - *(int *)(param_5 + 0x24));
      local_38 = (byte *)(*(int *)(param_5 + 0x28) - local_c);
      if (local_c < local_30) {
        local_30 = local_30 - local_c;
        do {
          *local_20 = *local_38;
          local_20 = local_20 + 1;
          local_38 = local_38 + 1;
          local_c = local_c - 1;
        } while (local_c != 0);
        local_38 = *(byte **)(param_5 + 0x24);
      }
    }
    else {
      local_38 = local_20 + -uVar4;
      *local_20 = *local_38;
      local_20[1] = local_38[1];
      local_20 = local_20 + 2;
      local_38 = local_38 + 2;
      local_30 = local_30 - 2;
    }
    do {
      *local_20 = *local_38;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_30 = local_30 - 1;
    } while (local_30 != 0);
    goto LAB_100a08ef;
  }
  local_10 = local_10 >> (local_8[1] & 0x1f);
  local_14 = local_14 - local_8[1];
  *local_20 = local_8[4];
  local_20 = local_20 + 1;
  local_24 = local_24 - 1;
  goto LAB_100a08ef;
LAB_100a0774:
  if ((local_c & 0x40) != 0) {
    if ((local_c & 0x20) != 0) {
      iVar5 = (int)local_18 - (local_14 >> 3);
      *(uint *)(param_5 + 0x20) = local_10;
      *(uint *)(param_5 + 0x1c) = local_14 & 7;
      param_6[1] = local_1c + (local_14 >> 3);
      param_6[2] = param_6[2] + (iVar5 - *param_6);
      *param_6 = iVar5;
      *(byte **)(param_5 + 0x30) = local_20;
      return 1;
    }
    param_6[6] = (int)"invalid literal/length code";
    iVar5 = (int)local_18 - (local_14 >> 3);
    *(uint *)(param_5 + 0x20) = local_10;
    *(uint *)(param_5 + 0x1c) = local_14 & 7;
    param_6[1] = local_1c + (local_14 >> 3);
    param_6[2] = param_6[2] + (iVar5 - *param_6);
    *param_6 = iVar5;
    *(byte **)(param_5 + 0x30) = local_20;
    return 0xfffffffd;
  }
  local_8 = (byte *)(*(int *)(local_8 + 4) + (local_10 & *(uint *)(&DAT_101274a4 + local_c * 4)) * 8
                    );
  local_c = (uint)*local_8;
  if (local_c == 0) goto code_r0x100a07a7;
  goto LAB_100a0466;
code_r0x100a07a7:
  local_10 = local_10 >> (local_8[1] & 0x1f);
  local_14 = local_14 - local_8[1];
  *local_20 = local_8[4];
  local_20 = local_20 + 1;
  local_24 = local_24 - 1;
LAB_100a08ef:
  if ((local_24 < 0x102) || (local_1c < 10)) {
    iVar5 = (int)local_18 - (local_14 >> 3);
    *(uint *)(param_5 + 0x20) = local_10;
    *(uint *)(param_5 + 0x1c) = local_14 & 7;
    param_6[1] = local_1c + (local_14 >> 3);
    param_6[2] = param_6[2] + (iVar5 - *param_6);
    *param_6 = iVar5;
    *(byte **)(param_5 + 0x30) = local_20;
    return 0;
  }
  goto LAB_100a03cc;
}


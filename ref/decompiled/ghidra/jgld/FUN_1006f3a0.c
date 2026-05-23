/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006f3a0 @ 0x1006F3A0 */
/* Body size: 3037 addresses */


void __cdecl
FUN_1006f3a0(int *param_1,byte *param_2,size_t param_3,size_t param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_11c [16];
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  size_t local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c;
  int local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined2 local_28;
  byte local_26;
  size_t local_24;
  size_t local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  size_t local_c;
  int local_8;
  
  puVar6 = local_11c;
  for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  param_1[0x1c] = param_1[0x1c] | 0x40;
  if (param_6 == 0) {
    iVar5 = FUN_10078e60(param_1,param_3);
    param_1[0x7c] = iVar5;
    for (local_8 = 0; local_8 < (int)param_3; local_8 = local_8 + 1) {
      *(undefined1 *)(param_1[0x7c] + local_8) = (undefined1)local_8;
    }
  }
  if ((int)param_4 < (int)param_3) {
    if (param_5 == 0) {
      local_50 = (void *)FUN_10078e60(param_1,param_3);
      local_54 = (void *)FUN_10078e60(param_1,param_3);
      for (local_40 = 0; local_40 < (int)param_3; local_40 = local_40 + 1) {
        *(undefined1 *)((int)local_50 + local_40) = (undefined1)local_40;
        *(undefined1 *)((int)local_54 + local_40) = (undefined1)local_40;
      }
      local_4c = (void *)FUN_10078e60(param_1,0xc04);
      for (local_40 = 0; local_40 < 0x301; local_40 = local_40 + 1) {
        *(undefined4 *)((int)local_4c + local_40 * 4) = 0;
      }
      local_48 = param_3;
      local_44 = 0x60;
      while ((int)param_4 < (int)local_48) {
        for (local_40 = 0; iVar5 = local_40, local_40 < (int)(local_48 - 1); local_40 = local_40 + 1
            ) {
          while (local_58 = iVar5 + 1, local_58 < (int)local_48) {
            iVar5 = FUN_1007f370((uint)param_2[local_40 * 3] - (uint)param_2[local_58 * 3]);
            iVar4 = FUN_1007f370((uint)param_2[local_40 * 3 + 1] - (uint)param_2[local_58 * 3 + 1]);
            local_5c = FUN_1007f370((uint)param_2[local_40 * 3 + 2] -
                                    (uint)param_2[local_58 * 3 + 2]);
            local_5c = iVar5 + iVar4 + local_5c;
            iVar5 = local_58;
            if (local_5c <= local_44) {
              local_60 = (undefined4 *)FUN_10078e60(param_1,8);
              *local_60 = *(undefined4 *)((int)local_4c + local_5c * 4);
              *(undefined1 *)(local_60 + 1) = (undefined1)local_40;
              *(undefined1 *)((int)local_60 + 5) = (undefined1)local_58;
              *(undefined4 **)((int)local_4c + local_5c * 4) = local_60;
              iVar5 = local_58;
            }
          }
        }
        for (local_40 = 0; local_40 <= local_44; local_40 = local_40 + 1) {
          if (*(int *)((int)local_4c + local_40 * 4) != 0) {
            for (local_64 = *(undefined4 **)((int)local_4c + local_40 * 4);
                local_64 != (undefined4 *)0x0; local_64 = (undefined4 *)*local_64) {
              if (((int)(uint)*(byte *)((int)local_50 + (uint)*(byte *)(local_64 + 1)) <
                   (int)local_48) &&
                 ((int)(uint)*(byte *)((int)local_50 + (uint)*(byte *)((int)local_64 + 5)) <
                  (int)local_48)) {
                if ((local_48 & 1) == 0) {
                  bVar1 = *(byte *)((int)local_64 + 5);
                  bVar2 = *(byte *)(local_64 + 1);
                }
                else {
                  bVar1 = *(byte *)(local_64 + 1);
                  bVar2 = *(byte *)((int)local_64 + 5);
                }
                local_68 = (uint)bVar1;
                local_6c = (uint)bVar2;
                local_48 = local_48 - 1;
                bVar2 = *(byte *)((int)local_50 + local_68);
                *(undefined2 *)(param_2 + (uint)bVar2 * 3) = *(undefined2 *)(param_2 + local_48 * 3)
                ;
                (param_2 + (uint)bVar2 * 3)[2] = (param_2 + local_48 * 3)[2];
                if (param_6 == 0) {
                  for (local_70 = 0; local_70 < (int)param_3; local_70 = local_70 + 1) {
                    if (*(char *)(param_1[0x7c] + local_70) == *(char *)((int)local_50 + local_68))
                    {
                      *(undefined1 *)(param_1[0x7c] + local_70) =
                           *(undefined1 *)((int)local_50 + local_6c);
                    }
                    if (*(byte *)(param_1[0x7c] + local_70) == local_48) {
                      *(undefined1 *)(param_1[0x7c] + local_70) =
                           *(undefined1 *)((int)local_50 + local_68);
                    }
                  }
                }
                *(undefined1 *)((int)local_50 + (uint)*(byte *)((int)local_54 + local_48)) =
                     *(undefined1 *)((int)local_50 + local_68);
                *(undefined1 *)((int)local_54 + (uint)*(byte *)((int)local_50 + local_68)) =
                     *(undefined1 *)((int)local_54 + local_48);
                *(undefined1 *)((int)local_50 + local_68) = (undefined1)local_48;
                *(byte *)((int)local_54 + local_48) = bVar1;
              }
              if ((int)local_48 <= (int)param_4) break;
            }
            if ((int)local_48 <= (int)param_4) break;
          }
        }
        for (local_40 = 0; local_40 < 0x301; local_40 = local_40 + 1) {
          if (*(int *)((int)local_4c + local_40 * 4) != 0) {
            local_74 = *(undefined4 **)((int)local_4c + local_40 * 4);
            while (local_74 != (undefined4 *)0x0) {
              local_78 = (undefined4 *)*local_74;
              FUN_10078ed0((int)param_1,local_74);
              local_74 = local_78;
            }
          }
          *(undefined4 *)((int)local_4c + local_40 * 4) = 0;
        }
        local_44 = local_44 + 0x60;
      }
      FUN_10078ed0((int)param_1,local_4c);
      FUN_10078ed0((int)param_1,local_54);
      FUN_10078ed0((int)param_1,local_50);
    }
    else {
      local_10 = (void *)FUN_10078e60(param_1,param_3);
      for (local_c = 0; sVar3 = param_3, (int)local_c < (int)param_3; local_c = local_c + 1) {
        *(undefined1 *)((int)local_10 + local_c) = (undefined1)local_c;
      }
      do {
        local_c = sVar3 - 1;
        if ((int)local_c < (int)param_4) break;
        local_14 = 1;
        for (local_18 = 0; local_18 < (int)local_c; local_18 = local_18 + 1) {
          if (*(ushort *)(param_5 + (uint)*(byte *)((int)local_10 + local_18) * 2) <
              *(ushort *)(param_5 + (uint)*(byte *)((int)local_10 + local_18 + 1) * 2)) {
            local_1c = *(undefined1 *)((int)local_10 + local_18);
            *(undefined1 *)((int)local_10 + local_18) =
                 *(undefined1 *)((int)local_10 + local_18 + 1);
            *(undefined1 *)((int)local_10 + local_18 + 1) = local_1c;
            local_14 = 0;
          }
        }
        sVar3 = local_c;
      } while (local_14 == 0);
      if (param_6 == 0) {
        local_24 = param_3;
        for (local_c = 0; (int)local_c < (int)param_4; local_c = local_c + 1) {
          if ((int)param_4 <= (int)(uint)*(byte *)((int)local_10 + local_c)) {
            do {
              local_24 = local_24 - 1;
            } while ((int)param_4 <= (int)(uint)*(byte *)((int)local_10 + local_24));
            local_28 = *(undefined2 *)(param_2 + local_24 * 3);
            local_26 = (param_2 + local_24 * 3)[2];
            *(undefined2 *)(param_2 + local_24 * 3) = *(undefined2 *)(param_2 + local_c * 3);
            (param_2 + local_24 * 3)[2] = (param_2 + local_c * 3)[2];
            *(undefined2 *)(param_2 + local_c * 3) = local_28;
            (param_2 + local_c * 3)[2] = local_26;
            *(undefined1 *)(param_1[0x7c] + local_24) = (undefined1)local_c;
            *(undefined1 *)(param_1[0x7c] + local_c) = (undefined1)local_24;
          }
        }
        for (local_c = 0; (int)local_c < (int)param_3; local_c = local_c + 1) {
          if ((int)param_4 <= (int)(uint)*(byte *)(param_1[0x7c] + local_c)) {
            local_38 = (uint)*(byte *)(param_1[0x7c] + local_c);
            iVar5 = FUN_1007f370((uint)param_2[local_38 * 3] - (uint)*param_2);
            iVar4 = FUN_1007f370((uint)param_2[local_38 * 3 + 1] - (uint)param_2[1]);
            local_2c = FUN_1007f370((uint)param_2[local_38 * 3 + 2] - (uint)param_2[2]);
            local_2c = iVar5 + iVar4 + local_2c;
            local_34 = 0;
            for (local_30 = 1; local_30 < (int)param_4; local_30 = local_30 + 1) {
              iVar5 = FUN_1007f370((uint)param_2[local_38 * 3] - (uint)param_2[local_30 * 3]);
              iVar4 = FUN_1007f370((uint)param_2[local_38 * 3 + 1] - (uint)param_2[local_30 * 3 + 1]
                                  );
              local_3c = FUN_1007f370((uint)param_2[local_38 * 3 + 2] -
                                      (uint)param_2[local_30 * 3 + 2]);
              local_3c = iVar5 + iVar4 + local_3c;
              if (local_3c < local_2c) {
                local_34 = local_30;
                local_2c = local_3c;
              }
            }
            *(undefined1 *)(param_1[0x7c] + local_c) = (undefined1)local_34;
          }
        }
      }
      else {
        local_20 = param_3;
        for (local_c = 0; (int)local_c < (int)param_4; local_c = local_c + 1) {
          if ((int)param_4 <= (int)(uint)*(byte *)((int)local_10 + local_c)) {
            do {
              local_20 = local_20 - 1;
            } while ((int)param_4 <= (int)(uint)*(byte *)((int)local_10 + local_20));
            *(undefined2 *)(param_2 + local_c * 3) = *(undefined2 *)(param_2 + local_20 * 3);
            (param_2 + local_c * 3)[2] = (param_2 + local_20 * 3)[2];
          }
        }
      }
      FUN_10078ed0((int)param_1,local_10);
    }
    param_3 = param_4;
  }
  if (param_1[0x45] == 0) {
    param_1[0x45] = (int)param_2;
  }
  *(undefined2 *)(param_1 + 0x46) = (undefined2)param_3;
  if (param_6 != 0) {
    local_84 = 0xf;
    local_88 = 0x20;
    local_8c = 0x20;
    local_90 = 0x20;
    local_94 = 0x8000;
    iVar5 = FUN_10078e60(param_1,0x8000);
    param_1[0x7b] = iVar5;
    _memset((void *)param_1[0x7b],0,local_94);
    local_80 = (void *)FUN_10078e60(param_1,local_94);
    _memset(local_80,0xff,local_94);
    for (local_7c = 0; local_7c < (int)param_3; local_7c = local_7c + 1) {
      local_a4 = (int)(uint)param_2[local_7c * 3] >> 3;
      local_a8 = (int)(uint)param_2[local_7c * 3 + 1] >> 3;
      local_ac = (int)(uint)param_2[local_7c * 3 + 2] >> 3;
      for (local_98 = 0; local_98 < local_88; local_98 = local_98 + 1) {
        local_b0 = FUN_1007f370(local_98 - local_a4);
        local_b4 = local_98 << 10;
        for (local_9c = 0; local_9c < local_8c; local_9c = local_9c + 1) {
          local_b8 = FUN_1007f370(local_9c - local_a8);
          local_bc = local_b0 + local_b8;
          local_d8 = local_b8;
          if (local_b8 < local_b0) {
            local_d8 = local_b0;
          }
          local_c0 = local_d8;
          local_c4 = local_b4 | local_9c << 5;
          for (local_a0 = 0; (int)local_a0 < local_90; local_a0 = local_a0 + 1) {
            local_c8 = local_c4 | local_a0;
            local_cc = FUN_1007f370(local_a0 - local_ac);
            local_dc = local_cc;
            if (local_cc < local_c0) {
              local_dc = local_c0;
            }
            local_d0 = local_dc;
            local_d4 = local_dc + local_bc + local_cc;
            if (local_d4 < (int)(uint)*(byte *)((int)local_80 + local_c8)) {
              *(undefined1 *)((int)local_80 + local_c8) = (undefined1)local_d4;
              *(undefined1 *)(param_1[0x7b] + local_c8) = (undefined1)local_7c;
            }
          }
        }
      }
    }
    FUN_10078ed0((int)param_1,local_80);
  }
  local_8 = 0x1006ff79;
  __chkesp();
  return;
}


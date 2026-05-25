/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100702a0 @ 0x100702A0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100702a0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 local_128 [16];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  char local_c8;
  uint local_c4;
  undefined4 uStack_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  char local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  ushort local_90;
  undefined2 uStack_8e;
  uint local_8c;
  ushort local_88;
  undefined2 uStack_86;
  ushort local_84;
  undefined2 uStack_82;
  ushort local_80;
  undefined2 uStack_7e;
  int local_7c;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  undefined1 local_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  double local_60;
  double local_58;
  double local_50;
  ushort local_48;
  undefined2 uStack_46;
  ushort local_44;
  undefined2 uStack_42;
  ushort local_40;
  undefined2 uStack_3e;
  byte local_3c;
  undefined3 uStack_3b;
  undefined1 local_38;
  undefined3 uStack_37;
  double local_34;
  double local_2c;
  int local_24;
  uint local_20;
  int local_1c;
  byte local_18;
  byte bStack_17;
  byte bStack_16;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 local_12;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar6 = local_128;
  for (iVar2 = 0x49; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_8 = (uint)*(byte *)((int)param_1 + 0x126);
  if ((param_1[0x1c] & 0x100U) != 0) {
    if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
      local_a0 = *(byte *)((int)param_1 + 0x127) - 1;
      switch(*(byte *)((int)param_1 + 0x127)) {
      case 1:
        *(short *)(param_1 + 0x50) = (short)param_1[0x50] * 0xff;
        *(short *)((int)param_1 + 0x13e) = (short)param_1[0x50];
        *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)((int)param_1 + 0x13e);
        *(short *)((int)param_1 + 0x13a) = (short)param_1[0x4f];
        break;
      case 2:
        *(short *)(param_1 + 0x50) = (short)param_1[0x50] * 0x55;
        *(short *)((int)param_1 + 0x13e) = (short)param_1[0x50];
        *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)((int)param_1 + 0x13e);
        *(short *)((int)param_1 + 0x13a) = (short)param_1[0x4f];
        break;
      case 4:
        *(short *)(param_1 + 0x50) = (short)param_1[0x50] * 0x11;
        *(short *)((int)param_1 + 0x13e) = (short)param_1[0x50];
        *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)((int)param_1 + 0x13e);
        *(short *)((int)param_1 + 0x13a) = (short)param_1[0x4f];
        break;
      case 8:
      case 0x10:
        *(short *)((int)param_1 + 0x13e) = (short)param_1[0x50];
        *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)((int)param_1 + 0x13e);
        *(short *)((int)param_1 + 0x13a) = (short)param_1[0x4f];
      }
    }
    else if (local_8 == 3) {
      *(ushort *)((int)param_1 + 0x13a) =
           (ushort)*(byte *)(param_1[0x45] + (uint)*(byte *)(param_1 + 0x4e) * 3);
      *(ushort *)(param_1 + 0x4f) =
           (ushort)*(byte *)(param_1[0x45] + 1 + (uint)*(byte *)(param_1 + 0x4e) * 3);
      *(ushort *)((int)param_1 + 0x13e) =
           (ushort)*(byte *)(param_1[0x45] + 2 + (uint)*(byte *)(param_1 + 0x4e) * 3);
      if (((param_1[0x1c] & 0x80000U) != 0) && ((param_1[0x1c] & 0x1000U) == 0)) {
        local_10 = (uint)*(ushort *)((int)param_1 + 0x11a);
        for (local_c = 0; local_c < (int)local_10; local_c = local_c + 1) {
          *(char *)(param_1[0x62] + local_c) = -1 - *(char *)(param_1[0x62] + local_c);
        }
      }
    }
  }
  *(int *)((int)param_1 + 0x142) = param_1[0x4e];
  *(int *)((int)param_1 + 0x146) = param_1[0x4f];
  *(short *)((int)param_1 + 0x14a) = (short)param_1[0x50];
  if ((param_1[0x1c] & 0x602000U) == 0) {
    if (((param_1[0x1c] & 0x80U) != 0) && (local_8 == 3)) {
      uVar1 = *(ushort *)((int)param_1 + 0x11a);
      local_74 = (undefined1)uVar1;
      uStack_73 = (undefined1)(uVar1 >> 8);
      uStack_72 = 0;
      local_7c = param_1[0x45];
      local_78 = *(byte *)((int)param_1 + 0x13a);
      bStack_77 = *(byte *)(param_1 + 0x4f);
      bStack_76 = *(byte *)((int)param_1 + 0x13e);
      for (local_70 = 0; local_70 < (int)(uint)uVar1; local_70 = local_70 + 1) {
        if (*(char *)(param_1[0x62] + local_70) == '\0') {
          puVar3 = (undefined2 *)(local_7c + local_70 * 3);
          *puVar3 = CONCAT11(bStack_77,local_78);
          *(byte *)(puVar3 + 1) = bStack_76;
        }
        else if (*(char *)(param_1[0x62] + local_70) != -1) {
          uVar5 = (ushort)*(byte *)(local_7c + local_70 * 3) *
                  (ushort)*(byte *)(param_1[0x62] + local_70) + 0x80 +
                  (ushort)local_78 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_70));
          _local_80 = CONCAT22(uStack_7e,uVar5);
          *(char *)(local_7c + local_70 * 3) = (char)((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8);
          uVar5 = (ushort)*(byte *)(local_7c + 1 + local_70 * 3) *
                  (ushort)*(byte *)(param_1[0x62] + local_70) + 0x80 +
                  (ushort)bStack_77 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_70));
          _local_84 = CONCAT22(uStack_82,uVar5);
          *(char *)(local_7c + 1 + local_70 * 3) =
               (char)((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8);
          uVar5 = (ushort)*(byte *)(local_7c + 2 + local_70 * 3) *
                  (ushort)*(byte *)(param_1[0x62] + local_70) + 0x80 +
                  (ushort)bStack_76 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_70));
          _local_88 = CONCAT22(uStack_86,uVar5);
          *(char *)(local_7c + 2 + local_70 * 3) =
               (char)((uint)uVar5 + ((int)(uint)uVar5 >> 8) >> 8);
        }
      }
    }
  }
  else {
    FUN_10077d30(param_1);
    if ((param_1[0x1c] & 0x80U) == 0) {
      if (local_8 == 3) {
        local_64 = param_1[0x45];
        local_68 = (uint)*(ushort *)(param_1 + 0x46);
        for (local_6c = 0; local_6c < (int)local_68; local_6c = local_6c + 1) {
          *(undefined1 *)(local_64 + local_6c * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_64 + local_6c * 3));
          *(undefined1 *)(local_64 + 1 + local_6c * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_64 + 1 + local_6c * 3));
          *(undefined1 *)(local_64 + 2 + local_6c * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_64 + 2 + local_6c * 3));
        }
      }
    }
    else if (local_8 == 3) {
      local_1c = param_1[0x45];
      local_20 = (uint)*(ushort *)(param_1 + 0x46);
      if ((char)param_1[0x4c] == '\x02') {
        local_14 = *(undefined1 *)(param_1[0x59] + (uint)*(ushort *)((int)param_1 + 0x13a));
        uStack_13 = *(undefined1 *)(param_1[0x59] + (uint)*(ushort *)(param_1 + 0x4f));
        local_12 = *(undefined1 *)(param_1[0x59] + (uint)*(ushort *)((int)param_1 + 0x13e));
        local_18 = *(byte *)(param_1[0x5b] + (uint)*(ushort *)((int)param_1 + 0x13a));
        bStack_17 = *(byte *)(param_1[0x5b] + (uint)*(ushort *)(param_1 + 0x4f));
        bStack_16 = *(byte *)(param_1[0x5b] + (uint)*(ushort *)((int)param_1 + 0x13e));
      }
      else {
        local_a4 = (char)param_1[0x4c];
        if (local_a4 == '\x01') {
          local_2c = (double)(float)param_1[0x58];
          local_34 = 1.0;
        }
        else if (local_a4 == '\x02') {
          local_2c = (double)((float)_DAT_1011d030 / (float)param_1[0x57]);
          local_34 = (double)((float)_DAT_1011d030 / ((float)param_1[0x57] * (float)param_1[0x58]));
        }
        else if (local_a4 == '\x03') {
          local_2c = (double)((float)_DAT_1011d030 / (float)param_1[0x4d]);
          local_34 = (double)((float)_DAT_1011d030 / ((float)param_1[0x4d] * (float)param_1[0x58]));
        }
        else {
          local_2c = 1.0;
          local_34 = 1.0;
        }
        fVar7 = FUN_10082960(SUB84(local_34 - _DAT_1011d030,0),
                             (uint)((ulonglong)(local_34 - _DAT_1011d030) >> 0x20));
        if ((float10)_DAT_1011dd88 <= fVar7) {
          local_a8 = (uint)*(ushort *)((int)param_1 + 0x13a);
          FUN_10082a79(local_34._0_4_);
          lVar8 = __ftol();
          local_14 = (undefined1)lVar8;
          local_ac = (uint)*(ushort *)(param_1 + 0x4f);
          FUN_10082a79(local_ac);
          lVar8 = __ftol();
          uStack_13 = (undefined1)lVar8;
          local_b0 = (uint)*(ushort *)((int)param_1 + 0x13e);
          FUN_10082a79(param_1);
          lVar8 = __ftol();
          local_12 = (undefined1)lVar8;
        }
        else {
          local_14 = *(undefined1 *)((int)param_1 + 0x13a);
          uStack_13 = (undefined1)param_1[0x4f];
          local_12 = *(undefined1 *)((int)param_1 + 0x13e);
        }
        local_b4 = (uint)*(ushort *)((int)param_1 + 0x13a);
        FUN_10082a79(local_2c._0_4_);
        lVar8 = __ftol();
        local_18 = (byte)lVar8;
        local_b8 = (uint)*(ushort *)(param_1 + 0x4f);
        FUN_10082a79(local_b8);
        lVar8 = __ftol();
        bStack_17 = (byte)lVar8;
        local_bc = (uint)*(ushort *)((int)param_1 + 0x13e);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        bStack_16 = (byte)lVar8;
      }
      for (local_24 = 0; local_24 < (int)local_20; local_24 = local_24 + 1) {
        if ((local_24 < (int)(uint)*(ushort *)((int)param_1 + 0x11a)) &&
           (*(char *)(param_1[0x62] + local_24) != -1)) {
          if (*(char *)(param_1[0x62] + local_24) == '\0') {
            puVar3 = (undefined2 *)(local_1c + local_24 * 3);
            *puVar3 = CONCAT11(uStack_13,local_14);
            *(undefined1 *)(puVar3 + 1) = local_12;
          }
          else {
            _local_38 = CONCAT31(uStack_37,
                                 *(undefined1 *)
                                  (param_1[0x5b] + (uint)*(byte *)(local_1c + local_24 * 3)));
            uVar1 = ((ushort)_local_38 & 0xff) * (ushort)*(byte *)(param_1[0x62] + local_24) + 0x80
                    + (ushort)local_18 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_24));
            _local_40 = CONCAT22(uStack_3e,uVar1);
            *(undefined1 *)(local_1c + local_24 * 3) =
                 *(undefined1 *)
                  (param_1[0x5a] + ((uint)uVar1 + ((int)(uint)uVar1 >> 8) >> 8 & 0xff));
            _local_38 = CONCAT31(uStack_37,
                                 *(undefined1 *)
                                  (param_1[0x5b] + (uint)*(byte *)(local_1c + 1 + local_24 * 3)));
            uVar1 = ((ushort)_local_38 & 0xff) * (ushort)*(byte *)(param_1[0x62] + local_24) + 0x80
                    + (ushort)bStack_17 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_24));
            _local_44 = CONCAT22(uStack_42,uVar1);
            *(undefined1 *)(local_1c + 1 + local_24 * 3) =
                 *(undefined1 *)
                  (param_1[0x5a] + ((uint)uVar1 + ((int)(uint)uVar1 >> 8) >> 8 & 0xff));
            _local_38 = CONCAT31(uStack_37,
                                 *(undefined1 *)
                                  (param_1[0x5b] + (uint)*(byte *)(local_1c + 2 + local_24 * 3)));
            uVar1 = ((ushort)_local_38 & 0xff) * (ushort)*(byte *)(param_1[0x62] + local_24) + 0x80
                    + (ushort)bStack_16 * (0xff - (ushort)*(byte *)(param_1[0x62] + local_24));
            _local_48 = CONCAT22(uStack_46,uVar1);
            bVar4 = (byte)((uint)uVar1 + ((int)(uint)uVar1 >> 8) >> 8);
            _local_3c = CONCAT31(uStack_3b,bVar4);
            *(undefined1 *)(local_1c + 2 + local_24 * 3) =
                 *(undefined1 *)(param_1[0x5a] + (uint)bVar4);
          }
        }
        else {
          *(undefined1 *)(local_1c + local_24 * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_1c + local_24 * 3));
          *(undefined1 *)(local_1c + 1 + local_24 * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_1c + 1 + local_24 * 3));
          *(undefined1 *)(local_1c + 2 + local_24 * 3) =
               *(undefined1 *)(param_1[0x59] + (uint)*(byte *)(local_1c + 2 + local_24 * 3));
        }
      }
    }
    else {
      local_c4 = (1 << (*(byte *)((int)param_1 + 0x127) & 0x1f)) - 1;
      uStack_c0 = 0;
      local_50 = (double)local_c4;
      local_58 = 1.0;
      local_60 = 1.0;
      local_c8 = (char)param_1[0x4c];
      if (local_c8 == '\x01') {
        local_58 = (double)(float)param_1[0x58];
        local_60 = 1.0;
      }
      else if (local_c8 == '\x02') {
        local_58 = (double)((float)_DAT_1011d030 / (float)param_1[0x57]);
        local_60 = (double)((float)_DAT_1011d030 / ((float)param_1[0x57] * (float)param_1[0x58]));
      }
      else if (local_c8 == '\x03') {
        local_58 = (double)((float)_DAT_1011d030 / (float)param_1[0x4d]);
        local_60 = (double)((float)_DAT_1011d030 / ((float)param_1[0x4d] * (float)param_1[0x58]));
      }
      if ((local_8 & 2) == 0) {
        local_e4 = (uint)*(ushort *)(param_1 + 0x50);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)((int)param_1 + 0x14a) = (short)lVar8;
        local_e8 = (uint)*(ushort *)(param_1 + 0x50);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)(param_1 + 0x50) = (short)lVar8;
      }
      else {
        local_cc = (uint)*(ushort *)((int)param_1 + 0x13a);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)(param_1 + 0x51) = (short)lVar8;
        local_d0 = (uint)*(ushort *)(param_1 + 0x4f);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)((int)param_1 + 0x146) = (short)lVar8;
        local_d4 = (uint)*(ushort *)((int)param_1 + 0x13e);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)(param_1 + 0x52) = (short)lVar8;
        local_d8 = (uint)*(ushort *)((int)param_1 + 0x13a);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)((int)param_1 + 0x13a) = (short)lVar8;
        local_dc = (uint)*(ushort *)(param_1 + 0x4f);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)(param_1 + 0x4f) = (short)lVar8;
        local_e0 = (uint)*(ushort *)((int)param_1 + 0x13e);
        FUN_10082a79(param_1);
        lVar8 = __ftol();
        *(short *)((int)param_1 + 0x13e) = (short)lVar8;
      }
    }
  }
  if (((param_1[0x1c] & 8U) != 0) && (local_8 == 3)) {
    uVar1 = *(ushort *)(param_1 + 0x46);
    _local_90 = CONCAT22(uStack_8e,uVar1);
    local_94 = 8 - (uint)*(byte *)(param_1 + 0x5f);
    local_98 = 8 - (uint)*(byte *)((int)param_1 + 0x17d);
    local_9c = 8 - (uint)*(byte *)((int)param_1 + 0x17e);
    if ((local_94 < 0) || (8 < local_94)) {
      local_94 = 0;
    }
    if ((local_98 < 0) || (8 < local_98)) {
      local_98 = 0;
    }
    if ((local_9c < 0) || (8 < local_9c)) {
      local_9c = 0;
    }
    local_8c = local_8c & 0xffff0000;
    while ((local_8c & 0xffff) < (uint)uVar1) {
      *(byte *)(param_1[0x45] + (local_8c & 0xffff) * 3) =
           *(byte *)(param_1[0x45] + (local_8c & 0xffff) * 3) >> ((byte)local_94 & 0x1f);
      *(byte *)(param_1[0x45] + 1 + (local_8c & 0xffff) * 3) =
           *(byte *)(param_1[0x45] + 1 + (local_8c & 0xffff) * 3) >> ((byte)local_98 & 0x1f);
      *(byte *)(param_1[0x45] + 2 + (local_8c & 0xffff) * 3) =
           *(byte *)(param_1[0x45] + 2 + (local_8c & 0xffff) * 3) >> ((byte)local_9c & 0x1f);
      local_8c = CONCAT22(local_8c._2_2_,(short)local_8c + 1);
    }
  }
  local_8 = 0x10071498;
  __chkesp();
  return;
}


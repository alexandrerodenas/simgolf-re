/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10077d30 @ 0x10077D30 */
/* Body size: 2066 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10077d30(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 local_a8 [16];
  int local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  double local_40;
  double local_38;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  double local_18;
  double local_10;
  int local_8;
  
  puVar4 = local_a8;
  for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if ((float)param_1[0x57] != (float)_DAT_1011d040) {
    if (*(byte *)((int)param_1 + 0x127) < 9) {
      if ((float)param_1[0x58] <= (float)_DAT_1011de50) {
        local_10 = 1.0;
      }
      else {
        local_10 = (double)((float)_DAT_1011d030 / ((float)param_1[0x57] * (float)param_1[0x58]));
      }
      iVar3 = FUN_10078e60(param_1,0x100);
      param_1[0x59] = iVar3;
      for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
        FUN_10082a79(local_10._0_4_);
        lVar6 = __ftol();
        *(char *)(param_1[0x59] + local_8) = (char)lVar6;
      }
      if ((param_1[0x1c] & 0x600080U) != 0) {
        local_10 = (double)((float)_DAT_1011d030 / (float)param_1[0x57]);
        iVar3 = FUN_10078e60(param_1,0x100);
        param_1[0x5b] = iVar3;
        for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
          FUN_10082a79(local_10._0_4_);
          lVar6 = __ftol();
          *(char *)(param_1[0x5b] + local_8) = (char)lVar6;
        }
        iVar3 = FUN_10078e60(param_1,0x100);
        param_1[0x5a] = iVar3;
        if ((float)param_1[0x58] <= (float)_DAT_1011de50) {
          fVar1 = (float)param_1[0x57];
        }
        else {
          fVar1 = (float)_DAT_1011d030 / (float)param_1[0x58];
        }
        local_10 = (double)fVar1;
        for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
          FUN_10082a79(local_10._0_4_);
          lVar6 = __ftol();
          *(char *)(param_1[0x5a] + local_8) = (char)lVar6;
        }
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        local_2c = (uint)*(byte *)((int)param_1 + 0x17f);
      }
      else {
        local_2c = (uint)*(byte *)(param_1 + 0x5f);
        if (local_2c < *(byte *)((int)param_1 + 0x17d)) {
          local_2c = (uint)*(byte *)((int)param_1 + 0x17d);
        }
        if (local_2c < *(byte *)((int)param_1 + 0x17e)) {
          local_2c = (uint)*(byte *)((int)param_1 + 0x17e);
        }
      }
      if (local_2c == 0) {
        local_24 = 0;
      }
      else {
        local_24 = 0x10 - local_2c;
      }
      if (((param_1[0x1c] & 0x400U) != 0) && ((int)local_24 < 5)) {
        local_24 = 5;
      }
      if (8 < (int)local_24) {
        local_24 = 8;
      }
      if ((int)local_24 < 0) {
        local_24 = 0;
      }
      param_1[0x56] = local_24 & 0xff;
      local_28 = 1 << (8U - (char)local_24 & 0x1f);
      if ((float)param_1[0x58] <= (float)_DAT_1011de50) {
        local_18 = 1.0;
      }
      else {
        local_18 = (double)((float)_DAT_1011d030 / ((float)param_1[0x57] * (float)param_1[0x58]));
      }
      iVar3 = FUN_10078e60(param_1,local_28 << 2);
      param_1[0x5c] = iVar3;
      if ((param_1[0x1c] & 0x480U) == 0) {
        for (local_1c = 0; (int)local_1c < local_28; local_1c = local_1c + 1) {
          uVar2 = FUN_10078e60(param_1,0x200);
          *(undefined4 *)(param_1[0x5c] + local_1c * 4) = uVar2;
          local_30 = local_1c * *(int *)(local_24 * 4 + 0x1012316c) >> 4;
          for (local_20 = 0; local_20 < 0x100; local_20 = local_20 + 1) {
            local_58 = local_30 + local_20 * 0x100;
            uStack_54 = 0;
            FUN_10082a79(local_18._0_4_);
            lVar6 = __ftol();
            *(short *)(*(int *)(param_1[0x5c] + local_1c * 4) + local_20 * 2) = (short)lVar6;
          }
        }
      }
      else {
        for (local_1c = 0; (int)local_1c < local_28; local_1c = local_1c + 1) {
          uVar2 = FUN_10078e60(param_1,0x200);
          *(undefined4 *)(param_1[0x5c] + local_1c * 4) = uVar2;
        }
        local_18 = _DAT_1011d030 / local_18;
        local_44 = 0;
        for (local_1c = 0; (int)local_1c < 0x100; local_1c = local_1c + 1) {
          local_40 = ((double)(int)local_1c + _DAT_1011d5f0) / _DAT_1011de48;
          fVar5 = (float10)FUN_10082a79(local_40._0_4_);
          local_38 = (double)fVar5;
          local_50 = local_28 << 8;
          uStack_4c = 0;
          lVar6 = __ftol();
          local_48 = (uint)lVar6;
          for (; local_44 <= local_48; local_44 = local_44 + 1) {
            *(ushort *)
             (*(int *)(param_1[0x5c] + (local_44 & 0xff >> ((byte)local_24 & 0x1f)) * 4) +
             (local_44 >> (8 - (byte)local_24 & 0x1f)) * 2) =
                 (ushort)local_1c | (ushort)((local_1c & 0xffff) << 8);
          }
        }
        for (; local_44 < (uint)(local_28 << 8); local_44 = local_44 + 1) {
          *(undefined2 *)
           (*(int *)(param_1[0x5c] + (local_44 & 0xff >> ((byte)local_24 & 0x1f)) * 4) +
           (local_44 >> (8 - (byte)local_24 & 0x1f)) * 2) = 0xffff;
        }
      }
      if ((param_1[0x1c] & 0x600080U) != 0) {
        local_18 = (double)((float)_DAT_1011d030 / (float)param_1[0x57]);
        iVar3 = FUN_10078e60(param_1,local_28 << 2);
        param_1[0x5e] = iVar3;
        for (local_1c = 0; (int)local_1c < local_28; local_1c = local_1c + 1) {
          uVar2 = FUN_10078e60(param_1,0x200);
          *(undefined4 *)(param_1[0x5e] + local_1c * 4) = uVar2;
          local_30 = local_1c * *(int *)(local_24 * 4 + 0x1012316c) >> 4;
          for (local_20 = 0; local_20 < 0x100; local_20 = local_20 + 1) {
            local_60 = local_30 + local_20 * 0x100;
            uStack_5c = 0;
            FUN_10082a79(local_18._0_4_);
            lVar6 = __ftol();
            *(short *)(*(int *)(param_1[0x5e] + local_1c * 4) + local_20 * 2) = (short)lVar6;
          }
        }
        if ((float)param_1[0x58] <= (float)_DAT_1011de50) {
          fVar1 = (float)param_1[0x57];
        }
        else {
          fVar1 = (float)_DAT_1011d030 / (float)param_1[0x58];
        }
        local_18 = (double)fVar1;
        iVar3 = FUN_10078e60(param_1,local_28 << 2);
        param_1[0x5d] = iVar3;
        for (local_1c = 0; (int)local_1c < local_28; local_1c = local_1c + 1) {
          uVar2 = FUN_10078e60(param_1,0x200);
          *(undefined4 *)(param_1[0x5d] + local_1c * 4) = uVar2;
          local_30 = local_1c * *(int *)(local_24 * 4 + 0x1012316c) >> 4;
          for (local_20 = 0; local_20 < 0x100; local_20 = local_20 + 1) {
            local_68 = local_30 + local_20 * 0x100;
            uStack_64 = 0;
            FUN_10082a79(local_18._0_4_);
            lVar6 = __ftol();
            *(short *)(*(int *)(param_1[0x5d] + local_1c * 4) + local_20 * 2) = (short)lVar6;
          }
        }
      }
    }
  }
  local_8 = 0x1007853e;
  __chkesp();
  return;
}


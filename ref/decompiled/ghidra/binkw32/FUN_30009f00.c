/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30009f00 @ 0x30009F00 */


void __cdecl FUN_30009f00(int *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar7 = (uint *)*param_1;
  local_2c = param_1[1];
  uVar5 = param_1[2];
  local_24 = param_1[3];
  if (local_24 < 4) {
    local_28 = *puVar7 >> (4 - (byte)local_24 & 0x1f);
    uVar5 = *puVar7 << ((byte)local_24 & 0x1f) | uVar5;
    local_24 = local_24 + 0x1c;
    puVar7 = puVar7 + 1;
  }
  else {
    local_28 = uVar5 >> 4;
    local_24 = local_24 - 4;
  }
  uVar5 = uVar5 & 0xf;
  *param_2 = (&PTR_DAT_3003db48)[uVar5];
  *param_3 = (uint)(byte)(&DAT_30033ee8)[uVar5];
  if (uVar5 == 0) {
    uVar5 = 0;
    do {
      param_4[uVar5] = (char)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
  }
  else {
    if (local_24 == 0) {
      local_28 = *puVar7;
      local_30 = puVar7 + 1;
      local_24 = 0x1f;
    }
    else {
      local_24 = local_24 - 1;
      local_30 = puVar7;
    }
    uVar5 = local_28 >> 1;
    bVar2 = (byte)local_24;
    if ((local_28 & 1) == 0) {
      if (local_24 < 2) {
        local_28 = *local_30 >> (2 - bVar2 & 0x1f);
        uVar5 = *local_30 << (bVar2 & 0x1f) | uVar5;
        local_24 = local_24 + 0x1e;
        local_30 = local_30 + 1;
      }
      else {
        local_28 = local_28 >> 3;
        local_24 = local_24 - 2;
      }
      uVar5 = uVar5 & 3;
      if (uVar5 == 0) {
        uVar5 = 0;
        puVar7 = local_30;
        do {
          if (local_24 == 0) {
            uVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            local_24 = 0x1f;
          }
          else {
            local_24 = local_24 - 1;
            uVar6 = local_28;
          }
          local_28 = uVar6 >> 1;
          cVar4 = (char)uVar5;
          if ((uVar6 & 1) == 0) {
            param_4[uVar5] = cVar4;
            param_4[uVar5 + 1] = cVar4 + '\x01';
          }
          else {
            param_4[uVar5] = cVar4 + '\x01';
            param_4[uVar5 + 1] = cVar4;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < 0x10);
      }
      else {
        uVar6 = 0;
        puVar7 = local_30;
        do {
          if (local_24 == 0) {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            local_24 = 0x1f;
            local_30 = puVar7;
          }
          else {
            local_24 = local_24 - 1;
            uVar1 = local_28;
          }
          local_28 = uVar1 >> 1;
          cVar4 = (char)uVar6;
          if ((uVar1 & 1) == 0) {
            local_20[uVar6] = cVar4;
            local_20[uVar6 + 1] = cVar4 + '\x01';
          }
          else {
            local_20[uVar6] = cVar4 + '\x01';
            local_20[uVar6 + 1] = cVar4;
          }
          uVar6 = uVar6 + 2;
        } while (uVar6 < 0x10);
        if (uVar5 == 1) {
          FUN_3000a380((int *)&local_30,param_4,local_20,local_20 + 2,2);
          FUN_3000a380((int *)&local_30,param_4 + 4,local_20 + 4,local_20 + 6,2);
          FUN_3000a380((int *)&local_30,param_4 + 8,local_20 + 8,local_20 + 10,2);
          FUN_3000a380((int *)&local_30,param_4 + 0xc,local_20 + 0xc,local_20 + 0xe,2);
          puVar7 = local_30;
        }
        else {
          FUN_3000a380((int *)&local_30,local_20 + 0x10,local_20,local_20 + 2,2);
          FUN_3000a380((int *)&local_30,local_c,local_20 + 4,local_20 + 6,2);
          FUN_3000a380((int *)&local_30,local_8,local_20 + 8,local_20 + 10,2);
          FUN_3000a380((int *)&local_30,local_4,local_20 + 0xc,local_20 + 0xe,2);
          if (uVar5 == 2) {
            FUN_3000a380((int *)&local_30,param_4,local_20 + 0x10,local_c,4);
            FUN_3000a380((int *)&local_30,param_4 + 8,local_8,local_4,4);
            puVar7 = local_30;
          }
          else {
            FUN_3000a380((int *)&local_30,local_20,local_20 + 0x10,local_c,4);
            FUN_3000a380((int *)&local_30,local_20 + 8,local_8,local_4,4);
            FUN_3000a380((int *)&local_30,param_4,local_20,local_20 + 8,8);
            puVar7 = local_30;
          }
        }
      }
    }
    else {
      if (local_24 < 3) {
        uVar6 = *local_30 >> (3 - bVar2 & 0x1f);
        uVar5 = *local_30 << (bVar2 & 0x1f) | uVar5;
        local_24 = local_24 + 0x1d;
        local_30 = local_30 + 1;
      }
      else {
        uVar6 = local_28 >> 4;
        local_24 = local_24 - 3;
      }
      param_2 = (undefined4 *)0xffff;
      param_3 = (uint *)0x0;
      puVar7 = local_30;
      do {
        if (local_24 < 4) {
          local_28 = *puVar7 >> (4 - (byte)local_24 & 0x1f);
          uVar6 = *puVar7 << ((byte)local_24 & 0x1f) | uVar6;
          local_24 = local_24 + 0x1c;
          puVar7 = puVar7 + 1;
          local_30 = puVar7;
        }
        else {
          local_28 = uVar6 >> 4;
          local_24 = local_24 - 4;
        }
        bVar2 = (byte)uVar6 & 0xf;
        param_2 = (undefined4 *)((uint)param_2 & ~(1 << bVar2));
        *(byte *)((int)param_3 + (int)param_4) = bVar2;
        param_3 = (uint *)((int)param_3 + 1);
        uVar6 = local_28;
      } while (param_3 <= (uint *)(uVar5 & 7));
      cVar4 = '\0';
      pcVar3 = param_4 + (int)(uVar5 & 7);
      do {
        if (((uint)param_2 & 1) != 0) {
          pcVar3 = pcVar3 + 1;
          *pcVar3 = cVar4;
          puVar7 = local_30;
        }
        cVar4 = cVar4 + '\x01';
        param_2 = (undefined4 *)((uint)param_2 >> 1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  *param_1 = (int)puVar7;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return;
}


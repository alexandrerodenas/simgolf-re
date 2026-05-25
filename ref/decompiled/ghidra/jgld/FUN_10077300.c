/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10077300 @ 0x10077300 */


void __cdecl FUN_10077300(uint *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_68 [20];
  uint local_18;
  byte *local_14;
  byte *local_10;
  int local_8;
  
  puVar7 = local_68;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ushort *)(param_3 + 8);
    }
    if (*(byte *)((int)param_1 + 9) < 8) {
      cVar1 = *(char *)((int)param_1 + 9);
      if (cVar1 == '\x01') {
        uVar4 = uVar4 * 0xff;
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 3));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = 7 - (uVar2 + 7 & 7);
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          if (((int)(uint)*local_10 >> ((byte)local_8 & 0x1f) & 1U) == 0) {
            *local_14 = 0;
          }
          else {
            *local_14 = 0xff;
          }
          if (local_8 == 7) {
            local_8 = 0;
            local_10 = local_10 + -1;
          }
          else {
            local_8 = local_8 + 1;
          }
          local_14 = local_14 + -1;
        }
      }
      else if (cVar1 == '\x02') {
        uVar4 = uVar4 * 0x55;
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 2));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = (3 - (uVar2 + 3 & 3)) * 2;
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          uVar6 = (int)(uint)*local_10 >> ((byte)local_8 & 0x1f) & 3;
          *local_14 = (byte)uVar6 | (byte)(uVar6 << 2) | (byte)(uVar6 << 4) | (byte)(uVar6 << 6);
          if (local_8 == 6) {
            local_8 = 0;
            local_10 = local_10 + -1;
          }
          else {
            local_8 = local_8 + 2;
          }
          local_14 = local_14 + -1;
        }
      }
      else if (cVar1 == '\x04') {
        uVar4 = uVar4 * 0x11;
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 1));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = (1 - (uVar2 + 1 & 1)) * 4;
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          uVar6 = (int)(uint)*local_10 >> ((byte)local_8 & 0x1f) & 0xf;
          *local_14 = (byte)uVar6 | (byte)(uVar6 << 4);
          if (local_8 == 4) {
            local_8 = 0;
            local_10 = local_10 + -1;
          }
          else {
            local_8 = 4;
          }
          local_14 = local_14 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar2;
    }
    if (param_3 != 0) {
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_10 = (byte *)(param_2 + -1 + uVar2);
        local_14 = (byte *)(param_2 + -1 + uVar2 * 2);
        for (local_18 = 0; pbVar3 = local_14, local_18 < uVar2; local_18 = local_18 + 1) {
          if (*local_10 == uVar4) {
            *local_14 = 0;
          }
          else {
            *local_14 = 0xff;
          }
          local_14 = local_14 + -1;
          *local_14 = *local_10;
          local_14 = pbVar3 + -2;
          local_10 = local_10 + -1;
        }
      }
      else if (*(char *)((int)param_1 + 9) == '\x10') {
        local_10 = (byte *)(param_2 + -1 + param_1[1]);
        local_14 = (byte *)(param_2 + -1 + param_1[1] * 2);
        for (local_18 = 0; pbVar3 = local_14, local_18 < uVar2; local_18 = local_18 + 1) {
          if (CONCAT11(local_10[-1],*local_10) == uVar4) {
            *local_14 = 0;
            local_14[-1] = 0;
          }
          else {
            *local_14 = 0xff;
            local_14[-1] = 0xff;
          }
          local_14 = local_14 + -2;
          *local_14 = *local_10;
          pbVar3[-3] = local_10[-1];
          local_14 = pbVar3 + -4;
          local_10 = local_10 + -2;
        }
      }
      *(undefined1 *)(param_1 + 2) = 4;
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 9) << 1;
      param_1[1] = uVar2 * *(byte *)((int)param_1 + 0xb) >> 3;
    }
  }
  else if (((char)param_1[2] == '\x02') && (param_3 != 0)) {
    if (*(char *)((int)param_1 + 9) == '\b') {
      local_10 = (byte *)(param_2 + -1 + param_1[1]);
      local_14 = (byte *)(param_2 + -1 + uVar2 * 4);
      for (local_18 = 0; pbVar3 = local_14, local_18 < uVar2; local_18 = local_18 + 1) {
        if ((((ushort)local_10[-2] == *(ushort *)(param_3 + 2)) &&
            ((ushort)local_10[-1] == *(ushort *)(param_3 + 4))) &&
           ((ushort)*local_10 == *(ushort *)(param_3 + 6))) {
          *local_14 = 0;
        }
        else {
          *local_14 = 0xff;
        }
        local_14 = local_14 + -1;
        *local_14 = *local_10;
        pbVar3[-2] = local_10[-1];
        pbVar3[-3] = local_10[-2];
        local_14 = pbVar3 + -4;
        local_10 = local_10 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      local_10 = (byte *)(param_2 + -1 + param_1[1]);
      local_14 = (byte *)(param_2 + -1 + uVar2 * 8);
      for (local_18 = 0; pbVar3 = local_14, local_18 < uVar2; local_18 = local_18 + 1) {
        if (((CONCAT11(local_10[-5],local_10[-4]) == *(short *)(param_3 + 2)) &&
            (CONCAT11(local_10[-3],local_10[-2]) == *(short *)(param_3 + 4))) &&
           (CONCAT11(local_10[-1],*local_10) == *(short *)(param_3 + 6))) {
          *local_14 = 0;
          local_14[-1] = 0;
        }
        else {
          *local_14 = 0xff;
          local_14[-1] = 0xff;
        }
        local_14 = local_14 + -2;
        *local_14 = *local_10;
        pbVar3[-3] = local_10[-1];
        pbVar3[-4] = local_10[-2];
        pbVar3[-5] = local_10[-3];
        pbVar3[-6] = local_10[-4];
        pbVar3[-7] = local_10[-5];
        local_14 = pbVar3 + -8;
        local_10 = local_10 + -6;
      }
    }
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 9) << 2;
    param_1[1] = uVar2 * *(byte *)((int)param_1 + 0xb) >> 3;
  }
  return;
}


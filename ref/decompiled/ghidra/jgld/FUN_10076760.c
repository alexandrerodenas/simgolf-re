/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10076760 @ 0x10076760 */
/* Body size: 1856 addresses */


void __cdecl FUN_10076760(uint *param_1,byte *param_2,int param_3,int param_4,byte param_5)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_7c [28];
  uint local_c;
  byte *local_8;
  
  puVar8 = local_7c;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
  }
  uVar2 = *param_1;
  if (((*(byte *)((int)param_1 + 9) < 9) && (param_3 != 0)) ||
     ((*(char *)((int)param_1 + 9) == '\x10' && (param_4 != 0)))) {
    switch((char)param_1[2]) {
    case '\0':
      if (*(char *)((int)param_1 + 9) == '\x02') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 4) {
          uVar5 = *local_8 & 0xc0;
          uVar3 = *local_8 & 0x30;
          uVar7 = *local_8 & 0xc;
          uVar6 = *local_8 & 3;
          *local_8 = *(byte *)(param_3 +
                              (uVar5 | (int)uVar5 >> 2 | (int)uVar5 >> 4 | (int)uVar5 >> 6)) & 0xc0
                     | (byte)((int)(uint)*(byte *)(param_3 +
                                                  (uVar3 << 2 | uVar3 | (int)uVar3 >> 2 |
                                                  (int)uVar3 >> 4)) >> 2) & 0x30 |
                     (byte)((int)(uint)*(byte *)(param_3 +
                                                (uVar7 << 4 | uVar7 << 2 | uVar7 | (int)uVar7 >> 2))
                           >> 4) & 0xc |
                     (byte)((int)(uint)*(byte *)(param_3 +
                                                (uVar6 << 6 | uVar6 << 4 | uVar6 << 2 | uVar6)) >> 6
                           );
          local_8 = local_8 + 1;
        }
      }
      if (*(char *)((int)param_1 + 9) == '\x04') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 2) {
          *local_8 = *(byte *)(param_3 + (*local_8 & 0xf0 | (int)(*local_8 & 0xf0) >> 4)) & 0xf0 |
                     (byte)((int)(uint)*(byte *)(param_3 + ((*local_8 & 0xf) << 4 | *local_8 & 0xf))
                           >> 4);
          local_8 = local_8 + 1;
        }
      }
      else if (*(char *)((int)param_1 + 9) == '\b') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          *local_8 = *(byte *)(param_3 + (uint)*local_8);
          local_8 = local_8 + 1;
        }
      }
      else if (*(char *)((int)param_1 + 9) == '\x10') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*local_8 * 2);
          *local_8 = (byte)((ushort)uVar1 >> 8);
          local_8[1] = (byte)uVar1;
          local_8 = local_8 + 2;
        }
      }
      break;
    case '\x02':
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          *local_8 = *(byte *)(param_3 + (uint)*local_8);
          local_8[1] = *(byte *)(param_3 + (uint)local_8[1]);
          local_8[2] = *(byte *)(param_3 + (uint)local_8[2]);
          local_8 = local_8 + 3;
        }
      }
      else {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*local_8 * 2);
          *local_8 = (byte)((ushort)uVar1 >> 8);
          local_8[1] = (byte)uVar1;
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)local_8[2] * 2);
          local_8[2] = (byte)((ushort)uVar1 >> 8);
          local_8[3] = (byte)uVar1;
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)local_8[4] * 2);
          local_8[4] = (byte)((ushort)uVar1 >> 8);
          local_8[5] = (byte)uVar1;
          local_8 = local_8 + 6;
        }
      }
      break;
    case '\x04':
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          *local_8 = *(byte *)(param_3 + (uint)*local_8);
          local_8 = local_8 + 2;
        }
      }
      else {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*local_8 * 2);
          *local_8 = (byte)((ushort)uVar1 >> 8);
          local_8[1] = (byte)uVar1;
          local_8 = local_8 + 4;
        }
      }
      break;
    case '\x06':
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          *local_8 = *(byte *)(param_3 + (uint)*local_8);
          local_8[1] = *(byte *)(param_3 + (uint)local_8[1]);
          local_8[2] = *(byte *)(param_3 + (uint)local_8[2]);
          local_8 = local_8 + 4;
        }
      }
      else {
        local_8 = param_2;
        for (local_c = 0; local_c < uVar2; local_c = local_c + 1) {
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*local_8 * 2);
          *local_8 = (byte)((ushort)uVar1 >> 8);
          local_8[1] = (byte)uVar1;
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)local_8[2] * 2);
          local_8[2] = (byte)((ushort)uVar1 >> 8);
          local_8[3] = (byte)uVar1;
          uVar1 = *(undefined2 *)
                   (*(int *)(param_4 + ((int)(uint)local_8[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)local_8[4] * 2);
          local_8[4] = (byte)((ushort)uVar1 >> 8);
          local_8[5] = (byte)uVar1;
          local_8 = local_8 + 8;
        }
      }
    }
  }
  return;
}


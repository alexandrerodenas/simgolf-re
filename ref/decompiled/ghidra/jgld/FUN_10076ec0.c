/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10076ec0 @ 0x10076EC0 */


void __cdecl FUN_10076ec0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_64 [19];
  uint local_18;
  byte *local_14;
  byte *local_10;
  byte local_c;
  int local_8;
  
  puVar5 = local_64;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  uVar2 = *param_1;
  if ((char)param_1[2] == '\x03') {
    if (*(byte *)((int)param_1 + 9) < 8) {
      cVar1 = *(char *)((int)param_1 + 9);
      if (cVar1 == '\x01') {
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 3));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = 7 - (uVar2 + 7 & 7);
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          if (((int)(uint)*local_10 >> ((byte)local_8 & 0x1f) & 1U) == 0) {
            *local_14 = 0;
          }
          else {
            *local_14 = 1;
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
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 2));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = (3 - (uVar2 + 3 & 3)) * 2;
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          local_c = (byte)((int)(uint)*local_10 >> ((byte)local_8 & 0x1f)) & 3;
          *local_14 = local_c;
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
        local_10 = (byte *)(param_2 + (uVar2 - 1 >> 1));
        local_14 = (byte *)(param_2 + -1 + uVar2);
        local_8 = (uVar2 & 1) << 2;
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          local_c = (byte)((int)(uint)*local_10 >> ((byte)local_8 & 0x1f)) & 0xf;
          *local_14 = local_c;
          if (local_8 == 4) {
            local_8 = 0;
            local_10 = local_10 + -1;
          }
          else {
            local_8 = local_8 + 4;
          }
          local_14 = local_14 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar2;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (param_4 == 0) {
        local_10 = (byte *)(param_2 + -1 + uVar2);
        local_14 = (byte *)(param_2 + -1 + uVar2 * 3);
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          *local_14 = *(undefined1 *)(param_3 + 2 + (uint)*local_10 * 3);
          local_14[-1] = *(undefined1 *)(param_3 + 1 + (uint)*local_10 * 3);
          local_14[-2] = *(undefined1 *)(param_3 + (uint)*local_10 * 3);
          local_14 = local_14 + -3;
          local_10 = local_10 + -1;
        }
        *(undefined1 *)((int)param_1 + 9) = 8;
        *(undefined1 *)((int)param_1 + 0xb) = 0x18;
        param_1[1] = uVar2 * 3;
        *(undefined1 *)(param_1 + 2) = 2;
        *(undefined1 *)((int)param_1 + 10) = 3;
      }
      else {
        local_10 = (byte *)(param_2 + -1 + uVar2);
        local_14 = (byte *)(param_2 + -1 + uVar2 * 4);
        for (local_18 = 0; pbVar3 = local_14, local_18 < uVar2; local_18 = local_18 + 1) {
          if ((int)(uint)*local_10 < param_5) {
            *local_14 = *(undefined1 *)(param_4 + (uint)*local_10);
          }
          else {
            *local_14 = 0xff;
          }
          local_14 = local_14 + -1;
          *local_14 = *(undefined1 *)(param_3 + 2 + (uint)*local_10 * 3);
          pbVar3[-2] = *(undefined1 *)(param_3 + 1 + (uint)*local_10 * 3);
          pbVar3[-3] = *(undefined1 *)(param_3 + (uint)*local_10 * 3);
          local_14 = pbVar3 + -4;
          local_10 = local_10 + -1;
        }
        *(undefined1 *)((int)param_1 + 9) = 8;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar2 << 2;
        *(undefined1 *)(param_1 + 2) = 6;
        *(undefined1 *)((int)param_1 + 10) = 4;
      }
    }
  }
  return;
}


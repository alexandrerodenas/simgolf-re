/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10071e80 @ 0x10071E80 */
/* Body size: 571 addresses */


void __cdecl FUN_10071e80(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_74 [17];
  int local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  uint local_8;
  
  puVar4 = local_74;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (*(byte *)((int)param_1 + 9) < 8) {
    uVar2 = *param_1;
    cVar1 = *(char *)((int)param_1 + 9);
    if (cVar1 == '\x01') {
      local_10 = (byte *)(param_2 + (uVar2 - 1 >> 3));
      local_14 = (byte *)(param_2 + -1 + uVar2);
      local_18 = 7 - (uVar2 + 7 & 7);
      for (local_8 = 0; local_8 < uVar2; local_8 = local_8 + 1) {
        *local_14 = (byte)((int)(uint)*local_10 >> ((byte)local_18 & 0x1f)) & 1;
        if (local_18 == 7) {
          local_18 = 0;
          local_10 = local_10 + -1;
        }
        else {
          local_18 = local_18 + 1;
        }
        local_14 = local_14 + -1;
      }
    }
    else if (cVar1 == '\x02') {
      local_1c = (byte *)(param_2 + (uVar2 - 1 >> 2));
      local_20 = (byte *)(param_2 + -1 + uVar2);
      local_24 = (3 - (uVar2 + 3 & 3)) * 2;
      for (local_8 = 0; local_8 < uVar2; local_8 = local_8 + 1) {
        *local_20 = (byte)((int)(uint)*local_1c >> ((byte)local_24 & 0x1f)) & 3;
        if (local_24 == 6) {
          local_24 = 0;
          local_1c = local_1c + -1;
        }
        else {
          local_24 = local_24 + 2;
        }
        local_20 = local_20 + -1;
      }
    }
    else if (cVar1 == '\x04') {
      local_28 = (byte *)(param_2 + (uVar2 - 1 >> 1));
      local_2c = (byte *)(param_2 + -1 + uVar2);
      local_30 = (1 - (uVar2 + 1 & 1)) * 4;
      for (local_8 = 0; local_8 < uVar2; local_8 = local_8 + 1) {
        *local_2c = (byte)((int)(uint)*local_28 >> ((byte)local_30 & 0x1f)) & 0xf;
        if (local_30 == 4) {
          local_30 = 0;
          local_28 = local_28 + -1;
        }
        else {
          local_30 = 4;
        }
        local_2c = local_2c + -1;
      }
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 10) << 3;
    param_1[1] = uVar2 * *(byte *)((int)param_1 + 10);
  }
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100720c0 @ 0x100720C0 */
/* Body size: 831 addresses */


void __cdecl FUN_100720c0(int *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_9c [18];
  uint local_54;
  byte *local_50;
  uint local_48;
  byte *local_44;
  uint local_38;
  byte *local_34;
  uint local_2c;
  byte *local_28;
  int local_1c;
  uint local_18;
  int local_14 [4];
  
  puVar6 = local_9c;
  for (iVar5 = 0x26; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if ((char)param_1[2] != '\x03') {
    bVar2 = false;
    iVar5 = *param_1;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      local_14[0] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
      local_18 = 1;
    }
    else {
      local_14[0] = (uint)*(byte *)((int)param_1 + 9) - (uint)*param_3;
      local_14[1] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[1];
      local_14[2] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[2];
      local_18 = 3;
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      local_14[local_18] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4];
      local_18 = local_18 + 1;
    }
    for (local_1c = 0; local_1c < (int)local_18; local_1c = local_1c + 1) {
      if (local_14[local_1c] < 1) {
        local_14[local_1c] = 0;
      }
      else {
        bVar2 = true;
      }
    }
    if (bVar2) {
      switch(*(undefined1 *)((int)param_1 + 9)) {
      case 2:
        uVar1 = param_1[1];
        local_28 = param_2;
        for (local_2c = 0; local_2c < uVar1; local_2c = local_2c + 1) {
          *local_28 = *local_28 >> 1;
          *local_28 = *local_28 & 0x55;
          local_28 = local_28 + 1;
        }
        break;
      case 4:
        local_34 = param_2;
        uVar1 = param_1[1];
        bVar4 = (byte)local_14[0];
        for (local_38 = 0; local_38 < uVar1; local_38 = local_38 + 1) {
          *local_34 = *local_34 >> (bVar4 & 0x1f);
          *local_34 = *local_34 &
                      ((byte)(0xf0 >> (bVar4 & 0x1f)) & 0xf0 | (byte)(0xf >> (bVar4 & 0x1f)));
          local_34 = local_34 + 1;
        }
        break;
      case 8:
        local_44 = param_2;
        for (local_48 = 0; local_48 < iVar5 * local_18; local_48 = local_48 + 1) {
          *local_44 = *local_44 >> (*(byte *)(local_14 + local_48 % local_18) & 0x1f);
          local_44 = local_44 + 1;
        }
        break;
      case 0x10:
        local_50 = param_2;
        for (local_54 = 0; local_54 < local_18 * iVar5; local_54 = local_54 + 1) {
          uVar3 = (ushort)((ushort)*local_50 * 0x100 + (ushort)local_50[1]) >>
                  ((byte)(short)local_14[local_54 % local_18] & 0x1f);
          *local_50 = (byte)(uVar3 >> 8);
          local_50[1] = (byte)uVar3;
          local_50 = local_50 + 2;
        }
      }
    }
  }
  return;
}


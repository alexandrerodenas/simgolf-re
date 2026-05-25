/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10072bd0 @ 0x10072BD0 */


void __cdecl FUN_10072bd0(uint *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 local_94 [16];
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_8;
  
  puVar5 = local_94;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *param_1;
  uVar4 = (undefined1)((uint)param_3 >> 8);
  uVar2 = (undefined1)param_3;
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((param_4 & 0x80) == 0) {
        local_20 = (undefined1 *)(param_2 + uVar1);
        local_24 = local_20 + uVar1;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          local_20 = local_20 + -1;
          local_24[-1] = *local_20;
          local_24 = local_24 + -2;
          *local_24 = uVar2;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x10;
        param_1[1] = uVar1 << 1;
      }
      else {
        local_18 = (undefined1 *)(param_2 + uVar1);
        local_1c = local_18 + uVar1;
        for (local_8 = 1; local_8 < uVar1; local_8 = local_8 + 1) {
          local_1c[-1] = uVar2;
          local_18 = local_18 + -1;
          local_1c = local_1c + -2;
          *local_1c = *local_18;
        }
        local_1c[-1] = uVar2;
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x10;
        param_1[1] = uVar1 << 1;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if ((param_4 & 0x80) == 0) {
        local_30 = (undefined1 *)(param_2 + uVar1);
        local_34 = local_30 + uVar1;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          local_34[-1] = local_30[-1];
          local_30 = local_30 + -2;
          local_34[-2] = *local_30;
          local_34[-3] = uVar4;
          local_34 = local_34 + -4;
          *local_34 = uVar2;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
      }
      else {
        local_28 = (undefined1 *)(param_2 + uVar1);
        local_2c = local_28 + uVar1;
        for (local_8 = 1; local_8 < uVar1; local_8 = local_8 + 1) {
          local_2c[-1] = uVar4;
          local_2c[-2] = uVar2;
          local_2c[-3] = local_28[-1];
          local_28 = local_28 + -2;
          local_2c = local_2c + -4;
          *local_2c = *local_28;
        }
        local_2c[-1] = uVar4;
        local_2c[-2] = uVar2;
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
      }
    }
  }
  else if ((char)param_1[2] == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((param_4 & 0x80) == 0) {
        local_40 = (undefined1 *)(param_2 + uVar1 * 3);
        local_44 = local_40 + uVar1;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          local_44[-1] = local_40[-1];
          local_44[-2] = local_40[-2];
          local_40 = local_40 + -3;
          local_44[-3] = *local_40;
          local_44 = local_44 + -4;
          *local_44 = uVar2;
        }
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
      }
      else {
        local_38 = (undefined1 *)(param_2 + uVar1 * 3);
        local_3c = local_38 + uVar1;
        for (local_8 = 1; local_8 < uVar1; local_8 = local_8 + 1) {
          local_3c[-1] = uVar2;
          local_3c[-2] = local_38[-1];
          local_3c[-3] = local_38[-2];
          local_38 = local_38 + -3;
          local_3c = local_3c + -4;
          *local_3c = *local_38;
        }
        local_3c[-1] = uVar2;
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 << 2;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if ((param_4 & 0x80) == 0) {
        local_50 = (undefined1 *)(param_2 + uVar1 * 3);
        local_54 = local_50 + uVar1;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          local_54[-1] = local_50[-1];
          local_54[-2] = local_50[-2];
          local_54[-3] = local_50[-3];
          local_54[-4] = local_50[-4];
          local_54[-5] = local_50[-5];
          local_50 = local_50 + -6;
          local_54[-6] = *local_50;
          local_54[-7] = uVar4;
          local_54 = local_54 + -8;
          *local_54 = uVar2;
        }
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x40;
        param_1[1] = uVar1 << 3;
      }
      else {
        local_48 = (undefined1 *)(param_2 + uVar1 * 3);
        local_4c = local_48 + uVar1;
        for (local_8 = 1; local_8 < uVar1; local_8 = local_8 + 1) {
          local_4c[-1] = uVar4;
          local_4c[-2] = uVar2;
          local_4c[-3] = local_48[-1];
          local_4c[-4] = local_48[-2];
          local_4c[-5] = local_48[-3];
          local_4c[-6] = local_48[-4];
          local_4c[-7] = local_48[-5];
          local_48 = local_48 + -6;
          local_4c = local_4c + -8;
          *local_4c = *local_48;
        }
        local_4c[-1] = uVar4;
        local_4c[-2] = uVar2;
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x40;
        param_1[1] = uVar1 << 3;
      }
    }
  }
  return;
}


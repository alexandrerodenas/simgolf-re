/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100724f0 @ 0x100724F0 */


void __cdecl FUN_100724f0(uint *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_88 [16];
  uint local_48;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_18;
  undefined1 *local_10;
  undefined1 *local_c;
  
  puVar5 = local_88;
  for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  uVar3 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      local_10 = (undefined1 *)(param_2 + param_1[1]);
      local_c = local_10;
      for (local_18 = 0; local_18 < uVar3; local_18 = local_18 + 1) {
        uVar1 = local_c[-1];
        local_10[-1] = local_c[-2];
        local_10[-2] = local_c[-3];
        local_c = local_c + -4;
        local_10[-3] = *local_c;
        local_10 = local_10 + -4;
        *local_10 = uVar1;
      }
    }
    else {
      local_20 = (undefined1 *)(param_2 + param_1[1]);
      local_1c = local_20;
      for (local_28 = 0; local_28 < uVar3; local_28 = local_28 + 1) {
        uVar1 = local_1c[-1];
        uVar2 = local_1c[-2];
        local_20[-1] = local_1c[-3];
        local_20[-2] = local_1c[-4];
        local_20[-3] = local_1c[-5];
        local_20[-4] = local_1c[-6];
        local_20[-5] = local_1c[-7];
        local_1c = local_1c + -8;
        local_20[-6] = *local_1c;
        local_20[-7] = uVar1;
        local_20 = local_20 + -8;
        *local_20 = uVar2;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      local_30 = (undefined1 *)(param_2 + param_1[1]);
      local_2c = local_30;
      for (local_38 = 0; local_38 < uVar3; local_38 = local_38 + 1) {
        uVar1 = local_2c[-1];
        local_2c = local_2c + -2;
        local_30[-1] = *local_2c;
        local_30 = local_30 + -2;
        *local_30 = uVar1;
      }
    }
    else {
      local_40 = (undefined1 *)(param_2 + param_1[1]);
      local_3c = local_40;
      for (local_48 = 0; local_48 < uVar3; local_48 = local_48 + 1) {
        uVar1 = local_3c[-1];
        uVar2 = local_3c[-2];
        local_40[-1] = local_3c[-3];
        local_3c = local_3c + -4;
        local_40[-2] = *local_3c;
        local_40[-3] = uVar1;
        local_40 = local_40 + -4;
        *local_40 = uVar2;
      }
    }
  }
  return;
}


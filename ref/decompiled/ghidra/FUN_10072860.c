/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10072860 @ 0x10072860 */
/* Body size: 877 addresses */


void __cdecl FUN_10072860(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_78 [16];
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  puVar3 = local_78;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uVar1 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      local_10 = (undefined1 *)(param_2 + param_1[1]);
      local_c = local_10;
      for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
        local_10[-1] = -1 - local_c[-1];
        local_10[-2] = local_c[-2];
        local_10[-3] = local_c[-3];
        local_c = local_c + -4;
        local_10 = local_10 + -4;
        *local_10 = *local_c;
      }
    }
    else {
      local_1c = (undefined1 *)(param_2 + param_1[1]);
      local_18 = local_1c;
      for (local_20 = 0; local_20 < uVar1; local_20 = local_20 + 1) {
        local_1c[-1] = -1 - local_18[-1];
        local_1c[-2] = -1 - local_18[-2];
        local_1c[-3] = local_18[-3];
        local_1c[-4] = local_18[-4];
        local_1c[-5] = local_18[-5];
        local_1c[-6] = local_18[-6];
        local_1c[-7] = local_18[-7];
        local_18 = local_18 + -8;
        local_1c = local_1c + -8;
        *local_1c = *local_18;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      local_28 = (undefined1 *)(param_2 + param_1[1]);
      local_24 = local_28;
      for (local_2c = 0; local_2c < uVar1; local_2c = local_2c + 1) {
        local_28[-1] = -1 - local_24[-1];
        local_24 = local_24 + -2;
        local_28 = local_28 + -2;
        *local_28 = *local_24;
      }
    }
    else {
      local_34 = (undefined1 *)(param_2 + param_1[1]);
      local_30 = local_34;
      for (local_38 = 0; local_38 < uVar1; local_38 = local_38 + 1) {
        local_34[-1] = -1 - local_30[-1];
        local_34[-2] = -1 - local_30[-2];
        local_34[-3] = local_30[-3];
        local_30 = local_30 + -4;
        local_34 = local_34 + -4;
        *local_34 = *local_30;
      }
    }
  }
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10073310 @ 0x10073310 */
/* Body size: 944 addresses */


void __cdecl FUN_10073310(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_6c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_8;
  
  puVar4 = local_6c;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  uVar1 = *param_1;
  if ((7 < *(byte *)((int)param_1 + 9)) && ((param_1[2] & 2) == 0)) {
    if ((char)param_1[2] == '\0') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_10 = (undefined1 *)(param_2 + -1 + uVar1);
        local_14 = local_10 + uVar1 * 2;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          *local_14 = *local_10;
          local_14[-1] = *local_10;
          local_14[-2] = *local_10;
          local_14 = local_14 + -3;
          local_10 = local_10 + -1;
        }
      }
      else {
        local_18 = (undefined1 *)(param_2 + -1 + uVar1 * 2);
        local_1c = local_18 + uVar1 * 4;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          *local_1c = *local_18;
          local_1c[-1] = local_18[-1];
          local_1c[-2] = *local_18;
          local_1c[-3] = local_18[-1];
          local_1c[-4] = *local_18;
          local_1c[-5] = local_18[-1];
          local_1c = local_1c + -6;
          local_18 = local_18 + -2;
        }
      }
    }
    else if ((char)param_1[2] == '\x04') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        local_20 = (undefined1 *)(param_2 + -1 + uVar1 * 2);
        local_24 = local_20 + uVar1 * 2;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          *local_24 = *local_20;
          puVar2 = local_20 + -1;
          local_24[-1] = *puVar2;
          local_24[-2] = *puVar2;
          local_24[-3] = *puVar2;
          local_24 = local_24 + -4;
          local_20 = local_20 + -2;
        }
      }
      else {
        local_28 = (undefined1 *)(param_2 + -1 + uVar1 * 4);
        local_2c = local_28 + uVar1 * 4;
        for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
          *local_2c = *local_28;
          local_2c[-1] = local_28[-1];
          puVar2 = local_28 + -2;
          local_2c[-2] = *puVar2;
          local_2c[-3] = local_28[-3];
          local_2c[-4] = *puVar2;
          local_2c[-5] = local_28[-3];
          local_2c[-6] = *puVar2;
          local_2c[-7] = local_28[-3];
          local_2c = local_2c + -8;
          local_28 = local_28 + -4;
        }
      }
    }
    *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = (byte)param_1[2] | 2;
    *(char *)((int)param_1 + 0xb) = *(char *)((int)param_1 + 10) * *(char *)((int)param_1 + 9);
    param_1[1] = uVar1 * *(byte *)((int)param_1 + 0xb) + 7 >> 3;
  }
  return;
}


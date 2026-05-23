/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e010 @ 0x1006E010 */
/* Body size: 497 addresses */


void __cdecl FUN_1006e010(uint *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_78 [17];
  uint local_34;
  undefined1 *local_30;
  uint local_28;
  undefined1 *local_24;
  uint local_1c;
  undefined1 *local_18;
  uint local_10;
  undefined1 *local_c;
  
  puVar4 = local_78;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if ((param_1[2] & 2) != 0) {
    uVar2 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((char)param_1[2] == '\x02') {
        local_c = param_2;
        for (local_10 = 0; local_10 < uVar2; local_10 = local_10 + 1) {
          uVar1 = *local_c;
          *local_c = local_c[2];
          local_c[2] = uVar1;
          local_c = local_c + 3;
        }
      }
      else if ((char)param_1[2] == '\x06') {
        local_18 = param_2;
        for (local_1c = 0; local_1c < uVar2; local_1c = local_1c + 1) {
          uVar1 = *local_18;
          *local_18 = local_18[2];
          local_18[2] = uVar1;
          local_18 = local_18 + 4;
        }
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if ((char)param_1[2] == '\x02') {
        local_24 = param_2;
        for (local_28 = 0; local_28 < uVar2; local_28 = local_28 + 1) {
          uVar1 = *local_24;
          *local_24 = local_24[4];
          local_24[4] = uVar1;
          uVar1 = local_24[1];
          local_24[1] = local_24[5];
          local_24[5] = uVar1;
          local_24 = local_24 + 6;
        }
      }
      else if ((char)param_1[2] == '\x06') {
        local_30 = param_2;
        for (local_34 = 0; local_34 < uVar2; local_34 = local_34 + 1) {
          uVar1 = *local_30;
          *local_30 = local_30[4];
          local_30[4] = uVar1;
          uVar1 = local_30[1];
          local_30[1] = local_30[5];
          local_30[5] = uVar1;
          local_30 = local_30 + 8;
        }
      }
    }
  }
  return;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040740 @ 0x10040740 */
/* Body size: 867 addresses */


undefined4 __cdecl
FUN_10040740(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            int *param_6,int *param_7,int *param_8,int *param_9,int *param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_78 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar6 = local_78;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  iVar4 = param_1 + -4;
  iVar2 = *(int *)(param_5 + -4 + (*param_6 * 2 + -2) * 4) + 1;
  local_28 = (*param_6 + -2) * *param_7 + 1;
  if (local_28 <= iVar2) {
    local_28 = iVar2;
  }
  local_38 = *param_6 * *param_7;
  local_1c = *param_2;
  do {
    iVar2 = local_1c;
    local_1c = iVar2 + -1;
    if (local_1c < 1) break;
  } while (local_38 < *(int *)(iVar4 + local_1c * 4));
  if ((iVar2 < 2) || (*(int *)(param_1 + -8 + iVar2 * 4) < local_28)) {
    local_2c = *(int *)(param_5 + -4 + (*param_6 * 2 + -2) * 4) + 1;
    if (local_2c < *param_10) {
      local_2c = *param_10;
    }
    *(int *)(param_5 + -8 + *param_6 * 8) = local_2c;
    *(int *)(param_5 + -4 + *param_6 * 8) = *(int *)(param_5 + -8 + *param_6 * 8) + -1 + *param_9;
    *param_4 = 0;
  }
  else {
    for (local_18 = local_1c; (0 < local_18 && (local_28 <= *(int *)(iVar4 + local_18 * 4)));
        local_18 = local_18 + -1) {
    }
    iVar5 = local_18 + 1;
    for (local_14 = local_18 + 2; local_14 <= local_1c; local_14 = local_14 + 1) {
      if (*param_8 <= *(int *)(iVar4 + local_14 * 4) - *(int *)(iVar4 + iVar5 * 4)) {
        bVar1 = true;
        goto LAB_10040903;
      }
    }
    bVar1 = false;
LAB_10040903:
    iVar3 = (*param_6 + -1) * *param_7;
    local_30 = local_28 + -1 + *param_8;
    if (!bVar1) {
      if (local_30 <= iVar3) {
        local_30 = iVar3;
      }
      if (local_30 < *(int *)(iVar4 + iVar5 * 4)) {
        *(int *)(param_5 + -4 + *param_6 * 8) = *(int *)(iVar4 + iVar5 * 4) + -1;
        local_34 = (*(int *)(param_5 + -4 + *param_6 * 8) - *param_9) + 1;
        if (local_34 <= local_28) {
          local_34 = local_28;
        }
        *(int *)(param_5 + -8 + *param_6 * 8) = local_34;
        *param_4 = 2;
        return 0;
      }
    }
    *(undefined4 *)(param_5 + -8 + *param_6 * 8) = *(undefined4 *)(iVar4 + iVar5 * 4);
    local_18 = iVar5;
    do {
      local_18 = local_18 + 1;
      if ((iVar2 <= local_18) ||
         (*(int *)(param_5 + -8 + *param_6 * 8) + *param_9 < *(int *)(iVar4 + local_18 * 4))) {
        iVar4 = *(int *)(param_5 + -8 + *param_6 * 8) + -1 + *param_9;
        if (iVar4 <= local_38) {
          local_38 = iVar4;
        }
        *(int *)(param_5 + -4 + *param_6 * 8) = local_38;
        *param_4 = 1;
        return 0;
      }
    } while (*(int *)(iVar4 + local_18 * 4) < *(int *)(param_5 + -8 + *param_6 * 8) + *param_8);
    *(int *)(param_5 + -4 + *param_6 * 8) = *(int *)(iVar4 + local_18 * 4) + -1;
    *param_4 = 3;
  }
  return 0;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003edc0 @ 0x1003EDC0 */
/* Body size: 1350 addresses */


void __cdecl
FUN_1003edc0(int *param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7,
            int *param_8,int *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_84 [16];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  puVar2 = local_84;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iVar1 = (*param_4 + -2) * *param_8;
  local_2c = iVar1 + 1;
  local_24 = *param_4 * *param_8;
  if ((*(int *)(param_2 + 4 + (*param_4 * 2 + -4) * 4) == 1) &&
     (*(int *)(param_2 + (*param_4 * 2 + -2) * 4) == 1)) {
    local_30 = 1;
  }
  else {
    local_30 = 0;
  }
  if ((local_30 == 0) || (*(int *)(param_2 + 4 + (*param_4 * 2 + -2) * 4) != 1)) {
    local_34 = 0;
  }
  else {
    local_34 = 1;
  }
  if ((local_34 == 0) || (*(int *)(param_2 + *param_4 * 8) != 1)) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  if ((local_38 == 0) || (*(int *)(param_2 + 4 + *param_4 * 8) != 1)) {
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  local_c = local_3c;
  if ((*(int *)(param_2 + *param_4 * 8) == 1) || (*(int *)(param_2 + 4 + *param_4 * 8) == 1)) {
    local_40 = 1;
  }
  else {
    local_40 = 0;
  }
  local_10 = local_40;
  if ((local_3c == 0) && ((local_40 == 0 || (*param_3 != 0)))) {
    *(undefined4 *)(param_6 + -8 + *param_4 * 8) = *(undefined4 *)(param_5 + -8 + *param_4 * 8);
    *(undefined4 *)(param_6 + -4 + *param_4 * 8) = *(undefined4 *)(param_5 + -4 + *param_4 * 8);
    local_28 = 0;
  }
  else {
    local_14 = (((iVar1 + *param_1) - *(int *)(param_6 + -8 + (*param_4 * 2 + -2) * 4)) / *param_1)
               * *param_1 + *(int *)(param_6 + -8 + (*param_4 * 2 + -2) * 4);
    local_20 = *param_9;
    local_1c = ((*(int *)(param_5 + -8 + *param_4 * 8) + 1 + *(int *)(param_5 + -4 + *param_4 * 8))
               - local_20) / 2;
    local_44 = local_1c - local_14;
    local_8 = (float)local_44 / (float)*param_1;
    iVar1 = FUN_1003e400(&local_8);
    *(int *)(param_6 + -8 + *param_4 * 8) = local_14 + iVar1 * *param_1;
    *(int *)(param_6 + -4 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) + -1 + local_20;
    if ((1 < *param_3) &&
       (*(int *)(param_5 + -4 + *param_4 * 8) < *(int *)(param_6 + -4 + *param_4 * 8))) {
      *(int *)(param_6 + -8 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) - *param_1;
      *(int *)(param_6 + -4 + *param_4 * 8) = *(int *)(param_6 + -4 + *param_4 * 8) - *param_1;
    }
    if (((*param_3 == 1) || (*param_3 == 3)) &&
       (*(int *)(param_6 + -8 + *param_4 * 8) < *(int *)(param_5 + -8 + *param_4 * 8))) {
      *(int *)(param_6 + -8 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) + *param_1;
      *(int *)(param_6 + -4 + *param_4 * 8) = *(int *)(param_6 + -4 + *param_4 * 8) + *param_1;
    }
    while (local_24 < *(int *)(param_6 + -4 + *param_4 * 8)) {
      *(int *)(param_6 + -8 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) - *param_1;
      *(int *)(param_6 + -4 + *param_4 * 8) = *(int *)(param_6 + -4 + *param_4 * 8) - *param_1;
    }
    while (*(int *)(param_6 + -8 + *param_4 * 8) < local_2c) {
      *(int *)(param_6 + -8 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) + *param_1;
      *(int *)(param_6 + -4 + *param_4 * 8) = *(int *)(param_6 + -4 + *param_4 * 8) + *param_1;
    }
    local_28 = 1;
  }
  local_18 = (((*(int *)(param_6 + -4 + *param_4 * 8) - *(int *)(param_6 + -8 + *param_4 * 8)) + 1)
             / *param_1) * *param_1;
  if ((local_18 == 0) || (local_10 == 0)) {
    *(undefined4 *)(param_7 + -8 + *param_4 * 8) = *(undefined4 *)(param_5 + -8 + *param_4 * 8);
    *(undefined4 *)(param_7 + -4 + *param_4 * 8) = *(undefined4 *)(param_5 + -4 + *param_4 * 8);
  }
  else if ((local_28 == 0) && (*param_3 == 2)) {
    *(int *)(param_7 + -8 + *param_4 * 8) = (*(int *)(param_6 + -4 + *param_4 * 8) - local_18) + 1;
    *(undefined4 *)(param_7 + -4 + *param_4 * 8) = *(undefined4 *)(param_6 + -4 + *param_4 * 8);
  }
  else {
    *(undefined4 *)(param_7 + -8 + *param_4 * 8) = *(undefined4 *)(param_6 + -8 + *param_4 * 8);
    *(int *)(param_7 + -4 + *param_4 * 8) = *(int *)(param_6 + -8 + *param_4 * 8) + -1 + local_18;
  }
  local_8 = 2.60224e-29;
  FUN_100431ce();
  return;
}


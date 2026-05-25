/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003bf30 @ 0x1003BF30 */


undefined4 __cdecl
FUN_1003bf30(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [17];
  uint local_44 [14];
  int local_c;
  uint *local_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 1) {
    for (local_44[0] = 1; (int)local_44[0] < 0xe; local_44[0] = local_44[0] + 1) {
      local_44[local_44[0]] = 0;
    }
    for (local_44[0] = 1; (int)local_44[0] < 0x36; local_44[0] = local_44[0] + 1) {
      local_44[*(int *)((0x36 - local_44[0]) * 4 + 0x1006447c)] =
           *(int *)(param_6 + -4 + (0x36 - local_44[0]) * 4) +
           local_44[*(int *)((0x36 - local_44[0]) * 4 + 0x1006447c)] * 2;
    }
    local_c = *param_2;
    for (local_44[0] = 1; (int)local_44[0] <= local_c; local_44[0] = local_44[0] + 1) {
      if ((local_44[local_44[0] + 3] & *(uint *)(&DAT_10064454 + local_44[0] * 4)) != 0) {
        local_44[local_44[0] + 3] =
             local_44[local_44[0] + 3] + *(int *)(&DAT_10064454 + local_44[0] * 4) * -2;
      }
    }
    *param_3 = local_44[1];
    *param_4 = local_44[2];
    local_c = *param_2;
    for (local_44[0] = 1; (int)local_44[0] <= local_c; local_44[0] = local_44[0] + 1) {
      *(uint *)(param_5 + -4 + local_44[0] * 4) = local_44[(*param_2 + 4) - local_44[0]];
    }
  }
  else {
    local_8 = (uint *)(param_7 + 0x2540);
    local_44[1] = *param_3;
    local_44[2] = *param_4;
    local_44[3] = 0;
    local_c = *param_2;
    for (local_44[0] = 1; (int)local_44[0] <= local_c; local_44[0] = local_44[0] + 1) {
      local_44[local_44[0] + 3] =
           *(uint *)(param_5 + -4 + ((*param_2 + 1) - local_44[0]) * 4) & 0x7fff;
    }
    for (local_44[0] = 1; (int)local_44[0] < 0x36; local_44[0] = local_44[0] + 1) {
      *(uint *)(param_6 + -4 + local_44[0] * 4) =
           local_44[*(int *)(local_44[0] * 4 + 0x1006447c)] & 1;
      local_44[*(int *)(local_44[0] * 4 + 0x1006447c)] =
           (int)local_44[*(int *)(local_44[0] * 4 + 0x1006447c)] / 2;
    }
    *(uint *)(param_6 + 0xd4) = *local_8 & 1;
    *local_8 = 1 - *local_8;
  }
  return 0;
}


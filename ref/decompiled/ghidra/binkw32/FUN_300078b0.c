/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300078b0 @ 0x300078B0 */


undefined4 FUN_300078b0(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined2 local_18;
  ushort local_16;
  int iStack_14;
  uint local_10;
  short local_c;
  ushort local_a;
  undefined2 uStack_8;
  
  puVar5 = param_1;
  for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar3 = FUN_300077c0();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xe] = param_3;
  uVar2 = *(ushort *)(param_1 + 0xe);
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0xf] = param_4;
  local_16 = (ushort)param_4 & 0xff;
  _local_a = CONCAT22(uStack_8,uVar2);
  local_c = (uVar2 >> 3) * ((ushort)param_4 & 0xff);
  local_10 = (uint)(uVar2 >> 3) * (param_4 & 0xff) * param_2;
  param_1[9] = 0;
  param_1[0x14] = param_2;
  param_1[0xd] = param_2;
  local_18 = 1;
  if (DAT_30041bac != 0) {
    local_34 = 0;
    local_3c = 1;
    local_40 = 0x14;
    local_38 = 0;
    local_30 = 0;
    iStack_14 = param_2;
    iVar3 = (**(code **)(*DAT_3003da40 + 0xc))(DAT_3003da40,&local_40,&DAT_30041bb0,0);
    param_2 = iStack_14;
    if (iVar3 == 0) {
      (**(code **)(*DAT_30041bb0 + 0x38))(DAT_30041bb0,&local_18);
      (**(code **)(*DAT_30041bb0 + 0x30))(DAT_30041bb0,0,0,1);
      param_2 = iStack_14;
    }
    DAT_30041bac = 0;
  }
  uVar4 = (((-(uint)(DAT_30041bb4 != 0) & 0x4b) + 100) * local_10) / 1000;
  param_1[0x12] = 4;
  param_1[0x13] = 1;
  if (1 < uVar4) {
    do {
      iVar3 = param_1[0x13];
      param_1[0x13] = iVar3 * 2;
    } while (iVar3 * 2 < (int)uVar4);
  }
  param_1[0x11] = param_1[0x13] * 4;
  local_24 = param_1[0x11];
  param_1[0xb] = (int)(((ulonglong)(uint)(param_1[0x13] * 3) * 1000) / (ulonglong)local_10);
  local_2c = 0x14;
  local_20 = 0;
  local_1c = &local_18;
  piVar1 = param_1 + 0x10;
  local_28 = 0x180e0;
  iStack_14 = param_2;
  iVar3 = (**(code **)(*DAT_3003da40 + 0xc))(DAT_3003da40,&local_2c,piVar1,0);
  if (iVar3 < 0) {
    return 0;
  }
  param_1[8] = param_1[0x13];
  if (param_1[0xe] == 8) {
    param_1[8] = param_1[0x13] * 2;
  }
  param_1[0x17] = 0x7fff;
  param_1[0x18] = 0x7fff;
  FUN_30007af0(piVar1);
  FUN_30007bc0(piVar1);
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[10] = 1;
  *param_1 = &LAB_30007c70;
  param_1[1] = FUN_30007f30;
  param_1[2] = FUN_30007f80;
  param_1[3] = &LAB_30008000;
  param_1[4] = &LAB_30008030;
  param_1[5] = &LAB_300080e0;
  param_1[6] = &LAB_30008060;
  param_1[7] = &LAB_30008150;
  return 1;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005690 @ 0x10005690 */
/* Body size: 401 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005690(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_78 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  puVar2 = local_78;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_100052b0(param_1);
  if ((*(uint *)(local_8 + 0x20) & 0x1c) != 0) {
    local_30 = *(float *)(local_8 + 4) + *(float *)(local_8 + 4);
    local_34 = *(float *)(local_8 + 8) + *(float *)(local_8 + 8);
    local_38 = *(float *)(local_8 + 0xc) + *(float *)(local_8 + 0xc);
    local_18 = local_30 * *(float *)(local_8 + 4);
    local_1c = local_34 * *(float *)(local_8 + 4);
    local_20 = local_38 * *(float *)(local_8 + 4);
    local_24 = local_34 * *(float *)(local_8 + 8);
    local_28 = local_38 * *(float *)(local_8 + 8);
    local_2c = local_38 * *(float *)(local_8 + 0xc);
    local_c = local_30 * *(float *)(local_8 + 0x10);
    local_10 = local_34 * *(float *)(local_8 + 0x10);
    local_14 = local_38 * *(float *)(local_8 + 0x10);
    *(float *)(param_1 + 4) = _DAT_1011d050 - (local_24 + local_2c);
    *(float *)(param_1 + 0x14) = local_1c - local_14;
    *(float *)(param_1 + 0x24) = local_20 + local_10;
    *(float *)(param_1 + 8) = local_1c + local_14;
    *(float *)(param_1 + 0x18) = _DAT_1011d050 - (local_18 + local_2c);
    *(float *)(param_1 + 0x28) = local_28 - local_c;
    *(float *)(param_1 + 0xc) = local_20 - local_10;
    *(float *)(param_1 + 0x1c) = local_28 + local_c;
    *(float *)(param_1 + 0x2c) = _DAT_1011d050 - (local_18 + local_24);
  }
  if ((*(uint *)(local_8 + 0x20) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(local_8 + 0x14);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(local_8 + 0x18);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(local_8 + 0x1c);
  }
  local_8 = 0x1000581b;
  __chkesp();
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004a50 @ 0x10004A50 */
/* Body size: 496 addresses */


void FUN_10004a50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a4 [16];
  void *local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  float afStack_54 [16];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aec89;
  local_10 = ExceptionList;
  puVar2 = local_a4;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  thunk_FUN_10004590(&local_58);
  local_8 = 0;
  local_60 = 0;
  for (local_5c = 0; local_5c < 4; local_5c = local_5c + 1) {
    afStack_54[local_60] =
         *(float *)((int)local_14 + local_60 * 4 + 0x10) * *(float *)(param_1 + 0x34) +
         *(float *)((int)local_14 + local_60 * 4 + 0xc) * *(float *)(param_1 + 0x24) +
         *(float *)((int)local_14 + local_60 * 4 + 8) * *(float *)(param_1 + 0x14) +
         *(float *)((int)local_14 + local_60 * 4 + 4) * *(float *)(param_1 + 4);
    afStack_54[local_60 + 1] =
         *(float *)((int)local_14 + local_60 * 4 + 0x10) * *(float *)(param_1 + 0x38) +
         *(float *)((int)local_14 + local_60 * 4 + 0xc) * *(float *)(param_1 + 0x28) +
         *(float *)((int)local_14 + local_60 * 4 + 8) * *(float *)(param_1 + 0x18) +
         *(float *)((int)local_14 + local_60 * 4 + 4) * *(float *)(param_1 + 8);
    afStack_54[local_60 + 2] =
         *(float *)((int)local_14 + local_60 * 4 + 0x10) * *(float *)(param_1 + 0x3c) +
         *(float *)((int)local_14 + local_60 * 4 + 0xc) * *(float *)(param_1 + 0x2c) +
         *(float *)((int)local_14 + local_60 * 4 + 8) * *(float *)(param_1 + 0x1c) +
         *(float *)((int)local_14 + local_60 * 4 + 4) * *(float *)(param_1 + 0xc);
    afStack_54[local_60 + 3] =
         *(float *)((int)local_14 + local_60 * 4 + 0x10) * *(float *)(param_1 + 0x40) +
         *(float *)((int)local_14 + local_60 * 4 + 0xc) * *(float *)(param_1 + 0x30) +
         *(float *)((int)local_14 + local_60 * 4 + 8) * *(float *)(param_1 + 0x20) +
         *(float *)((int)local_14 + local_60 * 4 + 4) * *(float *)(param_1 + 0x10);
    local_60 = local_60 + 4;
  }
  thunk_FUN_10006790(local_14,(int)&local_58);
  local_64 = local_14;
  local_8 = 0xffffffff;
  thunk_FUN_100032f0(&local_58);
  ExceptionList = local_10;
  local_8 = 0x10004c3a;
  __chkesp();
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005030 @ 0x10005030 */


void FUN_10005030(void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a4 [16];
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  float afStack_54 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aed00;
  local_10 = ExceptionList;
  puVar2 = local_a4;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_64 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10004590(&local_58);
  local_8 = 1;
  local_60 = 0;
  for (local_5c = 0; local_5c < 4; local_5c = local_5c + 1) {
    afStack_54[local_60] =
         *(float *)(local_14 + 0x10 + local_60 * 4) * *(float *)(param_2 + 0x34) +
         *(float *)(local_14 + 0xc + local_60 * 4) * *(float *)(param_2 + 0x24) +
         *(float *)(local_14 + 8 + local_60 * 4) * *(float *)(param_2 + 0x14) +
         *(float *)(local_14 + 4 + local_60 * 4) * *(float *)(param_2 + 4);
    afStack_54[local_60 + 1] =
         *(float *)(local_14 + 0x10 + local_60 * 4) * *(float *)(param_2 + 0x38) +
         *(float *)(local_14 + 0xc + local_60 * 4) * *(float *)(param_2 + 0x28) +
         *(float *)(local_14 + 8 + local_60 * 4) * *(float *)(param_2 + 0x18) +
         *(float *)(local_14 + 4 + local_60 * 4) * *(float *)(param_2 + 8);
    afStack_54[local_60 + 2] =
         *(float *)(local_14 + 0x10 + local_60 * 4) * *(float *)(param_2 + 0x3c) +
         *(float *)(local_14 + 0xc + local_60 * 4) * *(float *)(param_2 + 0x2c) +
         *(float *)(local_14 + 8 + local_60 * 4) * *(float *)(param_2 + 0x1c) +
         *(float *)(local_14 + 4 + local_60 * 4) * *(float *)(param_2 + 0xc);
    afStack_54[local_60 + 3] =
         *(float *)(local_14 + 0x10 + local_60 * 4) * *(float *)(param_2 + 0x40) +
         *(float *)(local_14 + 0xc + local_60 * 4) * *(float *)(param_2 + 0x30) +
         *(float *)(local_14 + 8 + local_60 * 4) * *(float *)(param_2 + 0x20) +
         *(float *)(local_14 + 4 + local_60 * 4) * *(float *)(param_2 + 0x10);
    local_60 = local_60 + 4;
  }
  thunk_FUN_10006720(param_1,&local_58);
  local_64 = local_64 | 1;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_100032f0(&local_58);
  ExceptionList = local_10;
  local_8 = 0x10005221;
  __chkesp();
  return;
}


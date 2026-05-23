/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065c30 @ 0x10065C30 */
/* Body size: 288 addresses */


void __thiscall FUN_10065c30(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_1c = 0;
  local_14 = param_1;
  local_18 = 0;
  local_10 = param_2;
  local_28 = -1;
  local_2c = -1;
  local_8 = this;
  (**(code **)(*(int *)this + 0x68))();
  local_20 = __chkesp();
  local_24 = 0;
  while( true ) {
    iVar1 = thunk_FUN_10066a80(local_20);
    if (iVar1 <= local_24) break;
    if ((((*(int *)(*(int *)(local_20 + 4) + local_24 * 0x14) == param_1) &&
         (*(int *)(*(int *)(local_20 + 4) + 4 + local_24 * 0x14) == param_2)) &&
        (*(int *)(*(int *)(local_20 + 4) + 0xc + local_24 * 0x14) == param_3)) &&
       (local_2c < *(int *)(*(int *)(local_20 + 4) + 0x10 + local_24 * 0x14))) {
      local_2c = *(int *)(*(int *)(local_20 + 4) + 0x10 + local_24 * 0x14);
      local_28 = local_24;
    }
    local_24 = local_24 + 1;
  }
  (**(code **)(*local_8 + 100))(local_28);
  __chkesp();
  local_c = 0x10065d4a;
  __chkesp();
  return;
}


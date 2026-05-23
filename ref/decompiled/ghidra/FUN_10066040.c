/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066040 @ 0x10066040 */
/* Body size: 352 addresses */


void __thiscall
FUN_10066040(void *this,int param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = -1;
  local_18 = -1;
  local_8 = this;
  if (param_4 == '\0') {
    (**(code **)(*(int *)this + 0x68))();
    local_c = __chkesp();
    local_10 = 0;
    while (iVar1 = thunk_FUN_10066a80(local_c), local_10 < iVar1) {
      if (((*(int *)(*(int *)(local_c + 4) + local_10 * 0x14) == param_1) &&
          (*(int *)(*(int *)(local_c + 4) + 4 + local_10 * 0x14) == param_2)) &&
         (*(int *)(*(int *)(local_c + 4) + 0xc + local_10 * 0x14) == param_3)) {
        if (*(int *)(*(int *)(local_c + 4) + 0x10 + local_10 * 0x14) == param_5) {
          local_14 = local_10;
          break;
        }
        if (local_18 < *(int *)(*(int *)(local_c + 4) + 0x10 + local_10 * 0x14)) {
          local_18 = *(int *)(*(int *)(local_c + 4) + 0x10 + local_10 * 0x14);
          local_14 = local_10;
        }
      }
      local_10 = local_10 + 1;
    }
    if (-1 < local_14) {
      (**(code **)(*local_8 + 100))(local_14);
      __chkesp();
    }
  }
  else {
    (**(code **)(*(int *)this + 0x60))(param_1,param_2,param_3,param_4);
    __chkesp();
  }
  local_18 = 0x1006619a;
  __chkesp();
  return;
}


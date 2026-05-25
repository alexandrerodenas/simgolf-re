/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10006850 @ 0x10006850 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10006850(void *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  void *local_8;
  
  puVar2 = local_80;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)((int)this + 0x1c) != 2) {
    local_14 = (*(int *)((int)this + 0x20) >> 1) * *(int *)((int)this + 0x1c);
    local_18 = (*(int *)((int)this + 0x24) >> 1) * *(int *)((int)this + 0x1c);
    local_8 = this;
    iVar1 = thunk_FUN_10006810(param_1);
    local_1c = thunk_FUN_10006810(param_2);
    local_1c = iVar1 - local_1c;
    iVar1 = thunk_FUN_10005960(param_1);
    local_20 = thunk_FUN_10005960(param_2);
    local_20 = iVar1 - local_20;
    if ((*(int *)((int)local_8 + 0x20) == 800) && (*(int *)((int)local_8 + 0x24) == 600)) {
      local_24 = 0x40;
      local_2c = 0x28;
      local_28 = 0x20;
      local_30 = 0x14;
    }
    else if ((*(int *)((int)local_8 + 0x20) == 0x400) && (*(int *)((int)local_8 + 0x24) == 0x300)) {
      local_24 = 0x50;
      local_2c = 0x34;
      local_28 = 0x28;
      local_30 = 0x1a;
    }
    else if ((*(int *)((int)local_8 + 0x20) == 0x500) && (*(int *)((int)local_8 + 0x24) == 0x400)) {
      local_24 = 0x68;
      local_2c = 0x44;
      local_28 = 0x34;
      local_30 = 0x22;
    }
    if (param_3 == (float)_DAT_1005f368) {
      local_c = (*(int *)((int)local_8 + 0x20) >> 1) + local_1c * local_28 + local_20 * local_28;
      local_10 = ((*(int *)((int)local_8 + 0x24) >> 1) + local_1c * local_30) - local_20 * local_30;
      iVar1 = thunk_FUN_10015500(param_1);
      local_10 = local_10 + iVar1 * -5;
      if ((((*(int *)((int)local_8 + 0x20) + local_14 < local_c) || (local_c < -local_14 - local_24)
           ) || (*(int *)((int)local_8 + 0x24) + local_2c + local_18 < local_10)) ||
         (local_10 < -local_18 - local_2c)) {
        local_34 = 1;
      }
      else {
        local_34 = 0;
      }
    }
    else if (param_3 == (float)_DAT_1005f358) {
      local_c = ((*(int *)((int)local_8 + 0x20) >> 1) - local_1c * local_28) + local_20 * local_28;
      local_10 = ((*(int *)((int)local_8 + 0x24) >> 1) - local_1c * local_30) - local_20 * local_30;
      iVar1 = thunk_FUN_10015500(param_1);
      local_10 = local_10 + iVar1 * -5;
      if (((*(int *)((int)local_8 + 0x20) + local_28 + local_14 < local_c) ||
          (local_c < -local_14 - local_24)) ||
         ((*(int *)((int)local_8 + 0x24) + local_2c + local_18 < local_10 ||
          (local_10 < -local_18 - local_2c)))) {
        local_38 = 1;
      }
      else {
        local_38 = 0;
      }
    }
    else if (param_3 == (float)_DAT_1005f348) {
      local_c = ((*(int *)((int)local_8 + 0x20) >> 1) - local_1c * local_28) - local_20 * local_28;
      local_10 = ((*(int *)((int)local_8 + 0x24) >> 1) - local_1c * local_30) + local_20 * local_30;
      iVar1 = thunk_FUN_10015500(param_1);
      local_10 = local_10 + iVar1 * -5;
      if (((*(int *)((int)local_8 + 0x20) + local_24 + local_14 < local_c) ||
          (local_c < -local_14 - local_28)) ||
         ((*(int *)((int)local_8 + 0x24) + local_2c + local_18 < local_10 ||
          (local_10 < -local_18 - local_2c)))) {
        local_3c = 1;
      }
      else {
        local_3c = 0;
      }
    }
    else {
      local_c = ((*(int *)((int)local_8 + 0x20) >> 1) + local_1c * local_28) - local_20 * local_28;
      local_10 = (*(int *)((int)local_8 + 0x24) >> 1) + local_1c * local_30 + local_20 * local_30;
      iVar1 = thunk_FUN_10015500(param_1);
      local_10 = local_10 + iVar1 * -5;
      if ((((*(int *)((int)local_8 + 0x20) + local_28 + local_14 < local_c) ||
           (local_c < -local_14 - local_28)) ||
          (*(int *)((int)local_8 + 0x24) + local_30 + local_18 < local_10)) ||
         (local_10 < (-local_30 - local_2c) - local_18)) {
        local_40 = 1;
      }
      else {
        local_40 = 0;
      }
    }
  }
  local_8 = (void *)0x10006c37;
  __chkesp();
  return;
}


/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000ccc0 @ 0x1000CCC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000ccc0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_9c [16];
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
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
  void *local_8;
  
  puVar2 = local_9c;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_54 = param_1 + -1;
  switch(local_54) {
  case 0:
    local_34 = 3;
    local_38 = 2;
    local_c = 4;
    local_10 = 1;
    local_14 = 3;
    local_18 = 1;
    local_1c = 1;
    local_20 = 2;
    local_24 = 7;
    local_28 = 1;
    local_2c = 0;
    local_30 = 0;
    break;
  case 2:
    local_34 = 7;
    local_38 = 1;
    local_c = 0;
    local_10 = 0;
    local_14 = 5;
    local_18 = 1;
    local_1c = 3;
    local_20 = 1;
    local_24 = 4;
    local_28 = 1;
    local_2c = 3;
    local_30 = 2;
    break;
  case 4:
    local_34 = 4;
    local_38 = 1;
    local_c = 3;
    local_10 = 2;
    local_14 = 0;
    local_18 = 1;
    local_1c = 5;
    local_20 = 1;
    local_24 = 0;
    local_28 = 0;
    local_2c = 7;
    local_30 = 1;
    break;
  case 6:
    local_34 = 0;
    local_38 = 0;
    local_c = 7;
    local_10 = 1;
    local_14 = 1;
    local_18 = 2;
    local_1c = 0;
    local_20 = 1;
    local_24 = 3;
    local_28 = 2;
    local_2c = 4;
    local_30 = 1;
  }
  local_58 = *(int *)((int)this + param_1 * 4) + -1;
  local_4c = (float)local_58 * _DAT_10063e54;
  local_40 = *(float *)(&DAT_100b28cc +
                       *(int *)((int)this + local_10 * 4 + local_c * 0x38 + 0x48) * 0xc);
  local_44 = *(float *)(&DAT_100b28cc +
                       *(int *)((int)this + local_28 * 4 + local_24 * 0x38 + 0x48) * 0xc);
  local_48 = *(float *)(&DAT_100b28cc +
                       *(int *)((int)this + local_30 * 4 + local_2c * 0x38 + 0x48) * 0xc);
  local_50 = (local_4c + local_40) * _DAT_1005f3e0;
  local_5c = local_50;
  if (*(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc) <= local_50) {
    local_5c = *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc);
  }
  *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc) = local_5c;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_18 * 4 + local_14 * 0x38 + 0x48) * 0xc) =
       (local_4c + local_44) * _DAT_1005f3e0;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_20 * 4 + local_1c * 0x38 + 0x48) * 0xc) =
       (local_4c + local_48) * _DAT_1005f3e0;
  *(int *)((int)this + param_1 * 4) = *(int *)((int)this + param_1 * 4) + -1;
  *(float *)(&DAT_100b28cc + *(int *)((int)this + local_38 * 4 + local_34 * 0x38 + 0x48) * 0xc) =
       local_4c;
  local_3c = local_4c;
  local_8 = this;
  if (*(int *)((int)this + 0x24) == 7) {
    *(float *)(&DAT_100b28cc + *(int *)((int)this + 0x50) * 0xc) = local_4c - _DAT_1005f518;
    if ((*(int *)((int)this + 0x34) != 0) &&
       (iVar1 = thunk_FUN_10001f60(*(int *)((int)this + 0x34)), iVar1 == 7)) {
      *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x88) * 0xc) = local_3c - _DAT_1005f518;
      if ((*(int *)((int)local_8 + 0x3c) != 0) &&
         ((iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x3c)), iVar1 == 7 &&
          (iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)((int)local_8 + 0x34) + 0x3c)), iVar1 == 7)))
         ) {
        *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x48) * 0xc) = local_3c - _DAT_1005f518;
      }
      if (((*(int *)((int)local_8 + 0x40) != 0) &&
          (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x40)), iVar1 == 7)) &&
         (iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)((int)local_8 + 0x34) + 0x40)), iVar1 == 7)) {
        *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0xf8) * 0xc) = local_3c - _DAT_1005f518;
      }
    }
    if ((*(int *)((int)local_8 + 0x38) != 0) &&
       (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x38)), iVar1 == 7)) {
      *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x164) * 0xc) = local_3c - _DAT_1005f518;
      if ((*(int *)((int)local_8 + 0x3c) != 0) &&
         ((iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x3c)), iVar1 == 7 &&
          (iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)((int)local_8 + 0x38) + 0x3c)), iVar1 == 7)))
         ) {
        *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x160) * 0xc) = local_3c - _DAT_1005f518;
      }
      if (((*(int *)((int)local_8 + 0x40) != 0) &&
          (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x40)), iVar1 == 7)) &&
         (iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)((int)local_8 + 0x38) + 0x40)), iVar1 == 7)) {
        *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x1d4) * 0xc) = local_3c - _DAT_1005f518;
      }
    }
    if ((*(int *)((int)local_8 + 0x3c) != 0) &&
       (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x3c)), iVar1 == 7)) {
      *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0x4c) * 0xc) = local_3c - _DAT_1005f518;
    }
    if ((*(int *)((int)local_8 + 0x40) != 0) &&
       (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x40)), iVar1 == 7)) {
      *(float *)(&DAT_100b28cc + *(int *)((int)local_8 + 0xf4) * 0xc) = local_3c - _DAT_1005f518;
    }
  }
  *(undefined1 *)((int)local_8 + 0x244) = 1;
  if (*(int *)((int)local_8 + 0x34) != 0) {
    *(undefined1 *)(*(int *)((int)local_8 + 0x34) + 0x244) = 1;
  }
  if ((*(int *)((int)local_8 + 0x34) != 0) && (*(int *)((int)local_8 + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)local_8 + 0x34) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)((int)local_8 + 0x34) != 0) && (*(int *)((int)local_8 + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)local_8 + 0x34) + 0x40) + 0x244) = 1;
  }
  if (*(int *)((int)local_8 + 0x3c) != 0) {
    *(undefined1 *)(*(int *)((int)local_8 + 0x3c) + 0x244) = 1;
  }
  if (*(int *)((int)local_8 + 0x40) != 0) {
    *(undefined1 *)(*(int *)((int)local_8 + 0x40) + 0x244) = 1;
  }
  if (*(int *)((int)local_8 + 0x38) != 0) {
    *(undefined1 *)(*(int *)((int)local_8 + 0x38) + 0x244) = 1;
  }
  if ((*(int *)((int)local_8 + 0x38) != 0) && (*(int *)((int)local_8 + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)local_8 + 0x38) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)((int)local_8 + 0x38) != 0) && (*(int *)((int)local_8 + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)local_8 + 0x38) + 0x40) + 0x244) = 1;
  }
  local_8 = (void *)0x1000d2cd;
  __chkesp();
  return;
}


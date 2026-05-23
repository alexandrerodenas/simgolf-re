/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002060 @ 0x10002060 */
/* Body size: 1196 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10002060(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_78 [16];
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
  
  puVar2 = local_78;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_10 = param_3 * 3;
  local_14 = param_2 * local_10 * 3;
  local_18 = param_1 * 3;
  *(undefined4 *)this = 8;
  local_8 = this;
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
      *(int *)((int)local_8 + local_c * 0x38 + 4) =
           local_20 + local_1c * local_10 + local_14 + local_18;
      *(int *)((int)local_8 + local_c * 0x38 + 8) =
           local_20 + (local_1c + 1) * local_10 + local_14 + local_18;
      iVar1 = local_20 + 1 + local_14 + (local_1c + 1) * local_10 + local_18;
      *(int *)((int)local_8 + local_c * 0x38 + 0xc) = iVar1;
      uVar3 = thunk_FUN_10002010(local_8,iVar1,(int)((float)local_20 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x10) = (int)uVar3;
      uVar3 = thunk_FUN_10002010(local_8,local_c * 0x38,
                                 (int)(_DAT_1005f024 - (float)local_1c / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x14) = (int)uVar3;
      uVar3 = thunk_FUN_10002010(local_8,local_c * 0x38,(int)((float)local_20 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x18) = (int)uVar3;
      local_24 = local_1c + 1;
      uVar3 = thunk_FUN_10002010(local_8,local_24,
                                 (int)(_DAT_1005f024 - (float)local_24 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x1c) = (int)uVar3;
      local_28 = local_20 + 1;
      uVar3 = thunk_FUN_10002010(local_c * 0x38,local_8,(int)((float)local_28 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x20) = (int)uVar3;
      local_2c = local_1c + 1;
      uVar3 = thunk_FUN_10002010(local_c * 0x38,local_8,
                                 (int)(_DAT_1005f024 - (float)local_2c / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x24) = (int)uVar3;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x30) = 0;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x34) = 0x3f800000;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x38) = 0;
      local_c = local_c + 1;
      *(int *)((int)local_8 + local_c * 0x38 + 4) =
           local_20 + local_1c * local_10 + local_14 + local_18;
      *(int *)((int)local_8 + local_c * 0x38 + 8) =
           local_20 + 1 + local_14 + (local_1c + 1) * local_10 + local_18;
      iVar1 = local_20 + 1 + local_14 + local_1c * local_10 + local_18;
      *(int *)((int)local_8 + local_c * 0x38 + 0xc) = iVar1;
      uVar3 = thunk_FUN_10002010(local_8,iVar1,(int)((float)local_20 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x10) = (int)uVar3;
      uVar3 = thunk_FUN_10002010(local_8,local_c * 0x38,
                                 (int)(_DAT_1005f024 - (float)local_1c / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x14) = (int)uVar3;
      local_30 = local_20 + 1;
      uVar3 = thunk_FUN_10002010(local_8,local_30,(int)((float)local_30 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x18) = (int)uVar3;
      local_34 = local_1c + 1;
      uVar3 = thunk_FUN_10002010(local_c * 0x38,local_8,
                                 (int)(_DAT_1005f024 - (float)local_34 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x1c) = (int)uVar3;
      local_38 = local_20 + 1;
      uVar3 = thunk_FUN_10002010(local_c * 0x38,local_8,(int)((float)local_38 / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x20) = (int)uVar3;
      uVar3 = thunk_FUN_10002010(local_c * 0x38,local_8,
                                 (int)(_DAT_1005f024 - (float)local_1c / _DAT_1005f028));
      *(int *)((int)local_8 + local_c * 0x38 + 0x24) = (int)uVar3;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x30) = 0;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x34) = 0x3f800000;
      *(undefined4 *)((int)local_8 + local_c * 0x38 + 0x38) = 0;
      local_c = local_c + 1;
    }
  }
  *(undefined4 *)((int)local_8 + 0x7c) = *(undefined4 *)((int)local_8 + 0xb4);
  *(undefined4 *)((int)local_8 + 0x90) = *(undefined4 *)((int)local_8 + 200);
  *(undefined4 *)((int)local_8 + 0x94) = *(undefined4 *)((int)local_8 + 0xcc);
  *(undefined4 *)((int)local_8 + 0xac) = *(undefined4 *)((int)local_8 + 0x78);
  *(undefined4 *)((int)local_8 + 0xb8) = *(undefined4 *)((int)local_8 + 0x88);
  *(undefined4 *)((int)local_8 + 0xbc) = *(undefined4 *)((int)local_8 + 0x8c);
  *(undefined4 *)((int)local_8 + 0xec) = *(undefined4 *)((int)local_8 + 0x124);
  *(undefined4 *)((int)local_8 + 0x100) = *(undefined4 *)((int)local_8 + 0x138);
  *(undefined4 *)((int)local_8 + 0x104) = *(undefined4 *)((int)local_8 + 0x13c);
  *(undefined4 *)((int)local_8 + 0x11c) = *(undefined4 *)((int)local_8 + 0xe8);
  *(undefined4 *)((int)local_8 + 0x128) = *(undefined4 *)((int)local_8 + 0xf8);
  *(undefined4 *)((int)local_8 + 300) = *(undefined4 *)((int)local_8 + 0xfc);
  local_8 = (void *)0x10002506;
  __chkesp();
  return;
}


/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013670 @ 0x10013670 */
/* Body size: 1507 addresses */


void __thiscall FUN_10013670(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_90 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  puVar4 = local_90;
  for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  local_10 = 0;
  local_14 = local_14 & 0xffffff00;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  local_20 = local_20 & 0xffffff00;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_1 == -1) {
    param_1 = *(int *)((int)this + 0x24);
  }
  if (param_1 != 0x14) {
    local_8 = this;
    local_34 = thunk_FUN_10015650(this,*(int *)((int)this + 0x34));
    local_38 = thunk_FUN_10015650(local_8,*(int *)((int)local_8 + 0x3c));
    local_3c = thunk_FUN_10015650(local_8,*(int *)((int)local_8 + 0x40));
    local_40 = thunk_FUN_10015650(local_8,*(int *)((int)local_8 + 0x38));
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    uVar2 = thunk_FUN_100154a0(param_1);
    if ((uVar2 & 0xff) != 0) {
      if (*(int *)((int)local_8 + 0x34) != 0) {
        if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
           (cVar1 = thunk_FUN_100155b0(*(int *)((int)local_8 + 0x34)), cVar1 != '\0')) {
          local_14 = CONCAT31(local_14._1_3_,1);
        }
        if (*(int *)((int)local_8 + 0x3c) != 0) {
          if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
             (cVar1 = thunk_FUN_100155b0(*(int *)(*(int *)((int)local_8 + 0x34) + 0x3c)),
             cVar1 != '\0')) {
            local_24 = 1;
          }
          local_44 = thunk_FUN_10015650(local_8,*(int *)(*(int *)((int)local_8 + 0x34) + 0x3c));
        }
        if (*(int *)((int)local_8 + 0x40) != 0) {
          if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
             (cVar1 = thunk_FUN_100155b0(*(int *)(*(int *)((int)local_8 + 0x34) + 0x40)),
             cVar1 != '\0')) {
            local_28 = 1;
          }
          local_48 = thunk_FUN_10015650(local_8,*(int *)(*(int *)((int)local_8 + 0x34) + 0x40));
        }
      }
      if (*(int *)((int)local_8 + 0x38) != 0) {
        if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
           (cVar1 = thunk_FUN_100155b0(*(int *)((int)local_8 + 0x38)), cVar1 != '\0')) {
          local_18 = CONCAT31(local_18._1_3_,1);
        }
        if (*(int *)((int)local_8 + 0x3c) != 0) {
          if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
             (cVar1 = thunk_FUN_100155b0(*(int *)(*(int *)((int)local_8 + 0x38) + 0x3c)),
             cVar1 != '\0')) {
            local_2c = 1;
          }
          local_4c = thunk_FUN_10015650(local_8,*(int *)(*(int *)((int)local_8 + 0x38) + 0x3c));
        }
        if (*(int *)((int)local_8 + 0x40) != 0) {
          if (((DAT_10070a0c == 1) && (param_1 == 0x11)) &&
             (cVar1 = thunk_FUN_100155b0(*(int *)(*(int *)((int)local_8 + 0x38) + 0x40)),
             cVar1 != '\0')) {
            local_30 = 1;
          }
          local_50 = thunk_FUN_10015650(local_8,*(int *)(*(int *)((int)local_8 + 0x38) + 0x40));
        }
      }
      if ((((*(int *)((int)local_8 + 0x3c) != 0) && (DAT_10070a0c == 1)) && (param_1 == 0x11)) &&
         (cVar1 = thunk_FUN_100155b0(*(int *)((int)local_8 + 0x3c)), cVar1 != '\0')) {
        local_1c = CONCAT31(local_1c._1_3_,1);
      }
      if (((*(int *)((int)local_8 + 0x40) != 0) && (DAT_10070a0c == 1)) &&
         ((param_1 == 0x11 &&
          (cVar1 = thunk_FUN_100155b0(*(int *)((int)local_8 + 0x40)), cVar1 != '\0')))) {
        local_20 = CONCAT31(local_20._1_3_,1);
      }
      local_c = thunk_FUN_10013f00(local_34,local_38,local_44);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_14 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,7,local_10);
      if ((local_14 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_34,local_3c,local_48);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_14 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,0,local_10);
      if ((local_14 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_3c,local_34,local_48);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_20 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,1,local_10);
      if ((local_20 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_3c,local_40,local_50);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_20 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,2,local_10);
      if ((local_20 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_40,local_3c,local_50);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_18 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,3,local_10);
      if ((local_18 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_40,local_38,local_4c);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_18 & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,4,local_10);
      if ((local_18 & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_38,local_34,local_44);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_1c & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,6,local_10);
      if ((local_1c & 0xff) != 0) {
        param_1 = 0x11;
      }
      local_c = thunk_FUN_10013f00(local_38,local_40,local_4c);
      local_10 = thunk_FUN_10013dd0(local_c);
      if ((local_1c & 0xff) != 0) {
        param_1 = 0x19;
      }
      thunk_FUN_10012ec0(local_8,param_1,5,local_10);
    }
  }
  local_8 = (void *)0x10013c4d;
  __chkesp();
  return;
}


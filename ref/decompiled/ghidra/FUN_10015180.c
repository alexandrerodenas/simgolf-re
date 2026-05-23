/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10015180 @ 0x10015180 */
/* Body size: 608 addresses */


void __thiscall FUN_10015180(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_5c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar4 = local_5c;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_1 != (int *)0x0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0x20))();
    iVar5 = __chkesp();
    if (iVar5 != 0) {
      local_c = local_8[4];
      if (param_4 != 0) {
        local_8[4] = param_4;
      }
      local_14 = local_8[8];
      if (local_14 == 8) {
        (**(code **)(*param_1 + 0xe4))();
        piVar2 = (int *)__chkesp();
        local_18 = *piVar2;
        if (local_18 == 8) {
          uVar3 = thunk_FUN_100180e0((int)local_8);
          if (uVar3 == 0) {
            local_10 = thunk_FUN_1005dde0(local_8,param_1,param_2,param_3);
          }
          else {
            iVar5 = FUN_10081f90(0,0x1011d508,DAT_10122dd4 + 0x10,0,&DAT_1011d528);
            if (iVar5 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        else if (local_18 == 0x10) {
          uVar3 = thunk_FUN_100180e0((int)local_8);
          if (uVar3 == 0) {
            local_10 = thunk_FUN_1001cde0(local_8,param_1,param_2,param_3);
          }
          else {
            iVar5 = FUN_10081f90(0,0x1011d508,DAT_10122dd4 + 0x17,0,&DAT_1011d528);
            if (iVar5 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        else {
          iVar5 = FUN_10081f90(0,0x1011d508,DAT_10122dd4 + 0x20,0,&DAT_1011d528);
          if (iVar5 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else if (local_14 == 0x10) {
        (**(code **)(*param_1 + 0xe4))();
        puVar4 = (undefined4 *)__chkesp();
        local_1c = *puVar4;
        iVar5 = FUN_10081f90(0,0x1011d508,DAT_10122dd4 + 0x2d,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_10 = 0x17;
      }
      else {
        iVar5 = FUN_10081f90(0,0x1011d508,DAT_10122dd4 + 0x35,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_10 = 0x17;
      }
      local_8[4] = local_c;
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x100153da;
  __chkesp();
  return;
}


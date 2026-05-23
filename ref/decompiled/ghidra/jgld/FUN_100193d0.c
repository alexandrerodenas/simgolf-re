/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100193d0 @ 0x100193D0 */
/* Body size: 890 addresses */


void __thiscall
FUN_100193d0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_64 [16];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar5 = local_64;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_10 = 0;
  local_c = *(int *)((int)this + 0x10);
  if (param_5 != 0) {
    *(int *)((int)this + 0x10) = param_5;
  }
  if (param_1 != (int *)0x0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0x20))();
    iVar4 = __chkesp();
    if (iVar4 != 0) {
      local_14 = local_8[8];
      if (local_14 == 8) {
        (**(code **)(*param_1 + 0xe4))();
        piVar2 = (int *)__chkesp();
        local_18 = *piVar2;
        if (local_18 == 8) {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x1b,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else if (local_18 == 0x10) {
          uVar3 = thunk_FUN_100180e0((int)local_8);
          if (uVar3 == 0) {
            local_1c = param_4;
            if (param_4 == 0x19) {
              local_10 = thunk_FUN_100576a0(local_8,param_1,param_2,param_3);
            }
            else if (param_4 == 0x32) {
              local_10 = thunk_FUN_10056450(local_8,param_1,param_2,param_3);
            }
            else if (param_4 == 100) {
              (**(code **)(*local_8 + 0x44))(param_1,param_2,param_3,param_5);
              local_10 = __chkesp();
            }
            else {
              local_10 = 3;
            }
          }
          else {
            iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x20,0,&DAT_1011d528);
            if (iVar4 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        else {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x38,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else if (local_14 == 0x10) {
        (**(code **)(*param_1 + 0xe4))();
        piVar2 = (int *)__chkesp();
        local_20 = *piVar2;
        if (local_20 == 0x10) {
          uVar3 = thunk_FUN_100180e0((int)local_8);
          if (uVar3 == 0) {
            local_24 = param_4;
            if (param_4 == 0x19) {
              local_10 = thunk_FUN_1001b650();
            }
            else if (param_4 == 0x32) {
              local_10 = thunk_FUN_1001b610();
            }
            else if (param_4 == 100) {
              (**(code **)(*local_8 + 0x44))(param_1,param_2,param_3,param_5);
              local_10 = __chkesp();
            }
            else {
              local_10 = 3;
            }
          }
          else {
            iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x44,0,&DAT_1011d528);
            if (iVar4 == 1) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        else {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x5d,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else {
        iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122e18 + 0x65,0,&DAT_1011d528);
        if (iVar4 == 1) {
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
  local_8 = (int *)0x10019744;
  __chkesp();
  return;
}


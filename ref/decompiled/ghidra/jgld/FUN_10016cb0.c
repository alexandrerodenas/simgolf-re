/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10016cb0 @ 0x10016CB0 */


void __thiscall
FUN_10016cb0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar5 = local_5c;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
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
        piVar3 = (int *)__chkesp();
        local_18 = *piVar3;
        if (local_18 == 8) {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122df4 + 0x11,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else if (local_18 == 0x10) {
          uVar2 = thunk_FUN_100180e0((int)local_8);
          if (uVar2 == 0) {
            local_10 = thunk_FUN_10027430(local_8,param_1,param_2,param_3,param_4);
          }
          else {
            local_10 = thunk_FUN_10058970(local_8,param_1,param_2,param_3,param_4);
          }
        }
        else {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122df4 + 0x1d,0,&DAT_1011d528);
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
        piVar3 = (int *)__chkesp();
        local_1c = *piVar3;
        if (local_1c == 8) {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122df4 + 0x26,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122df4 + 0x2c,0,&DAT_1011d528);
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else {
        iVar4 = FUN_10081f90(0,0x1011d508,DAT_10122df4 + 0x34,0,&DAT_1011d528);
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
  local_8 = (int *)0x10016f19;
  __chkesp();
  return;
}


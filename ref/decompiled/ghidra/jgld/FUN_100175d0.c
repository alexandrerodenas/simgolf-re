/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100175d0 @ 0x100175D0 */


void __thiscall FUN_100175d0(void *this,int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_stack_00000018;
  undefined4 local_5c [16];
  int local_1c;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puVar4 = local_5c;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_10 = 0;
  local_c = *(int *)((int)this + 0x10);
  if (in_stack_00000018 != 0) {
    *(int *)((int)this + 0x10) = in_stack_00000018;
  }
  if (param_1 != (int *)0x0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0x20))();
    iVar3 = __chkesp();
    if (iVar3 != 0) {
      local_14 = local_8[8];
      if (local_14 == 8) {
        iVar3 = FUN_10081f90(0,0x1011d508,DAT_10122e00 + 0xf,0,&DAT_1011d528);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if (local_14 == 0x10) {
        (**(code **)(*param_1 + 0xe4))();
        piVar2 = (int *)__chkesp();
        local_1c = *piVar2;
        if (local_1c == 8) {
          iVar3 = FUN_10081f90(0,0x1011d508,DAT_10122e00 + 0x29,0,&DAT_1011d528);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar3 = FUN_10081f90(0,0x1011d508,DAT_10122e00 + 0x2f,0,&DAT_1011d528);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_10 = 0x17;
        }
      }
      else {
        iVar3 = FUN_10081f90(0,0x1011d508,DAT_10122e00 + 0x37,0,&DAT_1011d528);
        if (iVar3 == 1) {
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
  local_8 = (int *)0x10017800;
  __chkesp();
  return;
}


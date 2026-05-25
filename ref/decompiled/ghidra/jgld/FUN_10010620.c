/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10010620 @ 0x10010620 */


void __thiscall FUN_10010620(void *this,int param_1,int param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 local_50 [16];
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xcc))();
  piVar1 = (int *)__chkesp();
  if (*piVar1 <= param_1) {
    (**(code **)(*local_8 + 0xcc))();
    iVar2 = __chkesp();
    if ((param_1 < *(int *)(iVar2 + 8)) && (param_2 != param_3)) {
      if (param_3 < param_2) {
        iVar2 = param_2;
        param_2 = param_3;
        param_3 = iVar2;
      }
      (**(code **)(*local_8 + 0xcc))();
      iVar2 = __chkesp();
      if (param_2 < *(int *)(iVar2 + 0xc)) {
        (**(code **)(*local_8 + 0xcc))();
        iVar2 = __chkesp();
        if (*(int *)(iVar2 + 4) <= param_3) {
          (**(code **)(*local_8 + 0xcc))();
          iVar2 = __chkesp();
          if (param_2 < *(int *)(iVar2 + 4)) {
            (**(code **)(*local_8 + 0xcc))();
            iVar2 = __chkesp();
            param_2 = *(int *)(iVar2 + 4);
          }
          (**(code **)(*local_8 + 0xcc))();
          iVar2 = __chkesp();
          if (*(int *)(iVar2 + 0xc) <= param_3) {
            (**(code **)(*local_8 + 0xcc))();
            iVar2 = __chkesp();
            param_3 = *(int *)(iVar2 + 0xc) + -1;
          }
          (**(code **)(*local_8 + 0x14))(param_1,param_2);
          local_c = (undefined1 *)__chkesp();
          if (local_c != (undefined1 *)0x0) {
            (**(code **)(*local_8 + 0xe0))();
            local_10 = __chkesp();
            iVar2 = (param_3 - param_2) + 1;
            puVar4 = local_c;
            do {
              *puVar4 = param_4;
              puVar4 = puVar4 + local_10;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            (**(code **)(*local_8 + 0x24))(1);
            __chkesp();
          }
        }
      }
    }
  }
  local_8 = (int *)0x100107e9;
  __chkesp();
  return;
}


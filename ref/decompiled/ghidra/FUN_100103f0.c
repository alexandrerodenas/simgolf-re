/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100103f0 @ 0x100103F0 */
/* Body size: 437 addresses */


void __thiscall FUN_100103f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  void *local_c;
  int *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xcc))();
  iVar2 = __chkesp();
  if (*(int *)(iVar2 + 4) <= param_3) {
    (**(code **)(*local_8 + 0xcc))();
    iVar2 = __chkesp();
    if ((param_3 < *(int *)(iVar2 + 0xc)) && (param_1 != param_2)) {
      if (param_2 < param_1) {
        iVar2 = param_1;
        param_1 = param_2;
        param_2 = iVar2;
      }
      (**(code **)(*local_8 + 0xcc))();
      iVar2 = __chkesp();
      if (param_1 < *(int *)(iVar2 + 8)) {
        (**(code **)(*local_8 + 0xcc))();
        piVar1 = (int *)__chkesp();
        if (*piVar1 <= param_2) {
          (**(code **)(*local_8 + 0xcc))();
          piVar1 = (int *)__chkesp();
          if (param_1 < *piVar1) {
            (**(code **)(*local_8 + 0xcc))();
            piVar1 = (int *)__chkesp();
            param_1 = *piVar1;
          }
          (**(code **)(*local_8 + 0xcc))();
          iVar2 = __chkesp();
          if (*(int *)(iVar2 + 8) <= param_2) {
            (**(code **)(*local_8 + 0xcc))();
            iVar2 = __chkesp();
            param_2 = *(int *)(iVar2 + 8) + -1;
          }
          (**(code **)(*local_8 + 0x14))(param_1,param_3);
          local_c = (void *)__chkesp();
          if (local_c != (void *)0x0) {
            _memset(local_c,param_4,(param_2 - param_1) + 1);
            (**(code **)(*local_8 + 0x24))(1);
            __chkesp();
          }
        }
      }
    }
  }
  local_8 = (int *)0x1001059f;
  __chkesp();
  return;
}


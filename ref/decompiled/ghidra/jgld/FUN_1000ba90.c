/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000ba90 @ 0x1000BA90 */


void __thiscall FUN_1000ba90(void *this,int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  int *local_10;
  undefined2 *local_c;
  int *local_8;
  
  puVar3 = local_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
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
      if ((param_4 & 0x80000000) == 0) {
        local_10 = (int *)0x0;
        if (local_8[0x1f] == 0) {
          if (DAT_1012873c != 0) {
            local_10 = *(int **)(DAT_1012873c + 4);
          }
        }
        else {
          local_10 = (int *)local_8[0x1f];
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_8 + 0xe4))();
          iVar2 = __chkesp();
          local_18 = *(int *)(iVar2 + 4);
          if (local_18 == 0) {
            (**(code **)(*local_10 + 0x18))();
            iVar2 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
          }
          else {
            if (local_18 != 1) goto LAB_1000bd1f;
            (**(code **)(*local_10 + 0x1c))();
            iVar2 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
          }
        }
      }
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
          (**(code **)(*local_8 + 0x1c))(param_1,param_3);
          local_c = (undefined2 *)__chkesp();
          if (local_c != (undefined2 *)0x0) {
            for (local_14 = (param_2 - param_1) + 1; 0 < local_14; local_14 = local_14 + -1) {
              *local_c = (undefined2)param_4;
              local_c = local_c + 1;
            }
            (**(code **)(*local_8 + 0x24))(1);
            __chkesp();
          }
        }
      }
    }
  }
LAB_1000bd1f:
  local_8 = (int *)0x1000bd2c;
  __chkesp();
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000bde0 @ 0x1000BDE0 */


void __thiscall FUN_1000bde0(void *this,int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 local_58 [16];
  int local_18;
  int *local_14;
  int local_10;
  undefined2 *local_c;
  int *local_8;
  
  puVar3 = local_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
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
      if ((param_4 & 0x80000000) == 0) {
        local_14 = (int *)0x0;
        if (local_8[0x1f] == 0) {
          if (DAT_1012873c != 0) {
            local_14 = *(int **)(DAT_1012873c + 4);
          }
        }
        else {
          local_14 = (int *)local_8[0x1f];
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_8 + 0xe4))();
          iVar2 = __chkesp();
          local_18 = *(int *)(iVar2 + 4);
          if (local_18 == 0) {
            (**(code **)(*local_14 + 0x18))();
            iVar2 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
          }
          else {
            if (local_18 != 1) goto LAB_1000c075;
            (**(code **)(*local_14 + 0x1c))();
            iVar2 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar2 + (param_4 & 0xff) * 2);
          }
        }
      }
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
          (**(code **)(*local_8 + 0x1c))(param_1,param_2);
          local_c = (undefined2 *)__chkesp();
          if (local_c != (undefined2 *)0x0) {
            (**(code **)(*local_8 + 0xe0))();
            local_10 = __chkesp();
            iVar2 = (param_3 - param_2) + 1;
            puVar4 = local_c;
            do {
              *puVar4 = (undefined2)param_4;
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
LAB_1000c075:
  local_8 = (int *)0x1000c082;
  __chkesp();
  return;
}


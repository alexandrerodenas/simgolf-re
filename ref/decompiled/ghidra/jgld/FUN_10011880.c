/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10011880 @ 0x10011880 */


void __thiscall
FUN_10011880(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 local_50 [16];
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puVar5 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xcc))();
  piVar1 = (int *)__chkesp();
  if (*piVar1 <= param_1) {
    (**(code **)(*local_8 + 0xcc))();
    iVar2 = __chkesp();
    if (((param_1 < *(int *)(iVar2 + 8)) && (param_2 != param_3)) &&
       ((param_4 != -1 || (param_5 != -1)))) {
      if (param_3 < param_2) {
        iVar2 = param_2;
        param_2 = param_3;
        iVar3 = param_6;
        iVar4 = param_4;
        param_4 = param_5;
        param_8 = (param_7 + param_6) - param_8;
        param_3 = iVar2;
        param_5 = iVar4;
        param_6 = param_7;
        param_7 = iVar3;
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
            iVar2 = param_8 % (param_6 + param_7);
            if (iVar2 < param_6) {
              param_8 = -(param_6 - iVar2);
            }
            else {
              param_8 = param_7 - (iVar2 - param_6);
            }
            iVar2 = -param_6;
            if (param_4 == -1) {
              iVar3 = (param_3 - param_2) + 1;
              puVar6 = local_c;
              do {
                if (param_8 < 0) {
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  *puVar6 = (undefined1)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar2;
                  }
                }
                puVar6 = puVar6 + local_10;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            else if (param_5 == -1) {
              iVar3 = (param_3 - param_2) + 1;
              puVar6 = local_c;
              do {
                if (param_8 < 0) {
                  *puVar6 = (undefined1)param_4;
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar2;
                  }
                }
                puVar6 = puVar6 + local_10;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            else {
              iVar3 = (param_3 - param_2) + 1;
              puVar6 = local_c;
              do {
                if (param_8 < 0) {
                  *puVar6 = (undefined1)param_4;
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  *puVar6 = (undefined1)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar2;
                  }
                }
                puVar6 = puVar6 + local_10;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            (**(code **)(*local_8 + 0x24))(1);
            __chkesp();
          }
        }
      }
    }
  }
  local_8 = (int *)0x10011b76;
  __chkesp();
  return;
}


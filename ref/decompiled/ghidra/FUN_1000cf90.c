/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000cf90 @ 0x1000CF90 */
/* Body size: 1097 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_1000cf90(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 local_54 [16];
  int local_14;
  int *local_10;
  undefined2 *local_c;
  int *local_8;
  
  puVar5 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xcc))();
  iVar3 = __chkesp();
  if (*(int *)(iVar3 + 4) <= param_3) {
    (**(code **)(*local_8 + 0xcc))();
    iVar3 = __chkesp();
    if (((param_3 < *(int *)(iVar3 + 0xc)) && (param_1 != param_2)) &&
       ((param_4 != 0xffffffff || (param_5 != 0xffffffff)))) {
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
        iVar3 = __chkesp();
        local_14 = *(int *)(iVar3 + 4);
        if (local_14 == 0) {
          if ((param_4 & 0x80000000) == 0) {
            (**(code **)(*local_10 + 0x18))();
            iVar3 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar3 + (param_4 & 0xff) * 2);
          }
          if ((param_5 & 0x80000000) == 0) {
            (**(code **)(*local_10 + 0x1c))();
            iVar3 = __chkesp();
            param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
          }
        }
        else {
          if (local_14 != 1) goto LAB_1000d3c6;
          if ((param_4 & 0x80000000) == 0) {
            (**(code **)(*local_10 + 0x18))();
            iVar3 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar3 + (param_4 & 0xff) * 2);
          }
          if ((param_5 & 0x80000000) == 0) {
            (**(code **)(*local_10 + 0x1c))();
            iVar3 = __chkesp();
            param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
          }
        }
      }
      uVar1 = param_4 & 0xffff;
      param_5 = param_5 & 0xffff;
      param_4 = uVar1;
      if (param_2 < param_1) {
        iVar3 = param_1;
        param_1 = param_2;
        iVar4 = param_6;
        param_8 = (param_7 + param_6) - param_8;
        param_2 = iVar3;
        param_4 = param_5;
        param_5 = uVar1;
        param_6 = param_7;
        param_7 = iVar4;
      }
      (**(code **)(*local_8 + 0xcc))();
      iVar3 = __chkesp();
      if (param_1 < *(int *)(iVar3 + 8)) {
        (**(code **)(*local_8 + 0xcc))();
        piVar2 = (int *)__chkesp();
        if (*piVar2 <= param_2) {
          (**(code **)(*local_8 + 0xcc))();
          piVar2 = (int *)__chkesp();
          if (param_1 < *piVar2) {
            (**(code **)(*local_8 + 0xcc))();
            piVar2 = (int *)__chkesp();
            param_1 = *piVar2;
          }
          (**(code **)(*local_8 + 0xcc))();
          iVar3 = __chkesp();
          if (*(int *)(iVar3 + 8) <= param_2) {
            (**(code **)(*local_8 + 0xcc))();
            iVar3 = __chkesp();
            param_2 = *(int *)(iVar3 + 8) + -1;
          }
          (**(code **)(*local_8 + 0x1c))(param_1,param_3);
          local_c = (undefined2 *)__chkesp();
          if (local_c != (undefined2 *)0x0) {
            iVar3 = param_8 % (param_6 + param_7);
            if (iVar3 < param_6) {
              param_8 = -(param_6 - iVar3);
            }
            else {
              param_8 = param_7 - (iVar3 - param_6);
            }
            iVar3 = -param_6;
            if (param_4 == 0xffffffff) {
              iVar4 = (param_2 - param_1) + 1;
              puVar6 = local_c;
              do {
                if (param_8 < 0) {
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  *puVar6 = (undefined2)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar3;
                  }
                }
                puVar6 = puVar6 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            else if (param_5 == 0xffffffff) {
              iVar4 = (param_2 - param_1) + 1;
              puVar6 = local_c;
              do {
                if (param_8 < 0) {
                  *puVar6 = (undefined2)param_4;
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar3;
                  }
                }
                puVar6 = puVar6 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            else {
              iVar4 = (param_2 - param_1) + 1;
              puVar6 = local_c;
              DAT_10128450 = iVar4;
              do {
                if (param_8 < 0) {
                  *puVar6 = (undefined2)param_4;
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = param_7;
                  }
                }
                else {
                  *puVar6 = (undefined2)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = iVar3;
                  }
                }
                puVar6 = puVar6 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            (**(code **)(*local_8 + 0x24))(1);
            __chkesp();
          }
        }
      }
    }
  }
LAB_1000d3c6:
  local_8 = (int *)0x1000d3d3;
  __chkesp();
  return;
}


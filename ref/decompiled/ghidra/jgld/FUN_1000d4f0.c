/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000d4f0 @ 0x1000D4F0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_1000d4f0(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 local_58 [16];
  int local_18;
  int *local_14;
  int local_10;
  undefined2 *local_c;
  int *local_8;
  
  puVar5 = local_58;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xcc))();
  piVar1 = (int *)__chkesp();
  if (*piVar1 <= param_1) {
    (**(code **)(*local_8 + 0xcc))();
    iVar3 = __chkesp();
    if (((param_1 < *(int *)(iVar3 + 8)) && (param_2 != param_3)) &&
       ((param_4 != 0xffffffff || (param_5 != 0xffffffff)))) {
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
        iVar3 = __chkesp();
        local_18 = *(int *)(iVar3 + 4);
        if (local_18 == 0) {
          if ((param_4 & 0x80000000) == 0) {
            (**(code **)(*local_14 + 0x18))();
            iVar3 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar3 + (param_4 & 0xff) * 2);
          }
          if ((param_5 & 0x80000000) == 0) {
            (**(code **)(*local_14 + 0x1c))();
            iVar3 = __chkesp();
            param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
          }
        }
        else {
          if (local_18 != 1) goto LAB_1000d93e;
          if ((param_4 & 0x80000000) == 0) {
            (**(code **)(*local_14 + 0x18))();
            iVar3 = __chkesp();
            param_4 = (uint)*(ushort *)(iVar3 + (param_4 & 0xff) * 2);
          }
          if ((param_5 & 0x80000000) == 0) {
            (**(code **)(*local_14 + 0x1c))();
            iVar3 = __chkesp();
            param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
          }
        }
      }
      uVar2 = param_4 & 0xffff;
      param_5 = param_5 & 0xffff;
      param_4 = uVar2;
      if (param_3 < param_2) {
        iVar3 = param_2;
        param_2 = param_3;
        iVar4 = param_6;
        param_8 = (param_7 + param_6) - param_8;
        param_3 = iVar3;
        param_4 = param_5;
        param_5 = uVar2;
        param_6 = param_7;
        param_7 = iVar4;
      }
      (**(code **)(*local_8 + 0xcc))();
      iVar3 = __chkesp();
      if (param_2 < *(int *)(iVar3 + 0xc)) {
        (**(code **)(*local_8 + 0xcc))();
        iVar3 = __chkesp();
        if (*(int *)(iVar3 + 4) <= param_3) {
          (**(code **)(*local_8 + 0xcc))();
          iVar3 = __chkesp();
          if (param_2 < *(int *)(iVar3 + 4)) {
            (**(code **)(*local_8 + 0xcc))();
            iVar3 = __chkesp();
            param_2 = *(int *)(iVar3 + 4);
          }
          (**(code **)(*local_8 + 0xcc))();
          iVar3 = __chkesp();
          if (*(int *)(iVar3 + 0xc) <= param_3) {
            (**(code **)(*local_8 + 0xcc))();
            iVar3 = __chkesp();
            param_3 = *(int *)(iVar3 + 0xc) + -1;
          }
          (**(code **)(*local_8 + 0x14))(param_1,param_2);
          local_c = (undefined2 *)__chkesp();
          if (local_c != (undefined2 *)0x0) {
            (**(code **)(*local_8 + 0xe0))();
            local_10 = __chkesp();
            iVar3 = param_8 % (param_6 + param_7);
            if (iVar3 < param_6) {
              param_8 = -(param_6 - iVar3);
            }
            else {
              param_8 = param_7 - (iVar3 - param_6);
            }
            if (param_4 == 0xffffffff) {
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
                  *puVar6 = (undefined2)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = -param_6;
                  }
                }
                puVar6 = puVar6 + local_10;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            else if (param_5 == 0xffffffff) {
              iVar3 = (param_3 - param_2) + 1;
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
                    param_8 = -param_6;
                  }
                }
                puVar6 = (undefined2 *)((int)puVar6 + local_10);
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            else {
              iVar3 = (param_3 - param_2) + 1;
              puVar6 = local_c;
              DAT_10128450 = iVar3;
              do {
                if (param_8 < 0) {
                  *puVar6 = (undefined2)param_4;
                  param_8 = param_8 + 1;
                  if (param_8 == 0) {
                    param_8 = *(int *)(iVar3 + 0x20);
                  }
                }
                else {
                  *puVar6 = (undefined2)param_5;
                  param_8 = param_8 + -1;
                  if (param_8 == 0) {
                    param_8 = *(int *)(iVar3 + 0x1c);
                  }
                }
                puVar6 = (undefined2 *)((int)puVar6 + local_10);
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
LAB_1000d93e:
  local_8 = (int *)0x1000d94b;
  __chkesp();
  return;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000c140 @ 0x1000C140 */
/* Body size: 2924 addresses */


void __thiscall
FUN_1000c140(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            int param_7,int param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_7c [16];
  int local_3c;
  int *local_38;
  undefined2 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar2 = param_4;
  iVar4 = param_3;
  puVar5 = local_7c;
  for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = this;
  if (param_1 == param_3) {
    thunk_FUN_1000d4f0(this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else if (param_2 == param_4) {
    thunk_FUN_1000cf90(this,param_1,param_3,param_2,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    local_38 = (int *)0x0;
    if (*(int *)((int)this + 0x7c) == 0) {
      if (DAT_1012873c != 0) {
        local_38 = *(int **)(DAT_1012873c + 4);
      }
    }
    else {
      local_38 = *(int **)((int)this + 0x7c);
    }
    if (local_38 != (int *)0x0) {
      (**(code **)(*(int *)this + 0xe4))();
      iVar3 = __chkesp();
      local_3c = *(int *)(iVar3 + 4);
      if (local_3c == 0) {
        if ((param_5 & 0x80000000) == 0) {
          (**(code **)(*local_38 + 0x18))();
          iVar3 = __chkesp();
          param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
        }
        if ((param_6 & 0x80000000) == 0) {
          (**(code **)(*local_38 + 0x1c))();
          iVar3 = __chkesp();
          param_6 = (uint)*(ushort *)(iVar3 + (param_6 & 0xff) * 2);
        }
      }
      else {
        if (local_3c != 1) goto LAB_1000cc99;
        if ((param_5 & 0x80000000) == 0) {
          (**(code **)(*local_38 + 0x18))();
          iVar3 = __chkesp();
          param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
        }
        if ((param_6 & 0x80000000) == 0) {
          (**(code **)(*local_38 + 0x1c))();
          iVar3 = __chkesp();
          param_6 = (uint)*(ushort *)(iVar3 + (param_6 & 0xff) * 2);
        }
      }
    }
    uVar1 = param_5 & 0xffff;
    param_6 = param_6 & 0xffff;
    param_5 = uVar1;
    if (param_3 < param_1) {
      LOCK();
      param_3 = param_1;
      UNLOCK();
      param_1 = iVar4;
      LOCK();
      param_4 = param_2;
      UNLOCK();
      param_2 = iVar2;
      iVar4 = param_7;
      param_9 = (param_8 + param_7) - param_9;
      param_5 = param_6;
      param_6 = uVar1;
      param_7 = param_8;
      param_8 = iVar4;
    }
    (**(code **)(*local_8 + 0x10))();
    iVar4 = __chkesp();
    if (iVar4 != 0) {
      (**(code **)(*local_8 + 200))(&local_18);
      __chkesp();
      iVar4 = param_9 % (param_7 + param_8);
      if (iVar4 < param_7) {
        param_9 = -(param_7 - iVar4);
      }
      else {
        param_9 = param_8 - (iVar4 - param_7);
      }
      iVar4 = -param_7;
      local_20 = param_3 - param_1;
      local_24 = param_4 - param_2;
      if (param_2 < param_4) {
        if ((((param_1 <= local_10) && (param_2 <= local_c)) && (local_18 <= param_3)) &&
           (local_14 <= param_4)) {
          if (local_20 < local_24) {
            local_1c = local_20 * 2 - local_24;
            local_28 = local_20 * 2;
            local_2c = (local_20 - local_24) * 2;
            for (; (param_1 < local_18 || (param_2 < local_14)); param_2 = param_2 + 1) {
              iVar2 = local_28;
              if (0 < local_1c) {
                param_1 = param_1 + 1;
                iVar2 = local_2c;
              }
              local_1c = local_1c + iVar2;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x20))();
              iVar2 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar3 = __chkesp();
              local_34 = (undefined2 *)(iVar2 + param_1 * 2 + param_2 * iVar3 * 2);
              if (param_9 < 0) {
                if (param_5 != 0xffffffff) {
                  *local_34 = (undefined2)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != 0xffffffff) {
                  *local_34 = (undefined2)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar4;
                }
              }
              if (local_c <= param_4) {
                param_4 = local_c + -1;
              }
              while (param_2 < param_4) {
                if (local_1c < 1) {
                  local_1c = local_1c + local_28;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar2 = __chkesp();
                  local_34 = local_34 + iVar2;
                }
                else {
                  param_1 = param_1 + 1;
                  if (local_10 <= param_1) break;
                  local_1c = local_1c + local_2c;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar2 = __chkesp();
                  local_34 = local_34 + iVar2 + 1;
                }
                param_2 = param_2 + 1;
                if (param_9 < 0) {
                  if (param_5 != 0xffffffff) {
                    *local_34 = (undefined2)param_5;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != 0xffffffff) {
                    *local_34 = (undefined2)param_6;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar4;
                  }
                }
              }
            }
          }
          else {
            local_1c = local_24 * 2 - local_20;
            local_28 = local_24 * 2;
            local_2c = (local_24 - local_20) * 2;
            while ((param_1 < local_18 || (param_2 < local_14))) {
              iVar2 = local_28;
              if (0 < local_1c) {
                param_2 = param_2 + 1;
                iVar2 = local_2c;
              }
              local_1c = local_1c + iVar2;
              param_1 = param_1 + 1;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x20))();
              iVar2 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar3 = __chkesp();
              local_34 = (undefined2 *)(iVar2 + param_1 * 2 + param_2 * iVar3 * 2);
              if (param_9 < 0) {
                if (param_5 != 0xffffffff) {
                  *local_34 = (undefined2)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != 0xffffffff) {
                  *local_34 = (undefined2)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar4;
                }
              }
              if (local_10 <= param_3) {
                param_3 = local_10 + -1;
              }
              while (param_1 < param_3) {
                if (local_1c < 1) {
                  local_1c = local_1c + local_28;
                  local_34 = local_34 + 1;
                }
                else {
                  param_2 = param_2 + 1;
                  if (local_c <= param_2) break;
                  local_1c = local_1c + local_2c;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar2 = __chkesp();
                  local_34 = local_34 + iVar2 + 1;
                }
                param_1 = param_1 + 1;
                if (param_9 < 0) {
                  if (param_5 != 0xffffffff) {
                    *local_34 = (undefined2)param_5;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != 0xffffffff) {
                    *local_34 = (undefined2)param_6;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar4;
                  }
                }
              }
            }
          }
        }
      }
      else if ((((param_1 <= local_10) && (local_14 <= param_2)) && (local_18 <= param_3)) &&
              (param_4 <= local_c)) {
        local_24 = FUN_1007f370(local_24);
        if (local_20 < local_24) {
          local_1c = local_20 * 2 - local_24;
          local_28 = local_20 * 2;
          local_30 = (local_20 - local_24) * 2;
          for (; (param_1 < local_18 || (local_c <= param_2)); param_2 = param_2 + -1) {
            iVar2 = local_28;
            if (0 < local_1c) {
              param_1 = param_1 + 1;
              iVar2 = local_30;
            }
            local_1c = local_1c + iVar2;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x20))();
            iVar2 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar3 = __chkesp();
            local_34 = (undefined2 *)(iVar2 + param_1 * 2 + param_2 * iVar3 * 2);
            if (param_9 < 0) {
              if (param_5 != 0xffffffff) {
                *local_34 = (undefined2)param_5;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != 0xffffffff) {
                *local_34 = (undefined2)param_6;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar4;
              }
            }
            if (param_4 < local_14) {
              param_4 = local_14;
            }
            while (param_4 < param_2) {
              if (local_1c < 1) {
                local_1c = local_1c + local_28;
                (**(code **)(*local_8 + 0xe0))();
                iVar2 = __chkesp();
                local_34 = local_34 + -iVar2;
              }
              else {
                param_1 = param_1 + 1;
                if (local_10 <= param_1) break;
                local_1c = local_1c + local_30;
                (**(code **)(*local_8 + 0xe0))();
                iVar2 = __chkesp();
                local_34 = local_34 + (1 - iVar2);
              }
              param_2 = param_2 + -1;
              if (param_9 < 0) {
                if (param_5 != 0xffffffff) {
                  *local_34 = (undefined2)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != 0xffffffff) {
                  *local_34 = (undefined2)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar4;
                }
              }
            }
          }
        }
        else {
          local_1c = local_24 * 2 - local_20;
          local_28 = local_24 * 2;
          local_30 = (local_24 - local_20) * 2;
          while ((param_1 < local_18 || (local_c <= param_2))) {
            iVar2 = local_28;
            if (0 < local_1c) {
              param_2 = param_2 + -1;
              iVar2 = local_30;
            }
            local_1c = local_1c + iVar2;
            param_1 = param_1 + 1;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x20))();
            iVar2 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar3 = __chkesp();
            local_34 = (undefined2 *)(iVar2 + param_1 * 2 + param_2 * iVar3 * 2);
            if (param_9 < 0) {
              if (param_5 != 0xffffffff) {
                *local_34 = (undefined2)param_5;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != 0xffffffff) {
                *local_34 = (undefined2)param_6;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar4;
              }
            }
            if (local_10 <= param_3) {
              param_3 = local_10 + -1;
            }
            while (param_1 < param_3) {
              if (local_1c < 1) {
                local_1c = local_1c + local_28;
              }
              else {
                param_2 = param_2 + -1;
                if (param_2 < local_14) break;
                local_1c = local_1c + local_30;
                (**(code **)(*local_8 + 0xe0))();
                iVar2 = __chkesp();
                local_34 = local_34 + -iVar2;
              }
              local_34 = local_34 + 1;
              param_1 = param_1 + 1;
              if (param_9 < 0) {
                if (param_5 != 0xffffffff) {
                  *local_34 = (undefined2)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != 0xffffffff) {
                  *local_34 = (undefined2)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar4;
                }
              }
            }
          }
        }
      }
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
LAB_1000cc99:
  local_8 = (int *)0x1000cca6;
  __chkesp();
  return;
}


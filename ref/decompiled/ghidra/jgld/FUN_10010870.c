/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10010870 @ 0x10010870 */


void __thiscall
FUN_10010870(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_74 [16];
  undefined1 *local_34;
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
  
  iVar3 = param_4;
  iVar2 = param_3;
  puVar4 = local_74;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = this;
  if (param_1 == param_3) {
    thunk_FUN_10011880(this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else if (param_2 == param_4) {
    thunk_FUN_100114e0(this,param_1,param_3,param_2,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    if (param_3 < param_1) {
      LOCK();
      param_3 = param_1;
      UNLOCK();
      param_1 = iVar2;
      LOCK();
      param_4 = param_2;
      UNLOCK();
      param_2 = iVar3;
      iVar2 = param_7;
      iVar3 = param_5;
      param_5 = param_6;
      param_9 = (param_8 + param_7) - param_9;
      param_6 = iVar3;
      param_7 = param_8;
      param_8 = iVar2;
    }
    (**(code **)(*(int *)this + 0x10))();
    iVar2 = __chkesp();
    if (iVar2 != 0) {
      (**(code **)(*local_8 + 200))(&local_18);
      __chkesp();
      iVar2 = param_9 % (param_7 + param_8);
      if (iVar2 < param_7) {
        param_9 = -(param_7 - iVar2);
      }
      else {
        param_9 = param_8 - (iVar2 - param_7);
      }
      iVar2 = -param_7;
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
              iVar3 = local_28;
              if (0 < local_1c) {
                param_1 = param_1 + 1;
                iVar3 = local_2c;
              }
              local_1c = local_1c + iVar3;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x18))();
              iVar3 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar1 = __chkesp();
              local_34 = (undefined1 *)(iVar3 + param_1 + param_2 * iVar1);
              if (param_9 < 0) {
                if (param_5 != -1) {
                  *local_34 = (undefined1)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != -1) {
                  *local_34 = (undefined1)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar2;
                }
              }
              if (local_c <= param_4) {
                param_4 = local_c + -1;
              }
              while (param_2 < param_4) {
                if (local_1c < 1) {
                  local_1c = local_1c + local_28;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar3 = __chkesp();
                  local_34 = local_34 + iVar3;
                }
                else {
                  param_1 = param_1 + 1;
                  if (local_10 <= param_1) break;
                  local_1c = local_1c + local_2c;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar3 = __chkesp();
                  local_34 = local_34 + iVar3 + 1;
                }
                param_2 = param_2 + 1;
                if (param_9 < 0) {
                  if (param_5 != -1) {
                    *local_34 = (undefined1)param_5;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != -1) {
                    *local_34 = (undefined1)param_6;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar2;
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
              iVar3 = local_28;
              if (0 < local_1c) {
                param_2 = param_2 + 1;
                iVar3 = local_2c;
              }
              local_1c = local_1c + iVar3;
              param_1 = param_1 + 1;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x18))();
              iVar3 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar1 = __chkesp();
              local_34 = (undefined1 *)(iVar3 + param_1 + param_2 * iVar1);
              if (param_9 < 0) {
                if (param_5 != -1) {
                  *local_34 = (undefined1)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != -1) {
                  *local_34 = (undefined1)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar2;
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
                  iVar3 = __chkesp();
                  local_34 = local_34 + iVar3 + 1;
                }
                param_1 = param_1 + 1;
                if (param_9 < 0) {
                  if (param_5 != -1) {
                    *local_34 = (undefined1)param_5;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != -1) {
                    *local_34 = (undefined1)param_6;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar2;
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
            iVar3 = local_28;
            if (0 < local_1c) {
              param_1 = param_1 + 1;
              iVar3 = local_30;
            }
            local_1c = local_1c + iVar3;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x18))();
            iVar3 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar1 = __chkesp();
            local_34 = (undefined1 *)(iVar3 + param_1 + param_2 * iVar1);
            if (param_9 < 0) {
              if (param_5 != -1) {
                *local_34 = (undefined1)param_5;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != -1) {
                *local_34 = (undefined1)param_6;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar2;
              }
            }
            if (param_4 < local_14) {
              param_4 = local_14;
            }
            while (param_4 < param_2) {
              if (local_1c < 1) {
                local_1c = local_1c + local_28;
                (**(code **)(*local_8 + 0xe0))();
                iVar3 = __chkesp();
                local_34 = local_34 + -iVar3;
              }
              else {
                param_1 = param_1 + 1;
                if (local_10 <= param_1) break;
                local_1c = local_1c + local_30;
                (**(code **)(*local_8 + 0xe0))();
                iVar3 = __chkesp();
                local_34 = local_34 + (1 - iVar3);
              }
              param_2 = param_2 + -1;
              if (param_9 < 0) {
                if (param_5 != -1) {
                  *local_34 = (undefined1)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != -1) {
                  *local_34 = (undefined1)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar2;
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
            iVar3 = local_28;
            if (0 < local_1c) {
              param_2 = param_2 + -1;
              iVar3 = local_30;
            }
            local_1c = local_1c + iVar3;
            param_1 = param_1 + 1;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x18))();
            iVar3 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar1 = __chkesp();
            local_34 = (undefined1 *)(iVar3 + param_1 + param_2 * iVar1);
            if (param_9 < 0) {
              if (param_5 != -1) {
                *local_34 = (undefined1)param_5;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != -1) {
                *local_34 = (undefined1)param_6;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar2;
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
                iVar3 = __chkesp();
                local_34 = local_34 + -iVar3;
              }
              local_34 = local_34 + 1;
              param_1 = param_1 + 1;
              if (param_9 < 0) {
                if (param_5 != -1) {
                  *local_34 = (undefined1)param_5;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != -1) {
                  *local_34 = (undefined1)param_6;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar2;
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
  local_8 = (int *)0x10011257;
  __chkesp();
  return;
}


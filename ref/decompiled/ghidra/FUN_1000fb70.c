/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000fb70 @ 0x1000FB70 */
/* Body size: 1658 addresses */


void __thiscall FUN_1000fb70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
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
  
  iVar2 = param_4;
  iVar1 = param_3;
  puVar4 = local_74;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  uVar5 = (undefined1)param_5;
  local_8 = this;
  if (param_1 == param_3) {
    thunk_FUN_10010620(this,param_1,param_2,param_4,uVar5);
  }
  else if (param_2 == param_4) {
    thunk_FUN_100103f0(this,param_1,param_3,param_2,param_5);
  }
  else {
    if (param_3 < param_1) {
      LOCK();
      param_3 = param_1;
      UNLOCK();
      param_1 = iVar1;
      LOCK();
      param_4 = param_2;
      UNLOCK();
      param_2 = iVar2;
    }
    (**(code **)(*(int *)this + 0x10))();
    iVar1 = __chkesp();
    if (iVar1 != 0) {
      (**(code **)(*local_8 + 200))(&local_18);
      __chkesp();
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
              iVar1 = local_28;
              if (0 < local_1c) {
                param_1 = param_1 + 1;
                iVar1 = local_2c;
              }
              local_1c = local_1c + iVar1;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x18))();
              iVar1 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar2 = __chkesp();
              local_34 = (undefined1 *)(iVar1 + param_1 + param_2 * iVar2);
              *local_34 = uVar5;
              if (local_c <= param_4) {
                param_4 = local_c + -1;
              }
              while (param_2 < param_4) {
                iVar1 = local_28;
                if (0 < local_1c) {
                  param_1 = param_1 + 1;
                  if (local_10 <= param_1) break;
                  local_34 = local_34 + 1;
                  iVar1 = local_2c;
                }
                local_1c = local_1c + iVar1;
                param_2 = param_2 + 1;
                (**(code **)(*local_8 + 0xe0))();
                iVar1 = __chkesp();
                local_34 = local_34 + iVar1;
                *local_34 = uVar5;
              }
            }
          }
          else {
            local_1c = local_24 * 2 - local_20;
            local_28 = local_24 * 2;
            local_2c = (local_24 - local_20) * 2;
            while ((param_1 < local_18 || (param_2 < local_14))) {
              iVar1 = local_28;
              if (0 < local_1c) {
                param_2 = param_2 + 1;
                iVar1 = local_2c;
              }
              local_1c = local_1c + iVar1;
              param_1 = param_1 + 1;
            }
            if ((param_1 < local_10) && (param_2 < local_c)) {
              (**(code **)(*local_8 + 0x18))();
              iVar1 = __chkesp();
              (**(code **)(*local_8 + 0xe0))();
              iVar2 = __chkesp();
              local_34 = (undefined1 *)(iVar1 + param_1 + param_2 * iVar2);
              *local_34 = uVar5;
              if (local_10 <= param_3) {
                param_3 = local_10 + -1;
              }
              while (param_1 < param_3) {
                if (local_1c < 1) {
                  local_1c = local_1c + local_28;
                }
                else {
                  param_2 = param_2 + 1;
                  if (local_c <= param_2) break;
                  local_1c = local_1c + local_2c;
                  (**(code **)(*local_8 + 0xe0))();
                  iVar1 = __chkesp();
                  local_34 = local_34 + iVar1;
                }
                local_34 = local_34 + 1;
                param_1 = param_1 + 1;
                *local_34 = uVar5;
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
            iVar1 = local_28;
            if (0 < local_1c) {
              param_1 = param_1 + 1;
              iVar1 = local_30;
            }
            local_1c = local_1c + iVar1;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x18))();
            iVar1 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar2 = __chkesp();
            local_34 = (undefined1 *)(iVar1 + param_1 + param_2 * iVar2);
            *local_34 = uVar5;
            if (param_4 < local_14) {
              param_4 = local_14;
            }
            while (param_4 < param_2) {
              iVar1 = local_28;
              if (0 < local_1c) {
                param_1 = param_1 + 1;
                if (local_10 <= param_1) break;
                local_34 = local_34 + 1;
                iVar1 = local_30;
              }
              local_1c = local_1c + iVar1;
              param_2 = param_2 + -1;
              (**(code **)(*local_8 + 0xe0))();
              iVar1 = __chkesp();
              local_34 = local_34 + -iVar1;
              *local_34 = uVar5;
            }
          }
        }
        else {
          local_1c = local_24 * 2 - local_20;
          local_28 = local_24 * 2;
          local_30 = (local_24 - local_20) * 2;
          while ((param_1 < local_18 || (local_c <= param_2))) {
            iVar1 = local_28;
            if (0 < local_1c) {
              param_2 = param_2 + -1;
              iVar1 = local_30;
            }
            local_1c = local_1c + iVar1;
            param_1 = param_1 + 1;
          }
          if ((param_1 < local_10) && (local_14 <= param_2)) {
            (**(code **)(*local_8 + 0x18))();
            iVar1 = __chkesp();
            (**(code **)(*local_8 + 0xe0))();
            iVar2 = __chkesp();
            local_34 = (undefined1 *)(iVar1 + param_1 + param_2 * iVar2);
            *local_34 = uVar5;
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
                iVar1 = __chkesp();
                local_34 = local_34 + -iVar1;
              }
              param_1 = param_1 + 1;
              local_34 = local_34 + 1;
              *local_34 = uVar5;
            }
          }
        }
      }
      (**(code **)(*local_8 + 0x24))(1);
      __chkesp();
    }
  }
  local_8 = (int *)0x100101e4;
  __chkesp();
  return;
}


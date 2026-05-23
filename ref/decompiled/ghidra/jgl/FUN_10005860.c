/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10005860 @ 0x10005860 */
/* Body size: 1818 addresses */


void __thiscall
FUN_10005860(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  undefined1 uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 uVar2;
  
  iVar5 = param_8;
  iVar8 = param_5;
  iVar7 = param_4;
  iVar3 = param_3;
  if (param_1 == param_3) {
    FUN_100061b0(this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (param_2 == param_4) {
    FUN_10005f80(this,param_1,param_3,param_2,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (param_3 < param_1) {
    LOCK();
    param_3 = param_1;
    UNLOCK();
    param_1 = iVar3;
    LOCK();
    param_4 = param_2;
    UNLOCK();
    param_2 = iVar7;
    param_5 = param_6;
    param_8 = param_7;
    param_6 = iVar8;
    param_9 = (iVar5 - param_9) + param_7;
    param_7 = iVar5;
  }
  iVar3 = (**(code **)(*(int *)this + 0x10))();
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 200))(&local_1c);
    iVar3 = param_9 % (param_7 + param_8);
    if (iVar3 < param_7) {
      param_9 = iVar3 - param_7;
    }
    else {
      param_9 = (param_7 - iVar3) + param_8;
    }
    iVar7 = -param_7;
    iVar3 = param_3 - param_1;
    uVar4 = param_4 - param_2;
    uVar1 = (undefined1)param_5;
    uVar2 = (undefined1)param_6;
    if (param_2 < param_4) {
      if ((((param_1 <= local_14) && (param_2 <= local_10)) && (local_1c <= param_3)) &&
         (local_18 <= param_4)) {
        if (iVar3 < (int)uVar4) {
          local_8 = iVar3 * 2;
          iVar8 = iVar3 * 2 - uVar4;
          local_c = (iVar3 - uVar4) * 2;
          while ((param_1 < local_1c || (param_2 < local_18))) {
            if (iVar8 < 1) {
              iVar8 = iVar8 + local_8;
              param_2 = param_2 + 1;
            }
            else {
              iVar8 = iVar8 + local_c;
              param_2 = param_2 + 1;
              param_1 = param_1 + 1;
            }
          }
          if ((param_1 < local_14) && (param_2 < local_10)) {
            iVar3 = (**(code **)(*(int *)this + 0xe0))();
            iVar5 = (**(code **)(*(int *)this + 0x18))();
            puVar9 = (undefined1 *)(iVar5 + param_1 + iVar3 * param_2);
            if (param_9 < 0) {
              if (param_5 != -1) {
                *puVar9 = uVar1;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != -1) {
                *puVar9 = uVar2;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar7;
              }
            }
            if (local_10 <= param_4) {
              param_4 = local_10 + -1;
            }
            if (param_2 < param_4) {
              do {
                iVar5 = local_8;
                iVar3 = local_c;
                if (iVar8 < 1) {
                  iVar6 = (**(code **)(*(int *)this + 0xe0))();
                  iVar3 = iVar5;
                }
                else {
                  param_1 = param_1 + 1;
                  if (local_14 <= param_1) break;
                  iVar6 = (**(code **)(*(int *)this + 0xe0))();
                  iVar6 = iVar6 + 1;
                }
                puVar9 = puVar9 + iVar6;
                param_2 = param_2 + 1;
                iVar8 = iVar8 + iVar3;
                if (param_9 < 0) {
                  if (param_5 != -1) {
                    *puVar9 = uVar1;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != -1) {
                    *puVar9 = uVar2;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar7;
                  }
                }
                if (param_4 <= param_2) {
                  (**(code **)(*(int *)this + 0x24))(1);
                  return;
                }
              } while( true );
            }
          }
        }
        else {
          local_8 = uVar4 * 2;
          iVar8 = uVar4 * 2 - iVar3;
          local_c = (uVar4 - iVar3) * 2;
          while ((param_1 < local_1c || (param_2 < local_18))) {
            if (iVar8 < 1) {
              iVar8 = iVar8 + local_8;
              param_1 = param_1 + 1;
            }
            else {
              iVar8 = iVar8 + local_c;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
            }
          }
          if ((param_1 < local_14) && (param_2 < local_10)) {
            iVar3 = (**(code **)(*(int *)this + 0xe0))();
            iVar5 = (**(code **)(*(int *)this + 0x18))();
            puVar9 = (undefined1 *)(iVar5 + param_1 + iVar3 * param_2);
            if (param_9 < 0) {
              if (param_5 != -1) {
                *puVar9 = uVar1;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != -1) {
                *puVar9 = uVar2;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar7;
              }
            }
            if (local_14 <= param_3) {
              param_3 = local_14 + -1;
            }
            if (param_1 < param_3) {
              do {
                iVar3 = local_c;
                if (iVar8 < 1) {
                  puVar9 = puVar9 + 1;
                  iVar3 = local_8;
                }
                else {
                  param_2 = param_2 + 1;
                  if (local_10 <= param_2) break;
                  iVar5 = (**(code **)(*(int *)this + 0xe0))();
                  puVar9 = puVar9 + iVar5 + 1;
                }
                param_1 = param_1 + 1;
                iVar8 = iVar8 + iVar3;
                if (param_9 < 0) {
                  if (param_5 != -1) {
                    *puVar9 = uVar1;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != -1) {
                    *puVar9 = uVar2;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar7;
                  }
                }
                if (param_3 <= param_1) {
                  (**(code **)(*(int *)this + 0x24))(1);
                  return;
                }
              } while( true );
            }
          }
        }
      }
    }
    else if ((((param_1 <= local_14) && (local_18 <= param_2)) && (local_1c <= param_3)) &&
            (param_4 <= local_10)) {
      iVar8 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      if (iVar3 < iVar8) {
        local_8 = iVar3 * 2;
        iVar5 = iVar3 * 2 - iVar8;
        local_c = (iVar3 - iVar8) * 2;
        while ((param_1 < local_1c || (local_10 <= param_2))) {
          if (iVar5 < 1) {
            iVar5 = iVar5 + local_8;
            param_2 = param_2 + -1;
          }
          else {
            iVar5 = iVar5 + local_c;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= param_2)) {
          iVar3 = (**(code **)(*(int *)this + 0xe0))();
          iVar8 = (**(code **)(*(int *)this + 0x18))();
          puVar9 = (undefined1 *)(iVar8 + param_1 + iVar3 * param_2);
          if (param_9 < 0) {
            if (param_5 != -1) {
              *puVar9 = uVar1;
            }
            param_9 = param_9 + 1;
            if (param_9 == 0) {
              param_9 = param_8;
            }
          }
          else {
            if (param_6 != -1) {
              *puVar9 = uVar2;
            }
            param_9 = param_9 + -1;
            if (param_9 == 0) {
              param_9 = iVar7;
            }
          }
          iVar3 = local_c;
          iVar8 = local_8;
          if (param_4 < local_18) {
            param_4 = local_18;
          }
          while (local_c = iVar3, local_8 = iVar8, param_4 < param_2) {
            if (iVar5 < 1) {
              iVar6 = (**(code **)(*(int *)this + 0xe0))();
              iVar6 = -iVar6;
              iVar3 = iVar8;
            }
            else {
              param_1 = param_1 + 1;
              if (local_14 <= param_1) break;
              iVar6 = (**(code **)(*(int *)this + 0xe0))();
              iVar6 = 1 - iVar6;
            }
            param_2 = param_2 + -1;
            puVar9 = puVar9 + iVar6;
            iVar5 = iVar5 + iVar3;
            iVar3 = local_c;
            iVar8 = local_8;
            if (param_9 < 0) {
              if (param_5 != -1) {
                *puVar9 = uVar1;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != -1) {
                *puVar9 = uVar2;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar7;
              }
            }
          }
        }
      }
      else {
        local_8 = iVar8 * 2;
        iVar5 = iVar8 * 2 - iVar3;
        local_c = (iVar8 - iVar3) * 2;
        while ((param_1 < local_1c || (local_10 <= param_2))) {
          if (iVar5 < 1) {
            iVar5 = iVar5 + local_8;
            param_1 = param_1 + 1;
          }
          else {
            iVar5 = iVar5 + local_c;
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= param_2)) {
          iVar3 = (**(code **)(*(int *)this + 0xe0))();
          iVar8 = (**(code **)(*(int *)this + 0x18))();
          puVar9 = (undefined1 *)(iVar8 + param_1 + iVar3 * param_2);
          if (param_9 < 0) {
            if (param_5 != -1) {
              *puVar9 = uVar1;
            }
            param_9 = param_9 + 1;
            if (param_9 == 0) {
              param_9 = param_8;
            }
          }
          else {
            if (param_6 != -1) {
              *puVar9 = uVar2;
            }
            param_9 = param_9 + -1;
            if (param_9 == 0) {
              param_9 = iVar7;
            }
          }
          if (local_14 <= param_3) {
            param_3 = local_14 + -1;
          }
          if (param_1 < param_3) {
            do {
              iVar3 = local_c;
              if (iVar5 < 1) {
                puVar9 = puVar9 + 1;
                iVar3 = local_8;
              }
              else {
                param_2 = param_2 + -1;
                if (param_2 < local_18) break;
                iVar8 = (**(code **)(*(int *)this + 0xe0))();
                puVar9 = puVar9 + (1 - iVar8);
              }
              param_1 = param_1 + 1;
              iVar5 = iVar5 + iVar3;
              if (param_9 < 0) {
                if (param_5 != -1) {
                  *puVar9 = uVar1;
                }
                param_9 = param_9 + 1;
                if (param_9 == 0) {
                  param_9 = param_8;
                }
              }
              else {
                if (param_6 != -1) {
                  *puVar9 = uVar2;
                }
                param_9 = param_9 + -1;
                if (param_9 == 0) {
                  param_9 = iVar7;
                }
              }
              if (param_3 <= param_1) {
                (**(code **)(*(int *)this + 0x24))(1);
                return;
              }
            } while( true );
          }
        }
      }
    }
    (**(code **)(*(int *)this + 0x24))(1);
  }
  return;
}


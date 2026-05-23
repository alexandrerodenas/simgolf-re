/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10003070 @ 0x10003070 */
/* Body size: 1982 addresses */


void __thiscall
FUN_10003070(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,
            int param_7,int param_8,int param_9)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  undefined2 uVar3;
  
  iVar9 = param_8;
  iVar8 = param_4;
  iVar5 = param_3;
  local_c = this;
  if (param_1 == param_3) {
    FUN_10003b30(this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (param_2 == param_4) {
    FUN_10003830(this,param_1,param_3,param_2,param_5,(uint)param_6,param_7,param_8,param_9);
    return;
  }
  piVar7 = *(int **)((int)this + 0x7c);
  if ((piVar7 != (int *)0x0) ||
     ((DAT_10057d9c != 0 && (piVar7 = *(int **)(DAT_10057d9c + 4), piVar7 != (int *)0x0)))) {
    iVar4 = (**(code **)(*(int *)this + 0xe4))();
    if ((*(int *)(iVar4 + 4) != 0) && (*(int *)(iVar4 + 4) != 1)) {
      return;
    }
    if ((param_5 & 0x80000000) == 0) {
      iVar4 = (**(code **)(*piVar7 + 0x18))();
      param_5 = (uint)*(ushort *)(iVar4 + (param_5 & 0xff) * 2);
    }
    if (((uint)param_6 & 0x80000000) == 0) {
      iVar4 = (**(code **)(*piVar7 + 0x1c))();
      param_6 = (int *)(uint)*(ushort *)(iVar4 + ((uint)param_6 & 0xff) * 2);
    }
  }
  piVar7 = local_c;
  param_6 = (int *)((uint)param_6 & 0xffff);
  piVar10 = (int *)(param_5 & 0xffff);
  param_5 = (uint)piVar10;
  if (param_3 < param_1) {
    LOCK();
    param_3 = param_1;
    UNLOCK();
    param_1 = iVar5;
    LOCK();
    param_4 = param_2;
    UNLOCK();
    param_2 = iVar8;
    param_8 = param_7;
    param_9 = (iVar9 - param_9) + param_7;
    param_7 = iVar9;
    param_5 = (uint)param_6;
    param_6 = piVar10;
  }
  iVar5 = (**(code **)(*local_c + 0x10))();
  if (iVar5 != 0) {
    (**(code **)(*piVar7 + 200))(&local_1c);
    iVar5 = param_9 % (param_8 + param_7);
    if (iVar5 < param_7) {
      param_9 = iVar5 - param_7;
    }
    else {
      param_9 = (param_7 - iVar5) + param_8;
    }
    iVar8 = -param_7;
    iVar5 = param_3 - param_1;
    uVar6 = param_4 - param_2;
    uVar2 = (undefined2)param_5;
    uVar3 = SUB42(param_6,0);
    if (param_2 < param_4) {
      if ((((param_1 <= local_14) && (param_2 <= local_10)) && (local_1c <= param_3)) &&
         (local_18 <= param_4)) {
        if (iVar5 < (int)uVar6) {
          local_8 = (int *)(iVar5 * 2);
          iVar9 = iVar5 * 2 - uVar6;
          local_c = (int *)((iVar5 - uVar6) * 2);
          while ((param_1 < local_1c || (param_2 < local_18))) {
            if (iVar9 < 1) {
              iVar9 = iVar9 + (int)local_8;
              param_2 = param_2 + 1;
            }
            else {
              iVar9 = iVar9 + (int)local_c;
              param_2 = param_2 + 1;
              param_1 = param_1 + 1;
            }
          }
          if ((param_1 < local_14) && (param_2 < local_10)) {
            iVar5 = (**(code **)(*piVar7 + 0xe0))();
            iVar4 = (**(code **)(*piVar7 + 0x20))();
            puVar11 = (undefined2 *)(iVar4 + (iVar5 * param_2 + param_1) * 2);
            if (param_9 < 0) {
              if (param_5 != 0xffffffff) {
                *puVar11 = uVar2;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != (int *)0xffffffff) {
                *puVar11 = uVar3;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar8;
              }
            }
            if (local_10 <= param_4) {
              param_4 = local_10 + -1;
            }
            if (param_2 < param_4) {
              do {
                piVar1 = local_8;
                piVar10 = local_c;
                if (iVar9 < 1) {
                  iVar5 = (**(code **)(*piVar7 + 0xe0))();
                  piVar10 = piVar1;
                }
                else {
                  param_1 = param_1 + 1;
                  if (local_14 <= param_1) break;
                  iVar5 = (**(code **)(*piVar7 + 0xe0))();
                  iVar5 = iVar5 + 1;
                }
                puVar11 = puVar11 + iVar5;
                param_2 = param_2 + 1;
                iVar9 = iVar9 + (int)piVar10;
                if (param_9 < 0) {
                  if (param_5 != 0xffffffff) {
                    *puVar11 = uVar2;
                  }
                  param_9 = param_9 + 1;
                  if (param_9 == 0) {
                    param_9 = param_8;
                  }
                }
                else {
                  if (param_6 != (int *)0xffffffff) {
                    *puVar11 = uVar3;
                  }
                  param_9 = param_9 + -1;
                  if (param_9 == 0) {
                    param_9 = iVar8;
                  }
                }
                if (param_4 <= param_2) {
                  (**(code **)(*piVar7 + 0x24))(1);
                  return;
                }
              } while( true );
            }
          }
        }
        else {
          local_8 = (int *)(uVar6 * 2);
          iVar9 = uVar6 * 2 - iVar5;
          local_c = (int *)((uVar6 - iVar5) * 2);
          while ((param_1 < local_1c || (param_2 < local_18))) {
            if (iVar9 < 1) {
              iVar9 = iVar9 + (int)local_8;
              param_1 = param_1 + 1;
            }
            else {
              iVar9 = iVar9 + (int)local_c;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
            }
          }
          if ((param_1 < local_14) && (param_2 < local_10)) {
            iVar5 = (**(code **)(*piVar7 + 0xe0))();
            iVar4 = (**(code **)(*piVar7 + 0x20))();
            puVar11 = (undefined2 *)(iVar4 + (iVar5 * param_2 + param_1) * 2);
            if (param_9 < 0) {
              if (param_5 != 0xffffffff) {
                *puVar11 = uVar2;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != (int *)0xffffffff) {
                *puVar11 = uVar3;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar8;
              }
            }
            if (local_14 <= param_3) {
              param_3 = local_14 + -1;
            }
            if (param_1 < param_3) {
              do {
                piVar10 = local_c;
                if (iVar9 < 1) {
                  puVar11 = puVar11 + 1;
                  piVar10 = local_8;
                }
                else {
                  param_2 = param_2 + 1;
                  if (local_10 <= param_2) break;
                  iVar5 = (**(code **)(*piVar7 + 0xe0))();
                  puVar11 = puVar11 + iVar5 + 1;
                }
                param_1 = param_1 + 1;
                iVar9 = iVar9 + (int)piVar10;
                if (param_9 < 0) {
                  if (param_5 != 0xffffffff) {
                    *puVar11 = uVar2;
                  }
                  param_9 = param_9 + 1;
                  iVar5 = param_8;
                }
                else {
                  if (param_6 != (int *)0xffffffff) {
                    *puVar11 = uVar3;
                  }
                  param_9 = param_9 + -1;
                  iVar5 = iVar8;
                }
                if (param_9 == 0) {
                  param_9 = iVar5;
                }
                if (param_3 <= param_1) {
                  (**(code **)(*piVar7 + 0x24))(1);
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
      iVar9 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
      if (iVar5 < iVar9) {
        local_8 = (int *)(iVar5 * 2);
        iVar4 = iVar5 * 2 - iVar9;
        local_c = (int *)((iVar5 - iVar9) * 2);
        while ((param_1 < local_1c || (local_10 <= param_2))) {
          if (iVar4 < 1) {
            iVar4 = iVar4 + (int)local_8;
            param_2 = param_2 + -1;
          }
          else {
            iVar4 = iVar4 + (int)local_c;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= param_2)) {
          iVar5 = (**(code **)(*piVar7 + 0xe0))();
          iVar9 = (**(code **)(*piVar7 + 0x20))();
          puVar11 = (undefined2 *)(iVar9 + (iVar5 * param_2 + param_1) * 2);
          if (param_9 < 0) {
            if (param_5 != 0xffffffff) {
              *puVar11 = uVar2;
            }
            param_9 = param_9 + 1;
            if (param_9 == 0) {
              param_9 = param_8;
            }
          }
          else {
            if (param_6 != (int *)0xffffffff) {
              *puVar11 = uVar3;
            }
            param_9 = param_9 + -1;
            if (param_9 == 0) {
              param_9 = iVar8;
            }
          }
          piVar10 = local_c;
          piVar1 = local_8;
          if (param_4 < local_18) {
            param_4 = local_18;
          }
          while (local_c = piVar10, local_8 = piVar1, param_4 < param_2) {
            if (iVar4 < 1) {
              iVar5 = (**(code **)(*piVar7 + 0xe0))();
              iVar5 = iVar5 * -2;
              piVar10 = piVar1;
            }
            else {
              param_1 = param_1 + 1;
              if (local_14 <= param_1) break;
              iVar5 = (**(code **)(*piVar7 + 0xe0))();
              iVar5 = iVar5 * -2 + 2;
            }
            param_2 = param_2 + -1;
            puVar11 = (undefined2 *)((int)puVar11 + iVar5);
            iVar4 = iVar4 + (int)piVar10;
            piVar10 = local_c;
            piVar1 = local_8;
            if (param_9 < 0) {
              if (param_5 != 0xffffffff) {
                *puVar11 = uVar2;
              }
              param_9 = param_9 + 1;
              if (param_9 == 0) {
                param_9 = param_8;
              }
            }
            else {
              if (param_6 != (int *)0xffffffff) {
                *puVar11 = uVar3;
              }
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                param_9 = iVar8;
              }
            }
          }
        }
      }
      else {
        local_8 = (int *)(iVar9 * 2);
        iVar4 = iVar9 * 2 - iVar5;
        local_c = (int *)((iVar9 - iVar5) * 2);
        while ((param_1 < local_1c || (local_10 <= param_2))) {
          if (iVar4 < 1) {
            iVar4 = iVar4 + (int)local_8;
            param_1 = param_1 + 1;
          }
          else {
            iVar4 = iVar4 + (int)local_c;
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= param_2)) {
          iVar5 = (**(code **)(*piVar7 + 0xe0))();
          iVar9 = (**(code **)(*piVar7 + 0x20))();
          puVar11 = (undefined2 *)(iVar9 + (iVar5 * param_2 + param_1) * 2);
          if (param_9 < 0) {
            if (param_5 != 0xffffffff) {
              *puVar11 = uVar2;
            }
            param_9 = param_9 + 1;
            if (param_9 == 0) {
              param_9 = param_8;
            }
          }
          else {
            if (param_6 != (int *)0xffffffff) {
              *puVar11 = uVar3;
            }
            param_9 = param_9 + -1;
            if (param_9 == 0) {
              param_9 = iVar8;
            }
          }
          if (local_14 <= param_3) {
            param_3 = local_14 + -1;
          }
          if (param_1 < param_3) {
            do {
              piVar10 = local_c;
              if (iVar4 < 1) {
                puVar11 = puVar11 + 1;
                piVar10 = local_8;
              }
              else {
                param_2 = param_2 + -1;
                if (param_2 < local_18) break;
                iVar5 = (**(code **)(*piVar7 + 0xe0))();
                puVar11 = puVar11 + (1 - iVar5);
              }
              param_1 = param_1 + 1;
              iVar4 = iVar4 + (int)piVar10;
              if (param_9 < 0) {
                if (param_5 != 0xffffffff) {
                  *puVar11 = uVar2;
                }
                param_9 = param_9 + 1;
                iVar5 = param_8;
              }
              else {
                if (param_6 != (int *)0xffffffff) {
                  *puVar11 = uVar3;
                }
                param_9 = param_9 + -1;
                iVar5 = iVar8;
              }
              if (param_9 == 0) {
                param_9 = iVar5;
              }
              if (param_3 <= param_1) {
                (**(code **)(*piVar7 + 0x24))(1);
                return;
              }
            } while( true );
          }
        }
      }
    }
    (**(code **)(*piVar7 + 0x24))(1);
  }
  return;
}


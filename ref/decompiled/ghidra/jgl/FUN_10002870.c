/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002870 @ 0x10002870 */


void __thiscall
FUN_10002870(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_4;
  iVar3 = param_3;
  if (param_1 == param_3) {
    FUN_10002ef0(this,param_1,param_2,param_4,param_5);
    return;
  }
  if (param_2 == param_4) {
    FUN_10002da0(this,param_1,param_3,param_2,param_5);
    return;
  }
  if ((param_5 & 0x80000000) == 0) {
    piVar1 = *(int **)((int)this + 0x7c);
    if (piVar1 == (int *)0x0) {
      if (DAT_10057d9c == 0) goto LAB_10002921;
      piVar1 = *(int **)(DAT_10057d9c + 4);
    }
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*(int *)this + 0xe4))();
      if (*(int *)(iVar2 + 4) == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))();
      }
      else {
        if (*(int *)(iVar2 + 4) != 1) {
          return;
        }
        iVar2 = (**(code **)(*piVar1 + 0x1c))();
      }
      param_5 = (uint)*(ushort *)(iVar2 + (param_5 & 0xff) * 2);
    }
  }
LAB_10002921:
  if (param_3 < param_1) {
    LOCK();
    param_3 = param_1;
    UNLOCK();
    param_1 = iVar3;
    LOCK();
    param_4 = param_2;
    UNLOCK();
    param_2 = iVar6;
  }
  iVar3 = (**(code **)(*(int *)this + 0x10))();
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 200))(&local_1c);
    iVar3 = param_3 - param_1;
    uVar4 = param_4 - param_2;
    if (param_2 < param_4) {
      if ((((param_1 <= local_14) && (param_2 <= local_10)) && (local_1c <= param_3)) &&
         (local_18 <= param_4)) {
        if (iVar3 < (int)uVar4) {
          local_8 = iVar3 * 2;
          iVar6 = iVar3 * 2 - uVar4;
          local_c = (iVar3 - uVar4) * 2;
          iVar3 = param_1;
          while ((iVar3 < local_1c || (param_2 < local_18))) {
            if (iVar6 < 1) {
              iVar6 = iVar6 + local_8;
              param_2 = param_2 + 1;
            }
            else {
              iVar6 = iVar6 + local_c;
              iVar3 = iVar3 + 1;
              param_2 = param_2 + 1;
            }
          }
          if ((iVar3 < local_14) && (param_2 < local_10)) {
            iVar2 = (**(code **)(*(int *)this + 0xe0))();
            iVar5 = (**(code **)(*(int *)this + 0x20))();
            puVar7 = (undefined2 *)(iVar5 + (iVar2 * param_2 + iVar3) * 2);
            *puVar7 = (undefined2)param_5;
            if (local_10 <= param_4) {
              param_4 = local_10 + -1;
            }
            param_1 = iVar6;
            if (param_2 < param_4) {
              do {
                iVar6 = local_8;
                if (0 < param_1) {
                  iVar3 = iVar3 + 1;
                  if (local_14 <= iVar3) break;
                  puVar7 = puVar7 + 1;
                  iVar6 = local_c;
                }
                param_1 = param_1 + iVar6;
                param_2 = param_2 + 1;
                iVar6 = (**(code **)(*(int *)this + 0xe0))();
                puVar7 = puVar7 + iVar6;
                *puVar7 = (undefined2)param_5;
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
          iVar6 = uVar4 * 2 - iVar3;
          local_c = (uVar4 - iVar3) * 2;
          iVar3 = param_1;
          while ((iVar3 < local_1c || (param_2 < local_18))) {
            if (iVar6 < 1) {
              iVar6 = iVar6 + local_8;
              iVar3 = iVar3 + 1;
            }
            else {
              iVar6 = iVar6 + local_c;
              param_2 = param_2 + 1;
              iVar3 = iVar3 + 1;
            }
          }
          if ((iVar3 < local_14) && (param_2 < local_10)) {
            iVar2 = (**(code **)(*(int *)this + 0xe0))();
            iVar5 = (**(code **)(*(int *)this + 0x20))();
            puVar7 = (undefined2 *)(iVar5 + (iVar2 * param_2 + iVar3) * 2);
            *puVar7 = (undefined2)param_5;
            if (local_14 <= param_3) {
              param_3 = local_14 + -1;
            }
            param_1 = iVar6;
            if (iVar3 < param_3) {
              do {
                iVar2 = local_c;
                iVar6 = local_8;
                if (0 < param_1) {
                  param_2 = param_2 + 1;
                  if (local_10 <= param_2) break;
                  iVar6 = (**(code **)(*(int *)this + 0xe0))();
                  puVar7 = puVar7 + iVar6;
                  iVar6 = iVar2;
                }
                param_1 = param_1 + iVar6;
                puVar7 = puVar7 + 1;
                iVar3 = iVar3 + 1;
                *puVar7 = (undefined2)param_5;
                if (param_3 <= iVar3) {
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
      iVar6 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      if (iVar3 < iVar6) {
        local_8 = iVar3 * 2;
        iVar2 = iVar3 * 2 - iVar6;
        local_c = (iVar3 - iVar6) * 2;
        while ((param_1 < local_1c || (local_10 <= param_2))) {
          if (iVar2 < 1) {
            iVar2 = iVar2 + local_8;
            param_2 = param_2 + -1;
          }
          else {
            iVar2 = iVar2 + local_c;
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= param_2)) {
          iVar3 = (**(code **)(*(int *)this + 0xe0))();
          iVar6 = (**(code **)(*(int *)this + 0x20))();
          puVar7 = (undefined2 *)(iVar6 + (iVar3 * param_2 + param_1) * 2);
          *puVar7 = (undefined2)param_5;
          if (param_4 < local_18) {
            param_4 = local_18;
          }
          for (; param_4 < param_2; param_2 = param_2 + -1) {
            iVar3 = local_8;
            if (0 < iVar2) {
              param_1 = param_1 + 1;
              if (local_14 <= param_1) break;
              puVar7 = puVar7 + 1;
              iVar3 = local_c;
            }
            iVar2 = iVar2 + iVar3;
            iVar3 = (**(code **)(*(int *)this + 0xe0))();
            puVar7 = puVar7 + -iVar3;
            *puVar7 = (undefined2)param_5;
          }
        }
      }
      else {
        local_8 = iVar6 * 2;
        iVar2 = iVar6 * 2 - iVar3;
        local_c = (iVar6 - iVar3) * 2;
        iVar3 = param_1;
        while ((iVar3 < local_1c || (local_10 <= param_2))) {
          if (iVar2 < 1) {
            iVar2 = iVar2 + local_8;
            iVar3 = iVar3 + 1;
          }
          else {
            iVar2 = iVar2 + local_c;
            param_2 = param_2 + -1;
            iVar3 = iVar3 + 1;
          }
        }
        if ((iVar3 < local_14) && (local_18 <= param_2)) {
          iVar6 = (**(code **)(*(int *)this + 0xe0))();
          iVar5 = (**(code **)(*(int *)this + 0x20))();
          puVar7 = (undefined2 *)(iVar5 + (iVar6 * param_2 + iVar3) * 2);
          *puVar7 = (undefined2)param_5;
          if (local_14 <= param_3) {
            param_3 = local_14 + -1;
          }
          param_1 = iVar2;
          if (iVar3 < param_3) {
            do {
              iVar2 = local_c;
              iVar6 = local_8;
              if (0 < param_1) {
                param_2 = param_2 + -1;
                if (param_2 < local_18) break;
                iVar6 = (**(code **)(*(int *)this + 0xe0))();
                puVar7 = puVar7 + -iVar6;
                iVar6 = iVar2;
              }
              param_1 = param_1 + iVar6;
              puVar7 = puVar7 + 1;
              iVar3 = iVar3 + 1;
              *puVar7 = (undefined2)param_5;
              if (param_3 <= iVar3) {
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


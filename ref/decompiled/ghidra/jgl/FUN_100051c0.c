/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100051c0 @ 0x100051C0 */
/* Body size: 1187 addresses */


void __thiscall
FUN_100051c0(void *this,int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_4;
  iVar1 = param_3;
  if (param_1 == param_3) {
    FUN_10005760(this,param_1,param_2,param_4,param_5);
    return;
  }
  if (param_2 == param_4) {
    FUN_10005670(this,param_1,param_3,param_2);
    return;
  }
  iVar4 = param_2;
  if (param_3 < param_1) {
    LOCK();
    param_3 = param_1;
    UNLOCK();
    param_1 = iVar1;
    LOCK();
    param_4 = param_2;
    UNLOCK();
    iVar4 = iVar3;
  }
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 200))(&local_1c);
    iVar1 = param_3 - param_1;
    uVar2 = param_4 - iVar4;
    if (iVar4 < param_4) {
      if ((((param_1 <= local_14) && (iVar4 <= local_10)) && (local_1c <= param_3)) &&
         (local_18 <= param_4)) {
        if (iVar1 < (int)uVar2) {
          local_8 = iVar1 * 2;
          param_2 = iVar1 * 2 - uVar2;
          local_c = (iVar1 - uVar2) * 2;
          while ((param_1 < local_1c || (iVar4 < local_18))) {
            if (param_2 < 1) {
              param_2 = param_2 + local_8;
              iVar4 = iVar4 + 1;
            }
            else {
              param_2 = param_2 + local_c;
              param_1 = param_1 + 1;
              iVar4 = iVar4 + 1;
            }
          }
          if ((param_1 < local_14) && (iVar4 < local_10)) {
            iVar1 = (**(code **)(*(int *)this + 0xe0))();
            iVar3 = (**(code **)(*(int *)this + 0x18))();
            puVar5 = (undefined1 *)(iVar3 + param_1 + iVar1 * iVar4);
            *puVar5 = param_5;
            if (local_10 <= param_4) {
              param_4 = local_10 + -1;
            }
            if (iVar4 < param_4) {
              do {
                iVar1 = local_8;
                if (0 < param_2) {
                  param_1 = param_1 + 1;
                  if (local_14 <= param_1) break;
                  puVar5 = puVar5 + 1;
                  iVar1 = local_c;
                }
                param_2 = param_2 + iVar1;
                iVar4 = iVar4 + 1;
                iVar1 = (**(code **)(*(int *)this + 0xe0))();
                puVar5 = puVar5 + iVar1;
                *puVar5 = param_5;
                if (param_4 <= iVar4) {
                  (**(code **)(*(int *)this + 0x24))(1);
                  return;
                }
              } while( true );
            }
          }
        }
        else {
          local_8 = uVar2 * 2;
          param_2 = uVar2 * 2 - iVar1;
          local_c = (uVar2 - iVar1) * 2;
          while ((param_1 < local_1c || (iVar4 < local_18))) {
            if (param_2 < 1) {
              param_2 = param_2 + local_8;
              param_1 = param_1 + 1;
            }
            else {
              param_2 = param_2 + local_c;
              iVar4 = iVar4 + 1;
              param_1 = param_1 + 1;
            }
          }
          if ((param_1 < local_14) && (iVar4 < local_10)) {
            iVar1 = (**(code **)(*(int *)this + 0xe0))();
            iVar3 = (**(code **)(*(int *)this + 0x18))();
            puVar5 = (undefined1 *)(iVar3 + param_1 + iVar1 * iVar4);
            *puVar5 = param_5;
            if (local_14 <= param_3) {
              param_3 = local_14 + -1;
            }
            if (param_1 < param_3) {
              do {
                iVar3 = local_c;
                iVar1 = local_8;
                if (0 < param_2) {
                  iVar4 = iVar4 + 1;
                  if (local_10 <= iVar4) break;
                  iVar1 = (**(code **)(*(int *)this + 0xe0))();
                  puVar5 = puVar5 + iVar1;
                  iVar1 = iVar3;
                }
                param_2 = param_2 + iVar1;
                puVar5 = puVar5 + 1;
                param_1 = param_1 + 1;
                *puVar5 = param_5;
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
    else if ((((param_1 <= local_14) && (local_18 <= iVar4)) && (local_1c <= param_3)) &&
            (param_4 <= local_10)) {
      iVar3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
      if (iVar1 < iVar3) {
        local_8 = iVar1 * 2;
        param_2 = iVar1 * 2 - iVar3;
        local_c = (iVar1 - iVar3) * 2;
        while ((param_1 < local_1c || (local_10 <= iVar4))) {
          if (param_2 < 1) {
            param_2 = param_2 + local_8;
            iVar4 = iVar4 + -1;
          }
          else {
            param_2 = param_2 + local_c;
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= iVar4)) {
          iVar1 = (**(code **)(*(int *)this + 0xe0))();
          iVar3 = (**(code **)(*(int *)this + 0x18))();
          puVar5 = (undefined1 *)(iVar3 + param_1 + iVar1 * iVar4);
          *puVar5 = param_5;
          if (param_4 < local_18) {
            param_4 = local_18;
          }
          for (; param_4 < iVar4; iVar4 = iVar4 + -1) {
            iVar1 = local_8;
            if (0 < param_2) {
              param_1 = param_1 + 1;
              if (local_14 <= param_1) break;
              puVar5 = puVar5 + 1;
              iVar1 = local_c;
            }
            param_2 = param_2 + iVar1;
            iVar1 = (**(code **)(*(int *)this + 0xe0))();
            puVar5 = puVar5 + -iVar1;
            *puVar5 = param_5;
          }
        }
      }
      else {
        local_8 = iVar3 * 2;
        param_2 = iVar3 * 2 - iVar1;
        local_c = (iVar3 - iVar1) * 2;
        while ((param_1 < local_1c || (local_10 <= iVar4))) {
          if (param_2 < 1) {
            param_2 = param_2 + local_8;
            param_1 = param_1 + 1;
          }
          else {
            param_2 = param_2 + local_c;
            iVar4 = iVar4 + -1;
            param_1 = param_1 + 1;
          }
        }
        if ((param_1 < local_14) && (local_18 <= iVar4)) {
          iVar1 = (**(code **)(*(int *)this + 0xe0))();
          iVar3 = (**(code **)(*(int *)this + 0x18))();
          puVar5 = (undefined1 *)(iVar3 + param_1 + iVar1 * iVar4);
          *puVar5 = param_5;
          if (local_14 <= param_3) {
            param_3 = local_14 + -1;
          }
          if (param_1 < param_3) {
            do {
              iVar3 = local_c;
              iVar1 = local_8;
              if (0 < param_2) {
                iVar4 = iVar4 + -1;
                if (iVar4 < local_18) break;
                iVar1 = (**(code **)(*(int *)this + 0xe0))();
                puVar5 = puVar5 + -iVar1;
                iVar1 = iVar3;
              }
              param_2 = param_2 + iVar1;
              param_1 = param_1 + 1;
              puVar5 = puVar5 + 1;
              *puVar5 = param_5;
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


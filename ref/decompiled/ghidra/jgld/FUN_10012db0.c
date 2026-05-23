/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10012db0 @ 0x10012DB0 */
/* Body size: 2106 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10012db0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined4 local_70 [16];
  int local_30;
  int *local_2c;
  int *local_28;
  RECT local_24;
  int local_14;
  byte *local_10;
  undefined2 *local_c;
  int *local_8;
  
  puVar9 = local_70;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0xcccccccc;
    puVar9 = puVar9 + 1;
  }
  local_2c = param_1;
  if ((*(int *)((int)this + 0x4c0) != 0) && (param_1 != (int *)0x0)) {
    if (param_2 < 0) {
      param_6 = param_6 + param_2;
      param_4 = param_4 - param_2;
      param_2 = 0;
    }
    if (param_3 < 0) {
      param_7 = param_7 + param_3;
      param_5 = param_5 - param_3;
      param_3 = 0;
    }
    local_8 = this;
    (**(code **)(*(int *)this + 0xd8))();
    iVar3 = __chkesp();
    if (param_2 <= iVar3) {
      (**(code **)(*local_8 + 0xdc))();
      iVar3 = __chkesp();
      if (param_3 <= iVar3) {
        (**(code **)(*local_8 + 0xd8))();
        iVar3 = __chkesp();
        if (iVar3 < param_2 + param_6) {
          (**(code **)(*local_8 + 0xd8))();
          iVar3 = __chkesp();
          param_6 = iVar3 - param_2;
        }
        (**(code **)(*local_8 + 0xdc))();
        iVar3 = __chkesp();
        if (iVar3 < param_3 + param_7) {
          (**(code **)(*local_8 + 0xdc))();
          iVar3 = __chkesp();
          param_7 = iVar3 - param_3;
        }
        thunk_FUN_10008360(&local_24.left,param_4,param_5,param_6,param_7);
        (**(code **)(*local_2c + 0xcc))();
        pRVar1 = (RECT *)__chkesp();
        iVar3 = thunk_FUN_10008590(&local_24,&local_24,pRVar1);
        if (iVar3 != 0) {
          if (local_8[0x1f] == 0) {
            local_28 = *(int **)(DAT_1012873c + 4);
          }
          else {
            local_28 = (int *)local_8[0x1f];
          }
          if (local_28 != (int *)0x0) {
            local_30 = local_2c[10];
            if (local_30 == 0) {
              (**(code **)(*local_28 + 0x18))();
              DAT_1012849c = __chkesp();
            }
            else {
              if (local_30 != 1) goto LAB_100135d7;
              (**(code **)(*local_28 + 0x1c))();
              DAT_1012849c = __chkesp();
            }
            iVar4 = param_2 + (local_24.left - param_4);
            iVar3 = param_3 + (local_24.top - param_5);
            iVar5 = local_24.right - local_24.left;
            iVar6 = local_24.bottom - local_24.top;
            local_14 = local_2c[0x10];
            DAT_10128498 = local_8[0x10];
            if (local_2c == local_8) {
              if (param_4 < iVar4) {
                if (param_5 < iVar3) {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  if (local_c == (undefined2 *)0x0) goto LAB_100135d7;
                  (**(code **)(*local_8 + 0x14))();
                  local_10 = (byte *)__chkesp();
                  iVar3 = DAT_1012849c;
                  if (local_10 == (byte *)0x0) {
                    (**(code **)(*local_2c + 0x24))();
                    __chkesp();
                    goto LAB_100135d7;
                  }
                  DAT_10128498 = DAT_10128498 - iVar5;
                  iVar4 = iVar5;
                  pbVar8 = local_10;
                  puVar10 = local_c;
                  DAT_1012848c = iVar5;
                  _DAT_10128494 = iVar6;
                  do {
                    do {
                      pbVar7 = pbVar8 + 1;
                      *puVar10 = *(undefined2 *)(iVar3 + (uint)*pbVar8 * 2);
                      puVar10 = puVar10 + 1;
                      iVar4 = iVar4 + -1;
                      pbVar8 = pbVar7;
                    } while (iVar4 != 0);
                    pbVar8 = pbVar7 + DAT_10128498;
                    puVar10 = puVar10 + (local_14 - iVar5);
                    _DAT_10128494 = _DAT_10128494 + -1;
                    iVar4 = DAT_1012848c;
                  } while (_DAT_10128494 != 0);
                }
                else {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  if (local_c == (undefined2 *)0x0) goto LAB_100135d7;
                  (**(code **)(*local_8 + 0x14))();
                  local_10 = (byte *)__chkesp();
                  iVar3 = DAT_1012849c;
                  if (local_10 == (byte *)0x0) {
                    (**(code **)(*local_2c + 0x24))();
                    __chkesp();
                    goto LAB_100135d7;
                  }
                  DAT_10128498 = DAT_10128498 + iVar5;
                  iVar4 = iVar5;
                  pbVar8 = local_10;
                  puVar10 = local_c;
                  DAT_1012848c = iVar5;
                  _DAT_10128494 = iVar6;
                  do {
                    do {
                      pbVar7 = pbVar8 + 1;
                      *puVar10 = *(undefined2 *)(iVar3 + (uint)*pbVar8 * 2);
                      puVar10 = puVar10 + 1;
                      iVar4 = iVar4 + -1;
                      pbVar8 = pbVar7;
                    } while (iVar4 != 0);
                    pbVar8 = pbVar7 + -DAT_10128498;
                    puVar10 = puVar10 + -(local_14 + iVar5);
                    _DAT_10128494 = _DAT_10128494 + -1;
                    iVar4 = DAT_1012848c;
                  } while (_DAT_10128494 != 0);
                }
              }
              else if (param_5 < iVar3) {
                if (iVar5 < 4) {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  (**(code **)(*local_8 + 0x14))((short)(iVar4 + -1 + iVar5),(short)iVar3);
                  local_10 = (byte *)__chkesp();
                }
                else {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  (**(code **)(*local_8 + 0x14))((short)(iVar4 + -4 + iVar5),(short)iVar3);
                  local_10 = (byte *)__chkesp();
                }
                iVar3 = DAT_1012849c;
                if (local_c == (undefined2 *)0x0) goto LAB_100135d7;
                if (local_10 == (byte *)0x0) {
                  (**(code **)(*local_2c + 0x24))();
                  __chkesp();
                  goto LAB_100135d7;
                }
                DAT_10128498 = DAT_10128498 + iVar5;
                iVar4 = iVar5;
                pbVar8 = local_10;
                puVar10 = local_c;
                DAT_1012848c = iVar5;
                _DAT_10128494 = iVar6;
                do {
                  do {
                    pbVar7 = pbVar8 + 1;
                    *puVar10 = *(undefined2 *)(iVar3 + (uint)*pbVar8 * 2);
                    puVar10 = puVar10 + 1;
                    iVar4 = iVar4 + -1;
                    pbVar8 = pbVar7;
                  } while (iVar4 != 0);
                  pbVar8 = pbVar7 + DAT_10128498;
                  puVar10 = puVar10 + local_14 + iVar5;
                  _DAT_10128494 = _DAT_10128494 + -1;
                  iVar4 = DAT_1012848c;
                } while (_DAT_10128494 != 0);
              }
              else {
                if (iVar5 < 4) {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  (**(code **)(*local_8 + 0x14))
                            ((short)(iVar4 + -1 + iVar5),(short)(iVar3 + -1 + iVar6));
                  local_10 = (byte *)__chkesp();
                }
                else {
                  (**(code **)(*local_2c + 0x1c))();
                  local_c = (undefined2 *)__chkesp();
                  (**(code **)(*local_8 + 0x14))
                            ((short)(iVar4 + -4 + iVar5),(short)(iVar3 + -1 + iVar6));
                  local_10 = (byte *)__chkesp();
                }
                iVar3 = DAT_1012849c;
                if (local_c == (undefined2 *)0x0) goto LAB_100135d7;
                if (local_10 == (byte *)0x0) {
                  (**(code **)(*local_2c + 0x24))();
                  __chkesp();
                  goto LAB_100135d7;
                }
                local_14 = local_2c[0x10];
                DAT_10128498 = local_8[0x10] - iVar5;
                iVar2 = 0;
                iVar4 = iVar5;
                pbVar8 = local_10;
                puVar10 = local_c;
                DAT_1012848c = iVar5;
                _DAT_10128494 = iVar6;
                do {
                  do {
                    iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),*pbVar8);
                    pbVar8 = pbVar8 + 1;
                    *puVar10 = *(undefined2 *)(iVar3 + iVar2 * 2);
                    puVar10 = puVar10 + 1;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                  pbVar8 = pbVar8 + -DAT_10128498;
                  puVar10 = (undefined2 *)((int)puVar10 - (local_14 - iVar5));
                  iVar2 = iVar2 + -1;
                  iVar4 = DAT_1012848c;
                } while (iVar2 != 0);
              }
            }
            else {
              (**(code **)(*local_2c + 0x1c))();
              local_c = (undefined2 *)__chkesp();
              if (local_c == (undefined2 *)0x0) goto LAB_100135d7;
              (**(code **)(*local_8 + 0x14))();
              local_10 = (byte *)__chkesp();
              iVar3 = DAT_1012849c;
              if (local_10 == (byte *)0x0) {
                (**(code **)(*local_2c + 0x24))();
                __chkesp();
                goto LAB_100135d7;
              }
              DAT_10128498 = DAT_10128498 - iVar5;
              iVar4 = iVar5;
              pbVar8 = local_10;
              puVar10 = local_c;
              DAT_1012848c = iVar5;
              _DAT_10128494 = iVar6;
              do {
                do {
                  pbVar7 = pbVar8 + 1;
                  *puVar10 = *(undefined2 *)(iVar3 + (uint)*pbVar8 * 2);
                  puVar10 = puVar10 + 1;
                  iVar4 = iVar4 + -1;
                  pbVar8 = pbVar7;
                } while (iVar4 != 0);
                pbVar8 = pbVar7 + DAT_10128498;
                puVar10 = puVar10 + (local_14 - iVar5);
                _DAT_10128494 = _DAT_10128494 + -1;
                iVar4 = DAT_1012848c;
              } while (_DAT_10128494 != 0);
            }
            (**(code **)(*local_8 + 0x24))();
            __chkesp();
            (**(code **)(*local_2c + 0x24))();
            __chkesp();
          }
        }
      }
    }
  }
LAB_100135d7:
  local_8 = (int *)0x100135e4;
  __chkesp();
  return;
}


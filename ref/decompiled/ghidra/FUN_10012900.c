/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10012900 @ 0x10012900 */
/* Body size: 952 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10012900(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  short sVar1;
  RECT *pRVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 local_78 [16];
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  RECT local_28;
  int local_18;
  int local_14;
  byte *local_10;
  short *local_c;
  int *local_8;
  
  puVar6 = local_78;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if (param_1 != (int *)0x0) {
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
        thunk_FUN_10008360(&local_28.left,param_4,param_5,param_6,param_7);
        (**(code **)(*param_1 + 0xcc))();
        pRVar2 = (RECT *)__chkesp();
        iVar3 = thunk_FUN_10008590(&local_28,&local_28,pRVar2);
        if (iVar3 != 0) {
          if (local_8[0x1f] == 0) {
            local_34 = *(int **)(DAT_1012873c + 4);
          }
          else {
            local_34 = (int *)local_8[0x1f];
          }
          if (local_34 != (int *)0x0) {
            (**(code **)(*param_1 + 0xe4))();
            iVar3 = __chkesp();
            local_38 = *(int *)(iVar3 + 4);
            if (local_38 == 0) {
              (**(code **)(*local_34 + 0x18))();
              DAT_1012849c = __chkesp();
            }
            else {
              if (local_38 != 1) goto LAB_10012ca5;
              (**(code **)(*local_34 + 0x1c))();
              DAT_1012849c = __chkesp();
            }
            iVar3 = local_28.left - param_4;
            iVar4 = local_28.top - param_5;
            (**(code **)(*param_1 + 0x1c))(local_28.left,local_28.top);
            local_c = (short *)__chkesp();
            if (local_c != (short *)0x0) {
              (**(code **)(*local_8 + 0x14))(param_2 + iVar3,param_3 + iVar4);
              local_10 = (byte *)__chkesp();
              if (local_10 != (byte *)0x0) {
                (**(code **)(*param_1 + 0xe0))();
                local_14 = __chkesp();
                (**(code **)(*local_8 + 0xe0))();
                local_18 = __chkesp();
                local_2c = local_28.bottom - local_28.top;
                local_30 = local_28.right - local_28.left;
                _DAT_101284a0 = local_30 >> 2;
                DAT_10128490 = (local_14 - local_30) * 2;
                sVar1 = *(short *)((uint)param_8 * 2 + DAT_1012849c);
                iVar3 = local_30;
                pbVar5 = local_10;
                psVar7 = local_c;
                DAT_1012848c = local_30;
                _DAT_10128494 = local_2c;
                DAT_101284a4 = local_18 - local_30;
                do {
                  do {
                    if (*psVar7 == sVar1) {
                      *psVar7 = *(short *)((uint)*pbVar5 * 2 + DAT_1012849c);
                    }
                    pbVar5 = pbVar5 + 1;
                    psVar7 = psVar7 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  pbVar5 = pbVar5 + (local_18 - local_30);
                  psVar7 = psVar7 + (local_14 - local_30);
                  _DAT_10128494 = _DAT_10128494 + -1;
                  iVar3 = DAT_1012848c;
                } while (_DAT_10128494 != 0);
                (**(code **)(*local_8 + 0x24))(1);
                __chkesp();
                (**(code **)(*param_1 + 0x24))(1);
                __chkesp();
              }
            }
          }
        }
      }
    }
  }
LAB_10012ca5:
  local_8 = (int *)0x10012cb2;
  __chkesp();
  return;
}


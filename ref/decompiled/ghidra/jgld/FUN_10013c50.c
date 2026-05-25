/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10013c50 @ 0x10013C50 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_10013c50(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  RECT *pRVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_6c [16];
  int *local_2c;
  RECT local_28;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puVar8 = local_6c;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
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
    iVar2 = __chkesp();
    if (param_2 <= iVar2) {
      (**(code **)(*local_8 + 0xdc))();
      iVar2 = __chkesp();
      if (param_3 <= iVar2) {
        (**(code **)(*local_8 + 0xd8))();
        iVar2 = __chkesp();
        if (iVar2 < param_2 + param_6) {
          (**(code **)(*local_8 + 0xd8))();
          iVar2 = __chkesp();
          param_6 = iVar2 - param_2;
        }
        (**(code **)(*local_8 + 0xdc))();
        iVar2 = __chkesp();
        if (iVar2 < param_3 + param_7) {
          (**(code **)(*local_8 + 0xdc))();
          iVar2 = __chkesp();
          param_7 = iVar2 - param_3;
        }
        thunk_FUN_10008360(&local_28.left,param_4,param_5,param_6,param_7);
        (**(code **)(*local_2c + 0xcc))();
        pRVar1 = (RECT *)__chkesp();
        iVar2 = thunk_FUN_10008590(&local_28,&local_28,pRVar1);
        if (iVar2 != 0) {
          iVar3 = param_2 + (local_28.left - param_4);
          iVar2 = param_3 + (local_28.top - param_5);
          uVar4 = local_28.right - local_28.left;
          iVar7 = local_28.bottom - local_28.top;
          if (local_2c == local_8) {
            if (param_4 < iVar3) {
              if (param_5 < iVar2) {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                if (local_c == (undefined4 *)0x0) goto LAB_1001436a;
                (**(code **)(*local_8 + 0x14))();
                local_10 = (undefined4 *)__chkesp();
                if (local_10 == (undefined4 *)0x0) {
                  (**(code **)(*local_2c + 0x24))();
                  __chkesp();
                  goto LAB_1001436a;
                }
                local_14 = local_2c[0x10];
                local_18 = local_8[0x10];
                DAT_101284b4 = uVar4 & 3;
                uVar5 = uVar4 >> 2;
                puVar8 = local_10;
                puVar9 = local_c;
                do {
                  for (; uVar6 = DAT_101284b4, uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                  }
                  puVar8 = (undefined4 *)((int)puVar8 + (local_18 - uVar4));
                  puVar9 = (undefined4 *)((int)puVar9 + (local_14 - uVar4));
                  iVar7 = iVar7 + -1;
                  uVar5 = uVar4 >> 2;
                } while (iVar7 != 0);
              }
              else {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                if (local_c == (undefined4 *)0x0) goto LAB_1001436a;
                (**(code **)(*local_8 + 0x14))();
                local_10 = (undefined4 *)__chkesp();
                if (local_10 == (undefined4 *)0x0) {
                  (**(code **)(*local_2c + 0x24))();
                  __chkesp();
                  goto LAB_1001436a;
                }
                local_14 = local_2c[0x10];
                local_18 = local_8[0x10];
                DAT_101284b4 = uVar4 & 3;
                uVar5 = uVar4 >> 2;
                puVar8 = local_10;
                puVar9 = local_c;
                do {
                  for (; uVar6 = DAT_101284b4, uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                  }
                  puVar8 = (undefined4 *)((int)puVar8 - (local_18 + uVar4));
                  puVar9 = (undefined4 *)((int)puVar9 - (local_14 + uVar4));
                  iVar7 = iVar7 + -1;
                  uVar5 = uVar4 >> 2;
                } while (iVar7 != 0);
              }
            }
            else if (param_5 < iVar2) {
              if ((int)uVar4 < 4) {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                (**(code **)(*local_8 + 0x14))((short)(iVar3 + -1 + uVar4),(short)iVar2);
                local_10 = (undefined4 *)__chkesp();
              }
              else {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                (**(code **)(*local_8 + 0x14))((short)(iVar3 + -4 + uVar4),(short)iVar2);
                local_10 = (undefined4 *)__chkesp();
              }
              if (local_c == (undefined4 *)0x0) goto LAB_1001436a;
              if (local_10 == (undefined4 *)0x0) {
                (**(code **)(*local_2c + 0x24))();
                __chkesp();
                goto LAB_1001436a;
              }
              local_14 = local_2c[0x10];
              local_18 = local_8[0x10];
              DAT_101284b4 = uVar4 & 3;
              uVar5 = uVar4 >> 2;
              puVar8 = local_10;
              puVar9 = local_c;
              do {
                for (; uVar6 = DAT_101284b4, uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar9 = *puVar8;
                  puVar8 = puVar8 + -1;
                  puVar9 = puVar9 + -1;
                }
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                  puVar8 = (undefined4 *)((int)puVar8 + -1);
                  puVar9 = (undefined4 *)((int)puVar9 + -1);
                }
                puVar8 = (undefined4 *)((int)puVar8 + local_18 + uVar4);
                puVar9 = (undefined4 *)((int)puVar9 + local_14 + uVar4);
                iVar7 = iVar7 + -1;
                uVar5 = uVar4 >> 2;
              } while (iVar7 != 0);
            }
            else {
              if ((int)uVar4 < 4) {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                (**(code **)(*local_8 + 0x14))
                          ((short)(iVar3 + -1 + uVar4),(short)(iVar2 + -1 + iVar7));
                local_10 = (undefined4 *)__chkesp();
              }
              else {
                (**(code **)(*local_2c + 0x14))();
                local_c = (undefined4 *)__chkesp();
                (**(code **)(*local_8 + 0x14))
                          ((short)(iVar3 + -4 + uVar4),(short)(iVar2 + -1 + iVar7));
                local_10 = (undefined4 *)__chkesp();
              }
              if (local_c == (undefined4 *)0x0) goto LAB_1001436a;
              if (local_10 == (undefined4 *)0x0) {
                (**(code **)(*local_2c + 0x24))();
                __chkesp();
                goto LAB_1001436a;
              }
              local_14 = local_2c[0x10];
              local_18 = local_8[0x10];
              DAT_101284b4 = uVar4 & 3;
              uVar5 = uVar4 >> 2;
              puVar8 = local_10;
              puVar9 = local_c;
              do {
                for (; uVar6 = DAT_101284b4, uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar9 = *puVar8;
                  puVar8 = puVar8 + -1;
                  puVar9 = puVar9 + -1;
                }
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                  puVar8 = (undefined4 *)((int)puVar8 + -1);
                  puVar9 = (undefined4 *)((int)puVar9 + -1);
                }
                puVar8 = (undefined4 *)((int)puVar8 - (local_18 - uVar4));
                puVar9 = (undefined4 *)((int)puVar9 - (local_14 - uVar4));
                iVar7 = iVar7 + -1;
                uVar5 = uVar4 >> 2;
              } while (iVar7 != 0);
            }
          }
          else {
            (**(code **)(*local_2c + 0x14))();
            local_c = (undefined4 *)__chkesp();
            if (local_c == (undefined4 *)0x0) goto LAB_1001436a;
            (**(code **)(*local_8 + 0x14))();
            local_10 = (undefined4 *)__chkesp();
            if (local_10 == (undefined4 *)0x0) {
              (**(code **)(*local_2c + 0x24))();
              __chkesp();
              goto LAB_1001436a;
            }
            local_14 = local_2c[0x10];
            local_18 = local_8[0x10];
            DAT_101284b4 = uVar4 & 3;
            uVar5 = uVar4 >> 2;
            puVar8 = local_10;
            puVar9 = local_c;
            do {
              for (; uVar6 = DAT_101284b4, uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              puVar8 = (undefined4 *)((int)puVar8 + (local_18 - uVar4));
              puVar9 = (undefined4 *)((int)puVar9 + (local_14 - uVar4));
              iVar7 = iVar7 + -1;
              uVar5 = uVar4 >> 2;
            } while (iVar7 != 0);
          }
          (**(code **)(*local_8 + 0x24))();
          __chkesp();
          (**(code **)(*local_2c + 0x24))();
          __chkesp();
        }
      }
    }
  }
LAB_1001436a:
  local_8 = (int *)0x10014377;
  __chkesp();
  return;
}


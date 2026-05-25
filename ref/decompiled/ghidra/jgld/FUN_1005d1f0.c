/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1005d1f0 @ 0x1005D1F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1005d1f0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  RECT *pRVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 local_bc [16];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar6 = local_bc;
  for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1005db64;
  if (*(int *)((int)this + 0x10) == 0) {
    local_34 = *(int **)(DAT_1012873c + 4);
  }
  else {
    local_34 = *(int **)((int)this + 0x10);
  }
  if (local_34 == (int *)0x0) goto LAB_1005db64;
  local_8 = this;
  local_64 = FUN_1007f370(DAT_10122dc0);
  _DAT_101285b8 = (float)local_64 / (float)DAT_10122dc8;
  local_68 = FUN_1007f370(DAT_10122dc4);
  _DAT_101285b4 = (float)local_68 / (float)DAT_10122dc8;
  *(uint *)((int)local_8 + 0x28) = (uint)*(byte *)((int)local_8 + 0x28);
  DAT_101285f4 = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_101285dc = __chkesp();
  DAT_101285ec = param_5;
  DAT_101285c8 = param_4;
  (**(code **)(*param_1 + 0xe4))();
  iVar5 = __chkesp();
  local_6c = *(int *)(iVar5 + 4);
  if (local_6c == 0) {
    (**(code **)(*local_34 + 0x18))();
    DAT_10128600 = __chkesp();
  }
  else {
    if (local_6c != 1) goto LAB_1005db64;
    (**(code **)(*local_34 + 0x1c))();
    DAT_10128600 = __chkesp();
  }
  iVar5 = FUN_1007f370(DAT_10122dc0);
  iVar3 = FUN_1007f370(DAT_10122dc8);
  if (iVar5 == iVar3) {
    iVar5 = FUN_1007f370(DAT_10122dc4);
    iVar3 = FUN_1007f370(DAT_10122dc8);
    if (iVar5 != iVar3) goto LAB_1005d74c;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    iVar5 = thunk_FUN_10008590(&local_18,&local_18,pRVar4);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005db64;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0x62,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0x60,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else if (DAT_10122dc4 < 0) {
      iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0x5c,0,&DAT_1011d528);
      if (iVar5 == 1) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x20))();
      iVar5 = __chkesp();
      local_2c = iVar5 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
      DAT_101285f0 = local_18.bottom - local_18.top;
      DAT_101285e4 = local_18.right - local_18.left;
      _DAT_101285bc = DAT_101285f4 - DAT_101285e4;
      _DAT_101285e0 = DAT_101285dc - DAT_101285e4;
      local_4c = local_18.left - local_28;
      local_50 = local_20 - local_18.right;
      local_48 = *(int *)((int)local_8 + 0x1c) + (local_18.top - local_24) * 4;
      for (local_38 = 0; local_38 < DAT_101285f0; local_38 = local_38 + 1) {
        local_54 = (*(int *)((int)local_8 + 0x30) - (uint)*(byte *)(local_48 + local_38 * 4)) -
                   (uint)*(byte *)(local_48 + 1 + local_38 * 4);
        if ((int)((uint)*(byte *)(local_48 + local_38 * 4) - local_4c) < 0) {
          local_70 = 0;
        }
        else {
          local_70 = (uint)*(byte *)(local_48 + local_38 * 4) - local_4c;
        }
        local_40 = local_70;
        if ((int)(local_4c - (uint)*(byte *)(local_48 + local_38 * 4)) < 0) {
          local_74 = 0;
        }
        else {
          local_74 = local_4c - (uint)*(byte *)(local_48 + local_38 * 4);
        }
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) +
                            (uint)*(ushort *)(local_48 + 2 + local_38 * 4) + local_74);
        if ((int)(local_4c - (uint)*(byte *)(local_48 + local_38 * 4)) < 0) {
          local_78 = 0;
        }
        else {
          local_78 = local_4c - (uint)*(byte *)(local_48 + local_38 * 4);
        }
        if (local_50 - local_54 < 0) {
          local_7c = 0;
        }
        else {
          local_7c = local_50 - local_54;
        }
        local_58 = ((uint)*(byte *)(local_48 + 1 + local_38 * 4) - local_78) - local_7c;
        for (local_3c = 0; local_3c < local_58; local_3c = local_3c + 1) {
          bVar1 = *local_30;
          _local_44 = CONCAT31(uStack_43,bVar1);
          if (bVar1 != 0xff) {
            if (bVar1 < 0xf8) {
              *(undefined2 *)(local_2c + local_40 * 2) =
                   *(undefined2 *)
                    (DAT_101285c8 + (uint)*(ushort *)(DAT_10128600 + (uint)bVar1 * 2) * 2);
            }
            else {
              *(undefined2 *)(local_2c + local_40 * 2) =
                   *(undefined2 *)(DAT_101285ec + (uint)*(ushort *)(local_2c + local_3c * 2) * 2);
            }
          }
          local_40 = local_40 + 1;
          local_30 = local_30 + 1;
        }
        local_2c = local_2c + DAT_101285dc * 2;
      }
    }
  }
  else {
LAB_1005d74c:
    lVar7 = __ftol();
    iVar5 = (int)lVar7;
    lVar7 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2,param_3,(int)lVar7,iVar5);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    iVar5 = thunk_FUN_10008590(&local_18,&local_18,pRVar4);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005db64;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar5 = __chkesp();
    local_2c = iVar5 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
    (**(code **)(*param_1 + 0xe0))();
    DAT_101285dc = __chkesp();
    DAT_101285e4 = local_18.right - local_18.left;
    DAT_101285f0 = local_18.bottom - local_18.top;
    _DAT_101285e0 = (DAT_101285dc - DAT_101285e4) * 2;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc0);
    DAT_101285fc = iVar3 / iVar5;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc4);
    DAT_101285c0 = iVar3 / iVar5;
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0xaf,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0xad,0,&DAT_1011d528);
        if (iVar5 == 1) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else if (DAT_10122dc4 < 0) {
      iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e50 + 0xa9,0,&DAT_1011d528);
      if (iVar5 == 1) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x20))();
      iVar5 = __chkesp();
      local_2c = iVar5 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
      DAT_101285f0 = local_18.bottom - local_18.top;
      DAT_101285e4 = local_18.right - local_18.left;
      local_4c = local_18.left - local_28;
      DAT_101285d8 = DAT_101285c0 * (local_18.top - local_24);
      local_48 = *(int *)((int)local_8 + 0x1c);
      for (local_38 = 0; local_38 < DAT_101285f0; local_38 = local_38 + 1) {
        local_5c = DAT_101285d8 >> 0x10;
        if (*(char *)(local_48 + 1 + local_5c * 4) != '\0') {
          DAT_101285d4 = local_4c * DAT_101285fc;
          local_30 = (byte *)(*(int *)((int)local_8 + 0x14) +
                             (uint)*(ushort *)(local_48 + 2 + local_5c * 4));
          for (local_3c = 0; local_3c < DAT_101285e4; local_3c = local_3c + 1) {
            local_60 = (DAT_101285d4 >> 0x10) - (uint)*(byte *)(local_48 + local_5c * 4);
            if (local_60 < 0) {
              DAT_101285d4 = DAT_101285d4 + DAT_101285fc;
            }
            else {
              if ((int)(uint)*(byte *)(local_48 + 1 + local_5c * 4) < local_60) break;
              bVar1 = local_30[local_60];
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (bVar1 != 0xff) {
                if (bVar1 < 0xf8) {
                  *(undefined2 *)(local_2c + local_3c * 2) =
                       *(undefined2 *)
                        (DAT_101285c8 + (uint)*(ushort *)(DAT_10128600 + (uint)bVar1 * 2) * 2);
                }
                else {
                  *(undefined2 *)(local_2c + local_3c * 2) =
                       *(undefined2 *)
                        (DAT_101285ec + (uint)*(ushort *)(local_2c + local_3c * 2) * 2);
                }
              }
              DAT_101285d4 = DAT_101285d4 + DAT_101285fc;
            }
          }
          DAT_101285d8 = DAT_101285d8 + DAT_101285c0;
          local_2c = local_2c + DAT_101285dc * 2;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x24))(1);
  __chkesp();
LAB_1005db64:
  local_8 = (void *)0x1005db74;
  __chkesp();
  return;
}


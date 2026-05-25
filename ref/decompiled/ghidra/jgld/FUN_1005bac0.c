/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1005bac0 @ 0x1005BAC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005bac0(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
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
  char local_44;
  undefined3 uStack_43;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar5 = local_bc;
  for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1005c3a3;
  if (*(int *)((int)this + 0x10) == 0) {
    local_34 = *(int **)(DAT_1012873c + 4);
  }
  else {
    local_34 = *(int **)((int)this + 0x10);
  }
  if (local_34 == (int *)0x0) goto LAB_1005c3a3;
  local_8 = this;
  local_64 = FUN_1007f370(DAT_10122dc0);
  _DAT_101285b8 = (float)local_64 / (float)DAT_10122dc8;
  local_68 = FUN_1007f370(DAT_10122dc4);
  _DAT_101285b4 = (float)local_68 / (float)DAT_10122dc8;
  *(uint *)((int)local_8 + 0x28) = (uint)*(byte *)((int)local_8 + 0x28);
  DAT_101285f4 = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_101285dc = __chkesp();
  (**(code **)(*param_1 + 0xe4))();
  iVar4 = __chkesp();
  local_6c = *(int *)(iVar4 + 4);
  if (local_6c == 0) {
    (**(code **)(*local_34 + 0x18))();
    iVar4 = __chkesp();
    DAT_101285a8 = *(undefined2 *)(iVar4 + (param_4 & 0xff) * 2);
  }
  else {
    if (local_6c != 1) goto LAB_1005c3a3;
    (**(code **)(*local_34 + 0x1c))();
    iVar4 = __chkesp();
    DAT_101285a8 = *(undefined2 *)(iVar4 + (param_4 & 0xff) * 2);
  }
  iVar4 = FUN_1007f370(DAT_10122dc0);
  iVar2 = FUN_1007f370(DAT_10122dc8);
  if (iVar4 == iVar2) {
    iVar4 = FUN_1007f370(DAT_10122dc4);
    iVar2 = FUN_1007f370(DAT_10122dc8);
    if (iVar4 != iVar2) goto LAB_1005bfd8;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_18,&local_18,pRVar3);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005c3a3;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0x5b,0,&DAT_1011d528);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0x59,0,&DAT_1011d528);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (DAT_10122dc4 < 0) {
      iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0x55,0,&DAT_1011d528);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x20))();
      iVar4 = __chkesp();
      local_2c = iVar4 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
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
        local_30 = (char *)(*(int *)((int)local_8 + 0x14) +
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
          _local_44 = CONCAT31(uStack_43,*local_30);
          if (*local_30 != -1) {
            *(undefined2 *)(local_2c + local_40 * 2) = DAT_101285a8;
          }
          local_40 = local_40 + 1;
          local_30 = local_30 + 1;
        }
        local_2c = local_2c + DAT_101285dc * 2;
      }
    }
  }
  else {
LAB_1005bfd8:
    lVar6 = __ftol();
    iVar4 = (int)lVar6;
    lVar6 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2,param_3,(int)lVar6,iVar4);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_18,&local_18,pRVar3);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005c3a3;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar4 = __chkesp();
    local_2c = iVar4 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
    (**(code **)(*param_1 + 0xe0))();
    DAT_101285dc = __chkesp();
    DAT_101285e4 = local_18.right - local_18.left;
    DAT_101285f0 = local_18.bottom - local_18.top;
    _DAT_101285e0 = (DAT_101285dc - DAT_101285e4) * 2;
    iVar2 = DAT_10122dc8 << 0x10;
    iVar4 = FUN_1007f370(DAT_10122dc0);
    DAT_101285fc = iVar2 / iVar4;
    iVar2 = DAT_10122dc8 << 0x10;
    iVar4 = FUN_1007f370(DAT_10122dc4);
    DAT_101285c0 = iVar2 / iVar4;
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0xa3,0,&DAT_1011d528);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0xa1,0,&DAT_1011d528);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (DAT_10122dc4 < 0) {
      iVar4 = FUN_10081f90(0,0x1011d610,DAT_10122e48 + 0x9d,0,&DAT_1011d528);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x20))();
      iVar4 = __chkesp();
      local_2c = iVar4 + local_18.left * 2 + local_18.top * DAT_101285dc * 2;
      DAT_101285f0 = local_18.bottom - local_18.top;
      DAT_101285e4 = local_18.right - local_18.left;
      local_4c = local_18.left - local_28;
      DAT_101285d8 = DAT_101285c0 * (local_18.top - local_24);
      local_48 = *(int *)((int)local_8 + 0x1c);
      for (local_38 = 0; local_38 < DAT_101285f0; local_38 = local_38 + 1) {
        local_5c = DAT_101285d8 >> 0x10;
        if (*(char *)(local_48 + 1 + local_5c * 4) != '\0') {
          DAT_101285d4 = local_4c * DAT_101285fc;
          local_30 = (char *)(*(int *)((int)local_8 + 0x14) +
                             (uint)*(ushort *)(local_48 + 2 + local_5c * 4));
          for (local_3c = 0; local_3c < DAT_101285e4; local_3c = local_3c + 1) {
            local_60 = (DAT_101285d4 >> 0x10) - (uint)*(byte *)(local_48 + local_5c * 4);
            if (local_60 < 0) {
              DAT_101285d4 = DAT_101285d4 + DAT_101285fc;
            }
            else {
              if ((int)(uint)*(byte *)(local_48 + 1 + local_5c * 4) < local_60) break;
              _local_44 = CONCAT31(uStack_43,local_30[local_60]);
              if (local_30[local_60] != -1) {
                *(undefined2 *)(local_2c + local_3c * 2) = DAT_101285a8;
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
LAB_1005c3a3:
  local_8 = (void *)0x1005c3b3;
  __chkesp();
  return;
}


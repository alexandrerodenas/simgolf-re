/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1005a000 @ 0x1005A000 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1005a000(void *this,int *param_1,int param_2,int param_3,int *param_4,byte param_5,
            undefined2 param_6)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  RECT *pRVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_b8 [16];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte local_48;
  undefined3 uStack_47;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar6 = local_b8;
  for (iVar5 = 0x2d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if (((*(int *)((int)this + 0x14) != 0) && (param_1 != (int *)0x0)) && (param_4 != (int *)0x0)) {
    if (*(int *)((int)this + 0x10) == 0) {
      local_38 = *(int **)(DAT_1012873c + 4);
    }
    else {
      local_38 = *(int **)((int)this + 0x10);
    }
    if (local_38 != (int *)0x0) {
      local_8 = this;
      local_60 = FUN_1007f370(DAT_10122dc0);
      _DAT_101285b8 = (float)local_60 / (float)DAT_10122dc8;
      local_64 = FUN_1007f370(DAT_10122dc4);
      _DAT_101285b4 = (float)local_64 / (float)DAT_10122dc8;
      *(uint *)((int)local_8 + 0x28) = (uint)*(byte *)((int)local_8 + 0x28);
      DAT_101285f4 = *(int *)((int)local_8 + 0x2c);
      (**(code **)(*param_1 + 0xe0))();
      DAT_101285dc = __chkesp();
      (**(code **)(*param_4 + 0xe0))();
      DAT_101285b0 = __chkesp();
      (**(code **)(*param_1 + 0xe4))();
      iVar5 = __chkesp();
      local_68 = *(int *)(iVar5 + 4);
      if (local_68 == 0) {
        (**(code **)(*local_38 + 0x18))();
        DAT_10128600 = __chkesp();
      }
      else {
        if (local_68 != 1) goto LAB_1005a5f7;
        (**(code **)(*local_38 + 0x1c))();
        DAT_10128600 = __chkesp();
      }
      iVar5 = FUN_1007f370(DAT_10122dc0);
      iVar3 = FUN_1007f370(DAT_10122dc8);
      if (iVar5 == iVar3) {
        iVar5 = FUN_1007f370(DAT_10122dc4);
        iVar3 = FUN_1007f370(DAT_10122dc8);
        if (iVar5 == iVar3) {
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
            (**(code **)(*param_4 + 0x24))(1);
            __chkesp();
            (**(code **)(*param_1 + 0x24))(1);
            __chkesp();
            goto LAB_1005a5f7;
          }
          if (DAT_10122dc0 < 0) {
            if (DAT_10122dc4 < 0) {
              iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e3c + 0x69,0,&DAT_1011d528);
              if (iVar5 == 1) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e3c + 0x67,0,&DAT_1011d528);
              if (iVar5 == 1) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          else if (DAT_10122dc4 < 0) {
            iVar5 = FUN_10081f90(0,0x1011d610,DAT_10122e3c + 99,0,&DAT_1011d528);
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
            (**(code **)(*param_4 + 0x18))();
            iVar5 = __chkesp();
            local_30 = iVar5 + local_18.left + local_18.top * DAT_101285b0;
            DAT_101285f0 = local_18.bottom - local_18.top;
            DAT_101285e4 = local_18.right - local_18.left;
            _DAT_101285bc = DAT_101285f4 - DAT_101285e4;
            _DAT_101285e0 = DAT_101285dc - DAT_101285e4;
            _DAT_101285ac = DAT_101285b0 - DAT_101285e4;
            local_50 = local_18.left - local_28;
            local_54 = local_20 - local_18.right;
            local_4c = *(int *)((int)local_8 + 0x1c) + (local_18.top - local_24) * 4;
            for (local_3c = 0; local_3c < DAT_101285f0; local_3c = local_3c + 1) {
              local_58 = (*(int *)((int)local_8 + 0x30) - (uint)*(byte *)(local_4c + local_3c * 4))
                         - (uint)*(byte *)(local_4c + 1 + local_3c * 4);
              if ((int)((uint)*(byte *)(local_4c + local_3c * 4) - local_50) < 0) {
                local_6c = 0;
              }
              else {
                local_6c = (uint)*(byte *)(local_4c + local_3c * 4) - local_50;
              }
              local_44 = local_6c;
              if ((int)(local_50 - (uint)*(byte *)(local_4c + local_3c * 4)) < 0) {
                local_70 = 0;
              }
              else {
                local_70 = local_50 - (uint)*(byte *)(local_4c + local_3c * 4);
              }
              local_34 = (byte *)(*(int *)((int)local_8 + 0x14) +
                                  (uint)*(ushort *)(local_4c + 2 + local_3c * 4) + local_70);
              if ((int)(local_50 - (uint)*(byte *)(local_4c + local_3c * 4)) < 0) {
                local_74 = 0;
              }
              else {
                local_74 = local_50 - (uint)*(byte *)(local_4c + local_3c * 4);
              }
              if (local_54 - local_58 < 0) {
                local_78 = 0;
              }
              else {
                local_78 = local_54 - local_58;
              }
              local_5c = ((uint)*(byte *)(local_4c + 1 + local_3c * 4) - local_74) - local_78;
              for (local_40 = 0; local_40 < local_5c; local_40 = local_40 + 1) {
                bVar1 = *local_34;
                _local_48 = CONCAT31(uStack_47,bVar1);
                if (bVar1 != 0xff) {
                  if (param_5 < *(byte *)(local_30 + local_44)) {
                    if (bVar1 != 0xfe) {
                      *(undefined2 *)(local_2c + local_44 * 2) =
                           *(undefined2 *)(DAT_10128600 + (uint)bVar1 * 2);
                    }
                  }
                  else if (bVar1 == 0xfe) {
                    *(undefined2 *)(local_2c + local_44 * 2) = param_6;
                  }
                }
                local_44 = local_44 + 1;
                local_34 = local_34 + 1;
              }
              local_2c = local_2c + DAT_101285dc * 2;
              local_30 = local_30 + DAT_101285dc;
            }
          }
        }
      }
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      (**(code **)(*param_4 + 0x24))(1);
      __chkesp();
    }
  }
LAB_1005a5f7:
  local_8 = (void *)0x1005a607;
  __chkesp();
  return;
}


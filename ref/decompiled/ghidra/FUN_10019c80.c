/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10019c80 @ 0x10019C80 */
/* Body size: 893 addresses */


void FUN_10019c80(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_78 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ushort local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar7 = local_78;
  for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  local_10 = 0;
  local_14 = 0;
  (**(code **)(*param_2 + 0xd8))();
  iVar6 = __chkesp();
  (**(code **)(*param_2 + 0xdc))();
  iVar2 = __chkesp();
  (**(code **)(*param_2 + 0xd8))();
  iVar3 = __chkesp();
  local_20 = iVar6 * iVar2 - (param_3 + iVar3 * param_4);
  (**(code **)(*param_2 + 0xe4))();
  piVar4 = (int *)__chkesp();
  if (*piVar4 == 0x10) {
    (**(code **)(*local_8 + 0x28))();
    iVar6 = __chkesp();
    if (iVar6 == 8) {
      (**(code **)(*param_1 + 0x28))();
      iVar6 = __chkesp();
      if (iVar6 == 8) {
        (**(code **)(*param_2 + 0xd8))();
        local_24 = __chkesp();
        local_24 = local_24 - local_8[0xc];
        (**(code **)(*local_8 + 0x20))();
        local_28 = __chkesp();
        (**(code **)(*param_1 + 0x20))();
        local_2c = __chkesp();
        (**(code **)(*param_2 + 0xc))(param_3,param_4);
        local_30 = __chkesp();
        local_c = local_8[4];
        if (param_5 != 0) {
          local_8[4] = param_5;
        }
        for (local_34 = 0; local_34 < local_8[0xd]; local_34 = local_34 + 1) {
          for (local_38 = 0; local_38 < local_8[0xc]; local_38 = local_38 + 1) {
            if (local_20 < local_10) goto LAB_10019fea;
            if (*(char *)(local_28 + local_14) != -1) {
              (**(code **)(*(int *)local_8[4] + 0x20))(*(undefined1 *)(local_28 + local_14));
              local_18 = __chkesp();
              uVar5 = (ushort)*(byte *)(local_2c + local_14);
              _local_1c = CONCAT22(uStack_1a,uVar5);
              if (uVar5 == 0) {
                uVar1 = thunk_FUN_1000a660();
                *(undefined2 *)(local_30 + local_10 * 2) = uVar1;
              }
              else if (uVar5 == 0xff) goto LAB_10019e0a;
              _local_1c = CONCAT22(uStack_1a,local_1c + 1);
              thunk_FUN_1000e540((uint)*(ushort *)(local_30 + local_10 * 2));
              thunk_FUN_1000e4c0();
              thunk_FUN_1000e440();
              uVar1 = thunk_FUN_1000a660();
              *(undefined2 *)(local_30 + local_10 * 2) = uVar1;
            }
LAB_10019e0a:
            local_14 = local_14 + 1;
            local_10 = local_10 + 1;
          }
          local_10 = local_10 + local_24;
        }
      }
    }
  }
LAB_10019fea:
  local_8 = (int *)0x10019ff7;
  __chkesp();
  return;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0d70 @ 0x004B0D70 */


undefined4 FUN_004b0d70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *local_30;
  int *piStack_2c;
  int *local_28;
  int iStack_24;
  int local_20;
  int local_10 [4];
  
  iVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < *(int *)(param_1 + 0xec)) {
    local_28 = local_10;
    local_30 = (int *)(param_1 + 0xf0);
    do {
      iVar3 = *(int *)(*local_30 + 0xc);
      iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x40 + *(int *)(*local_30 + 4) * 4),
                         *(int *)(iVar1 + 8) * iVar3,iVar3,0);
      iVar8 = iVar8 + 1;
      *local_28 = iVar3;
      local_30 = local_30 + 1;
      local_28 = local_28 + 1;
    } while (iVar8 < *(int *)(param_1 + 0xec));
  }
  iVar8 = *(int *)(iVar1 + 0x10);
  if (iVar8 < *(int *)(iVar1 + 0x14)) {
    do {
      uVar10 = *(uint *)(iVar1 + 0xc);
      if (uVar10 < *(uint *)(param_1 + 0x100)) {
        do {
          iVar3 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0xec)) {
            local_28 = local_10;
            piStack_2c = (int *)(param_1 + 0xf0);
            do {
              iStack_24 = 0;
              iVar2 = *piStack_2c;
              iVar6 = *(int *)(iVar2 + 0x34);
              iVar4 = iVar6 * uVar10;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar9 = (int *)(*local_28 + iVar8 * 4);
                do {
                  iVar5 = *piVar9 + iVar4 * 0x80;
                  iVar7 = 0;
                  if (0 < iVar6) {
                    piVar11 = (int *)(iVar1 + 0x18 + iVar3 * 4);
                    do {
                      *piVar11 = iVar5;
                      iVar6 = *(int *)(iVar2 + 0x34);
                      iVar3 = iVar3 + 1;
                      piVar11 = piVar11 + 1;
                      iVar5 = iVar5 + 0x80;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < iVar6);
                  }
                  iStack_24 = iStack_24 + 1;
                  piVar9 = piVar9 + 1;
                } while (iStack_24 < *(int *)(iVar2 + 0x38));
              }
              piStack_2c = piStack_2c + 1;
              local_28 = local_28 + 1;
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)(param_1 + 0xec));
          }
          iVar3 = (**(code **)(*(int *)(param_1 + 0x164) + 4))(param_1,iVar1 + 0x18);
          if (iVar3 == 0) {
            *(uint *)(iVar1 + 0xc) = uVar10;
            *(int *)(iVar1 + 0x10) = iVar8;
            return 0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x100));
      }
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    } while (iVar8 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  FUN_004b0860(param_1);
  return 1;
}


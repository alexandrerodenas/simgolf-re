/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a3880 @ 0x004A3880 */
/* Body size: 852 addresses */


int __thiscall FUN_004a3880(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  int local_8;
  
  if (param_2 == 0) {
    return 3;
  }
  piVar1 = (int *)(param_1 + -0x658);
  FUN_004a3be0();
  *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x630 + param_1) = param_3;
  *(int *)(*(int *)(*piVar1 + 8) + -0x62c + param_1) = param_4;
  if ((*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
    param_5 = param_5 | 0x100000;
  }
  iVar2 = *(int *)(*piVar1 + 8) + param_1;
  iVar2 = FUN_004806c0(param_3,param_4,*(undefined4 *)(iVar2 + -0x5f8),
                       *(undefined4 *)(iVar2 + -0x5f4),0,param_5,param_2,0,0);
  if (iVar2 == 0) {
    FUN_00492920(*(undefined4 *)(param_1 + -0x5d0));
    local_10 = 0;
    iVar8 = *(int *)(*(int *)(*piVar1 + 8) + -0x5ec + param_1);
    uVar3 = iVar8 - *(int *)(param_1 + -0x5ac);
    uVar7 = (int)uVar3 >> 0x1f;
    local_8 = *(int *)(param_1 + -0x5b0);
    iVar4 = (int)((uVar3 ^ uVar7) - uVar7) >> 1;
    iVar8 = iVar8 + iVar4;
    iVar2 = *(int *)(param_1 + -0x5d0) + -1;
    if (-2 < iVar2) {
      *(undefined4 *)(param_1 + -0x5d4) = *(undefined4 *)(param_1 + -0x5d8);
      iVar5 = 1;
      if (0 < *(int *)(param_1 + -0x5d0)) {
        do {
          iVar5 = iVar5 + -1;
          *(undefined4 *)(param_1 + -0x5d4) = *(undefined4 *)(*(int *)(param_1 + -0x5d4) + 0x10);
        } while (iVar5 != 0);
        *(int *)(param_1 + -0x5cc) = iVar2;
      }
    }
    param_4 = 0;
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    if (0 < *(int *)(*(int *)(*piVar1 + 8) + -0x600 + param_1)) {
      do {
        param_5 = 0;
        if (0 < *(int *)(iVar2 + -0x5fc)) {
          do {
            if (*(int *)(param_1 + -0x5d8) == 0) {
              uVar6 = 0;
            }
            else {
              *(undefined4 *)(param_1 + -0x5d4) = *(undefined4 *)(*(int *)(param_1 + -0x5d4) + 0xc);
              iVar2 = *(int *)(param_1 + -0x5cc) + 1;
              *(int *)(param_1 + -0x5cc) = iVar2;
              if (iVar2 == *(int *)(param_1 + -0x5d0)) {
                *(undefined4 *)(param_1 + -0x5cc) = 0;
              }
              uVar6 = *(undefined4 *)(*(int *)(param_1 + -0x5d4) + 4);
            }
            FUN_004929b0(uVar6,0,local_10,iVar4,local_8 - local_10,iVar8 - iVar4,0);
            iVar2 = *(int *)(*(int *)(*piVar1 + 8) + -0x5ec + param_1);
            iVar4 = iVar4 + iVar2;
            iVar8 = iVar8 + iVar2;
          } while ((*(int *)(param_1 + -0x5cc) != *(int *)(param_1 + -0x5d0) + -1) &&
                  (param_5 = param_5 + 1,
                  (int)param_5 < *(int *)(*(int *)(*piVar1 + 8) + param_1 + -0x5fc)));
        }
        if (*(int *)(param_1 + -0x5cc) == *(int *)(param_1 + -0x5d0) + -1) break;
        iVar8 = *(int *)(param_1 + -0x5ac);
        iVar2 = *(int *)(*piVar1 + 8) + param_1;
        uVar3 = *(int *)(*(int *)(*piVar1 + 8) + -0x5ec + param_1) - iVar8;
        uVar7 = (int)uVar3 >> 0x1f;
        iVar4 = *(int *)(iVar2 + -0x610) + *(int *)(iVar2 + -0x5f0);
        local_10 = local_10 + iVar4;
        local_8 = local_8 + iVar4;
        iVar4 = (int)((uVar3 ^ uVar7) - uVar7) >> 1;
        param_4 = param_4 + 1;
      } while (param_4 < *(int *)(iVar2 + -0x600));
    }
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476310(*(undefined4 *)(iVar2 + -0x5d8),*(undefined4 *)(iVar2 + -0x5cc),
                 *(undefined4 *)(iVar2 + -0x5c0),*(undefined4 *)(iVar2 + -0x5b4));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476340(*(undefined4 *)(iVar2 + -0x5d4),*(undefined4 *)(iVar2 + -0x5c8),
                 *(undefined4 *)(iVar2 + -0x5bc),*(undefined4 *)(iVar2 + -0x5b0));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476370(*(undefined4 *)(iVar2 + -0x5d0),*(undefined4 *)(iVar2 + -0x5c4),
                 *(undefined4 *)(iVar2 + -0x5b8),*(undefined4 *)(iVar2 + -0x5ac));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_004762d0(*(undefined4 *)(iVar2 + -0x5e4),*(undefined4 *)(iVar2 + -0x5e0),
                 *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x5dc + param_1),0);
    iVar2 = 0;
  }
  return iVar2;
}


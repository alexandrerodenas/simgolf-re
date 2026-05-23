/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048a5d0 @ 0x0048A5D0 */
/* Body size: 998 addresses */


int __thiscall
FUN_0048a5d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 3;
  }
  param_5 = param_5 & 0xfffffff3;
  uVar3 = param_5 | 0x20;
  *(uint *)(*(int *)(*(int *)(param_1 + -0x5d0) + 4) + -0x534 + param_1) = uVar3;
  iVar2 = FUN_0048a120();
  if (iVar2 != 0) {
    if (iVar2 != 7) {
      return iVar2;
    }
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8);
    *(undefined4 *)(iVar2 + param_1 + -0x570) = *(undefined4 *)(iVar2 + -0x5a0 + param_1);
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8);
    *(undefined4 *)(iVar2 + param_1 + -0x56c) = *(undefined4 *)(iVar2 + -0x59c + param_1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x578 + param_1) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x574 + param_1) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x5a8 + param_1) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x5a4 + param_1) = param_4;
  if (*(int *)(param_1 + -0x5a8) < *(int *)(param_1 + -0x5a4)) {
    if (*(int *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x578 + param_1) < 2) {
      uVar3 = param_5 | 0x28;
    }
    else {
      uVar3 = param_5 | 0x24;
    }
  }
  if ((*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
    uVar3 = uVar3 | 0x100000;
  }
  if ((uVar3 & 0x40) != 0) {
    uVar3 = uVar3 | 0x800;
  }
  iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
  iVar2 = FUN_004806c0(param_3,param_4,*(undefined4 *)(iVar2 + -0x570),
                       *(undefined4 *)(iVar2 + -0x56c),0,uVar3,param_2,0,0);
  if (iVar2 == 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 4) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8);
        FUN_0047ba50(0,*(int *)(iVar2 + -0x500 + param_1) / *(int *)(iVar2 + param_1 + -0x574) + -1)
        ;
        FUN_0047ba90(*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x578 + param_1));
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
      FUN_0047ba30(0,*(int *)(iVar2 + -0x500) - *(int *)(iVar2 + -0x574));
      FUN_0047ba70(*(int *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x574 + param_1) + -1);
    }
    iVar4 = *(int *)(*(int *)(param_1 + -0x5d0) + 8);
    iVar2 = iVar4 + param_1;
    if (*(int *)(iVar4 + -0x500 + param_1) == 0) {
      *(undefined4 *)(param_1 + -0x5ac) = 0;
    }
    else if (*(int *)(param_1 + -0x5a8) + *(int *)(param_1 + -0x5ac) <= *(int *)(iVar2 + -0x4e0)) {
      do {
        if (*(int *)(iVar2 + -0x578) < 2) {
          iVar4 = 1;
        }
        else {
          iVar4 = *(int *)(iVar2 + -0x574);
        }
        iVar4 = *(int *)(param_1 + -0x5ac) + iVar4;
        *(int *)(param_1 + -0x5ac) = iVar4;
        iVar1 = *(int *)(*(int *)(param_1 + -0x5d0) + 8);
        iVar2 = iVar1 + param_1;
      } while (iVar4 + *(int *)(param_1 + -0x5a8) <= *(int *)(iVar1 + -0x4e0 + param_1));
    }
    if (*(int *)(param_1 + -0x5a8) < *(int *)(param_1 + -0x5a4)) {
      if (*(int *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x578 + param_1) < 2) {
        FUN_0047b9f0(*(undefined4 *)(param_1 + -0x5ac));
      }
      else {
        FUN_0047ba10(*(undefined4 *)(param_1 + -0x5ac));
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
    FUN_00476310(*(undefined4 *)(iVar2 + -0x550),*(undefined4 *)(iVar2 + -0x544),
                 *(undefined4 *)(iVar2 + -0x538),*(undefined4 *)(iVar2 + -0x52c));
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
    FUN_00476340(*(undefined4 *)(iVar2 + -0x54c),*(undefined4 *)(iVar2 + -0x540),
                 *(undefined4 *)(iVar2 + -0x534),*(undefined4 *)(iVar2 + -0x528));
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
    FUN_00476370(*(undefined4 *)(iVar2 + -0x548),*(undefined4 *)(iVar2 + -0x53c),
                 *(undefined4 *)(iVar2 + -0x530),*(undefined4 *)(iVar2 + -0x524));
    iVar2 = *(int *)(*(int *)(param_1 + -0x5d0) + 8) + param_1;
    FUN_004762d0(*(undefined4 *)(iVar2 + -0x55c),*(undefined4 *)(iVar2 + -0x558),
                 *(undefined4 *)(iVar2 + -0x554),0);
    FUN_0047b9f0(*(undefined4 *)(param_1 + -0x5ac));
    FUN_0047ba10(*(int *)(param_1 + -0x5ac) /
                 *(int *)(*(int *)(*(int *)(param_1 + -0x5d0) + 8) + -0x578 + param_1));
    iVar2 = 0;
  }
  return iVar2;
}


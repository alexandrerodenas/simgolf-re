/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ed20 @ 0x0049ED20 */


int __thiscall
FUN_0049ed20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 3;
  }
  piVar1 = (int *)(param_1 + -0x594);
  FUN_0049f050();
  *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x56c + param_1) = param_3;
  *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x568 + param_1) = param_4;
  if ((*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
    param_5 = param_5 | 0x100000;
  }
  iVar2 = *(int *)(*piVar1 + 8) + param_1;
  iVar2 = FUN_004806c0(param_3,param_4,*(undefined4 *)(iVar2 + -0x534),
                       *(undefined4 *)(iVar2 + -0x530),0,param_5,param_2,0,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476310(*(undefined4 *)(iVar2 + -0x514),*(undefined4 *)(iVar2 + -0x508),
                 *(undefined4 *)(iVar2 + -0x4fc),*(undefined4 *)(iVar2 + -0x4f0));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476340(*(undefined4 *)(iVar2 + -0x510),*(undefined4 *)(iVar2 + -0x504),
                 *(undefined4 *)(iVar2 + -0x4f8),*(undefined4 *)(iVar2 + -0x4ec));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_00476370(*(undefined4 *)(iVar2 + -0x50c),*(undefined4 *)(iVar2 + -0x500),
                 *(undefined4 *)(iVar2 + -0x4f4),*(undefined4 *)(iVar2 + -0x4e8));
    iVar2 = *(int *)(*piVar1 + 8) + param_1;
    FUN_004762d0(*(undefined4 *)(iVar2 + -0x520),*(undefined4 *)(iVar2 + -0x51c),
                 *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x518 + param_1),0);
    iVar2 = 0;
  }
  return iVar2;
}


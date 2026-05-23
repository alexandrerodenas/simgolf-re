/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d6d0 @ 0x0049D6D0 */
/* Body size: 157 addresses */


int __thiscall
FUN_0049d6d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 3;
  }
  piVar1 = (int *)(param_1 + -0x59c);
  iVar2 = FUN_0049d770();
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x574 + param_1) = param_3;
    *(undefined4 *)(*(int *)(*piVar1 + 8) + -0x570 + param_1) = param_4;
    if ((*(uint *)(param_2 + 0x9c) & 0x1000) == 0) {
      param_5 = param_5 | 0x100000;
    }
    param_1 = *(int *)(*piVar1 + 8) + param_1;
    iVar2 = FUN_004806c0(param_3,param_4,*(undefined4 *)(param_1 + -0x53c),
                         *(undefined4 *)(param_1 + -0x538),0,param_5,param_2,0,0);
  }
  return iVar2;
}


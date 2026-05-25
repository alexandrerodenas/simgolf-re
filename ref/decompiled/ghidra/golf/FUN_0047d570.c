/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d570 @ 0x0047D570 */


void __fastcall FUN_0047d570(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x194);
  iVar4 = ((((*(int *)(param_1 + 0x1c4) + iVar1 * -2) - *(int *)(param_1 + 0x1bc)) -
           *(int *)(param_1 + 0x184)) - *(int *)(param_1 + 0x180)) + -2;
  if (*(int *)(param_1 + 0x158) != 0) {
    FUN_0047b420(iVar4,iVar1);
    piVar2 = *(int **)(*(int *)(param_1 + 0x158) + 0x278);
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0xd8))();
    }
    iVar4 = iVar4 + (-3 - iVar3);
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_0047b420(iVar4,iVar1);
  }
  if (*(int *)(param_1 + 0x150) != 0) {
    FUN_0047b420(iVar4,iVar1);
  }
  return;
}


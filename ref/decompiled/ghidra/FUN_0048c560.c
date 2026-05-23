/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c560 @ 0x0048C560 */
/* Body size: 170 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048c560(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (*(int *)(param_1 + -8) != 0) {
    uVar3 = FUN_00489950();
    (**(code **)(param_1 + -8))(uVar3);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    uVar3 = FUN_00489950();
    (**(code **)(iVar2 + 0x108))(uVar3);
    iVar2 = **(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
    uVar3 = FUN_00489950(DAT_0083b654);
    (**(code **)(iVar2 + 0x104))(uVar3);
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1) + 0x98);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))();
    }
  }
  return;
}


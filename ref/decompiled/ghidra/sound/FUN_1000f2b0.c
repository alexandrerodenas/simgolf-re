/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f2b0 @ 0x1000F2B0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f2b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = 0x7f;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x188);
  }
  uVar6 = 0;
  uVar4 = __ftol();
  uStack00000004 = (undefined4)uVar4;
  uStack00000008 = 0;
  if ((double)(uVar4 & 0xffffffff) == _DAT_1005b498) {
    uVar3 = 0xffffd8f0;
  }
  else {
    lVar5 = __ftol();
    uVar3 = (undefined4)lVar5;
  }
  piVar1 = *(int **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,uVar3,uVar2,uVar6);
  }
  return;
}


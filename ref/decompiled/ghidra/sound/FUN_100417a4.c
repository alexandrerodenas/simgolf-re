/* Ghidra decompiled: sound.dll */
/* Function: FUN_100417a4 @ 0x100417A4 */
/* Body size: 116 addresses */


undefined4 __fastcall FUN_100417a4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_10041e59((LPCRITICAL_SECTION)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
  }
  iVar1 = *(int *)(*param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 8 + (int)param_1);
  if (uVar2 != 0) {
    *(uint *)((int)param_1 + iVar1 + 8) = uVar2 | 2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
      FUN_10041e64((LPCRITICAL_SECTION)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
    }
    return 0;
  }
  piVar3 = *(int **)((int)param_1 + iVar1 + 0x20);
  if (piVar3 != (int *)0x0) {
    FUN_100418f1(piVar3);
  }
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_10041e59((LPCRITICAL_SECTION)(iVar1 + 0x34));
  }
  return 1;
}


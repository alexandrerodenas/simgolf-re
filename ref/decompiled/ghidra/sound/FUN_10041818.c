/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041818 @ 0x10041818 */
/* Body size: 176 addresses */


void __fastcall FUN_10041818(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1) = 0;
  if ((*(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 0x25) & 0x20) != 0) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4) + 4))();
    if (iVar2 == -1) {
      *(undefined4 *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) = 6;
    }
  }
  if ((*(byte *)(*(int *)(*param_1 + 4) + 0x25 + (int)param_1) & 0x40) != 0) {
    iVar2 = FUN_1004346b((int *)&DAT_10064f28);
    if (iVar2 == -1) {
      puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
      *puVar1 = *puVar1 | 2;
    }
    iVar2 = FUN_1004346b((int *)&DAT_10064f48);
    if (iVar2 == -1) {
      puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
      *puVar1 = *puVar1 | 2;
    }
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar2 + 0x30) < 0) {
    FUN_10041e64((LPCRITICAL_SECTION)(iVar2 + 0x34));
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_10041e64((LPCRITICAL_SECTION)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
  }
  return;
}


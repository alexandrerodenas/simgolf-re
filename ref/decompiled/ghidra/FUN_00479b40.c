/* Ghidra decompiled: golf.exe */
/* Function: FUN_00479b40 @ 0x00479B40 */
/* Body size: 98 addresses */


void __fastcall FUN_00479b40(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_1 + 0x228) + 10;
  *(int *)(param_1 + 0x228) = iVar1;
  pvVar2 = _malloc(iVar1 * 4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x22c)) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)((int)pvVar2 + iVar1 * 4 + -4) =
           *(undefined4 *)(*(int *)(param_1 + 0x224) + -4 + iVar1 * 4);
    } while (iVar1 < *(int *)(param_1 + 0x22c));
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x224));
  }
  *(void **)(param_1 + 0x224) = pvVar2;
  return;
}


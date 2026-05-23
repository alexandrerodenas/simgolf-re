/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4d50 @ 0x004A4D50 */
/* Body size: 84 addresses */


void __fastcall FUN_004a4d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
    if (iVar2 != 0) {
      FUN_004a5007(iVar2);
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_004a5007(*(int *)(param_1 + 4));
    }
    *(int *)(param_1 + 4) = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


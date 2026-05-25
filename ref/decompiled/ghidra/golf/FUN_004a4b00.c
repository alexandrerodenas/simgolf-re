/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4b00 @ 0x004A4B00 */


void __fastcall FUN_004a4b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    if (iVar2 != 0) {
      FUN_004a5007(iVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_004a5007(*(int *)(param_1 + 4));
    }
    *(int *)(param_1 + 4) = iVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}


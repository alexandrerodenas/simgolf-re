/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497d10 @ 0x00497D10 */
/* Body size: 586 addresses */


void __fastcall FUN_00497d10(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_4;
  
  (**(code **)(*(int *)(param_1 + 100) + 0x14))();
  *(undefined4 *)(param_1 + 0xf0) = 20000;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (DAT_008400b0 != (int *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    EnterCriticalSection(lpCriticalSection);
    SetEvent(*(HANDLE *)(param_1 + 0x20));
    (**(code **)(*DAT_008400b0 + 0x10))(DAT_008400b0);
    (**(code **)(*DAT_008400b0 + 8))(DAT_008400b0);
    DAT_008400b0 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    LeaveCriticalSection(lpCriticalSection);
    Sleep(0);
    EnterCriticalSection(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x1c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x720) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x720));
    *(undefined4 *)(param_1 + 0x720) = 0;
  }
  if (*(int *)(param_1 + 0x724) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x724));
    *(undefined4 *)(param_1 + 0x724) = 0;
  }
  if (*(int *)(param_1 + 0x6fc) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x6fc));
    *(undefined4 *)(param_1 + 0x6fc) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004a5007(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x718) = 200;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x174);
  iVar3 = 0x10;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 0x16;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 200) != 0) {
    iStack_4 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      do {
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 200) + 0xc);
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 200) + 8);
        (**(code **)(*(int *)(param_1 + 0xc0) + 4))(puVar2);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 200) + 8) = 0;
        piVar1 = *(int **)(param_1 + 200);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xcc);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < *(int *)(param_1 + 0xd0));
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_004a4b00();
  FUN_004a4b00();
  FUN_004a4b00();
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


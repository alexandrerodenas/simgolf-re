/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492e80 @ 0x00492E80 */


void __fastcall FUN_00492e80(int param_1)

{
  if (*(LPCVOID *)(param_1 + 4) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}


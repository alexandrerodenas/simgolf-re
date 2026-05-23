/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002e10 @ 0x10002E10 */
/* Body size: 169 addresses */


void __fastcall FUN_10002e10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 4));
    __chkesp();
    *(undefined4 *)(local_8 + 4) = 0;
  }
  if (*(int *)(local_8 + 0xc) != 0) {
    CloseHandle(*(HANDLE *)(local_8 + 0xc));
    __chkesp();
    *(undefined4 *)(local_8 + 0xc) = 0;
  }
  if (*(int *)(local_8 + 8) != -1) {
    CloseHandle(*(HANDLE *)(local_8 + 8));
    __chkesp();
    *(undefined4 *)(local_8 + 8) = 0xffffffff;
  }
  local_8 = 0x10002eb5;
  __chkesp();
  return;
}


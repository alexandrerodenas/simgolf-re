/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007cc0 @ 0x10007CC0 */


void __fastcall FUN_10007cc0(int param_1)

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
  if (*(int *)(param_1 + 0x4bc) != 0) {
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    if (*(int *)(param_1 + 0x4b0) != 0) {
      SelectObject(*(HDC *)(param_1 + 0x4bc),*(HGDIOBJ *)(param_1 + 0x4b0));
      __chkesp();
      *(undefined4 *)(local_8 + 0x4b0) = 0;
    }
    DeleteDC(*(HDC *)(local_8 + 0x4bc));
    __chkesp();
    *(undefined4 *)(local_8 + 0x4b8) = 0;
    *(undefined4 *)(local_8 + 0x4bc) = 0;
  }
  if (*(int *)(local_8 + 0x4b4) != 0) {
    DeleteObject(*(HGDIOBJ *)(local_8 + 0x4b4));
    __chkesp();
    *(undefined4 *)(local_8 + 0x4b4) = 0;
  }
  if (*(int *)(local_8 + 0x4ac) != 0) {
    DeleteObject(*(HGDIOBJ *)(local_8 + 0x4ac));
    __chkesp();
    *(undefined4 *)(local_8 + 0x4ac) = 0;
  }
  local_8 = 0x10007de7;
  __chkesp();
  return;
}


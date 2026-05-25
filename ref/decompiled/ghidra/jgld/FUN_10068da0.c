/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068da0 @ 0x10068DA0 */


void __fastcall FUN_10068da0(int param_1)

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
  if (*(int *)(param_1 + 0x18) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
    __chkesp();
    *(undefined4 *)(local_8 + 0x18) = 0;
  }
  if (*(int *)(local_8 + 0x20) != 0) {
    RemoveFontResourceA(*(LPCSTR *)(local_8 + 0x20));
    __chkesp();
    thunk_FUN_10014a90(*(void **)(local_8 + 0x20));
    *(undefined4 *)(local_8 + 0x20) = 0;
  }
  local_8 = 0x10068e2b;
  __chkesp();
  return;
}


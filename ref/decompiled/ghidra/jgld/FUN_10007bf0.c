/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007bf0 @ 0x10007BF0 */


void __fastcall FUN_10007bf0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100aeea9;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_1011d0b0;
  local_8 = 0;
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = 0;
  }
  local_14 = param_1;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  __chkesp();
  thunk_FUN_10007cc0((int)local_14);
  local_8 = 0xffffffff;
  thunk_FUN_100096f0(local_14);
  ExceptionList = local_10;
  local_8 = 0x10007c92;
  __chkesp();
  return;
}


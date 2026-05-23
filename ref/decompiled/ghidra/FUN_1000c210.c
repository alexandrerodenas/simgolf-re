/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c210 @ 0x1000C210 */
/* Body size: 133 addresses */


void __fastcall FUN_1000c210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004119c;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_14 = param_1;
  thunk_FUN_10001fa0((undefined4 *)(param_1 + 0x44));
  local_8 = 0;
  thunk_FUN_1000f690((undefined1 *)(local_14 + 0x208));
  thunk_FUN_1000f750(local_14 + 0x210);
  ExceptionList = local_10;
  local_8 = 0x1000c291;
  __chkesp();
  return;
}


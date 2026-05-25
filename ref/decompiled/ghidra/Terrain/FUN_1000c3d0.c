/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c3d0 @ 0x1000C3D0 */


void __fastcall FUN_1000c3d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100411bc;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  local_14 = param_1;
  if (param_1[0xd] != 0) {
    thunk_FUN_1000c520((void *)param_1[0xd],1,0);
  }
  if (local_14[0xe] != 0) {
    thunk_FUN_1000c520((void *)local_14[0xe],0,0);
  }
  if (local_14[0xf] != 0) {
    thunk_FUN_1000c520((void *)local_14[0xf],3,0);
  }
  if (local_14[0x10] != 0) {
    thunk_FUN_1000c520((void *)local_14[0x10],2,0);
  }
  local_8 = 0xffffffff;
  thunk_FUN_10001fe0();
  ExceptionList = local_10;
  local_8 = 0x1000c4d7;
  __chkesp();
  return;
}


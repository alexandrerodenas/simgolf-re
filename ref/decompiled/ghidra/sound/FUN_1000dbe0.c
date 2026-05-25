/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000dbe0 @ 0x1000DBE0 */


undefined4 __thiscall FUN_1000dbe0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100588bb;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return 10;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_100087f0(puVar1);
  }
  puVar1[1] = param_1;
  *puVar1 = param_2;
  *(byte *)(param_1 + 0x1428) = *(byte *)(param_1 + 0x1428) | 1;
  local_4 = 0xffffffff;
  if ((*(uint *)((int)this + 0x1a4) >> 5 & 1) == 0) {
    thunk_FUN_1002aa90(&DAT_100b5038,0x7ee,0,(LPARAM)puVar1);
  }
  else {
    PostMessageA(*(HWND *)(param_1 + 0x1420),0x7ee,0,(LPARAM)puVar1);
  }
  ExceptionList = local_c;
  return 0;
}


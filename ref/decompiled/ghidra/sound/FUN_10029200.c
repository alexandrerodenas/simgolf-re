/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029200 @ 0x10029200 */


void __fastcall FUN_10029200(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b914;
  local_4 = 0;
  puVar1 = param_1;
  FUN_1004280e(param_1 + 9,0x18,0x10,&LAB_1000256d);
  *param_1 = &PTR_LAB_1005b8b0;
  local_4 = 0xffffffff;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0x14))(puVar1);
  }
  ExceptionList = local_c;
  return;
}


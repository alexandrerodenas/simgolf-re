/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b2e0 @ 0x1000B2E0 */


void __fastcall FUN_1000b2e0(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10058814;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_LAB_1005b304;
  local_4 = 2;
  if (DAT_100b49f0 != 0) {
    thunk_FUN_1000b960(param_1);
  }
  local_4._0_1_ = 1;
  thunk_FUN_10008890(param_1 + 0x76);
  puVar1 = (undefined *)param_1[0x72];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x73] = 0;
      param_1[0x72] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x72] = (int)puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x75] = param_1[0x75] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x72], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x73] = 0;
        param_1[0x72] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x72] = (int)puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x75] = param_1[0x75] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_10029200(param_1);
  ExceptionList = local_c;
  return;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011290 @ 0x10011290 */


void __fastcall FUN_10011290(int *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void **ppvVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10058937;
  local_4 = 2;
  ppvVar5 = &local_c;
  puVar3 = (undefined4 *)param_1[1];
  local_c = ExceptionList;
  while (ExceptionList = ppvVar5, puVar3 != (undefined4 *)0x0) {
    if ((undefined *)*puVar3 != (undefined *)0x0) {
      FUN_1004249a((undefined *)*puVar3);
      *puVar3 = 0;
    }
    if ((undefined *)puVar3[1] != (undefined *)0x0) {
      FUN_1004249a((undefined *)puVar3[1]);
      puVar3[1] = 0;
    }
    if ((undefined *)puVar3[2] != (undefined *)0x0) {
      FUN_1004249a((undefined *)puVar3[2]);
      puVar3[2] = 0;
    }
    puVar1 = (undefined4 *)puVar3[4];
    FUN_1004249a((undefined *)puVar3);
    ppvVar5 = ExceptionList;
    puVar3 = puVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  thunk_FUN_10011970(param_1);
  CoUninitialize();
  puVar2 = (undefined *)param_1[0x5e];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      param_1[0x5f] = 0;
      param_1[0x5e] = 0;
    }
    else {
      *puVar3 = 0;
      param_1[0x5e] = (int)puVar3;
    }
    iVar4 = *(int *)(puVar2 + 8);
    FUN_1004249a(puVar2);
    param_1[0x61] = param_1[0x61] + -1;
    while ((iVar4 != 0 && (puVar2 = (undefined *)param_1[0x5e], puVar2 != (undefined *)0x0))) {
      puVar3 = *(undefined4 **)(puVar2 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        param_1[0x5f] = 0;
        param_1[0x5e] = 0;
      }
      else {
        *puVar3 = 0;
        param_1[0x5e] = (int)puVar3;
      }
      iVar4 = *(int *)(puVar2 + 8);
      FUN_1004249a(puVar2);
      param_1[0x61] = param_1[0x61] + -1;
    }
  }
  puVar2 = (undefined *)param_1[0x5a];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      param_1[0x5b] = 0;
      param_1[0x5a] = 0;
    }
    else {
      *puVar3 = 0;
      param_1[0x5a] = (int)puVar3;
    }
    iVar4 = *(int *)(puVar2 + 8);
    FUN_1004249a(puVar2);
    param_1[0x5d] = param_1[0x5d] + -1;
    while ((iVar4 != 0 && (puVar2 = (undefined *)param_1[0x5a], puVar2 != (undefined *)0x0))) {
      puVar3 = *(undefined4 **)(puVar2 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        param_1[0x5b] = 0;
        param_1[0x5a] = 0;
      }
      else {
        *puVar3 = 0;
        param_1[0x5a] = (int)puVar3;
      }
      iVar4 = *(int *)(puVar2 + 8);
      FUN_1004249a(puVar2);
      param_1[0x5d] = param_1[0x5d] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_1000ef60((int)(param_1 + 0x1c));
  ExceptionList = local_c;
  return;
}


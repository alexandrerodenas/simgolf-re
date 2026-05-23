/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ff50 @ 0x1001FF50 */
/* Body size: 640 addresses */


void __fastcall FUN_1001ff50(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10058cd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b6a8;
  local_4 = 4;
  if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
    thunk_FUN_1001e3d0(param_1 + 0x18);
  }
  puVar4 = param_1 + 0x1d1;
  local_14 = 0x7f;
  do {
    puVar1 = (undefined *)*puVar4;
    if (puVar1 != (undefined *)0x0) {
      *(undefined4 *)(puVar1 + 0x30) = 0;
      thunk_FUN_1001cd30((int)puVar1);
      FUN_1004249a(puVar1);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar1 = (undefined *)param_1[0x86];
  if (puVar1 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      param_1[0x87] = 0;
      param_1[0x86] = 0;
    }
    else {
      *puVar4 = 0;
      param_1[0x86] = puVar4;
    }
    puVar2 = *(undefined **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x89] = param_1[0x89] + -1;
    while (puVar2 != (undefined *)0x0) {
      FUN_1004249a(puVar2);
      puVar1 = (undefined *)param_1[0x86];
      if (puVar1 == (undefined *)0x0) break;
      puVar4 = *(undefined4 **)(puVar1 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        param_1[0x87] = 0;
        param_1[0x86] = 0;
      }
      else {
        *puVar4 = 0;
        param_1[0x86] = puVar4;
      }
      puVar2 = *(undefined **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x89] = param_1[0x89] + -1;
    }
  }
  local_4._0_1_ = 3;
  FUN_1004280e(param_1 + 0x94,0x4c,0x10,&LAB_1000166d);
  puVar1 = (undefined *)param_1[0x8a];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      param_1[0x8b] = 0;
      param_1[0x8a] = 0;
    }
    else {
      *puVar4 = 0;
      param_1[0x8a] = puVar4;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x8d] = param_1[0x8d] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x8a], puVar1 != (undefined *)0x0))) {
      puVar4 = *(undefined4 **)(puVar1 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        param_1[0x8b] = 0;
        param_1[0x8a] = 0;
      }
      else {
        *puVar4 = 0;
        param_1[0x8a] = puVar4;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x8d] = param_1[0x8d] + -1;
    }
  }
  puVar1 = (undefined *)param_1[0x86];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined *)0x0) {
    puVar4 = *(undefined4 **)(puVar1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      param_1[0x87] = 0;
      param_1[0x86] = 0;
    }
    else {
      *puVar4 = 0;
      param_1[0x86] = puVar4;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x89] = param_1[0x89] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x86], puVar1 != (undefined *)0x0))) {
      puVar4 = *(undefined4 **)(puVar1 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        param_1[0x87] = 0;
        param_1[0x86] = 0;
      }
      else {
        *puVar4 = 0;
        param_1[0x86] = puVar4;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x89] = param_1[0x89] + -1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 0x18;
  }
  thunk_FUN_1001e2b0(puVar4);
  local_4 = 0xffffffff;
  thunk_FUN_1002d560(param_1);
  ExceptionList = local_c;
  return;
}


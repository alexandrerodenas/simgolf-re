/* Ghidra decompiled: sound.dll */
/* Function: FUN_100312a0 @ 0x100312A0 */


void __fastcall FUN_100312a0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10059183;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005c528;
  puVar1 = (undefined *)param_1[0x17];
  local_4 = 1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while (puVar2 != (undefined4 *)0x0) {
      mmioClose((HMMIO)*puVar2,0);
      DAT_100b4a08 = DAT_100b4a08 + -1;
      FUN_1004249a((undefined *)puVar2);
      puVar1 = (undefined *)param_1[0x17];
      if (puVar1 == (undefined *)0x0) break;
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = puVar2;
      }
      puVar2 = *(undefined4 **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  if (DAT_100b4a24 != 0) {
    thunk_FUN_1000eda0();
  }
  puVar1 = (undefined *)param_1[0x17];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x17], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_1002f3f0(param_1);
  ExceptionList = local_c;
  return;
}


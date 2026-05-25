/* Ghidra decompiled: sound.dll */
/* Function: FUN_10004000 @ 0x10004000 */


void __fastcall FUN_10004000(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_100584c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b000;
  puVar1 = (undefined *)param_1[0x293];
  local_4 = 1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x294] = 0;
      param_1[0x293] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x293] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x296] = param_1[0x296] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x293], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x294] = 0;
        param_1[0x293] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x293] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x296] = param_1[0x296] + -1;
    }
  }
  puVar1 = (undefined *)param_1[0x293];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x294] = 0;
      param_1[0x293] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x293] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x296] = param_1[0x296] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x293], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x294] = 0;
        param_1[0x293] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x293] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x296] = param_1[0x296] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_1001ff50(param_1);
  ExceptionList = local_c;
  return;
}


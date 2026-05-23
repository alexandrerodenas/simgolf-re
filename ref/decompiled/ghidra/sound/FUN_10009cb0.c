/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009cb0 @ 0x10009CB0 */
/* Body size: 192 addresses */


void __fastcall FUN_10009cb0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10058763;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b28c;
  local_4 = 1;
  thunk_FUN_10008890(param_1 + 0x14);
  puVar1 = (undefined *)param_1[0x10];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x11] = 0;
      param_1[0x10] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x10] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x13] = param_1[0x13] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x10], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x11] = 0;
        param_1[0x10] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x10] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x13] = param_1[0x13] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_10029f60(param_1);
  ExceptionList = local_c;
  return;
}


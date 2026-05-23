/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e2b0 @ 0x1001E2B0 */
/* Body size: 211 addresses */


void __fastcall FUN_1001e2b0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058b5e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    ExceptionList = &local_c;
    thunk_FUN_1001e3d0(param_1);
  }
  puVar1 = (undefined *)param_1[0x67];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x68] = 0;
      param_1[0x67] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x67] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x6a] = param_1[0x6a] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[0x67], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x68] = 0;
        param_1[0x67] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x67] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x6a] = param_1[0x6a] + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c080 @ 0x1001C080 */


void __fastcall FUN_1001c080(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058abb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_1005b58c;
  local_4 = 0;
  while (puVar1 = (undefined *)param_1[3], puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[4] = 0;
      param_1[3] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[3] = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[6] = param_1[6] + -1;
    if (puVar2 == (undefined4 *)0x0) break;
    (**(code **)*puVar2)(1);
  }
  puVar1 = (undefined *)param_1[3];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[4] = 0;
      param_1[3] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[3] = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[6] = param_1[6] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)param_1[3], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[4] = 0;
        param_1[3] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[3] = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[6] = param_1[6] + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


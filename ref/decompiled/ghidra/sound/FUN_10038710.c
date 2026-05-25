/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038710 @ 0x10038710 */


void __fastcall FUN_10038710(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100592cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005c604;
  local_4 = 0;
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    waveInStop((HWAVEIN)param_1[0x11]);
    waveInReset((HWAVEIN)param_1[0x11]);
    thunk_FUN_10039140((int)param_1);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    waveInStop((HWAVEIN)param_1[0x11]);
    waveInReset((HWAVEIN)param_1[0x11]);
  }
  puVar1 = (undefined *)param_1[0x17];
  puVar4 = param_1 + 0x17;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      *puVar4 = 0;
    }
    else {
      *puVar2 = 0;
      *puVar4 = puVar2;
    }
    this = *(void **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    if (this != (void *)0x0) {
      if (this == (void *)0x0) goto LAB_100387b6;
      do {
        thunk_FUN_10038ae0(this,1);
LAB_100387b6:
        this = (void *)thunk_FUN_10039620(puVar4);
      } while (this != (void *)0x0);
    }
  }
  puVar1 = (undefined *)*puVar4;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      *puVar4 = 0;
    }
    else {
      *puVar2 = 0;
      *puVar4 = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)*puVar4, puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        *puVar4 = 0;
      }
      else {
        *puVar2 = 0;
        *puVar4 = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


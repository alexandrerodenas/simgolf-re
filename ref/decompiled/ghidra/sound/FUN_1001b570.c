/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001b570 @ 0x1001B570 */
/* Body size: 245 addresses */


void __fastcall FUN_1001b570(uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058a4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(-(uint)(param_1 != 0x2c) & param_1) = &PTR_LAB_1005b19c;
  *(undefined ***)(param_1 - 0x2c) = &PTR_LAB_1005b58c;
  local_4 = 0;
  while (puVar1 = *(undefined **)(param_1 - 0x20), puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 - 0x1c) = 0;
      *(undefined4 *)(param_1 - 0x20) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 - 0x20) = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 - 0x14) = *(int *)(param_1 - 0x14) + -1;
    if (puVar2 == (undefined4 *)0x0) break;
    (**(code **)*puVar2)(1);
  }
  puVar1 = *(undefined **)(param_1 - 0x20);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 - 0x1c) = 0;
      *(undefined4 *)(param_1 - 0x20) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 - 0x20) = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 - 0x14) = *(int *)(param_1 - 0x14) + -1;
    while ((iVar3 != 0 && (puVar1 = *(undefined **)(param_1 - 0x20), puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 - 0x1c) = 0;
        *(undefined4 *)(param_1 - 0x20) = 0;
      }
      else {
        *puVar2 = 0;
        *(undefined4 **)(param_1 - 0x20) = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      *(int *)(param_1 - 0x14) = *(int *)(param_1 - 0x14) + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


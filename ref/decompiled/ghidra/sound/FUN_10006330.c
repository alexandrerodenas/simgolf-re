/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006330 @ 0x10006330 */


undefined4 __fastcall FUN_10006330(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  (**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    param_1[0x16] = param_1[0x16] | 8;
    return 0;
  }
  puVar1 = (undefined *)param_1[0x17];
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = (int)puVar2;
    }
    puVar3 = *(undefined **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while (puVar3 != (undefined *)0x0) {
      if (*(HMMIO *)(puVar3 + 0x44) != (HMMIO)0x0) {
        mmioClose(*(HMMIO *)(puVar3 + 0x44),0);
        DAT_100b4a08 = DAT_100b4a08 + -1;
      }
      if (puVar3 != (undefined *)0x0) {
        thunk_FUN_10037df0();
        FUN_1004249a(puVar3);
      }
      puVar1 = (undefined *)param_1[0x17];
      if (puVar1 == (undefined *)0x0) {
        return 0;
      }
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = (int)puVar2;
      }
      puVar3 = *(undefined **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  return 0;
}


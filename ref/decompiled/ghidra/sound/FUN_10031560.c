/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031560 @ 0x10031560 */


undefined4 __fastcall FUN_10031560(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  _MMIOINFO local_48;
  
  puVar1 = *(undefined **)(param_1 + 0x5c);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 0x5c) = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    while (puVar2 != (undefined4 *)0x0) {
      mmioGetInfo((HMMIO)*puVar2,&local_48,0);
      mmioClose((HMMIO)*puVar2,0);
      DAT_100b4a08 = DAT_100b4a08 + -1;
      FUN_1004249a((undefined *)puVar2);
      puVar1 = *(undefined **)(param_1 + 0x5c);
      if (puVar1 == (undefined *)0x0) break;
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      else {
        *puVar2 = 0;
        *(undefined4 **)(param_1 + 0x5c) = puVar2;
      }
      puVar2 = *(undefined4 **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
  if (DAT_100b4a24 != 0) {
    thunk_FUN_1000eda0();
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffffb;
  return 0;
}


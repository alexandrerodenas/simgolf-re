/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038a00 @ 0x10038A00 */
/* Body size: 165 addresses */


undefined4 __fastcall FUN_10038a00(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    waveInStop(*(HWAVEIN *)(param_1 + 0x44));
    waveInReset(*(HWAVEIN *)(param_1 + 0x44));
  }
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
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        FUN_1004249a((undefined *)*puVar2);
      }
      *puVar2 = 0;
      FUN_1004249a((undefined *)puVar2);
      puVar1 = *(undefined **)(param_1 + 0x5c);
      if (puVar1 == (undefined *)0x0) {
        return 0;
      }
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
  return 0;
}


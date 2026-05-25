/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e3d0 @ 0x1001E3D0 */


undefined4 __fastcall FUN_1001e3d0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  if (((*(byte *)(param_1 + 0x13) & 1) != 0) && ((HMMIO)*param_1 != (HMMIO)0x0)) {
    mmioClose((HMMIO)*param_1,0);
    DAT_100b4a08 = DAT_100b4a08 + -1;
  }
  puVar1 = (undefined *)param_1[0x67];
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
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x6a] = param_1[0x6a] + -1;
    while (puVar2 != (undefined4 *)0x0) {
      if ((puVar2[0xf] != 0) && ((*(byte *)(puVar2 + 0xd) & 4) == 0)) {
        puVar2[0xf] = 0;
        puVar2[0xb] = 0;
        puVar2[0x10] = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        thunk_FUN_1001e7d0(puVar2);
        FUN_1004249a((undefined *)puVar2);
      }
      puVar1 = (undefined *)param_1[0x67];
      if (puVar1 == (undefined *)0x0) break;
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x68] = 0;
        param_1[0x67] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x67] = puVar2;
      }
      puVar2 = *(undefined4 **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x6a] = param_1[0x6a] + -1;
    }
  }
  *param_1 = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x13] = param_1[0x13] & 0xfffffffe;
  return 0;
}


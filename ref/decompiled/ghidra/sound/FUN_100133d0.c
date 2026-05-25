/* Ghidra decompiled: sound.dll */
/* Function: FUN_100133d0 @ 0x100133D0 */


undefined4 __fastcall FUN_100133d0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    return 3;
  }
  while (puVar3 = DAT_100b4a34, puVar3 != (undefined *)0x0) {
    iVar1 = *(int *)(puVar3 + 0xbc);
    puVar2 = *(undefined **)(puVar3 + 0xc0);
    DAT_100b4a34 = puVar2;
    if (iVar1 != 0) {
      DAT_100b4a34 = puVar3;
      *(undefined **)(iVar1 + 0xc0) = puVar2;
    }
    if (puVar2 != (undefined *)0x0) {
      *(int *)(puVar2 + 0xbc) = iVar1;
      iVar1 = DAT_100b4a38;
    }
    DAT_100b4a38 = iVar1;
    *(undefined4 *)(puVar3 + 0xbc) = 0;
    *(undefined4 *)(puVar3 + 0xc0) = 0;
    thunk_FUN_10010060((int)puVar3);
    if (puVar3 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar3);
      FUN_1004249a(puVar3);
    }
  }
  DAT_100b4a34 = puVar3;
  return 0;
}


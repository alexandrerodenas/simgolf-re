/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029170 @ 0x10029170 */
/* Body size: 111 addresses */


void __fastcall FUN_10029170(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 8) = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    while ((iVar3 != 0 && (puVar1 = *(undefined **)(param_1 + 8), puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *puVar2 = 0;
        *(undefined4 **)(param_1 + 8) = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
  }
  return;
}


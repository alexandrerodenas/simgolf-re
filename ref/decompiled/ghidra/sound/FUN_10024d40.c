/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024d40 @ 0x10024D40 */


void __fastcall FUN_10024d40(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined *)*param_1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      *puVar2 = 0;
      *param_1 = puVar2;
    }
    iVar3 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[3] = param_1[3] + -1;
    while ((iVar3 != 0 && (puVar1 = (undefined *)*param_1, puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[1] = 0;
        *param_1 = 0;
      }
      else {
        *puVar2 = 0;
        *param_1 = puVar2;
      }
      iVar3 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[3] = param_1[3] + -1;
    }
  }
  return;
}


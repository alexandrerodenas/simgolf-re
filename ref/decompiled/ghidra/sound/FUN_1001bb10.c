/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bb10 @ 0x1001BB10 */


void __fastcall FUN_1001bb10(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  while( true ) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if (puVar1 == (undefined *)0x0) {
      return;
    }
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 0xc) = puVar2;
    }
    puVar2 = *(undefined4 **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    if (puVar2 == (undefined4 *)0x0) break;
    (**(code **)*puVar2)(1);
  }
  return;
}


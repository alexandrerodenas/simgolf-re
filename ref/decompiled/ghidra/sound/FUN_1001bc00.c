/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bc00 @ 0x1001BC00 */


void __fastcall FUN_1001bc00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = iVar1;
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) {
    while( true ) {
      (**(code **)(*piVar2 + 0x18))();
      if (*(int *)(param_1 + 0x14) == 0) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      piVar2 = *(int **)(iVar1 + 8);
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}


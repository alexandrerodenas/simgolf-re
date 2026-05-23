/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c2a0 @ 0x1001C2A0 */
/* Body size: 58 addresses */


void __fastcall FUN_1001c2a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + -0x20);
  *(int *)(param_1 + -0x18) = iVar1;
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 8), piVar2 != (int *)0x0)) {
    while( true ) {
      (**(code **)(*piVar2 + 0x14))();
      if (*(int *)(param_1 + -0x18) == 0) break;
      iVar1 = *(int *)(*(int *)(param_1 + -0x18) + 4);
      *(int *)(param_1 + -0x18) = iVar1;
      if ((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 8), piVar2 == (int *)0x0)) break;
    }
  }
  *(undefined4 *)(param_1 + -0x28) = 0x18;
  return;
}


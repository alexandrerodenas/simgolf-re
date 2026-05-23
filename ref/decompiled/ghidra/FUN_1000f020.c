/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f020 @ 0x1000F020 */
/* Body size: 87 addresses */


void __fastcall FUN_1000f020(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    DVar2 = timeGetTime();
    *(DWORD *)(param_1 + 0x54) = DVar2;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x60) + 0x30))(*(int **)(param_1 + 0x60),0,0,1);
    if (iVar3 == 0) {
      (**(code **)(**(int **)(param_1 + 0x60) + 0x14))
                (*(int **)(param_1 + 0x60),param_1 + 0xa8,0x12,0);
    }
  }
  return;
}


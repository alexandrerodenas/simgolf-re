/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2ff0 @ 0x004A2FF0 */


void __fastcall FUN_004a2ff0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + -0x8c) + 4);
  iVar1 = iVar2 + param_1;
  if (((*(int *)(iVar2 + 0xb4 + param_1) != 0) && (*(int *)(iVar1 + 0xac) != 0)) &&
     (piVar3 = *(int **)(*(int *)(iVar1 + 0xb0) + 4), piVar3 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004a3020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x128))();
    return;
  }
  FUN_0047af60();
  return;
}


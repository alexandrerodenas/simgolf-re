/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100369a0 @ 0x100369A0 */


int * __fastcall FUN_100369a0(int *param_1)

{
  int iVar1;
  
  thunk_FUN_100018b0((int)param_1 + *(int *)(*param_1 + 4));
  FUN_100355a0((int)param_1 + *(int *)(*param_1 + 4));
  iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4) + 4))();
  if (iVar1 == -1) {
    *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) =
         *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 2;
  }
  FUN_10034a40((int)param_1 + *(int *)(*param_1 + 4));
  thunk_FUN_10037930((int)param_1 + *(int *)(*param_1 + 4));
  return param_1;
}


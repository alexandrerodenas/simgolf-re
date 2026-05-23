/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036790 @ 0x10036790 */
/* Body size: 169 addresses */


undefined4 __fastcall FUN_10036790(int *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_100018b0((int)param_1 + *(int *)(*param_1 + 4));
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8) == 0) {
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) != 0) {
      FUN_100369a0(*(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x20));
    }
    FUN_100355a0((int)param_1 + *(int *)(*param_1 + 4));
    uVar1 = 1;
  }
  else {
    *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) =
         *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 2;
    thunk_FUN_10037930((int)param_1 + *(int *)(*param_1 + 4));
    uVar1 = 0;
  }
  return uVar1;
}


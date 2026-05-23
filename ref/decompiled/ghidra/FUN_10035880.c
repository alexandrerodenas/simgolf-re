/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035880 @ 0x10035880 */
/* Body size: 137 addresses */


int __fastcall FUN_10035880(int *param_1)

{
  int iVar1;
  
  FUN_100355a0((int)param_1 + *(int *)(*param_1 + 4));
  iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4) + 4))();
  if (iVar1 == -1) {
    FUN_10033d70((void *)((int)param_1 + *(int *)(*param_1 + 4)),
                 *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 6);
  }
  FUN_10034a40((int)param_1 + *(int *)(*param_1 + 4));
  return iVar1;
}


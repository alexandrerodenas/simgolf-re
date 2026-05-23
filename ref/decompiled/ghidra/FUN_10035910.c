/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035910 @ 0x10035910 */
/* Body size: 166 addresses */


void __fastcall FUN_10035910(int *param_1)

{
  uint uVar1;
  uint local_8;
  
  FUN_100355a0((int)param_1 + *(int *)(*param_1 + 4));
  local_8 = FUN_10036740(*(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4));
  while (local_8 != 0xffffffff) {
    uVar1 = FUN_10037690(local_8);
    if (uVar1 == 0) goto LAB_1003599e;
    local_8 = FUN_10036580(*(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4));
  }
  FUN_10033d70((void *)((int)param_1 + *(int *)(*param_1 + 4)),
               *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 1);
LAB_1003599e:
  FUN_10034a40((int)param_1 + *(int *)(*param_1 + 4));
  return;
}


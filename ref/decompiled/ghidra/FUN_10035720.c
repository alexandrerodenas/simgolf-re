/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035720 @ 0x10035720 */
/* Body size: 70 addresses */


int __fastcall FUN_10035720(int *param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_10035440(param_1,1);
  if (iVar1 == 0) {
    local_8 = -1;
  }
  else {
    local_8 = FUN_10036740(*(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4));
    FUN_10034a00(param_1);
  }
  return local_8;
}


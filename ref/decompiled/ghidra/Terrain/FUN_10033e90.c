/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033e90 @ 0x10033E90 */


void __fastcall FUN_10033e90(int *param_1)

{
  int *piVar1;
  uint local_c;
  
  piVar1 = (int *)FUN_10033ab0(param_1);
  piVar1 = FUN_100340e0(piVar1);
  if (piVar1 == (int *)0x0) {
    local_c = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 2;
  }
  else {
    local_c = 0;
  }
  FUN_10033d70((void *)((int)param_1 + *(int *)(*param_1 + 4)),local_c);
  return;
}


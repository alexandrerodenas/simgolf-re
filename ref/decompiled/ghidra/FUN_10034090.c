/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034090 @ 0x10034090 */
/* Body size: 37 addresses */


void __fastcall FUN_10034090(int param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  if (*(int *)(param_1 + 0x30) < 0) {
    p_Var1 = (LPCRITICAL_SECTION)FUN_100340c0(param_1);
    FUN_10034a70(p_Var1);
  }
  return;
}


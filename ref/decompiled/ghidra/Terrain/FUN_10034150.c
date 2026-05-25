/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034150 @ 0x10034150 */


void __fastcall FUN_10034150(int param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  if (*(int *)(param_1 + 0x30) < 0) {
    p_Var1 = (LPCRITICAL_SECTION)FUN_100340c0(param_1);
    FUN_10034a80(p_Var1);
  }
  return;
}


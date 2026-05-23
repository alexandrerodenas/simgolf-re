/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100360b0 @ 0x100360B0 */
/* Body size: 86 addresses */


void __fastcall FUN_100360b0(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  *param_1 = &PTR_FUN_10061354;
  p_Var1 = (LPCRITICAL_SECTION)FUN_100340c0((int)param_1);
  FUN_10034a60(p_Var1);
  FUN_10036340((int)param_1);
  if ((param_1[1] != 0) && (param_1[4] != 0)) {
    FUN_10018be0((void *)param_1[4],(void *)param_1[4]);
  }
  return;
}


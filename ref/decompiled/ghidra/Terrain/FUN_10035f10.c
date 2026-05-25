/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035f10 @ 0x10035F10 */


undefined4 * __fastcall FUN_10035f10(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  *param_1 = &PTR_FUN_10061354;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  p_Var1 = (LPCRITICAL_SECTION)FUN_100340c0((int)param_1);
  FUN_10034a50(p_Var1);
  return param_1;
}


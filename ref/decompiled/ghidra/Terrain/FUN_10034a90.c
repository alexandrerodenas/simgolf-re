/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034a90 @ 0x10034A90 */


undefined4 * __fastcall FUN_10034a90(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_1006131c;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0xffffffff;
  p_Var1 = (LPCRITICAL_SECTION)thunk_FUN_10003f80((int)param_1);
  FUN_10034a50(p_Var1);
  iVar2 = DAT_10110b48 + 1;
  bVar3 = DAT_10110b48 == 0;
  DAT_10110b48 = iVar2;
  if (bVar3) {
    FUN_10034a50((LPCRITICAL_SECTION)&DAT_10110b10);
  }
  return param_1;
}


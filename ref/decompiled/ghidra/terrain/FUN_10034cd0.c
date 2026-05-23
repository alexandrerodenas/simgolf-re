/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034cd0 @ 0x10034CD0 */
/* Body size: 169 addresses */


void __fastcall FUN_10034cd0(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  *param_1 = &PTR_FUN_1006131c;
  param_1[0xd] = 0xffffffff;
  DAT_10110b48 = DAT_10110b48 + -1;
  if (DAT_10110b48 == 0) {
    FUN_10034a60((LPCRITICAL_SECTION)&DAT_10110b10);
  }
  p_Var1 = (LPCRITICAL_SECTION)thunk_FUN_10003f80((int)param_1);
  FUN_10034a60(p_Var1);
  if (((param_1[7] != 0) && (param_1[1] != 0)) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}


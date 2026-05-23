/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034020 @ 0x10034020 */
/* Body size: 108 addresses */


void __fastcall FUN_10034020(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10041339;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_FUN_100612e0;
  local_8 = 0;
  FUN_10034090((int)param_1);
  if (param_1[0x14] == 0) {
    FUN_100345d0(param_1);
  }
  else {
    FUN_100340e0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_100360b0(param_1);
  ExceptionList = local_10;
  return;
}


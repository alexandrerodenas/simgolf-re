/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10021390 @ 0x10021390 */
/* Body size: 172 addresses */


void FUN_10021390(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100603a0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100219c0();
  FUN_100219c0();
  pDVar1 = FUN_100219c0();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100219c0();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  FUN_10018850(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1002146d();
  FUN_100214cb();
  return;
}


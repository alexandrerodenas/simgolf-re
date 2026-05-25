/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100847f0 @ 0x100847F0 */


void __cdecl
FUN_100847f0(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f7b8;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10084e20();
  FUN_10084e20();
  pDVar1 = FUN_10084e20();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10084e20();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  FUN_1007ec30(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100848cd();
  FUN_1008492b();
  return;
}


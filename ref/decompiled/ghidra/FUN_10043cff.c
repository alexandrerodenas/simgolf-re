/* Ghidra decompiled: sound.dll */
/* Function: FUN_10043cff @ 0x10043CFF */
/* Body size: 165 addresses */


undefined4 __cdecl
FUN_10043cff(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005ed90;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10044171();
  FUN_10044171();
  pDVar1 = FUN_10044171();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10044171();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1004218d(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_10043dcc();
  ExceptionList = local_14;
  return uVar2;
}


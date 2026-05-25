/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047d7f @ 0x10047D7F */


undefined4 __cdecl
FUN_10047d7f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10053a78;
  puStack_10 = &LAB_1004c09c;
  local_14 = ExceptionList;
  DAT_10057e24 = param_1;
  DAT_10057e28 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_10046696(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_10047e45();
  ExceptionList = local_14;
  return uVar1;
}


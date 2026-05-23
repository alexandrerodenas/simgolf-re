/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10007e70 @ 0x10007E70 */
/* Body size: 110 addresses */


void __fastcall FUN_10007e70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10052498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1005341c;
  local_4 = 0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[3] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  FUN_10007ee0((int)param_1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_100534c0;
  FUN_10001350(param_1);
  ExceptionList = local_c;
  return;
}


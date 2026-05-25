/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001730 @ 0x10001730 */


void __fastcall FUN_10001730(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10052418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10053214;
  local_4 = 0;
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_100017a0((int)param_1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_10053304;
  FUN_10001350(param_1);
  ExceptionList = local_c;
  return;
}


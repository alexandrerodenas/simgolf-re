/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003bbf0 @ 0x1003BBF0 */


void * FUN_1003bbf0(undefined4 param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005251b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x4d4);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = FUN_10001610(pvVar1,param_1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}


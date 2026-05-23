/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003bb20 @ 0x1003BB20 */
/* Body size: 96 addresses */


undefined4 * FUN_1003bb20(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100524db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x24);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_1003bd90(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


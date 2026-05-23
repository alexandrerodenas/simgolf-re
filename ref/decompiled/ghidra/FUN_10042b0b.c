/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042b0b @ 0x10042B0B */
/* Body size: 231 addresses */


void __cdecl FUN_10042b0b(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005ed48;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  if (DAT_100b5d20 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_100b5d0c) {
      ExceptionList = &local_14;
      FUN_10047710(9);
      local_8 = 0;
      piVar1 = FUN_10046283(param_1);
      local_8 = 0xffffffff;
      FUN_10042b72();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100b5d20 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100673fc) {
        ExceptionList = &local_14;
        FUN_10047710(9);
        local_8 = 1;
        piVar1 = FUN_10047148(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10042bd1();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10042bea;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10042bea:
  HeapAlloc(DAT_100b5d10,0,dwBytes);
  ExceptionList = local_14;
  return;
}


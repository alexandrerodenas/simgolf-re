/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042c07 @ 0x10042C07 */
/* Body size: 215 addresses */


void __cdecl FUN_10042c07(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005ed60;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_100b5d20 == 3) {
    ExceptionList = &local_14;
    FUN_10047710(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10045f2f((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10045f5a(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10042c71();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100b5d20 != 2) goto LAB_10042cd3;
    ExceptionList = &local_14;
    FUN_10047710(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100470ac(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10047103(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10042cc9();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10042cd3:
  HeapFree(DAT_100b5d10,0,param_1);
  ExceptionList = local_14;
  return;
}


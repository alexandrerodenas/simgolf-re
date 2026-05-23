/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10017050 @ 0x10017050 */
/* Body size: 141 addresses */


void __thiscall FUN_10017050(void *this,undefined *param_1,undefined4 param_2)

{
  undefined4 *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005fad0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if ((DAT_10063e5c & 1) == 0) {
    ExceptionList = &pvStack_14;
    FUN_100170e8();
    return;
  }
  ExceptionList = &pvStack_14;
  FUN_10019e10(this,9);
  local_8 = 0;
  for (local_20 = DAT_10110774; local_20 != (undefined4 *)0x0; local_20 = (undefined4 *)*local_20) {
    if ((local_20[5] & 0xffff) == 4) {
      (*(code *)param_1)(local_20 + 8,param_2);
    }
  }
  local_8 = 0xffffffff;
  FUN_100170dd();
  FUN_100170e8();
  return;
}


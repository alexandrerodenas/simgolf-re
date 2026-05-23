/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100812b0 @ 0x100812B0 */
/* Body size: 141 addresses */


void FUN_100812b0(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f288;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if ((DAT_10123350 & 1) == 0) {
    ExceptionList = &pvStack_14;
    FUN_10081348();
    return;
  }
  ExceptionList = &pvStack_14;
  FUN_100833f0(9);
  local_8 = 0;
  for (local_20 = DAT_101287a0; local_20 != (undefined4 *)0x0; local_20 = (undefined4 *)*local_20) {
    if ((local_20[5] & 0xffff) == 4) {
      (*(code *)param_1)(local_20 + 8,param_2);
    }
  }
  local_8 = 0xffffffff;
  FUN_1008133d();
  FUN_10081348();
  return;
}


/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100184d0 @ 0x100184D0 */
/* Body size: 105 addresses */


void FUN_100184d0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005fe68;
  puStack_10 = &LAB_10019ef4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}


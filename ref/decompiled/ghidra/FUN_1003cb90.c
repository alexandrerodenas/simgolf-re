/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003cb90 @ 0x1003CB90 */
/* Body size: 98 addresses */


void __fastcall FUN_1003cb90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100525b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10053908;
  local_4 = 0;
  if (param_1[0x203] != 0) {
    *(undefined4 *)(param_1[0x203] + 4) = 0;
  }
  FUN_1003cc00((int)param_1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_1005392c;
  FUN_10001350(param_1);
  ExceptionList = local_c;
  return;
}


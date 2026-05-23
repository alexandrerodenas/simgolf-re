/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003be00 @ 0x1003BE00 */
/* Body size: 116 addresses */


void __fastcall FUN_1003be00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1005259f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10053884;
  param_1[2] = &PTR_LAB_10053898;
  local_4 = 1;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = 0;
  }
  FUN_1003c200((int)param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_10001350((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2)));
  *param_1 = &PTR_LAB_1005389c;
  ExceptionList = local_c;
  return;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009a90 @ 0x10009A90 */
/* Body size: 220 addresses */


undefined4 __cdecl FUN_10009a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100586fe;
  local_c = ExceptionList;
  if (DAT_100b4a1c != (undefined4 *)0x0) {
    return 0xc;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x4058);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_10029e70(puVar1);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    thunk_FUN_10008860(puVar1 + 0x14);
    *puVar1 = &PTR_LAB_1005b28c;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xe] = 0x7f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0xf;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    DAT_100b4a1c = puVar1;
    *param_1 = puVar1;
    ExceptionList = local_c;
    return 0;
  }
  DAT_100b4a1c = (undefined4 *)0x0;
  *param_1 = 0;
  ExceptionList = local_c;
  return 0;
}


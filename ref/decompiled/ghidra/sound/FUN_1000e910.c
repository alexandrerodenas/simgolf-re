/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e910 @ 0x1000E910 */


undefined4 __cdecl FUN_1000e910(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100588db;
  local_c = ExceptionList;
  if (DAT_100b4a24 != (undefined4 *)0x0) {
    return 0xc;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x4c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_1002a240(puVar1);
    *puVar1 = &PTR_LAB_1005b3d4;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0x7f;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xf] = 0;
    DAT_100b4a24 = puVar1;
    *param_1 = puVar1;
    ExceptionList = local_c;
    return 0;
  }
  DAT_100b4a24 = (undefined4 *)0x0;
  *param_1 = 0;
  ExceptionList = local_c;
  return 0;
}


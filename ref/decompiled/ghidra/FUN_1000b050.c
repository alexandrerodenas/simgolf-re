/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b050 @ 0x1000B050 */
/* Body size: 143 addresses */


undefined4 __cdecl FUN_1000b050(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100587ab;
  local_c = ExceptionList;
  if (DAT_100b4a20 != (undefined4 *)0x0) {
    return 0xc;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x41e0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_100b4a20 = thunk_FUN_1000b1d0(puVar1);
    *param_1 = DAT_100b4a20;
    ExceptionList = local_c;
    return 0;
  }
  DAT_100b4a20 = (undefined4 *)0x0;
  *param_1 = 0;
  ExceptionList = local_c;
  return 0;
}


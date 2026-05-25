/* Ghidra decompiled: sound.dll */
/* Function: FUN_100092e0 @ 0x100092E0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100092e0(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005863b;
  local_c = ExceptionList;
  _DAT_100b49d8 = param_2;
  if ((param_2 & 1) == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x5c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100b49ec = (undefined4 *)0x0;
    }
    else {
      DAT_100b49ec = thunk_FUN_100089f0(puVar1);
    }
    DAT_100b49ec[9] = &LAB_10002671;
  }
  ExceptionList = local_c;
  return 0;
}


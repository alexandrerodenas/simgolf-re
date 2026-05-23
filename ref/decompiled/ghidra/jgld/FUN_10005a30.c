/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005a30 @ 0x10005A30 */
/* Body size: 200 addresses */


void FUN_10005a30(void *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_7c [16];
  uint local_3c;
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aed80;
  local_10 = ExceptionList;
  puVar2 = local_7c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_3c = 0;
  ExceptionList = &local_10;
  thunk_FUN_10005450(local_38);
  local_8 = 1;
  thunk_FUN_10006840(local_38,local_14);
  if ((local_18 & 2) == 0) {
    local_18 = local_18 | 2;
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
  }
  else {
    thunk_FUN_10003930(&local_24,(int)param_2);
  }
  thunk_FUN_100068d0(param_1,(int)local_38);
  local_3c = local_3c | 1;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_100034e0(local_38);
  ExceptionList = local_10;
  local_8 = 0x10005af2;
  __chkesp();
  return;
}


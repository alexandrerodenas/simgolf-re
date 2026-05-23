/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065420 @ 0x10065420 */
/* Body size: 104 addresses */


void FUN_10065420(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_10006bf0();
  local_10 = DAT_1012870c;
  local_c = DAT_1012870c;
  if (DAT_1012870c == (undefined4 *)0x0) {
    local_14 = 0;
  }
  else {
    (**(code **)*DAT_1012870c)(1);
    local_14 = __chkesp();
  }
  local_8 = 0x10065484;
  __chkesp();
  return;
}


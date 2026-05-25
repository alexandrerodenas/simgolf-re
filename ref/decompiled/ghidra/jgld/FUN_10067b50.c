/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067b50 @ 0x10067B50 */


void FUN_10067b50(undefined4 *param_1)

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
  local_10 = param_1;
  local_c = param_1;
  if (param_1 == (undefined4 *)0x0) {
    local_14 = 0;
  }
  else {
    (**(code **)*param_1)(1);
    local_14 = __chkesp();
  }
  local_8 = 0x10067bad;
  __chkesp();
  return;
}


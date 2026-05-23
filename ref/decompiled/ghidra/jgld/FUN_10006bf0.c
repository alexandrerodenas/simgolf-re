/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006bf0 @ 0x10006BF0 */
/* Body size: 110 addresses */


void FUN_10006bf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  while (iVar1 = thunk_FUN_10006d40(0x10128428), iVar1 != 0) {
    local_c = DAT_1012842c;
    local_8 = DAT_1012842c;
    if (DAT_1012842c == (undefined4 *)0x0) {
      local_10 = 0;
    }
    else {
      (**(code **)*DAT_1012842c)(1);
      local_10 = __chkesp();
    }
  }
  local_8 = (undefined4 *)0x10006c5a;
  __chkesp();
  return;
}


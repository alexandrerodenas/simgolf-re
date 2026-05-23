/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065390 @ 0x10065390 */
/* Body size: 115 addresses */


void FUN_10065390(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = operator_new(0x14c);
  if (local_c == (undefined4 *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = thunk_FUN_100654b0(local_c);
  }
  DAT_1012870c = local_10;
  DAT_10128420 = local_10;
  local_8 = 0x100653ff;
  __chkesp();
  return;
}


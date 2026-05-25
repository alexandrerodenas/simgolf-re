/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006cc50 @ 0x1006CC50 */


void __cdecl FUN_1006cc50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  undefined4 *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = FUN_1006d750((int)param_1);
  local_c = param_1[0x33];
  param_1[0x34] = local_c;
  for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
    local_18 = param_2;
    for (local_8 = 0; local_8 < local_c; local_8 = local_8 + 1) {
      FUN_1006c3f0(param_1,(byte *)*local_18,(byte *)0x0);
      local_18 = local_18 + 1;
    }
  }
  local_8 = 0x1006ccf7;
  __chkesp();
  return;
}


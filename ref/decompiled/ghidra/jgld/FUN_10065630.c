/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065630 @ 0x10065630 */
/* Body size: 48 addresses */


undefined4 * __fastcall FUN_10065630(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = &PTR_LAB_1011d7dc;
  return param_1;
}


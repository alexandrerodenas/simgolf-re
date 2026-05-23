/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10002650 @ 0x10002650 */
/* Body size: 78 addresses */


undefined4 * __fastcall FUN_10002650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = &PTR_LAB_1011d01c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  return param_1;
}


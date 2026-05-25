/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067d50 @ 0x10067D50 */


void FUN_10067d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_10122dc0 = param_1;
  DAT_10122dc4 = param_2;
  DAT_10122dc8 = param_3;
  return;
}


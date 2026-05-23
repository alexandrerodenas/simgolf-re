/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067f60 @ 0x10067F60 */
/* Body size: 46 addresses */


void FUN_10067f60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_10128728 = param_1;
  return;
}


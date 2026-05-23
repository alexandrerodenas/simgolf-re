/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009ca40 @ 0x1009CA40 */
/* Body size: 36 addresses */


undefined * FUN_1009ca40(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return &DAT_10126e18;
}


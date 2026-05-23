/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078550 @ 0x10078550 */
/* Body size: 49 addresses */


char * FUN_10078550(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return "\n libpng version 1.0.5 - October 15, 1999 (header)\n";
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001b5d0 @ 0x1001B5D0 */
/* Body size: 40 addresses */


undefined4 FUN_1001b5d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return 0;
}


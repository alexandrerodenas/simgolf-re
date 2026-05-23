/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003aa50 @ 0x1003AA50 */
/* Body size: 63 addresses */


undefined4 FUN_1003aa50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_100b58a0 = 10;
  DAT_100b58a4 = 0xb4;
  DAT_100b58a8 = 1;
  return 0;
}


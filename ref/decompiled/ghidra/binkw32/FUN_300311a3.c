/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300311a3 @ 0x300311A3 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_300311a3(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_3004f500;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_3004f3ec = 0;
  _DAT_3004f3fc = 0;
  DAT_3004f604 = 0;
  DAT_3004f3f0 = 0;
  DAT_3004f3f4 = 0;
  DAT_3004f3f8 = 0;
  return;
}


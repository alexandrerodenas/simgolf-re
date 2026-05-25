/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002eb6c @ 0x3002EB6C */


void FUN_3002eb6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_3004f620;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      FUN_3002b909((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x3004f720);
  return;
}


/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10049391 @ 0x10049391 */


void FUN_10049391(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_100592c0;
  do {
    if ((LPVOID)*puVar1 != (LPVOID)0x0) {
      FUN_10046abc((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x100593c0);
  return;
}


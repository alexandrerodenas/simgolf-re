/* Ghidra decompiled: sound.dll */
/* Function: FUN_100431d1 @ 0x100431D1 */
/* Body size: 12 addresses */


void FUN_100431d1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


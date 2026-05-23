/* Ghidra decompiled: sound.dll */
/* Function: FUN_100431ce @ 0x100431CE */
/* Body size: 3 addresses */


void FUN_100431ce(void)

{
  code *pcVar1;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


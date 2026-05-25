/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ac69 @ 0x1004AC69 */


void FUN_1004ac69(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100b5a80;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100b58e0 = 0;
  DAT_100b596c = 0;
  DAT_100b5b84 = 0;
  DAT_100b5960 = 0;
  DAT_100b5964 = 0;
  DAT_100b5968 = 0;
  return;
}


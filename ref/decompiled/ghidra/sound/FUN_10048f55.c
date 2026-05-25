/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048f55 @ 0x10048F55 */


undefined4 __cdecl FUN_10048f55(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_10067610;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x10067614);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x100676e8);
  return 0;
}


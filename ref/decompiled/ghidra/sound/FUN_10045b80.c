/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045b80 @ 0x10045B80 */
/* Body size: 27 addresses */


undefined4 __cdecl FUN_10045b80(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100b558c != (code *)0x0) {
    iVar1 = (*DAT_100b558c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


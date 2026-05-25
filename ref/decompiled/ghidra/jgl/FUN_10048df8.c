/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048df8 @ 0x10048DF8 */


undefined4 __cdecl FUN_10048df8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10057e38 != (code *)0x0) {
    iVar1 = (*DAT_10057e38)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


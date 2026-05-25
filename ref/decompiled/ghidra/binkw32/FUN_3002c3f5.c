/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c3f5 @ 0x3002C3F5 */


undefined4 __cdecl FUN_3002c3f5(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_3004f208 != (code *)0x0) {
    iVar1 = (*DAT_3004f208)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


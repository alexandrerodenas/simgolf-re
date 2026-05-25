/* Ghidra decompiled: sound.dll */
/* Function: FUN_10049620 @ 0x10049620 */


bool __cdecl FUN_10049620(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_004abf10 @ 0x004ABF10 */
/* Body size: 24 addresses */


bool FUN_004abf10(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004bff0 @ 0x1004BFF0 */


bool __cdecl FUN_1004bff0(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


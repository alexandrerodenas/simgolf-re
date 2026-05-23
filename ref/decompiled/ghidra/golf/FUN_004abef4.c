/* Ghidra decompiled: golf.exe */
/* Function: FUN_004abef4 @ 0x004ABEF4 */
/* Body size: 28 addresses */


bool FUN_004abef4(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


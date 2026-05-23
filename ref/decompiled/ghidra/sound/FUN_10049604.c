/* Ghidra decompiled: sound.dll */
/* Function: FUN_10049604 @ 0x10049604 */
/* Body size: 28 addresses */


bool __cdecl FUN_10049604(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


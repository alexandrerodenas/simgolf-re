/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004bfd4 @ 0x1004BFD4 */


bool __cdecl FUN_1004bfd4(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


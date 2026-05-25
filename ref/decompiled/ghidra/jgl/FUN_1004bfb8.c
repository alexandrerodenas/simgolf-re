/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004bfb8 @ 0x1004BFB8 */


bool __cdecl FUN_1004bfb8(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


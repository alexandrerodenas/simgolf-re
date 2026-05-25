/* Ghidra decompiled: sound.dll */
/* Function: FUN_100495e8 @ 0x100495E8 */


bool __cdecl FUN_100495e8(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


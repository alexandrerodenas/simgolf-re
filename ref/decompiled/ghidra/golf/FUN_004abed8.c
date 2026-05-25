/* Ghidra decompiled: golf.exe */
/* Function: FUN_004abed8 @ 0x004ABED8 */


bool FUN_004abed8(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


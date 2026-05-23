/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008fb00 @ 0x1008FB00 */
/* Body size: 43 addresses */


bool __cdecl FUN_1008fb00(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


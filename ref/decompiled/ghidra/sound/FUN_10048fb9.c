/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048fb9 @ 0x10048FB9 */
/* Body size: 41 addresses */


float10 __cdecl FUN_10048fb9(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


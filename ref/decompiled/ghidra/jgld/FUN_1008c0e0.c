/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008c0e0 @ 0x1008C0E0 */


float10 __cdecl FUN_1008c0e0(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_8;
  
  uStack_8 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | param_3 << 4,CONCAT24(uStack_8,param_1))
  ;
}


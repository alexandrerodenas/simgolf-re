/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10029010 @ 0x10029010 */


float10 __cdecl FUN_10029010(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_c;
  
  uStack_c = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_c,param_1));
}


/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bfe0 @ 0x3001BFE0 */


float10 __cdecl FUN_3001bfe0(uint param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(param_1 >> 5 & 0x77fffff) *
          (float10)*(double *)(&DAT_3003e798 + (param_1 & 0x1f) * 8);
  if ((param_1 & 0x10000000) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}


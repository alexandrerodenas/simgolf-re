/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045ef0 @ 0x10045EF0 */


void __cdecl FUN_10045ef0(int param_1,int param_2,double param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x28) = (float)param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  return;
}


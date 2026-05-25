/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046b29 @ 0x10046B29 */


void __cdecl FUN_10046b29(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_1005664c) && (piVar1 = FUN_1004864d(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_100593dc,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


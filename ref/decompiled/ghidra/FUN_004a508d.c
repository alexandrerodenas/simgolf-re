/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a508d @ 0x004A508D */
/* Body size: 78 addresses */


LPVOID FUN_004a508d(uint param_1)

{
  LPVOID pvVar1;
  
  if (param_1 <= DAT_004e4bdc) {
    FUN_004a79b2(9);
    pvVar1 = (LPVOID)FUN_004a7dbc(param_1);
    FUN_004a7a13(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = HeapAlloc(DAT_0084215c,0,param_1 + 0xf & 0xfffffff0);
  return pvVar1;
}


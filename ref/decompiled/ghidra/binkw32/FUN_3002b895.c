/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b895 @ 0x3002B895 */


void __cdecl FUN_3002b895(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  
  if (DAT_3004f754 == 3) {
    if ((param_1 <= DAT_3004f74c) && (piVar1 = FUN_3002ca26(param_1), piVar1 != (int *)0x0)) {
      return;
    }
  }
  else if (DAT_3004f754 == 2) {
    if (param_1 == (uint *)0x0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
    }
    if ((dwBytes <= DAT_3004099c) && (piVar1 = FUN_3002d1d3(dwBytes >> 4), piVar1 != (int *)0x0)) {
      return;
    }
    goto LAB_3002b8f8;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_3002b8f8:
  HeapAlloc(DAT_3004f750,0,dwBytes);
  return;
}


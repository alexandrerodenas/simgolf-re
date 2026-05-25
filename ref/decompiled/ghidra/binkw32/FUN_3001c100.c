/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c100 @ 0x3001C100 */


undefined4 * FUN_3001c100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *lpParameter;
  HANDLE pvVar1;
  
  lpParameter = (undefined4 *)radmalloc(0x14);
  if (lpParameter == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *lpParameter = param_1;
  lpParameter[1] = param_2;
  lpParameter[2] = param_3;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_3001c160,lpParameter,0,lpParameter + 4);
  lpParameter[3] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    radfree((int)lpParameter);
    lpParameter = (undefined4 *)0x0;
  }
  return lpParameter;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048f2d @ 0x10048F2D */


void __cdecl FUN_10048f2d(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1004588f();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1004588f();
    *pDVar1 = 0x22;
    return;
  }
  return;
}


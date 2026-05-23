/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100478e0 @ 0x100478E0 */
/* Body size: 41 addresses */


SIZE_T __cdecl FUN_100478e0(LPCVOID param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  
  uVar1 = FUN_100482f7((int)param_1);
  if (uVar1 != 0) {
    return *(int *)((int)param_1 + -4) - 9;
  }
  SVar2 = HeapSize(DAT_100593dc,0,param_1);
  return SVar2;
}


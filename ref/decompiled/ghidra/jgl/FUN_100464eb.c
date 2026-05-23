/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100464eb @ 0x100464EB */
/* Body size: 109 addresses */


void __cdecl FUN_100464eb(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  SVar1 = FUN_100478e0(DAT_1005a418);
  if (SVar1 < (uint)((int)DAT_1005a414 + (4 - (int)DAT_1005a418))) {
    SVar1 = FUN_100478e0(DAT_1005a418);
    piVar2 = FUN_100477c0(DAT_1005a418,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      return;
    }
    DAT_1005a414 = piVar2 + ((int)DAT_1005a414 - (int)DAT_1005a418 >> 2);
    DAT_1005a418 = piVar2;
  }
  *DAT_1005a414 = param_1;
  DAT_1005a414 = DAT_1005a414 + 1;
  return;
}


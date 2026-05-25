/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e7d0 @ 0x3000E7D0 */


void __cdecl FUN_3000e7d0(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_3004f1d0 == 1) {
    uVar1 = *param_1;
    if (((uVar1 & 1) == 0) || (0x2000 < uVar1)) {
      DAT_300488f8 = FUN_3000eb90;
      DAT_30049114 = FUN_3000ecc0;
      DAT_3004b530 = param_1;
      *param_1 = 0x82;
      DAT_30049108 = &LAB_3000e870;
      DAT_3004b528 = &LAB_3000e940;
      DAT_30048900 = 1;
      return;
    }
    uVar1 = uVar1 + param_2 * 4;
    *param_1 = uVar1;
    if ((uVar1 & 2) == 0) {
      DAT_300488f8 = (code *)&LAB_3000e870;
      DAT_30049114 = (code *)&LAB_3000e940;
      return;
    }
  }
  DAT_300488f8 = (code *)&LAB_3000ea10;
  DAT_30049114 = (code *)&LAB_3000ead0;
  return;
}


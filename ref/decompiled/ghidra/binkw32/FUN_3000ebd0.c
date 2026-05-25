/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ebd0 @ 0x3000EBD0 */


void __cdecl FUN_3000ebd0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *DAT_3004b530;
  if ((uVar1 & 2) != 0) {
    *DAT_3004b530 = uVar1 & 0xfd | param_1 << 8;
    DAT_30049108 = &LAB_3000ea10;
    DAT_3004b528 = &LAB_3000ead0;
    return;
  }
  uVar2 = uVar1 >> 2 & 0x3f;
  if (param_1 < uVar1 >> 8) {
    if (uVar2 == 0) {
      DAT_300488f8 = &LAB_3000ea10;
      DAT_30049114 = &LAB_3000ead0;
      DAT_30048900 = uVar2;
      *DAT_3004b530 = 3;
      return;
    }
    DAT_30049108 = &LAB_3000e870;
    DAT_3004b528 = &LAB_3000e940;
    *DAT_3004b530 = uVar2 * 4 - 1 & 0xfc | 2;
    return;
  }
  if (uVar2 == 0x3f) {
    DAT_30048900 = 0;
    DAT_300488f8 = &LAB_3000e870;
    DAT_30049114 = &LAB_3000e940;
    *DAT_3004b530 = 1;
    return;
  }
  DAT_30049108 = &LAB_3000e870;
  DAT_3004b528 = &LAB_3000e940;
  *DAT_3004b530 = uVar2 * 4 + 4 & 0xfc | 2;
  return;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045e34 @ 0x10045E34 */
/* Body size: 179 addresses */


undefined4 __cdecl FUN_10045e34(uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (DAT_100b5d20 == 3) {
    if (param_1 < 0x3f9) {
      DAT_100b5d0c = param_1;
      return 1;
    }
  }
  else if (DAT_100b5d20 == 2) {
    uVar3 = param_1 + 0xf & 0xfffffff0;
    if (uVar3 < 0x781) {
      DAT_100673fc = uVar3;
      return 1;
    }
  }
  else if ((DAT_100b5d20 == 1) && (param_1 != 0)) {
    FUN_10045b9b(&param_1);
    if ((byte)param_1 < 6) {
      uVar3 = uVar3 + 0xf & 0xfffffff0;
      if ((uVar3 < 0x781) && (ppuVar2 = FUN_10046e50(), ppuVar2 != (undefined **)0x0)) {
        DAT_100673fc = uVar3;
        DAT_100b5d20 = 2;
        return 1;
      }
    }
    else if ((uVar3 < 0x3f9) && (iVar1 = FUN_10045ee7(uVar3), iVar1 != 0)) {
      DAT_100b5d0c = uVar3;
      DAT_100b5d20 = 3;
      return 1;
    }
  }
  return 0;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_00435680 @ 0x00435680 */
/* Body size: 210 addresses */


undefined4 FUN_00435680(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00561254 != 0) {
    uVar2 = FUN_00436c00(param_1,param_2);
    return uVar2;
  }
  iVar3 = FUN_00435570(param_1,param_2);
  if ((-1 < iVar3) && (iVar1 = (&DAT_005a9cf0)[iVar3], iVar1 != -1)) {
    if (((&DAT_005794c0)[iVar1 * 0x40] != -1) || (0 < DAT_0053df54)) {
      DAT_0053df54 = iVar1 + 1;
    }
    DAT_004c2ba0 = (int)(&DAT_005794b8)[iVar1 * 0x40] >> 10;
    DAT_004c2ba4 = (int)(&DAT_005794bc)[iVar1 * 0x40] >> 10;
  }
  if (iVar3 == -3) {
    DAT_00567afc = 4;
    return 0xffffffff;
  }
  if (iVar3 == -4) {
    DAT_0059ca54 = 1;
    DAT_00561254 = 1;
    return 0xffffffff;
  }
  if (iVar3 == -5) {
    if (DAT_005aa6c8 != 0) {
      DAT_005aa6c8 = DAT_005aa6c8 + -0x10;
      return 0xffffffff;
    }
  }
  else if (iVar3 == -6) {
    DAT_005aa6c8 = DAT_005aa6c8 + 0x10;
  }
  return 0xffffffff;
}


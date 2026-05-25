/* Ghidra decompiled: golf.exe */
/* Function: FUN_00436060 @ 0x00436060 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00436060(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_00561254 != 0) {
    uVar1 = FUN_00436c00(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_00435f00(param_1,param_2);
  if ((DAT_005685f0 < 2) || ((DAT_0059e7b8 & 0x4200000) != 0)) {
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac4,(int)DAT_004c7ac6,0);
  }
  if (((((DAT_0059e7b8 & 0x2000) == 0) || (DAT_005685f0 < 2)) || (DAT_004c2e14 == -1)) ||
     ((DAT_0059e7b8 & 0x4200000) != 0)) {
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac8,(int)DAT_004c7aca,0);
  }
  if (((DAT_0059e7b8 & 0x400000) == 0) || ((DAT_0059e7b8 & 0x4200000) != 0)) {
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7acc,(int)DAT_004c7ace,0);
  }
  switch(uVar1) {
  case 0:
    DAT_00582cd0 = 0x20;
    _DAT_00582d6e = 0;
    if (DAT_004d60b4 == 0) {
      DAT_00582cd1 = 7;
      FUN_004385d0(0,0x98);
      return 0xffffffff;
    }
    DAT_00582cd1 = (byte)DAT_004d60b4 & 7;
    FUN_004385d0(0,0x98);
    return 0xffffffff;
  case 1:
    if (((1 < DAT_005685f0) && ((DAT_0059e7b8 & 0x4200000) == 0)) && (DAT_005a59f8 == -1)) {
      DAT_0059e7b8 = DAT_0059e7b8 & 0xffffdfff | 0x4000;
      return 0xffffffff;
    }
    break;
  case 2:
    if (((((DAT_0059e7b8 & 0x2000) != 0) && (1 < DAT_005685f0)) && (DAT_004c2e14 != -1)) &&
       ((DAT_005a59f8 == -1 && ((DAT_0059e7b8 & 0x4200000) == 0)))) {
      DAT_0059e7b8 = DAT_0059e7b8 | 0x4000;
      return 0xffffffff;
    }
    break;
  case 3:
    if ((((DAT_0059e7b8 & 0x400000) != 0) && ((DAT_0059e7b8 & 0x4200000) == 0)) &&
       (DAT_005a59f8 == -1)) {
      return 0x4a;
    }
    break;
  case 4:
    DAT_0058f330 = 0;
    return 0xffffffff;
  case 5:
    DAT_0058f330 = 0xffffffff;
    return 0xffffffff;
  case 6:
    DAT_0058f330 = 1;
    return 0xffffffff;
  case 7:
    DAT_0058f330 = 3;
    return 0xffffffff;
  case 8:
    DAT_0058f330 = 4;
    return 0xffffffff;
  case 9:
    DAT_00567afc = 2;
    return 0xffffffff;
  case 10:
    DAT_0059ca54 = 1;
    DAT_00561254 = 1;
  }
  return 0xffffffff;
}


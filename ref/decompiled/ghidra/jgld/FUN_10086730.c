/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086730 @ 0x10086730 */
/* Body size: 266 addresses */


undefined4 __cdecl FUN_10086730(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined **ppuVar3;
  uint uVar4;
  uint local_8;
  
  if (DAT_10129fb0 == 3) {
    if (param_1 < 0x3f9) {
      DAT_10129fe0 = param_1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (DAT_10129fb0 == 2) {
    uVar4 = param_1 + 0xf & 0xfffffff0;
    if (uVar4 < 0x781) {
      uVar2 = 1;
      DAT_10125784 = uVar4;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if ((DAT_10129fb0 == 1) && (param_1 != 0)) {
      FUN_100893f0(&local_8);
      if ((local_8 & 0xff) < 6) {
        uVar4 = param_1 + 0xf & 0xfffffff0;
        if ((uVar4 < 0x781) && (ppuVar3 = FUN_10088510(), ppuVar3 != (undefined **)0x0)) {
          DAT_10125784 = uVar4;
          DAT_10129fb0 = 2;
          return 1;
        }
      }
      else if ((param_1 < 0x3f9) &&
              (bVar1 = ___sbh_heap_init(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
        DAT_10129fb0 = 3;
        DAT_10129fe0 = param_1;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


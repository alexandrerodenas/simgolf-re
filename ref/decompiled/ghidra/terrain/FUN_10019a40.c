/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10019a40 @ 0x10019A40 */
/* Body size: 313 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10019a40(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  
  if (param_2 == 1) {
    DAT_10110814 = GetVersion();
    iVar1 = FUN_1001e250(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10110820 = DAT_10110814 >> 8 & 0xff;
    DAT_1011081c = DAT_10110814 & 0xff;
    _DAT_10110818 = DAT_1011081c * 0x100 + _DAT_10110820;
    DAT_10110814 = DAT_10110814 >> 0x10;
    iVar1 = FUN_100218e0();
    if (iVar1 == 0) {
      FUN_1001e2e0();
      return 0;
    }
    DAT_10112310 = GetCommandLineA();
    DAT_1011078c = FUN_10023c90();
    FUN_10023260(extraout_ECX);
    FUN_10023780(extraout_ECX_00);
    FUN_10023630(extraout_ECX_01);
    FUN_1001e3d0();
    DAT_10110788 = DAT_10110788 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10110788 < 1) {
      return 0;
    }
    DAT_10110788 = DAT_10110788 + -1;
    if (DAT_1011084c == 0) {
      FUN_1001e450();
    }
    uVar2 = FUN_10017020(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10017ad0();
    }
    __ioterm();
    FUN_10021970();
    FUN_1001e2e0();
  }
  else if (param_2 == 3) {
    FUN_10021a60((LPVOID)0x0);
  }
  return 1;
}


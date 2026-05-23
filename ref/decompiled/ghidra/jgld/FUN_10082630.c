/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10082630 @ 0x10082630 */
/* Body size: 313 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10082630(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_10128754 = GetVersion();
    iVar1 = FUN_10089680(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10128760 = DAT_10128754 >> 8 & 0xff;
    DAT_1012875c = DAT_10128754 & 0xff;
    _DAT_10128758 = DAT_1012875c * 0x100 + _DAT_10128760;
    DAT_10128754 = DAT_10128754 >> 0x10;
    iVar1 = FUN_10084d40();
    if (iVar1 == 0) {
      FUN_10089710();
      return 0;
    }
    DAT_1012b350 = GetCommandLineA();
    DAT_101287b4 = FUN_1008af60();
    FUN_1008a530();
    FUN_1008aa50();
    FUN_1008a900();
    FUN_1007f160();
    DAT_101287b0 = DAT_101287b0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_101287b0 < 1) {
      return 0;
    }
    DAT_101287b0 = DAT_101287b0 + -1;
    if (DAT_1012878c == 0) {
      FUN_1007f1e0();
    }
    uVar2 = FUN_10081280(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10081d30();
    }
    __ioterm();
    FUN_10084dd0();
    FUN_10089710();
  }
  else if (param_2 == 3) {
    FUN_10084ec0((LPVOID)0x0);
  }
  return 1;
}


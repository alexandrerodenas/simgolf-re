/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046cc2 @ 0x10046CC2 */
/* Body size: 184 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10046cc2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    DAT_10057dbc = GetVersion();
    iVar1 = FUN_10048208(0);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10057dc8 = DAT_10057dbc >> 8 & 0xff;
    _DAT_10057dc4 = DAT_10057dbc & 0xff;
    DAT_10057dbc = DAT_10057dbc >> 0x10;
    _DAT_10057dc0 = _DAT_10057dc4 * 0x100 + _DAT_10057dc8;
    DAT_1005a404 = GetCommandLineA();
    DAT_10057e00 = FUN_100496ba();
    FUN_100491e6();
    FUN_1004946d();
    FUN_100493b4();
    FUN_100469ab();
    DAT_10057dfc = DAT_10057dfc + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10057dfc < 1) {
      return 0;
    }
    DAT_10057dfc = DAT_10057dfc + -1;
    if (DAT_10057df4 == 0) {
      FUN_100469fa();
    }
    FUN_10049391();
    FUN_10048244();
  }
  return 1;
}


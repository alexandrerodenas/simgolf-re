/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c26d @ 0x3002C26D */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_3002c26d(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    DAT_3004f24c = GetVersion();
    iVar1 = FUN_3002c585(0);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_3004f258 = DAT_3004f24c >> 8 & 0xff;
    _DAT_3004f254 = DAT_3004f24c & 0xff;
    DAT_3004f24c = DAT_3004f24c >> 0x10;
    _DAT_3004f250 = _DAT_3004f254 * 0x100 + _DAT_3004f258;
    DAT_3004f758 = GetCommandLineA();
    DAT_3004f1f4 = FUN_3002ee95();
    FUN_3002e9c1();
    FUN_3002ec48();
    FUN_3002eb8f();
    FUN_3002e8c1();
    DAT_3004f1f0 = DAT_3004f1f0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_3004f1f0 < 1) {
      return 0;
    }
    DAT_3004f1f0 = DAT_3004f1f0 + -1;
    if (DAT_3004f284 == 0) {
      FUN_3002e8ff();
    }
    FUN_3002eb6c();
    FUN_3002c5e2();
  }
  return 1;
}


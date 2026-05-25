/* Ghidra decompiled: sound.dll */
/* Function: FUN_10043025 @ 0x10043025 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10043025(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100b5548 = GetVersion();
    iVar1 = FUN_10045d10(1);
    if (iVar1 != 0) {
      _DAT_100b5554 = DAT_100b5548 >> 8 & 0xff;
      _DAT_100b5550 = DAT_100b5548 & 0xff;
      DAT_100b5548 = DAT_100b5548 >> 0x10;
      _DAT_100b554c = _DAT_100b5550 * 0x100 + _DAT_100b5554;
      iVar1 = FUN_100440ec();
      if (iVar1 != 0) {
        DAT_100b7084 = GetCommandLineA();
        DAT_100b5530 = FUN_10047cb4();
        FUN_1004779e();
        FUN_10047a67();
        FUN_100479ae();
        FUN_10045114();
        DAT_100b552c = DAT_100b552c + 1;
        goto LAB_100430f8;
      }
      FUN_10045d6d();
    }
LAB_10043085:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100b552c < 1) goto LAB_10043085;
      DAT_100b552c = DAT_100b552c + -1;
      if (DAT_100b5580 == 0) {
        FUN_10045163();
      }
      FUN_1004795a();
      FUN_10044140();
      FUN_10045d6d();
    }
    else if (param_2 == 3) {
      FUN_100441d8((undefined *)0x0);
    }
LAB_100430f8:
    uVar2 = 1;
  }
  return uVar2;
}


/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005eb0 @ 0x10005EB0 */
/* Body size: 109 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10005eb0(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_100b5000;
  if (DAT_100b5000 != (int *)0x0) {
    while (piVar1[2] != param_1) {
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        DAT_100b5000 = (int *)piVar1[1];
      }
      else {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      DAT_100b5008 = (int *)piVar1[1];
      if (DAT_100b5008 == (int *)0x0) {
        _DAT_100b5004 = *piVar1;
        DAT_100b5008 = (int *)0x0;
      }
      else {
        *DAT_100b5008 = *piVar1;
      }
      FUN_1004249a((undefined *)piVar1);
      DAT_100b500c = DAT_100b500c + -1;
    }
  }
  return 0;
}


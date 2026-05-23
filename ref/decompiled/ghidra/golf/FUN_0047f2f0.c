/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047f2f0 @ 0x0047F2F0 */
/* Body size: 77 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047f2f0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0083ab54 == 0) {
    _DAT_0083ab3c = DAT_0083ab38;
    if (DAT_0083ab38 == 0) {
      _DAT_0083ab3c = DAT_0083ab60;
    }
  }
  else {
    _DAT_0083ab3c = DAT_0083ab54;
    if (DAT_0083b990 != 0) {
      _DAT_0083ab3c = DAT_0083b990;
    }
  }
  iVar2 = 0;
  if ((_DAT_0083ab3c != 0) && (iVar2 = *(int *)(_DAT_0083ab3c + 0xb0), iVar2 != 0)) {
    iVar1 = FUN_004801f0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e450 @ 0x0047E450 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e450(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_0083ab90 = 0;
  if (0 < DAT_0083ab94) {
    piVar2 = &DAT_0083a2d8;
    iVar1 = DAT_0083aae0;
    do {
      if ((iVar1 != 0) && (iVar1 == *piVar2)) {
        DAT_0083ab90 = 0;
        _DAT_0083aaec = 0;
      }
      if ((*(byte *)(*piVar2 + 0xa0) & 1) != 0) {
        FUN_0047e330(*piVar2);
        iVar1 = DAT_0083aae0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < DAT_0083ab94);
  }
  FUN_0047e2d0();
  return;
}


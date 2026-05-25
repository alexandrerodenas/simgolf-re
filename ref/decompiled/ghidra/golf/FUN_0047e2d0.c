/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e2d0 @ 0x0047E2D0 */


void FUN_0047e2d0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_10 [16];
  
  if (DAT_0083a7bc != (int *)0x0) {
    (**(code **)(*DAT_0083a7bc + 0xd0))(local_10);
  }
  iVar1 = 0;
  if (0 < DAT_0083ab94) {
    piVar2 = &DAT_0083a2d8;
    do {
      if ((*(byte *)(*piVar2 + 0xa0) & 1) != 0) {
        FUN_0047e140(*piVar2,local_10);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < DAT_0083ab94);
  }
  return;
}


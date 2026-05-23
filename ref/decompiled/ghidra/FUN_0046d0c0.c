/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046d0c0 @ 0x0046D0C0 */
/* Body size: 310 addresses */


void FUN_0046d0c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  psVar4 = &DAT_0058bcb8;
  do {
    if ((*psVar4 == 0x11) || (*psVar4 == 0x12)) {
      FUN_0040e400(iVar6);
    }
    iVar1 = DAT_005685f0;
    psVar4 = psVar4 + 8;
    iVar6 = iVar6 + 1;
  } while ((int)psVar4 < 0x58ccb8);
  puVar5 = &DAT_0058f338;
  puVar7 = &DAT_004d6088;
  for (iVar6 = 0x2df0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = &DAT_00520a28;
  puVar7 = &DAT_00543d10;
  for (iVar6 = 0x668a; iVar2 = DAT_005a8c60, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar6 = 0x12;
  do {
    if (*(char *)(&DAT_00575ab0 + iVar1 * 0x82) != '\0') {
      *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 3;
      iVar3 = (int)*(short *)(&DAT_00575ab4 + iVar1 * 0x82);
      if (((*(byte *)(&DAT_00575cb0 + iVar1 * 0x82) & 0x60) != 0) && (0xfa < iVar3)) {
        iVar3 = iVar3 + 0x19;
      }
      if (300 < iVar3) {
        iVar3 = iVar3 + iVar2 * -0x19;
      }
      if (iVar3 < 0x33) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 2;
      }
      if (0xf9 < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 4;
      }
      if (0x1da < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 5;
      }
      if (0x271 < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 6;
      }
      if (iVar3 < 0x33) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 2;
      }
      if (0xf9 < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 4;
      }
      if (0x1da < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 5;
      }
      if (0x271 < iVar3) {
        *(undefined1 *)(&DAT_00575ab0 + iVar1 * 0x82) = 6;
      }
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_005a47e0 = 0;
  FUN_0046d040();
  return;
}


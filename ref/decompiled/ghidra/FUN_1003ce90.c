/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003ce90 @ 0x1003CE90 */
/* Body size: 305 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1003ce90(undefined4 *param_1,undefined4 *param_2)

{
  LOGPALETTE *plpal;
  BYTE *pBVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  int iVar4;
  
  FUN_1003cfd0();
  plpal = _malloc(0x404);
  if (plpal == (LOGPALETTE *)0x0) {
    return 4;
  }
  plpal->palVersion = 0x300;
  plpal->palNumEntries = 0x100;
  pBVar1 = &plpal->palPalEntry[0].peGreen;
  pBVar2 = "";
  do {
    pBVar3 = pBVar2 + 4;
    ((PALETTEENTRY *)(pBVar1 + -1))->peRed = pBVar2[1];
    *pBVar1 = *pBVar2;
    pBVar1[1] = pBVar2[-1];
    pBVar1[2] = '\0';
    pBVar1[0x3d7] = pBVar1[(int)&DAT_100538dd - (int)plpal];
    pBVar1[0x3d8] = pBVar1[(int)&DAT_100538dc - (int)plpal];
    pBVar1[0x3d9] = pBVar1[(int)&DAT_100538db - (int)plpal];
    pBVar1[0x3da] = 0;
    pBVar1 = pBVar1 + 4;
    pBVar2 = pBVar3;
  } while ((int)pBVar3 < 0x100538e1);
  pBVar1 = &plpal[5].palPalEntry[0].peFlags;
  iVar4 = 0xec;
  do {
    *pBVar1 = '\x05';
    pBVar1 = pBVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0;
  pBVar1 = &plpal[4].palPalEntry[0].peGreen;
  do {
    ((PALETTEENTRY *)(pBVar1 + -1))->peRed = (char)iVar4 + '\b';
    *pBVar1 = '\0';
    pBVar1[1] = '\0';
    pBVar1[2] = '\x02';
    pBVar1[0x3b7] = (char)iVar4 + -0xb;
    pBVar1[0x3b8] = 0;
    pBVar1[0x3b9] = 0;
    pBVar1[0x3ba] = 2;
    iVar4 = iVar4 + 1;
    pBVar1 = pBVar1 + 4;
  } while (iVar4 < 2);
  DAT_10057d98 = CreatePalette(plpal);
  if (DAT_10057d98 == (HPALETTE)0x0) {
    FUN_10046abc(plpal);
    return 1;
  }
  FUN_10046abc(plpal);
  (**(code **)*param_1)();
  (**(code **)*param_2)();
  _DAT_10057da0 = param_2;
  DAT_10057d9c = param_1;
  return 0;
}


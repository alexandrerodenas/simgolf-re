/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004cb32 @ 0x1004CB32 */
/* Body size: 185 addresses */


uint * FUN_1004cb32(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_10067cf4 == (uint *)0x0) {
    DAT_10067cf4 = _malloc(0x351);
  }
  *(undefined1 *)DAT_10067cf4 = 0;
  FUN_1004cd06(DAT_10067cf4,3);
  ppuVar3 = &PTR_DAT_10067d00;
  do {
    FUN_1004a020(DAT_10067cf4,(uint *)&DAT_1005f3ec);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_1004cd06(DAT_10067cf4,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x10067d30);
  if (!bVar1) {
    return DAT_10067cf4;
  }
  FUN_10042c07((undefined *)DAT_10067cf4);
  DAT_10067cf4 = (uint *)0x0;
  return (uint *)PTR_DAT_10067d0c;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449860 @ 0x00449860 */
/* Body size: 50 addresses */


void FUN_00449860(void)

{
  Terrain *pTVar1;
  
  Terrain::closeSystem(DAT_00820ed0);
  pTVar1 = DAT_00820ed0;
  if (DAT_00820ed0 != (Terrain *)0x0) {
    Terrain::~Terrain(DAT_00820ed0);
    FUN_004a4ffc(pTVar1);
  }
  DAT_00820ed0 = (Terrain *)0x0;
  return;
}


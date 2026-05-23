/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004581c @ 0x1004581C */
/* Body size: 115 addresses */


void __cdecl FUN_1004581c(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10045898();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100651e0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1004588f();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100651e4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10065348);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1004588f();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1004588f();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1004588f();
  *pDVar1 = 0x16;
  return;
}


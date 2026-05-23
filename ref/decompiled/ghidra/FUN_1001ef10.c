/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ef10 @ 0x1001EF10 */
/* Body size: 72 addresses */


void __fastcall FUN_1001ef10(int param_1)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (*(int *)(DAT_100b4a1c + 0x3c) != 0) {
    pDVar1 = (DWORD *)(param_1 + 600);
    iVar2 = 0x80;
    do {
      if ((char)*pDVar1 != '\0') {
        *(char *)((int)pDVar1 + 2) = '\0';
        midiOutShortMsg(*(HMIDIOUT *)(DAT_100b4a1c + 0x3c),*pDVar1);
        *pDVar1 = 0;
      }
      pDVar1 = pDVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


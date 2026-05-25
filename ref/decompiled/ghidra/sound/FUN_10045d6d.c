/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045d6d @ 0x10045D6D */


void FUN_10045d6d(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_100b5d20 == 3) {
    iVar1 = 0;
    if (0 < DAT_100b5d04) {
      puVar2 = (undefined4 *)((int)DAT_100b5d08 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_100b5d10,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_100b5d04);
    }
    HeapFree(DAT_100b5d10,0,DAT_100b5d08);
  }
  else if (DAT_100b5d20 == 2) {
    ppuVar3 = &PTR_LOOP_100653d8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_100653d8);
  }
  HeapDestroy(DAT_100b5d10);
  return;
}


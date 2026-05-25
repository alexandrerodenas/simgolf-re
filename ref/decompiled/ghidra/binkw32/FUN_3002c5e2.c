/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c5e2 @ 0x3002C5E2 */


void FUN_3002c5e2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_3004f754 == 3) {
    iVar1 = 0;
    if (0 < DAT_3004f744) {
      puVar2 = (undefined4 *)((int)DAT_3004f748 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_3004f750,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_3004f744);
    }
    HeapFree(DAT_3004f750,0,DAT_3004f748);
  }
  else if (DAT_3004f754 == 2) {
    ppuVar3 = &PTR_LOOP_3003e978;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_3003e978);
  }
  HeapDestroy(DAT_3004f750);
  return;
}


/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048244 @ 0x10048244 */
/* Body size: 117 addresses */


void FUN_10048244(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_100593d4) {
    puVar2 = (undefined4 *)((int)DAT_100593d8 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_100593dc,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_100593d4);
  }
  HeapFree(DAT_100593dc,0,DAT_100593d8);
  HeapDestroy(DAT_100593dc);
  return;
}


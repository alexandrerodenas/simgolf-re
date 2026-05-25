/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048956 @ 0x10048956 */


undefined4 * FUN_10048956(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100593d4 == DAT_100593c4) {
    pvVar2 = HeapReAlloc(DAT_100593dc,0,DAT_100593d8,(DAT_100593c4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100593c4 = DAT_100593c4 + 0x10;
    DAT_100593d8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100593d8 + DAT_100593d4 * 0x14);
  pvVar2 = HeapAlloc(DAT_100593dc,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100593d4 = DAT_100593d4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100593dc,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


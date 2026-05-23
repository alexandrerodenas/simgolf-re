/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004658c @ 0x1004658C */
/* Body size: 177 addresses */


undefined4 * FUN_1004658c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100b5d04 == DAT_100b5ce0) {
    pvVar2 = HeapReAlloc(DAT_100b5d10,0,DAT_100b5d08,(DAT_100b5ce0 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100b5ce0 = DAT_100b5ce0 + 0x10;
    DAT_100b5d08 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100b5d08 + DAT_100b5d04 * 0x14);
  pvVar2 = HeapAlloc(DAT_100b5d10,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100b5d04 = DAT_100b5d04 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100b5d10,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


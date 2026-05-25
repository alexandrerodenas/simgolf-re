/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001c060 @ 0x1001C060 */


undefined4 * FUN_1001c060(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_101122f8 == DAT_101122d4) {
    pvVar1 = HeapReAlloc(DAT_101122c0,0,DAT_101122fc,(DAT_101122d4 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_101122d4 = DAT_101122d4 + 0x10;
    DAT_101122fc = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_101122fc + DAT_101122f8 * 0x14);
  pvVar1 = HeapAlloc(DAT_101122c0,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_101122c0,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_101122f8 = DAT_101122f8 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}


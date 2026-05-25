/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001c950 @ 0x1001C950 */


void FUN_1001c950(void)

{
  if (DAT_101122f4 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_101122f4[3] + DAT_101122e8 * 0x8000),0x8000,0x4000);
    DAT_101122f4[2] = DAT_101122f4[2] | 0x80000000U >> ((byte)DAT_101122e8 & 0x1f);
    *(undefined4 *)(DAT_101122f4[4] + 0xc4 + DAT_101122e8 * 4) = 0;
    *(char *)(DAT_101122f4[4] + 0x43) = *(char *)(DAT_101122f4[4] + 0x43) + -1;
    if (*(char *)(DAT_101122f4[4] + 0x43) == '\0') {
      DAT_101122f4[1] = DAT_101122f4[1] & 0xfffffffe;
    }
    if ((DAT_101122f4[2] == -1) && (1 < DAT_101122f8)) {
      HeapFree(DAT_101122c0,0,(LPVOID)DAT_101122f4[4]);
      FUN_10024410(DAT_101122f4,DAT_101122f4 + 5,
                   (DAT_101122fc + DAT_101122f8 * 0x14) - (int)(DAT_101122f4 + 5));
      DAT_101122f8 = DAT_101122f8 + -1;
    }
    DAT_101122f4 = (undefined4 *)0x0;
  }
  return;
}


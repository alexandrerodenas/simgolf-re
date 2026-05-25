/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10087d80 @ 0x10087D80 */


void FUN_10087d80(void)

{
  if (DAT_10129fd4 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10129fd4[3] + DAT_10129fc8 * 0x8000),0x8000,0x4000);
    DAT_10129fd4[2] = DAT_10129fd4[2] | 0x80000000U >> ((byte)DAT_10129fc8 & 0x1f);
    *(undefined4 *)(DAT_10129fd4[4] + 0xc4 + DAT_10129fc8 * 4) = 0;
    *(char *)(DAT_10129fd4[4] + 0x43) = *(char *)(DAT_10129fd4[4] + 0x43) + -1;
    if (*(char *)(DAT_10129fd4[4] + 0x43) == '\0') {
      DAT_10129fd4[1] = DAT_10129fd4[1] & 0xfffffffe;
    }
    if ((DAT_10129fd4[2] == -1) && (1 < DAT_10129fd8)) {
      HeapFree(DAT_10129fa0,0,(LPVOID)DAT_10129fd4[4]);
      FUN_1008f590(DAT_10129fd4,DAT_10129fd4 + 5,
                   (DAT_10129fdc + DAT_10129fd8 * 0x14) - (int)(DAT_10129fd4 + 5));
      DAT_10129fd8 = DAT_10129fd8 + -1;
    }
    DAT_10129fd4 = (undefined4 *)0x0;
  }
  return;
}


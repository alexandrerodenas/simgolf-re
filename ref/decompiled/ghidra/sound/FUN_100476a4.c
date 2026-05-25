/* Ghidra decompiled: sound.dll */
/* Function: FUN_100476a4 @ 0x100476A4 */


void FUN_100476a4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10067400;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10067444)) && (ppuVar1 != &PTR_DAT_10067434)) &&
       ((ppuVar1 != &PTR_DAT_10067424 && (ppuVar1 != &PTR_DAT_10067404)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10042c07(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100674c0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10067424);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10067434);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10067444);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10067404);
  return;
}


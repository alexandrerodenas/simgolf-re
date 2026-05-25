/* Ghidra decompiled: Terrain.dll */
/* Function: __ioterm @ 0x10023590 */


/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_10110e20)[local_c] != 0) {
      for (local_8 = (&DAT_10110e20)[local_c]; local_8 < (&DAT_10110e20)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      __free_dbg((void *)(&DAT_10110e20)[local_c],2);
      (&DAT_10110e20)[local_c] = 0;
    }
  }
  return;
}


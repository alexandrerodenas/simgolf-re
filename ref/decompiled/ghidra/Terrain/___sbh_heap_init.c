/* Ghidra decompiled: Terrain.dll */
/* Function: ___sbh_heap_init @ 0x1001B410 */


/* Library Function - Single Match
    ___sbh_heap_init
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

bool __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_101122fc = HeapAlloc(DAT_101122c0,0,0x140);
  if (DAT_101122fc != (LPVOID)0x0) {
    DAT_10112300 = param_1;
    DAT_101122f4 = 0;
    DAT_101122f8 = 0;
    DAT_101122d4 = 0x10;
    DAT_101122ec = DAT_101122fc;
  }
  return DAT_101122fc != (LPVOID)0x0;
}


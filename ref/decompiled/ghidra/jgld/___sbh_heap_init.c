/* Ghidra decompiled: jgld.dll */
/* Function: ___sbh_heap_init @ 0x10086840 */


/* Library Function - Single Match
    ___sbh_heap_init
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

bool __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_10129fdc = HeapAlloc(DAT_10129fa0,0,0x140);
  if (DAT_10129fdc != (LPVOID)0x0) {
    DAT_10129fe0 = param_1;
    DAT_10129fd4 = 0;
    DAT_10129fd8 = 0;
    DAT_10129fb4 = 0x10;
    DAT_10129fcc = DAT_10129fdc;
  }
  return DAT_10129fdc != (LPVOID)0x0;
}


/* Ghidra decompiled: jgld.dll */
/* Function: __positive @ 0x10083730 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __positive(double *arg)

{
  uint local_8;
  
  local_8 = (uint)(_DAT_1011d040 <= *arg);
  return local_8;
}


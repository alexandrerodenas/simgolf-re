/* Ghidra decompiled: binkw32.dll */
/* Function: _malloc @ 0x3002B857 */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_3004f204);
  return pvVar1;
}


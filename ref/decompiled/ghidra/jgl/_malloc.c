/* Ghidra decompiled: jgl.dll */
/* Function: _malloc @ 0x10046AEB */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10057e34);
  return pvVar1;
}


/* Ghidra decompiled: golf.exe */
/* Function: _malloc @ 0x004A504F */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_00840b18);
  return pvVar1;
}


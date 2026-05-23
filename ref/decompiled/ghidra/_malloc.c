/* Ghidra decompiled: jgld.dll */
/* Function: _malloc @ 0x1007FB40 */
/* Body size: 38 addresses */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1007fbc0(_Size,DAT_10128828,1,0,0);
  return pvVar1;
}


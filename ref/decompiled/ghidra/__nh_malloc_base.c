/* Ghidra decompiled: jgld.dll */
/* Function: __nh_malloc_base @ 0x10085C30 */
/* Body size: 87 addresses */


/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int __cdecl __nh_malloc_base(uint param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = __heap_alloc_base(param_1);
      }
      else {
        local_8 = 0;
      }
      if (local_8 != 0) {
        return local_8;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = __callnewh(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}


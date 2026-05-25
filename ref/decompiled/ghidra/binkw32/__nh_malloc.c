/* Ghidra decompiled: binkw32.dll */
/* Function: __nh_malloc @ 0x3002B869 */


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_3002b895((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_3002c3f5(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/* Ghidra decompiled: jgld.dll */
/* Function: ___init_time @ 0x10095E80 */
/* Body size: 219 addresses */


/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_10128998 == 0) {
    PTR_PTR_10126948 = (undefined *)&PTR_DAT_10126950;
    ___free_lc_time((int)DAT_101289ac);
    __free_dbg(DAT_101289ac,2);
    DAT_101289ac = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_10095f60(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_10126948 = (undefined *)piVar1;
        ___free_lc_time((int)DAT_101289ac);
        __free_dbg(DAT_101289ac,2);
        iVar2 = 0;
        DAT_101289ac = piVar1;
      }
      else {
        ___free_lc_time((int)piVar1);
        __free_dbg(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}


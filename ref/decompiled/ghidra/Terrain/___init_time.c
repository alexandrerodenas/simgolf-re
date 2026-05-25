/* Ghidra decompiled: Terrain.dll */
/* Function: ___init_time @ 0x1002DCA0 */


/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_101109b4 == 0) {
    PTR_PTR_10067508 = (undefined *)&PTR_DAT_10067510;
    ___free_lc_time(DAT_101109d4);
    __free_dbg(DAT_101109d4,2);
    DAT_101109d4 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1002dd80(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_10067508 = (undefined *)piVar1;
        ___free_lc_time(DAT_101109d4);
        __free_dbg(DAT_101109d4,2);
        iVar2 = 0;
        DAT_101109d4 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        __free_dbg(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}


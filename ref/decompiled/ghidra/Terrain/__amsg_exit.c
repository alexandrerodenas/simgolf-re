/* Ghidra decompiled: Terrain.dll */
/* Function: __amsg_exit @ 0x10019C80 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10110794 == 1) || ((DAT_10110794 == 0 && (DAT_10110798 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10023f10(param_1);
  (*(code *)PTR___exit_10063f30)(0xff);
  return;
}


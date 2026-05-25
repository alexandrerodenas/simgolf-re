/* Ghidra decompiled: jgld.dll */
/* Function: __amsg_exit @ 0x10082870 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_101287bc == 1) || ((DAT_101287bc == 0 && (DAT_101287c0 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1008b1d0(param_1);
  (*(code *)PTR___exit_1012339c)(0xff);
  return;
}


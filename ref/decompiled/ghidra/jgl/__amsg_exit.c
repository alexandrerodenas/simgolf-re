/* Ghidra decompiled: jgl.dll */
/* Function: __amsg_exit @ 0x10046E17 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10057e08 == 1) || ((DAT_10057e08 == 0 && (DAT_10057e0c == 1)))) {
    FUN_100497ec();
  }
  FUN_10049825(param_1);
  (*(code *)PTR___exit_10056384)(0xff);
  return;
}


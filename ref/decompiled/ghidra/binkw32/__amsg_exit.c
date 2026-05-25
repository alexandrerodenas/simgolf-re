/* Ghidra decompiled: binkw32.dll */
/* Function: __amsg_exit @ 0x3002C3C2 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_3004f1fc == 1) || ((DAT_3004f1fc == 0 && (DAT_3004f200 == 1)))) {
    FUN_3002efc7();
  }
  FUN_3002f000(param_1);
  (*(code *)PTR___exit_3003e96c)(0xff);
  return;
}


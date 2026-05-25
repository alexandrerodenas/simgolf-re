/* Ghidra decompiled: sound.dll */
/* Function: __amsg_exit @ 0x1004319B */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100b5538 == 1) || ((DAT_100b5538 == 0 && (DAT_100b553c == 1)))) {
    FUN_10047de6();
  }
  FUN_10047e1f(param_1);
  (*(code *)PTR___exit_10064ee0)(0xff);
  return;
}


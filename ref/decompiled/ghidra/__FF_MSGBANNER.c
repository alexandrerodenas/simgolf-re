/* Ghidra decompiled: jgld.dll */
/* Function: __FF_MSGBANNER @ 0x1008B180 */
/* Body size: 73 addresses */


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_101287bc == 1) || ((DAT_101287bc == 0 && (DAT_101287c0 == 1)))) {
    FUN_1008b1d0(0xfc);
    if (DAT_1012895c != (code *)0x0) {
      (*DAT_1012895c)();
    }
    FUN_1008b1d0(0xff);
  }
  return;
}


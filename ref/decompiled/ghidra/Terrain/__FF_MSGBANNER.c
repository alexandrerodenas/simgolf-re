/* Ghidra decompiled: Terrain.dll */
/* Function: __FF_MSGBANNER @ 0x10023EC0 */


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10110794 == 1) || ((DAT_10110794 == 0 && (DAT_10110798 == 1)))) {
    FUN_10023f10(0xfc);
    if (DAT_10110984 != (code *)0x0) {
      (*DAT_10110984)();
    }
    FUN_10023f10(0xff);
  }
  return;
}


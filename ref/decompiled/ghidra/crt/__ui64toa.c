/* Ghidra decompiled: jgld.dll */
/* Function: __ui64toa @ 0x10089B90 */
/* Body size: 31 addresses */


/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}


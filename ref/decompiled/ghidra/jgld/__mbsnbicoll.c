/* Ghidra decompiled: jgld.dll */
/* Function: __mbsnbicoll @ 0x1009B340 */


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1009b440(DAT_10129e44,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10129bb4);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


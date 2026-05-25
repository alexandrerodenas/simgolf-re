/* Ghidra decompiled: Terrain.dll */
/* Function: __mbsnbicoll @ 0x10032D80 */


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
    iVar1 = FUN_10032e80(DAT_10110e04,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10110b74);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


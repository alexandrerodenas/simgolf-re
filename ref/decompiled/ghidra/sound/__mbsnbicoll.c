/* Ghidra decompiled: sound.dll */
/* Function: __mbsnbicoll @ 0x10051762 */


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1005180f(DAT_100b5b84,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100b58e0);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


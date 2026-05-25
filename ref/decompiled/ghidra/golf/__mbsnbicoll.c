/* Ghidra decompiled: golf.exe */
/* Function: __mbsnbicoll @ 0x004AD9BB */


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_004ada68(DAT_00841004,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_00840dd8);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


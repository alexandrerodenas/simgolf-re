/* Ghidra decompiled: jgld.dll */
/* Function: FID_conflict:__getenv_lk @ 0x1009B270 */


/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *local_c;
  
  local_c = DAT_10128770;
  if (DAT_1012b37c != 0) {
    if ((DAT_10128770 == (int *)0x0) && (DAT_10128778 != 0)) {
      iVar1 = FUN_1009b390();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_10128770;
    }
    DAT_10128770 = local_c;
    if ((local_c != (int *)0x0) && (_VarName != (char *)0x0)) {
      _MaxCount = _strlen(_VarName);
      for (; *local_c != 0; local_c = local_c + 1) {
        sVar2 = _strlen((char *)*local_c);
        if (((_MaxCount < sVar2) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,(uchar *)_VarName,_MaxCount), iVar1 == 0)) {
          return (char *)(*local_c + 1 + _MaxCount);
        }
      }
    }
  }
  return (char *)0x0;
}


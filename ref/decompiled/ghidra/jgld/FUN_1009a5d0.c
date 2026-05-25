/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009a5d0 @ 0x1009A5D0 */


void FUN_1009a5d0(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_100833f0(0xc);
  DAT_10128a20 = 0;
  DAT_10126da0 = 0xffffffff;
  DAT_10126d90 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10083490(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10128a28);
    if (DVar1 != 0xffffffff) {
      DAT_10128a20 = 1;
      DAT_10126cfc = DAT_10128a28 * 0x3c;
      if (DAT_10128a6e != 0) {
        DAT_10126cfc = DAT_10126cfc + DAT_10128a7c * 0x3c;
      }
      if ((DAT_10128ac2 == 0) || (DAT_10128ad0 == 0)) {
        DAT_10126d00 = 0;
        DAT_10126d04 = 0;
      }
      else {
        DAT_10126d00 = 1;
        DAT_10126d04 = (DAT_10128ad0 - DAT_10128a7c) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_1012899c,0x220,(LPCWSTR)&DAT_10128a2c,-1,PTR_DAT_10126d88,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10126d88 = 0;
      }
      else {
        PTR_DAT_10126d88[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_1012899c,0x220,(LPCWSTR)&DAT_10128a80,-1,PTR_DAT_10126d8c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10126d8c = 0;
      }
      else {
        PTR_DAT_10126d8c[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_10128ad4 != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_10128ad4), iVar2 == 0)))) {
    FUN_10083490(0xc);
  }
  else {
    __free_dbg(DAT_10128ad4,2);
    uVar6 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_10128ad4 = (uint *)__malloc_dbg(sVar3 + 1,uVar4,(int)pcVar5,uVar6);
    if (DAT_10128ad4 == (uint *)0x0) {
      FUN_10083490(0xc);
    }
    else {
      FUN_1007f760(DAT_10128ad4,_Str1);
      FUN_10083490(0xc);
      _strncpy(PTR_DAT_10126d88,(char *)_Str1,3);
      PTR_DAT_10126d88[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_1009a320((byte *)local_10);
      DAT_10126cfc = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_1009a320((byte *)local_10);
        DAT_10126cfc = DAT_10126cfc + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_1009a320((byte *)local_10);
          DAT_10126cfc = DAT_10126cfc + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_10126cfc = -DAT_10126cfc;
      }
      DAT_10126d00 = (int)(char)*local_10;
      if (DAT_10126d00 == 0) {
        *PTR_DAT_10126d8c = 0;
      }
      else {
        _strncpy(PTR_DAT_10126d8c,(char *)local_10,3);
        PTR_DAT_10126d8c[3] = 0;
      }
    }
  }
  return;
}


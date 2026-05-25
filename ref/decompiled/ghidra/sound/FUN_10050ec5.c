/* Ghidra decompiled: sound.dll */
/* Function: FUN_10050ec5 @ 0x10050EC5 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050ec5(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_10047710(0xc);
  DAT_10068910 = 0xffffffff;
  DAT_10068900 = 0xffffffff;
  DAT_100b57d8 = 0;
  _Str1 = (uint *)FUN_100516e5("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10047771(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100b57e0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1006886c = (void *)(DAT_100b57e0 * 0x3c);
    DAT_100b57d8 = 1;
    if (DAT_100b5826 != 0) {
      DAT_1006886c = (void *)((int)DAT_1006886c + DAT_100b5834 * 0x3c);
    }
    if ((DAT_100b587a == 0) || (DAT_100b5888 == 0)) {
      DAT_10068870 = 0;
      _DAT_10068874 = 0;
    }
    else {
      DAT_10068870 = 1;
      _DAT_10068874 = (DAT_100b5888 - DAT_100b5834) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_100b5754,0x220,(LPCWSTR)&DAT_100b57e4,-1,PTR_DAT_100688f8,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_100688f8 = 0;
    }
    else {
      PTR_DAT_100688f8[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_100b5754,0x220,(LPCWSTR)&DAT_100b5838,-1,PTR_DAT_100688fc,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_100688fc[0x3f] = 0;
      return;
    }
LAB_10051136:
    *PTR_DAT_100688fc = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_100b588c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_100b588c), iVar4 != 0)))) {
      FUN_10042c07((undefined *)DAT_100b588c);
      sVar5 = _strlen((char *)_Str1);
      DAT_100b588c = _malloc(sVar5 + 1);
      if (DAT_100b588c != (uint *)0x0) {
        FUN_1004a010(DAT_100b588c,_Str1);
        FUN_10047771(0xc);
        _strncpy(PTR_DAT_100688f8,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_100688f8[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10050d31(this,(byte *)_Source);
        DAT_1006886c = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10050d31(DAT_1006886c,(byte *)_Source);
          DAT_1006886c = (void *)((int)DAT_1006886c + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10050d31(DAT_1006886c,(byte *)_Source);
            DAT_1006886c = (void *)((int)DAT_1006886c + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1006886c = (void *)-(int)DAT_1006886c;
        }
        DAT_10068870 = (int)(char)*_Source;
        if (DAT_10068870 != 0) {
          _strncpy(PTR_DAT_100688fc,(char *)_Source,3);
          PTR_DAT_100688fc[3] = 0;
          return;
        }
        goto LAB_10051136;
      }
    }
    FUN_10047771(0xc);
  }
  return;
}


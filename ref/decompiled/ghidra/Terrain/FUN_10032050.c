/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10032050 @ 0x10032050 */


void __fastcall FUN_10032050(void *param_1)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  void *this;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_10019e10(param_1,0xc);
  DAT_10110a48 = 0;
  DAT_10067960 = 0xffffffff;
  DAT_10067950 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10019eb0(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10110a50);
    if (DVar1 != 0xffffffff) {
      DAT_10110a48 = 1;
      DAT_100678bc = DAT_10110a50 * 0x3c;
      if (DAT_10110a96 != 0) {
        DAT_100678bc = DAT_100678bc + DAT_10110aa4 * 0x3c;
      }
      if ((DAT_10110aea == 0) || (DAT_10110af8 == 0)) {
        DAT_100678c0 = 0;
        DAT_100678c4 = 0;
      }
      else {
        DAT_100678c0 = 1;
        DAT_100678c4 = (DAT_10110af8 - DAT_10110aa4) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_101109b8,0x220,(LPCWSTR)&DAT_10110a54,-1,PTR_DAT_10067948,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10067948 = 0;
      }
      else {
        PTR_DAT_10067948[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_101109b8,0x220,(LPCWSTR)&DAT_10110aa8,-1,PTR_DAT_1006794c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1006794c = 0;
      }
      else {
        PTR_DAT_1006794c[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_10110afc != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_10110afc), iVar2 == 0)))) {
    FUN_10019eb0(0xc);
  }
  else {
    __free_dbg(DAT_10110afc,2);
    uVar6 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_10110afc = (uint *)__malloc_dbg(this,sVar3 + 1,uVar4,pcVar5,uVar6);
    if (DAT_10110afc == (uint *)0x0) {
      FUN_10019eb0(0xc);
    }
    else {
      FUN_10018580(DAT_10110afc,_Str1);
      FUN_10019eb0(0xc);
      _strncpy(PTR_DAT_10067948,(char *)_Str1,3);
      PTR_DAT_10067948[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_10018d20((byte *)local_10);
      DAT_100678bc = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_10018d20((byte *)local_10);
        DAT_100678bc = DAT_100678bc + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_10018d20((byte *)local_10);
          DAT_100678bc = DAT_100678bc + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_100678bc = -DAT_100678bc;
      }
      DAT_100678c0 = (int)(char)*local_10;
      if (DAT_100678c0 == 0) {
        *PTR_DAT_1006794c = 0;
      }
      else {
        _strncpy(PTR_DAT_1006794c,(char *)local_10,3);
        PTR_DAT_1006794c[3] = 0;
      }
    }
  }
  return;
}


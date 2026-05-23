/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009a5d0 @ 0x1009A5D0 */
/* Body size: 939 addresses */


void FUN_1009a5d0(void)

{
  byte bVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  uint uVar7;
  int in_stack_fffffff4;
  BOOL BVar8;
  
  FUN_100833f0(0xc);
  DAT_10128a20 = 0;
  DAT_10126da0 = 0xffffffff;
  DAT_10126d90 = 0xffffffff;
  pcVar2 = FID_conflict___getenv_lk("TZ");
  if (pcVar2 == (char *)0x0) {
    FUN_10083490(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10128a28);
    if (DVar3 != 0xffffffff) {
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
      iVar4 = WideCharToMultiByte(DAT_1012899c,0x220,(LPCWSTR)&DAT_10128a2c,-1,PTR_DAT_10126d88,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_10126d88 = 0;
      }
      else {
        PTR_DAT_10126d88[0x3f] = 0;
      }
      iVar4 = WideCharToMultiByte(DAT_1012899c,0x220,(LPCWSTR)&DAT_10128a80,-1,PTR_DAT_10126d8c,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_10126d8c = 0;
      }
      else {
        PTR_DAT_10126d8c[0x3f] = 0;
      }
    }
  }
  else if ((*pcVar2 == '\0') ||
          ((DAT_10128ad4 != (uint *)0x0 &&
           (iVar4 = _strcmp(pcVar2,(char *)DAT_10128ad4), iVar4 == 0)))) {
    FUN_10083490(0xc);
  }
  else {
    __free_dbg(DAT_10128ad4,2);
    BVar8 = 0x10c;
    pcVar2 = "tzset.c";
    uVar7 = 2;
    sVar5 = _strlen("tzset.c");
    DAT_10128ad4 = (uint *)__malloc_dbg(sVar5 + 1,uVar7,(int)pcVar2,BVar8);
    if (DAT_10128ad4 == (uint *)0x0) {
      FUN_10083490(0xc);
    }
    else {
      FUN_1007f760(DAT_10128ad4,(uint *)pcVar2);
      pcVar2 = (char *)0x1009a7f6;
      FUN_10083490(0xc);
      _strncpy(PTR_DAT_10126d88,pcVar2,3);
      PTR_DAT_10126d88[3] = 0;
      pbVar6 = (byte *)(pcVar2 + 3);
      bVar1 = *pbVar6;
      if (bVar1 == 0x2d) {
        pbVar6 = (byte *)(pcVar2 + 4);
      }
      pcVar2 = (char *)0x1009a846;
      iVar4 = FUN_1009a320(pbVar6);
      DAT_10126cfc = iVar4 * 0xe10;
      for (; (*pcVar2 == '+' || (('/' < *pcVar2 && (*pcVar2 < ':')))); pcVar2 = pcVar2 + 1) {
      }
      if (*pcVar2 == ':') {
        pbVar6 = (byte *)(pcVar2 + 1);
        pcVar2 = (char *)0x1009a8a1;
        iVar4 = FUN_1009a320(pbVar6);
        DAT_10126cfc = DAT_10126cfc + iVar4 * 0x3c;
        for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
        }
        if (*pcVar2 == ':') {
          pbVar6 = (byte *)(pcVar2 + 1);
          pcVar2 = (char *)0x1009a8f3;
          iVar4 = FUN_1009a320(pbVar6);
          DAT_10126cfc = DAT_10126cfc + iVar4;
          for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_10126cfc = -DAT_10126cfc;
      }
      DAT_10126d00 = (int)*pcVar2;
      if (DAT_10126d00 == 0) {
        *PTR_DAT_10126d8c = 0;
      }
      else {
        _strncpy(PTR_DAT_10126d8c,pcVar2,3);
        PTR_DAT_10126d8c[3] = 0;
      }
    }
  }
  return;
}


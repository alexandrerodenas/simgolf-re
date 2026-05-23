/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10032050 @ 0x10032050 */
/* Body size: 939 addresses */


void __fastcall FUN_10032050(void *param_1)

{
  byte bVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  byte *pbVar6;
  undefined4 uVar7;
  int in_stack_fffffff4;
  BOOL BVar8;
  
  FUN_10019e10(param_1,0xc);
  DAT_10110a48 = 0;
  DAT_10067960 = 0xffffffff;
  DAT_10067950 = 0xffffffff;
  pcVar2 = FID_conflict___getenv_lk("TZ");
  if (pcVar2 == (char *)0x0) {
    FUN_10019eb0(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10110a50);
    if (DVar3 != 0xffffffff) {
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
      iVar4 = WideCharToMultiByte(DAT_101109b8,0x220,(LPCWSTR)&DAT_10110a54,-1,PTR_DAT_10067948,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_10067948 = 0;
      }
      else {
        PTR_DAT_10067948[0x3f] = 0;
      }
      iVar4 = WideCharToMultiByte(DAT_101109b8,0x220,(LPCWSTR)&DAT_10110aa8,-1,PTR_DAT_1006794c,0x3f
                                  ,(LPCSTR)0x0,(LPBOOL)&stack0xfffffff4);
      if ((iVar4 == 0) || (in_stack_fffffff4 != 0)) {
        *PTR_DAT_1006794c = 0;
      }
      else {
        PTR_DAT_1006794c[0x3f] = 0;
      }
    }
  }
  else if ((*pcVar2 == '\0') ||
          ((DAT_10110afc != (uint *)0x0 &&
           (iVar4 = _strcmp(pcVar2,(char *)DAT_10110afc), iVar4 == 0)))) {
    FUN_10019eb0(0xc);
  }
  else {
    __free_dbg(DAT_10110afc,2);
    BVar8 = 0x10c;
    pcVar2 = "tzset.c";
    uVar7 = 2;
    sVar5 = _strlen("tzset.c");
    DAT_10110afc = (uint *)__malloc_dbg(this,sVar5 + 1,uVar7,pcVar2,BVar8);
    if (DAT_10110afc == (uint *)0x0) {
      FUN_10019eb0(0xc);
    }
    else {
      FUN_10018580(DAT_10110afc,(uint *)pcVar2);
      pcVar2 = (char *)0x10032276;
      FUN_10019eb0(0xc);
      _strncpy(PTR_DAT_10067948,pcVar2,3);
      PTR_DAT_10067948[3] = 0;
      pbVar6 = (byte *)(pcVar2 + 3);
      bVar1 = *pbVar6;
      if (bVar1 == 0x2d) {
        pbVar6 = (byte *)(pcVar2 + 4);
      }
      pcVar2 = (char *)0x100322c6;
      iVar4 = FUN_10018d20(pbVar6);
      DAT_100678bc = iVar4 * 0xe10;
      for (; (*pcVar2 == '+' || (('/' < *pcVar2 && (*pcVar2 < ':')))); pcVar2 = pcVar2 + 1) {
      }
      if (*pcVar2 == ':') {
        pbVar6 = (byte *)(pcVar2 + 1);
        pcVar2 = (char *)0x10032321;
        iVar4 = FUN_10018d20(pbVar6);
        DAT_100678bc = DAT_100678bc + iVar4 * 0x3c;
        for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
        }
        if (*pcVar2 == ':') {
          pbVar6 = (byte *)(pcVar2 + 1);
          pcVar2 = (char *)0x10032373;
          iVar4 = FUN_10018d20(pbVar6);
          DAT_100678bc = DAT_100678bc + iVar4;
          for (; ('/' < *pcVar2 && (*pcVar2 < ':')); pcVar2 = pcVar2 + 1) {
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_100678bc = -DAT_100678bc;
      }
      DAT_100678c0 = (int)*pcVar2;
      if (DAT_100678c0 == 0) {
        *PTR_DAT_1006794c = 0;
      }
      else {
        _strncpy(PTR_DAT_1006794c,pcVar2,3);
        PTR_DAT_1006794c[3] = 0;
      }
    }
  }
  return;
}


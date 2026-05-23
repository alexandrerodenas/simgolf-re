/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10091640 @ 0x10091640 */
/* Body size: 836 addresses */


undefined4 __cdecl FUN_10091640(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  FUN_100833f0(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10129bb4) {
    FUN_10083490(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_10091af0();
    FUN_10083490(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_10125e18 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10129d40)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_10125e28 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10129d41)[local_28] = (&DAT_10129d41)[local_28] | (&DAT_10125e10)[local_10];
            }
          }
        }
        DAT_10129c3c = 1;
        DAT_10129bb4 = CodePage;
        DAT_10129e44 = FUN_100919f0(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10129c30 + local_10 * 2) =
               *(undefined2 *)(&DAT_10125e1c + local_10 * 2 + local_8 * 0x30);
        }
        FUN_10091af0();
        FUN_10083490(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10129d40)[local_28] = 0;
      }
      DAT_10129e44 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_10129c3c = 0;
        DAT_10129bb4 = CodePage;
      }
      else {
        DAT_10129bb4 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10129d41)[local_28] = (&DAT_10129d41)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10129d41)[local_28] = (&DAT_10129d41)[local_28] | 8;
        }
        DAT_10129e44 = FUN_100919f0(DAT_10129bb4);
        DAT_10129c3c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10129c30 + local_10 * 2) = 0;
      }
      FUN_10091af0();
      FUN_10083490(0x19);
      uVar1 = 0;
    }
    else if (DAT_10128974 == 0) {
      FUN_10083490(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_10091af0();
      FUN_10083490(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}


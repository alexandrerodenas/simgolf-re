/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10029c20 @ 0x10029C20 */


undefined4 __thiscall FUN_10029c20(void *this,UINT param_1)

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
  
  FUN_10019e10(this,0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10110b74) {
    FUN_10019eb0(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_1002a0d0();
    FUN_10019eb0(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_10066a48 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10110d00)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_10066a58 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10110d01)[local_28] = (&DAT_10110d01)[local_28] | (&DAT_10066a40)[local_10];
            }
          }
        }
        DAT_10110bfc = 1;
        DAT_10110b74 = CodePage;
        DAT_10110e04 = FUN_10029fd0(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10110bf0 + local_10 * 2) =
               *(undefined2 *)(&DAT_10066a4c + local_10 * 2 + local_8 * 0x30);
        }
        FUN_1002a0d0();
        FUN_10019eb0(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10110d00)[local_28] = 0;
      }
      DAT_10110e04 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_10110bfc = 0;
        DAT_10110b74 = CodePage;
      }
      else {
        DAT_10110b74 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10110d01)[local_28] = (&DAT_10110d01)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10110d01)[local_28] = (&DAT_10110d01)[local_28] | 8;
        }
        DAT_10110e04 = FUN_10029fd0(DAT_10110b74);
        DAT_10110bfc = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10110bf0 + local_10 * 2) = 0;
      }
      FUN_1002a0d0();
      FUN_10019eb0(0x19);
      uVar1 = 0;
    }
    else if (DAT_1011099c == 0) {
      FUN_10019eb0(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_1002a0d0();
      FUN_10019eb0(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}


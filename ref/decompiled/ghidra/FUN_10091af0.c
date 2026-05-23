/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10091af0 @ 0x10091AF0 */
/* Body size: 770 addresses */


void FUN_10091af0(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_10129bb4,&local_31c);
  if (BVar1 == 1) {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      local_308[local_520] = (CHAR)local_520;
    }
    local_308[0] = ' ';
    for (local_8 = local_31c.LeadByte; *local_8 != 0; local_8 = local_8 + 2) {
      for (local_520 = (uint)*local_8; local_520 <= local_8[1]; local_520 = local_520 + 1) {
        local_308[local_520] = ' ';
      }
    }
    FUN_10091390(1,local_308,0x100,local_208,DAT_10129bb4,DAT_10129e44,0);
    FUN_10094030(DAT_10129e44,0x100,local_308,0x100,local_41c,0x100,DAT_10129bb4,0);
    FUN_10094030(DAT_10129e44,0x200,local_308,0x100,local_51c,0x100,DAT_10129bb4,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10129c40)[local_520] = 0;
        }
        else {
          (&DAT_10129d41)[local_520] = (&DAT_10129d41)[local_520] | 0x20;
          (&DAT_10129c40)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10129d41)[local_520] = (&DAT_10129d41)[local_520] | 0x10;
        (&DAT_10129c40)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10129c40)[local_520] = 0;
        }
        else {
          (&DAT_10129d41)[local_520] = (&DAT_10129d41)[local_520] | 0x20;
          (&DAT_10129c40)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10129d41)[local_520] = (&DAT_10129d41)[local_520] | 0x10;
        (&DAT_10129c40)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}


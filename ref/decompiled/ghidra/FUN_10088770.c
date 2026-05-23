/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10088770 @ 0x10088770 */
/* Body size: 343 addresses */


void __cdecl FUN_10088770(int param_1)

{
  undefined **ppuVar1;
  BOOL BVar2;
  undefined **local_18;
  int local_14;
  int local_10;
  undefined **local_8;
  
  local_18 = (undefined **)PTR_LOOP_10123764;
  do {
    ppuVar1 = local_18;
    if (local_18[4] != (undefined *)0xffffffff) {
      local_14 = 0;
      local_8 = local_18 + 0x804;
      for (local_10 = 0x3ff; -1 < local_10; local_10 = local_10 + -1) {
        if ((*local_8 == (undefined *)0xf0) &&
           (BVar2 = VirtualFree(local_18[4] + local_10 * 0x1000,0x1000,0x4000), BVar2 != 0)) {
          *local_8 = (undefined *)0xffffffff;
          DAT_10128830 = DAT_10128830 + -1;
          if ((local_18[3] == (undefined *)0x0) || (local_8 < local_18[3])) {
            local_18[3] = (undefined *)local_8;
          }
          local_14 = local_14 + 1;
          param_1 = param_1 + -1;
          if (param_1 == 0) break;
        }
        local_8 = local_8 + -2;
      }
      ppuVar1 = (undefined **)local_18[1];
      if ((local_14 != 0) && (local_18[6] == (undefined *)0xffffffff)) {
        local_10 = 1;
        for (local_8 = local_18 + 8; (local_10 < 0x400 && (*local_8 == (undefined *)0xffffffff));
            local_8 = local_8 + 2) {
          local_10 = local_10 + 1;
        }
        if (local_10 == 0x400) {
          FUN_100886f0(local_18);
        }
      }
    }
    local_18 = ppuVar1;
    if ((local_18 == (undefined **)PTR_LOOP_10123764) || (param_1 < 1)) {
      return;
    }
  } while( true );
}


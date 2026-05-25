/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096f90 @ 0x10096F90 */


undefined4 FUN_10096f90(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined2 *local_34;
  LPCSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  uint local_24;
  undefined2 *local_20;
  BYTE *local_1c;
  _cpinfo local_18;
  
  local_30 = (LPCSTR)0x0;
  local_2c = (LPCWSTR)0x0;
  if (DAT_1012898c == 0) {
    PTR_DAT_1012578c = &DAT_10125796;
    PTR_DAT_10125790 = &DAT_10125796;
    __free_dbg(DAT_101289c0,2);
    __free_dbg(DAT_101289c4,2);
    DAT_101289c0 = (void *)0x0;
    DAT_101289c4 = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_1012899c != 0) ||
       (iVar1 = FUN_10099c30(0,(uint)DAT_101289d4,0x1004,(int *)&DAT_1012899c), iVar1 == 0)) {
      local_34 = (undefined2 *)__malloc_dbg(0x202,2,0x1011ff2c,0x5c);
      local_20 = (undefined2 *)__malloc_dbg(0x202,2,0x1011ff2c,0x5e);
      local_30 = (LPCSTR)__malloc_dbg(0x101,2,0x1011ff2c,0x60);
      local_2c = (LPCWSTR)__malloc_dbg(0x202,2,0x1011ff2c,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_1012899c,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_10125998 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_10125998) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_10091390(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10099ed0(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_10125998) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1012578c = (undefined *)(local_34 + 1);
              PTR_DAT_10125790 = (undefined *)(local_20 + 1);
              if (DAT_101289c0 != (void *)0x0) {
                __free_dbg(DAT_101289c0,2);
              }
              DAT_101289c0 = local_34;
              if (DAT_101289c4 != (void *)0x0) {
                __free_dbg(DAT_101289c4,2);
              }
              DAT_101289c4 = local_20;
              __free_dbg(local_30,2);
              __free_dbg(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    __free_dbg(local_34,2);
    __free_dbg(local_20,2);
    __free_dbg(local_30,2);
    __free_dbg(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}


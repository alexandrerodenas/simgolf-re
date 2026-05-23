/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002edb0 @ 0x1002EDB0 */
/* Body size: 928 addresses */


undefined4 __fastcall FUN_1002edb0(void *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  LPCWSTR pWVar3;
  BOOL BVar4;
  undefined4 uVar5;
  void *extraout_ECX;
  void *this;
  void *this_00;
  void *this_01;
  uint uVar6;
  undefined2 *in_stack_ffffffcc;
  void *pvVar7;
  LPCWSTR pWVar8;
  undefined2 *in_stack_ffffffe0;
  BYTE *local_1c;
  _cpinfo local_18;
  
  if (DAT_101109a8 == 0) {
    PTR_DAT_1006605c = &DAT_10066066;
    PTR_DAT_10066060 = &DAT_10066066;
    __free_dbg(DAT_101109e8,2);
    __free_dbg(DAT_101109ec,2);
    DAT_101109e8 = (void *)0x0;
    DAT_101109ec = (void *)0x0;
    uVar5 = 0;
  }
  else {
    if ((DAT_101109b8 != 0) ||
       (iVar1 = FUN_10031900(0,(uint)DAT_101109fc,0x1004,(int *)&DAT_101109b8),
       param_1 = extraout_ECX, iVar1 == 0)) {
      in_stack_ffffffcc = (undefined2 *)__malloc_dbg(param_1,0x202,2,"initctyp.c",0x5c);
      in_stack_ffffffe0 = (undefined2 *)__malloc_dbg(this,0x202,2,"initctyp.c",0x5e);
      pCVar2 = (LPCSTR)__malloc_dbg(this_00,0x101,2,"initctyp.c",0x60);
      pWVar3 = (LPCWSTR)__malloc_dbg(this_01,0x202,2,"initctyp.c",0x62);
      if ((in_stack_ffffffcc != (undefined2 *)0x0) &&
         (((in_stack_ffffffe0 != (undefined2 *)0x0 && (pCVar2 != (LPCSTR)0x0)) &&
          (pWVar3 != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)pCVar2;
        for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
          *local_1c = (CHAR)iVar1;
          local_1c = local_1c + 1;
        }
        BVar4 = GetCPInfo(DAT_101109b8,&local_18);
        if ((BVar4 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_10066268 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_10066268) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (uVar6 = (uint)*local_1c; (int)uVar6 <= (int)(uint)local_1c[1]; uVar6 = uVar6 + 1)
              {
                pCVar2[uVar6] = '\0';
              }
            }
          }
          BVar4 = FUN_10025b00(1,pCVar2,0x100,in_stack_ffffffcc + 1,0,0,0);
          if (BVar4 != 0) {
            *in_stack_ffffffcc = 0;
            pWVar8 = pWVar3;
            for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
              *pWVar8 = (WCHAR)iVar1;
              pWVar8 = pWVar8 + 1;
            }
            BVar4 = FUN_10031ba0(1,pWVar3,0x100,in_stack_ffffffe0 + 1,0,0);
            if (BVar4 != 0) {
              *in_stack_ffffffe0 = 0;
              if (1 < (int)DAT_10066268) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (uVar6 = (uint)*local_1c; (int)uVar6 <= (int)(uint)local_1c[1];
                      uVar6 = uVar6 + 1) {
                    in_stack_ffffffcc[uVar6 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1006605c = (undefined *)(in_stack_ffffffcc + 1);
              PTR_DAT_10066060 = (undefined *)(in_stack_ffffffe0 + 1);
              if (DAT_101109e8 != (void *)0x0) {
                __free_dbg(DAT_101109e8,2);
              }
              DAT_101109e8 = in_stack_ffffffcc;
              if (DAT_101109ec != (void *)0x0) {
                __free_dbg(DAT_101109ec,2);
              }
              DAT_101109ec = in_stack_ffffffe0;
              __free_dbg(pCVar2,2);
              __free_dbg(pWVar3,2);
              return 0;
            }
          }
        }
      }
    }
    __free_dbg(in_stack_ffffffcc,2);
    pvVar7 = (void *)0x2;
    __free_dbg(in_stack_ffffffe0,2);
    __free_dbg(pvVar7,2);
    __free_dbg(pvVar7,2);
    uVar5 = 1;
  }
  return uVar5;
}


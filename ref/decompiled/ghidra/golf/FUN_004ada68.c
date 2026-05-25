/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ada68 @ 0x004ADA68 */


int FUN_004ada68(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  undefined4 *unaff_FS_OFFSET;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004bcaf0;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffb0;
  iVar3 = 1;
  puVar1 = &stack0xffffffb0;
  if (DAT_00840dd4 == 0) {
    iVar2 = CompareStringW(0,0,(PCNZWCH)&DAT_004bc5a8,1,(PCNZWCH)&DAT_004bc5a8,1);
    if (iVar2 != 0) {
      DAT_00840dd4 = 1;
      puVar1 = local_1c;
      goto LAB_004adadb;
    }
    iVar2 = CompareStringA(0,0,&DAT_004bc5a4,1,&DAT_004bc5a4,1);
    if (iVar2 != 0) {
      DAT_00840dd4 = 2;
      puVar1 = local_1c;
      goto LAB_004adadb;
    }
  }
  else {
LAB_004adadb:
    local_1c = puVar1;
    if (0 < param_4) {
      param_4 = FUN_004adce5(param_3,param_4);
    }
    if (0 < param_6) {
      param_6 = FUN_004adce5(param_5,param_6);
    }
    if (DAT_00840dd4 == 2) {
      iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
      goto LAB_004adcd3;
    }
    if (DAT_00840dd4 == 1) {
      if (param_7 == 0) {
        param_7 = DAT_00840b54;
      }
      if ((param_4 == 0) || (param_6 == 0)) {
        if (param_4 == param_6) {
LAB_004adb53:
          iVar3 = 2;
          goto LAB_004adcd3;
        }
        if (1 < param_6) goto LAB_004adcd3;
        if (param_4 < 2) {
          BVar4 = GetCPInfo(param_7,&local_40);
          if (BVar4 == 0) goto LAB_004adcd1;
          if (param_4 < 1) {
            if (0 < param_6) {
              if (1 < local_40.MaxCharSize) {
                pBVar5 = local_40.LeadByte;
                while ((local_40.LeadByte[0] != 0 && (pBVar5[1] != 0))) {
                  if ((*pBVar5 <= *param_5) && (*param_5 <= pBVar5[1])) goto LAB_004adb53;
                  pBVar5 = pBVar5 + 2;
                  local_40.LeadByte[0] = *pBVar5;
                }
              }
              goto LAB_004adcd3;
            }
            goto LAB_004adbe6;
          }
          if (1 < local_40.MaxCharSize) {
            pBVar5 = local_40.LeadByte;
            while ((local_40.LeadByte[0] != 0 && (pBVar5[1] != 0))) {
              if ((*pBVar5 <= *param_3) && (*param_3 <= pBVar5[1])) goto LAB_004adb53;
              pBVar5 = pBVar5 + 2;
              local_40.LeadByte[0] = *pBVar5;
            }
          }
        }
        iVar3 = 3;
        goto LAB_004adcd3;
      }
LAB_004adbe6:
      local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
      if (local_20 != 0) {
        local_8 = 0;
        FUN_004a6070();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x50) &&
           (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
           iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                       local_20), iVar3 != 0)) {
          iVar3 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
          if (iVar3 != 0) {
            local_8 = 1;
            local_24 = iVar3;
            FUN_004a6070();
            local_8 = 0xffffffff;
            if ((&stack0x00000000 != (undefined1 *)0x50) &&
               (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
               iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,
                                           (LPWSTR)&stack0xffffffb0,iVar3), iVar2 != 0)) {
              iVar3 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,
                                     iVar3);
              goto LAB_004adcd3;
            }
          }
        }
      }
    }
  }
LAB_004adcd1:
  iVar3 = 0;
LAB_004adcd3:
  *unaff_FS_OFFSET = local_14;
  return iVar3;
}


/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac359 @ 0x004AC359 */


BOOL FUN_004ac359(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
                 int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004bc968;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_00840c74;
  puVar1 = &stack0xffffffc8;
  if (DAT_00840c74 == 0) {
    BVar2 = GetStringTypeW(1,(LPCWSTR)&DAT_004bc5a8,1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 != 0) goto LAB_004ac3c8;
    BVar2 = GetStringTypeA(0,1,&DAT_004bc5a4,1,local_20);
    if (BVar2 != 0) {
      iVar3 = 2;
      puVar1 = local_1c;
      goto LAB_004ac3c8;
    }
  }
  else {
LAB_004ac3c8:
    local_1c = puVar1;
    DAT_00840c74 = iVar3;
    if (DAT_00840c74 == 2) {
      if (param_6 == 0) {
        param_6 = DAT_00840b44;
      }
      BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
      goto LAB_004ac490;
    }
    if (DAT_00840c74 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_00840b54;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_004a6070();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          goto LAB_004ac490;
        }
      }
    }
  }
  BVar2 = 0;
LAB_004ac490:
  *unaff_FS_OFFSET = local_14;
  return BVar2;
}


/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100973c0 @ 0x100973C0 */


undefined4 __cdecl FUN_100973c0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10128a0c == (code *)0x0) {
    iVar1 = FUN_10097e90();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10128a0c = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_10097ce0();
  }
  else {
    DAT_101289fc = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_100975c0(0x10126740,0x40,(int *)&DAT_101289fc);
    }
    DAT_10128a00 = param_1 + 0x40;
    if ((DAT_10128a00 != (char *)0x0) && (*DAT_10128a00 != '\0')) {
      FUN_100975c0(0x10126688,0x16,(int *)&DAT_10128a00);
    }
    DAT_10128a04 = 0;
    if ((DAT_101289fc == (char *)0x0) || (*DAT_101289fc == '\0')) {
      if ((DAT_10128a00 == (char *)0x0) || (*DAT_10128a00 == '\0')) {
        FUN_10097ce0();
      }
      else {
        FUN_10097be0();
      }
    }
    else if ((DAT_10128a00 == (char *)0x0) || (*DAT_10128a00 == '\0')) {
      FUN_10097a40();
    }
    else {
      FUN_10097650();
    }
  }
  if (DAT_10128a04 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_10097d10((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_101289ec,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_101289ec;
          param_2[1] = (undefined2)DAT_10128a08;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10128a0c)(DAT_101289ec,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10128a0c)(DAT_10128a08,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


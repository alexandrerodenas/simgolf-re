/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002f1e0 @ 0x1002F1E0 */


undefined4 __cdecl FUN_1002f1e0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10110a34 == (code *)0x0) {
    iVar1 = FUN_1002fcb0();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10110a34 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_1002fb00();
  }
  else {
    DAT_10110a24 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_1002f3e0(0x10067300,0x40,(int *)&DAT_10110a24);
    }
    DAT_10110a28 = param_1 + 0x40;
    if ((DAT_10110a28 != (char *)0x0) && (*DAT_10110a28 != '\0')) {
      FUN_1002f3e0(0x10067248,0x16,(int *)&DAT_10110a28);
    }
    DAT_10110a2c = 0;
    if ((DAT_10110a24 == (char *)0x0) || (*DAT_10110a24 == '\0')) {
      if ((DAT_10110a28 == (char *)0x0) || (*DAT_10110a28 == '\0')) {
        FUN_1002fb00();
      }
      else {
        FUN_1002fa00();
      }
    }
    else if ((DAT_10110a28 == (char *)0x0) || (*DAT_10110a28 == '\0')) {
      FUN_1002f860();
    }
    else {
      FUN_1002f470();
    }
  }
  if (DAT_10110a2c == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_1002fb30((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_10110a14,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_10110a14;
          param_2[1] = (undefined2)DAT_10110a30;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10110a34)(DAT_10110a14,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10110a34)(DAT_10110a30,0x1002,param_3 + 0x40,0x40);
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

